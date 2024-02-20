/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/19 09:52:22 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/02/20 17:40:39 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <cstring>

template<typename T>
class Array {
	public:
		Array()
		{
			this->_size = 0;
			this->_arr = new T[0];
			std::cout << "Empty Array constructor called" << std::endl;
		}

		Array(uint32_t n)
		{
			this->_size = n;
			this->_arr = new T[n];

			for (uint32_t i = 0; i < this->_size; i++)
			{
				this->_arr[i] = i;
			}

			std::cout << "Array constructed of size " << this->_size << std::endl;
		}

		~Array()
		{
			if (this->_arr) delete(this->_arr);

			std::cout << "Array deconstructor called" << std::endl;
		}

		Array(const Array &oth)
		{
			this->_size = oth._size;
			this->_arr = new T[this->_size];

			for (uint32_t i = 0; i < this->_size; i++)
			{
				this->_arr[i] = oth._arr[i];
			}

			std::cout << "Array copy constructor called" << std::endl;
		}

		Array& operator=(const Array &oth)
		{
			if (this != &oth)
			{
 				this->_size = oth._size;
    		    this->_arr = new T[this->_size];

				for (uint32_t i = 0; i < this->_size; i++)
				{
					this->_arr[i] = oth._arr[i];
				}

				std::cout << "Array copied using an assignment" << std::endl;
			}
			return *this;
		}

		////////////////////////////////////////////////////////////////////////

		T &operator[](uint32_t i)
		{
			if (i >= this->_size)
				throw std::out_of_range("Index out of range");
			return this->_arr[i];
		}

		uint32_t size() const
		{
			return this->_size;
		}

		////////////////////////////////////////////////////////////////////////

	private:
		uint32_t	_size;
		T			*_arr;
};

#endif
 