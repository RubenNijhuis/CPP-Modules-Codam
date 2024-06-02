/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/04/15 17:59:22 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <map>

class BTC
{
public:
	BTC(const std::string buyingMomentsFilePath);
	~BTC();

	bool getIsInitialized() const;
	void outputPrices() const;

private:
	double _getValueForDate(const std::string date) const;
	double _getConvertedRate(const double valueAtPurchase, const std::string date) const;
	BTC();

private:
	std::string _buyingMomentsFilePath;
	std::string _btcTrackerFilePath;
	bool _isInitialized;
	std::map<std::string, double> _prices;
};
