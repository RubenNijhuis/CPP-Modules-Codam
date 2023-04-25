/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/04/24 21:39:24 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << std::endl;
	i->makeSound(); // Will output the cat sound!

	std::cout << j->getType() << std::endl;
	j->makeSound(); // Will output the dog sound!

	meta->makeSound();

    delete j;
    delete i;
    
    return (0);
}
