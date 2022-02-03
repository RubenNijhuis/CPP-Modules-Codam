#include <iostream>

void	output_to_uppercase(char **string)
{
	int	argument;
	int	letter;

	argument = 0;
	while (string[argument] != '\0')
	{
		letter = 0;
		while (string[argument][letter] != '\0')
		{
			if (string[argument][letter] > 96 && string[argument][letter] < 123)
			{
				string[argument][letter] -= 32;
				std::cout << string[argument][letter];
			}
			else
				std::cout << string[argument][letter];
			letter++;
		}
		argument++;
	}
	std::cout << "\n";
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	output_to_uppercase(argv + 1);
	return 0;
}