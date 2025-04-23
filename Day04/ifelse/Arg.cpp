#include<iostream>

#include<string.h>

using namespace std;

int main(int argc,char* argv[])
{
	int i = 0;
	if (argc < 2)
	{
		cout << "Please provide a string as an argument." << endl;
		return 1;

	}

	string input = argv[1];

	int length = input.length();
	cout << "Input string: " << input << endl;

	cout << "Length of the string: " << length << endl;
	cout << "ASCII values of characters in the string:" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << "Character: " << input[i] << ", ASCII value: " << int(input[i]) << endl;

	}
	cout << "Characters in the string:" << endl;
	{
		for (int i = 0; i < length; i++)
		{
			cout << "Character: " << input[i] << endl;
		}
		cout << "Character at index " << i << ": " << input[i] << endl;

	}

	return 0;
}