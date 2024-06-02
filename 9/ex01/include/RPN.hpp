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
#include <stack>

struct formulaFragment
{
	std::string fragment;
	bool isOperator;
};

class RPN
{
public:
	RPN(const std::string formula);
	~RPN();

private:
	bool _validFormula(const std::string formula) const;
	bool _isOperator(char c) const;

private:
	std::stack<formulaFragment> _stack;

	RPN();
};
