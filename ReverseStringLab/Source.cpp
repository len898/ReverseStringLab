#include <iostream>
#include<string>
using namespace std;

/* TODO: Write recursive ReverseString() function here. */
std::string ReverseString(std::string input) {
	if (input.length() == 1) {
		return input;
	}
	else {
		return input.at(input.length() - 1) + ReverseString(input.substr(0, input.length() - 1));
	}
}

int main() {
	string input, result;

	getline(cin, input);
	result = ReverseString(input);
	cout << "Reverse of \"" << input << "\" is \"" << result << "\"." << endl;

	return 0;
}
