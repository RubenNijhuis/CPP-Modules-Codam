/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2024/02/20 17:41:43 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    {
        Array<int32_t> arr1;
	    Array<int32_t> arr2(100);

	    std::cout << arr2[99] << std::endl;
	    std::cout << "size is " << arr2.size() << std::endl;

        std::cout << std::endl;
        
	    try
	    {
	    	std::cout << arr2[100] << std::endl;
	    }
	    catch(std::exception &e)
	    {
            std::cout << "Caught exception:" << std::endl;
	    	std::cout << e.what() << std::endl;
	    }

	    std::cout << std::endl;
    }

    std::cout << std::endl;

    {
	    Array<int32_t> arr1(5);
	    Array<int32_t> arr2(5);
	    arr1 = arr2;
    
	    std::cout << std::endl;
	    std::cout << "copy array [" << arr2[2] << "]" << std::endl;

	    arr2[2] = 99;

	    std::cout << "copy array changed to [" << arr2[2] << "]" << std::endl;
	    std::cout << "orignal array still [" << arr1[2] << "]" << std::endl;

	    std::cout << std::endl;
    }

    std::cout << std::endl;

    {
        int pos = 3;
	    Array<int32_t> arr1(100);
	    Array<int32_t> arr2(arr1);
    
	    std::cout << std::endl;
        arr2[pos] = 99;
	    std::cout << "copy array value at " << pos << " [" << arr2[3] << "]" << std::endl;

	    std::cout << std::endl;
    }

	return (0);
}
