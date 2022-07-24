/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/05/16 23:57:55 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

uint32_t	Harl::getComplainmentLevel(std::string level)
{
	std::string Levels[] =  {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (uint32_t i = 0; i < Levels->length(); i++)
	{
		if (level.compare(Levels[i]) == 0)
			return (i);
	}
}

void	Harl::makeComplainMent(std::string level)
{
	void(Harl::*complaint[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	uint32_t complainLevel = Harl::getComplainmentLevel(level);

	for (int i = 0; i < 4; i++)
    {
        if (level == complaintLevels[i])
        {
            void (Karen::*selectedComplaint)( void ) = complaint[i];
            (this->*selectedComplaint)();
            return ;
        }
    }

	std::map<std::string, void (*)()> funcmap;
	funcmap["DEBUG"] = debug;
	funcmap["INFO"] = info;
	funcmap["WARNING"] = warning;
	funcmap["ERROR"] = error;
	
	switch (complainLevel)
	{
		case 0:
			Harl::complain("debug");
		case 1:
			Harl::complain("info");
		case 2:
			Harl::complain("warning");
		case 3:
			Harl::complain("error");
			break;
		default:
			std::cout << "I have got nothing to say" << std::endl;
			break;
	}
}
