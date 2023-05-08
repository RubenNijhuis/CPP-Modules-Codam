/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/05/08 11:51:16 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
	Dog *dog = new Dog();

	dog->getBrain()->setIdea(0, "I'd like some food");
	std::cout << dog->getBrain()->getIdea(0) << std::endl;

	dog->getBrain()->setIdea(100, "This won't work");
	std::cout << dog->getBrain()->getIdea(100) << std::endl;

	delete dog;
	
	return (0);
}
