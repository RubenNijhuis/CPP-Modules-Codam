/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/12 14:12:39 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << std::endl << i->getType() << std::endl;
	i->makeSound(); // Will output the cat sound!

	std::cout << std::endl << j->getType() << std::endl;
	j->makeSound(); // Will output the dog sound!

	std::cout << std::endl;
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}
