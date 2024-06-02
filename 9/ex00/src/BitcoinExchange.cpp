/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/15 17:45:10 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/04/15 18:01:51 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <unistd.h>

BTC::BTC(const std::string buyingMomentsFilePath)
{
    this->_buyingMomentsFilePath = buyingMomentsFilePath;
    this->_btcTrackerFilePath = "assets/data.csv";

    // Open file
    std::ifstream file(this->_btcTrackerFilePath);
    if (file.is_open())
    {
        // Read contents
        std::string line;

        // Skip first line due to file format
        std::getline(file, line);

        while (std::getline(file, line))
        {
            std::string date = line.substr(0, line.find(','));
            std::string priceStr = line.substr(line.find(',') + 1);

            try
            {
                double price = std::stod(priceStr);
                this->_prices[date] = price;
            }
            catch (std::exception &e)
            {
                std::cout << priceStr << priceStr << std::endl;
                std::cerr << "Error: " << e.what() << std::endl;
                exit(0);
            }
        }
        file.close();
    }

    this->_isInitialized = true;
}

void BTC::outputPrices() const
{
    // Get buying moments
    std::ifstream buyingMomentsFile(this->_buyingMomentsFilePath);
    if (!buyingMomentsFile.is_open())
    {
        std::cerr << "Failed to open file" << std::endl;
        exit(0);
    }

    std::string line;

    // Skip first line due to file format
    std::getline(buyingMomentsFile, line);

    while (std::getline(buyingMomentsFile, line))
    {
        // Get date and buy in amount by splitting the line at the '|'
        std::string date = line.substr(0, line.find('|') - 1);
        std::string buyInAmountStr = line.substr(line.find('|') + 1);

        try
        {
            double buyInAmount = std::stod(buyInAmountStr);
            if (buyInAmount <= 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }

            double exchangeRate = this->_getConvertedRate(buyInAmount, date);
            if (exchangeRate == -1.0)
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }

            if (exchangeRate > 1000000)
            {
                std::cerr << "Error: too large a number." << std::endl;
                continue;
            }

            std::cout << date << " => " << buyInAmount << " = " << exchangeRate << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    buyingMomentsFile.close();
}

////////////////////////////// PRIVATE /////////////////////////////////////////

double BTC::_getValueForDate(const std::string date) const
{
    std::map<std::string, double>::const_iterator it = this->_prices.find(date);

    // If the date is found, return the corresponding value
    if (it != this->_prices.end())
    {
        return it->second;
    }

    // If the date is not found, search for the closest previous date
    it = this->_prices.lower_bound(date);

    // If lower_bound returns the first element, there is no previous date
    // or some other indication that no valid date was found
    if (it == this->_prices.begin())
        return -1.0;

    // Move to the previous element
    --it;

    return it->second;
}

bool BTC::getIsInitialized() const
{
    return this->_isInitialized;
}

double BTC::_getConvertedRate(const double valueAtPurchase, const std::string date) const
{
    double valueAtDate = this->_getValueForDate(date);

    if (valueAtDate == -1.0)
    {
        return -1.0;
    }

    return valueAtPurchase * valueAtDate;
}

BTC::~BTC() {}
