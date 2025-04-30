/*


Form a New Number from Two Numbers
Problem :
Form a new number using last digit of first number and first digit of second number.

Hint :

	Last digit →(firstNumber % 10).
	First digit → keep dividing secondNumber by 10 until it's < 10.
	Then combine them(e.g., lastDigit * 10 + firstDigit).

	*/


#include <iostream>


using namespace std;


int formNewNumber(int firstNumber, int secondNumber) {
    
    int lastDigit = firstNumber % 10;

    
    while (secondNumber >= 10) {
        secondNumber = secondNumber / 10;
    }
    int firstDigit = secondNumber;

   
    int newNumber = lastDigit * 10 + firstDigit;
    return newNumber;
}

int main() {
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;

  
    int newNumber = formNewNumber(firstNumber, secondNumber);


    cout << "The new number formed is: " << newNumber << endl;

    return 0;
}
