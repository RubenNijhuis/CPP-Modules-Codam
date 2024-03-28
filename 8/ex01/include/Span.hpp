/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/22 15:15:43 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <algorithm>
#include <stddef.h>

class Span {
public:
	Span(uint32_t n);
	Span(const Span& src);
	~Span();

	Span& operator=(const Span& oth);

	////////////////////////////////////////////////////////////////////////////

	void addNumber(const int n);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	uint32_t shortestSpan() const;
	uint32_t longestSpan() const;

	////////////////////////////////////////////////////////////////////////////

	class SpanNoNumbersException : public std::exception {
		virtual const char* what() const throw();
	};

	class SpanMaxElementsException : public std::exception {
		virtual const char* what() const throw();
	};

	class SpanNotEnoughNumbersException : public std::exception {
		virtual const char* what() const throw();
	};

	class SpanNoSpanFoundException : public std::exception {
		virtual const char* what() const throw();
	};

	////////////////////////////////////////////////////////////////////////////

private:
	Span();

	uint32_t _n;
	std::vector<int> _vec;
};

#endif