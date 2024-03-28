/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 14:00:11 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/03/28 14:01:30 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
    (void)obj;
    return (*this);
}

Serializer::Serializer(const Serializer &obj)
{
    *this = obj;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
