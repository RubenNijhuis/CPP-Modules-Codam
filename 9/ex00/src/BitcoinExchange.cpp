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

    // Get buying moments
    std::ifstream buyingMomentsFile(this->_buyingMomentsFilePath);
    if (buyingMomentsFile.is_open())

        std::cout << "File is open" << std::endl;
    // Read contents
    std::string line;

    // Skip first line due to file format
    std::getline(buyingMomentsFile, line);

    while (std::getline(buyingMomentsFile, line))
    {
        // split on the string " | "
        std::string date = line.substr(0, line.find('|') - 1);
        std::string buyInAmountStr = line.substr(line.find('|') + 1);

        try
        {
            double buyInAmount = std::stod(buyInAmountStr);

            // get the value of the buy in amount at the date
            double price = this->_prices[date];

            std::cout << price << std::endl;

            // calculate the value of the buy in amount at the date
            double value = buyInAmount * price;

            // calculate the value at the last date
            double lastValue = buyInAmount * this->_prices.rbegin()->second;

            // Your program should display on the standard output the result of the value multiplied by the exchange rate according to the date indicated in your database.
            double exchangeRate = value / lastValue;

            std::cout << date << " => " << buyInAmount << " = " << exchangeRate << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
            exit(0);
        }
    }
    buyingMomentsFile.close();
}

BTC::~BTC() {}
