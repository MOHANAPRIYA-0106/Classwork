

#include<iostream>

using namespace std;

int main()
{
	//int currency[] = { 2000,500,200,100,50,20,10,5,2,1 };
	int amount;


	cout << "enter the amount" << endl;
	cin >> amount;

	

	if (amount >= 2000) {
		cout << "2000-" << amount / 2000 << endl;

		amount %= 2000;
	}
	if (amount >= 500) {
		cout << "500-" << amount / 500 << endl;

		amount %= 500;
	}
	if (amount >= 200) {
		cout << "200-" << amount / 200 << endl;

		amount %= 200;
	} 
	if (amount >= 100) {
		cout << "100-" << amount / 100 << endl;

		amount %= 100;
	}
	if (amount >= 50) {
		cout << "50-" << amount / 50 << endl;

		amount %= 50;
	}
	if (amount >= 20) {
		cout << "20-" << amount / 20 << endl;

		amount %= 20;
	}
	if (amount >= 10) {
		cout << "10-" << amount / 10 << endl;

		amount %= 10;
	}
	if (amount >= 5) {
		cout << "5-" << amount / 5 << endl;

		amount %= 5;
	}
	if (amount >= 2) {
		cout << "2-" << amount / 2 << endl;

		amount %= 2;
	}
	if (amount >= 1) {
		cout << "1-" << amount / 1 << endl;

		amount %= 1;
	}

}
			
		
	
	
		
		






