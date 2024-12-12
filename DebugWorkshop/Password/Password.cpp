#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	/*
	 * The function receives a string from the user and stores everything they enter in the same variable.
	 * The length of the variable is 16 bytes, so if I enter 16 characters, the function will insert those 16 characters and a '\0' to terminate the string.
	 * The variable that indicates whether the password is correct or not is stored right after the string, and it gets the value 0 or null in this edge case. Therefore, even if the password is incorrect, the variable will still indicate it is correct because I forcefully changed it.
	 *
	 * Examples of correct passwords:
	 *
	 * bbbbbbbbbbbbbbbb
	 * 0000000000000000
	 */
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
