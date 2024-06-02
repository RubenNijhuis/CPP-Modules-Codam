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

#include "RPN.hpp"
#include <iostream>
#include <stack>
#include <unistd.h>

RPN::RPN(const std::string formula)
{
    if (!this->_validFormula(formula))
    {
        std::cout << "Invalid formula" << std::endl;
        return;
    }

    std::string::const_iterator it;
    std::stack<formulaFragment> _preReversed;
    for (it = formula.begin(); it != formula.end(); it++)
    {
        if (*it == ' ')
            continue;

        formulaFragment fragment;
        fragment.fragment = *it;
        fragment.isOperator = this->_isOperator(*it);
        _preReversed.push(fragment);
    }

    // reverse the stack
    while (!_preReversed.empty())
    {
        this->_stack.push(_preReversed.top());
        _preReversed.pop();
    }

    // Get starting point
    double result = std::stod(this->_stack.top().fragment);
    this->_stack.pop();

    // Loop through the stack
    while (!this->_stack.empty())
    {
        // get the next number
        formulaFragment fragmentNum = this->_stack.top();
        this->_stack.pop();

        // get the next operator
        formulaFragment fragmentOperator = this->_stack.top();
        this->_stack.pop();

        // calculate the result
        if (fragmentOperator.fragment == "+")
        {
            result += std::stod(fragmentNum.fragment);
        }
        else if (fragmentOperator.fragment == "-")
        {
            result -= std::stod(fragmentNum.fragment);
        }
        else if (fragmentOperator.fragment == "*")
        {
            result *= std::stod(fragmentNum.fragment);
        }
        else if (fragmentOperator.fragment == "/")
        {
            result /= std::stod(fragmentNum.fragment);
        }
    }

    std::cout << result << std::endl;
}

bool RPN::_isOperator(char c) const
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool RPN::_validFormula(const std::string formula) const
{
    // make a string iterator
    std::string::const_iterator it;

    // check if it only contains allowed characters
    for (it = formula.begin(); it != formula.end(); it++)
    {
        if (!this->_isOperator(*it) && !isdigit(*it) && *it != ' ')
        {
            return false;
        }
    }

    if (!this->_isOperator(formula.back()))
    {
        return false;
    }

    return true;
}

RPN::~RPN() {}
