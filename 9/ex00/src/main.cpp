/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/04/15 17:59:38 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Expected a file" << std::endl;
		return (1);
	}

	// Initialize the BTC class with the exchange file;
	BTC btc(argv[1]);

	if (!btc.getIsInitialized())
	{
		std::cout << "Failed to initialize BTC" << std::endl;
		return (1);
	}

	btc.outputPrices();

	return (0);
}
