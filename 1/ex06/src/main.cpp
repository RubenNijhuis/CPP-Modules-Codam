/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/07/26 13:58:19 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int32_t main(int argc, char *argv[])
{
  Harl harl;

  if (argc != 2)
  {
    std::cout << "Error: you did not enter the right amount of arguments" << std::endl;
    return (1);
  }

  harl.complain(argv[1]);

  return (0);
}