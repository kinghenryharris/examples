#include <iostream>
#include <string>
#define MAX 100
int main(int argc, char *argv[]) {
	std::cout << "Input: ";
	char input[MAX];
	std::cin.getline(input, MAX);
	std::cout << "You entered, \"" << input << "\"" << std::endl;
	return 0;
}