/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/22 13:14:17 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 15:16:08 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stddef.h>

Span::Span(uint32_t n)
: 
	_n(n)
{
	return;
}

Span::Span(const Span& oth)
{
	*this = oth;
	return;
}

Span::~Span()
{
	return;
}

Span& Span::operator=(const Span& oth)
{
	if (this != &oth) {
		this->_n = oth._n;
		this->_vec = oth._vec;
	}
	return *this;
};

////////////////////////////////////////////////////////////////////////////

void Span::addNumber(const int n)
{
	if (this->_vec.size() >= this->_n)
	{
		throw SpanMaxElementsException();
	}

	this->_vec.push_back(n);
};

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_vec.size() + std::distance(begin, end) > this->_n)
	{
		throw SpanMaxElementsException();
	}

	this->_vec.insert(this->_vec.end(), begin, end);
};

uint32_t Span::shortestSpan() const
{
	if (this->_vec.size() < 2)
	{
		throw SpanNoNumbersException();
	}

	std::vector<int> vec = this->_vec;
	std::sort(vec.begin(), vec.end());
	uint32_t span = UINT32_MAX;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (it + 1 != vec.end())
		{
			uint32_t diff = *(it + 1) - *it;
			if (diff < span) span = diff;
		}
	}

	return span;
};

uint32_t Span::longestSpan() const
{
	if (this->_vec.size() < 2)
	{
		throw SpanNoNumbersException();
	}

	std::vector<int> vec = this->_vec;
	std::sort(vec.begin(), vec.end());

	return vec.back() - vec.front();
}

////////////////////////////////////////////////////////////////////////////

const char* Span::SpanNoNumbersException::what() const throw()
{
	return "No numbers in the span";
};

const char* Span::SpanMaxElementsException::what() const throw()
{
	return "Max elements reached";
};

const char* Span::SpanNotEnoughNumbersException::what() const throw()
{
	return "Not enough numbers in the span";
};

const char* Span::SpanNoSpanFoundException::what() const throw()
{
	return "No span found";
};