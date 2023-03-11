/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:12:40 by rnijhuis      #+#    #+#                 */
/*   Updated: 2023/03/03 15:45:08 by rnijhuis      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <cstdlib>
#include <iostream>
#include <limits.h>

bool willOverflow(uint32_t a, uint32_t b) {
    bool overflow = (a + b <= a || a + b <= b);
    bool underflow = (a < b);

    return (overflow || underflow);
}

int	main(void)
{
    uint32_t main = 5;
    uint32_t second = 4294960;

    if (willOverflow(main, second)) {
        main = 0;
    } else {
        main -= second;
    }

    std::cout << main << std::endl;
    return (0);
}
