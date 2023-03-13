#include "Fixed.hpp"

int	main(void)
{
    // Ints
    Fixed one(1);
    Fixed two(2);
    Fixed ten(10);
    Fixed twentyone(21);
    Fixed seven(7);

    // Floats
    Fixed half(0.5f);
    Fixed nHalf(-0.5f);
    Fixed threeHalves(1.5f);
    Fixed nThreeHalves(-1.5f);
    Fixed pointThree(0.3f);

    // Addition
    std::cout << "Addition" << std::endl;
    std::cout << "One + two = " << one + two << std::endl;
    std::cout << "Ten + one + two = " << ten + one + two << std::endl;
    std::cout << std::endl;

    // Subtraction
    std::cout << "Subtraction" << std::endl;
    std::cout << "One - two = " << one - two << std::endl;
    std::cout << "one - two - ten = " << one - two - ten << std::endl;
    std::cout << std::endl;

    // Multiplication
    std::cout << "Multiplication" << std::endl;
    std::cout << "Ten * two = " << one * two << std::endl;
    std::cout << "one * two * ten = " << one * two * ten << std::endl;
    std::cout << std::endl;

    // Multiplication
    std::cout << "Division" << std::endl;
    std::cout << "one / two = " << one / two << std::endl;
    std::cout << "one / two / ten = " << one / two / ten << std::endl;
    std::cout << std::endl;

    // Increment && Decrement
    std::cout << "Increment" << std::endl;
    std::cout << "Value 1 now: " << one << std::endl;

    one++;
    std::cout << "Post One incremented: " << one << std::endl;

    one--;
    std::cout << "Post decremented: " << one << std::endl;
    std::cout << std::endl;

    // Bools
    std::string isOneEqualToTwo = one == two ? "true" : "false";
    std::cout << "Is one equal to two? " << isOneEqualToTwo << std::endl;

    std::string twoBiggerThanOne = two > one ? "true" : "false";
    std::cout << "Is two bigger than one? " << twoBiggerThanOne << std::endl;

    std::string isTenNotEqualTooTen = ten != ten ? "true" : "false";
    std::cout << "Is ten not equal to ten? " << isTenNotEqualTooTen << std::endl;
}
