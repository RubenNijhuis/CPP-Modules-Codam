/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/28 14:00:13 by rubennijhui   #+#    #+#                 */
/*   Updated: 2024/03/28 14:02:47 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

struct Data
{
    int n;
    char c;
    double num;
};


class Serializer {
    public:
        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);
    
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &obj);
        Serializer &operator=(const Serializer &obj);
};

#endif
