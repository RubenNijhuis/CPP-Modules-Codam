/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeruma <jmeruma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:45:10 by rubennijhui       #+#    #+#             */
/*   Updated: 2024/06/13 14:30:52 by jmeruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <stack>
#include <unistd.h>

RPN::RPN(const std::string formula)
{
    std::stack<int> stack;
    int operandPrimary;
    int operandSecondary;
    int result;

    if (!this->_validFormula(formula))
    {
        std::cout << "Invalid formula" << std::endl;
        return;
    }

    for (size_t i = 0; i < formula.size(); i++)
    {
        if (formula[i] == ' ')
            continue;
        if (!_isOperator(formula[i]))
        {
            stack.push(formula[i] - '0');
            continue;
        }

        if (stack.size() < 2)
        {
            throw std::range_error("Error");
        }

        operandSecondary = stack.top();
        stack.pop();

        operandPrimary = stack.top();
        stack.pop();

        switch (formula[i])
        {
        case '+':
            result = operandPrimary + operandSecondary;
            break;

        case '-':
            result = operandPrimary - operandSecondary;
            break;

        case '*':
            result = operandPrimary * operandSecondary;
            break;

        case '/':
        {
            if (operandSecondary == 0)
                throw std::invalid_argument("Error");
            result = operandPrimary / operandSecondary;
            break;
        }
        default:
            throw std::logic_error("Error");
        }

        stack.push(result);
    }

    if (stack.size() != 1)
    {
        throw std::range_error("Invalid formula end");
    }

    std::cout << stack.top() << std::endl;
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

    return true;
}

RPN::~RPN() {}