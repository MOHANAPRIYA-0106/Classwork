
#include<iostream>

int cirArea(int, int);
int triArea(int, int);
int sqaArea(int);
int recArea(int, int);


using namespace std;
int cirArea(int, int)

{
	float radious;

	float pi = 3.14;


	cin >> radious;

	float cirArea = pi * radious * radious;

	cout << "calculate" << "  " << cirArea << endl;

	return cirArea;

}

int triArea()

{
	float br;

	float height;

	cin >> br;
	cin >> height;

	float triArea = 0.5 * br * height;

	cout << "calculate=" << " " << triArea << endl;

	return triArea;


}

int squArea()
{

	float squSide;				

	cin >> squSide;

	float squArea = squSide * squSide;

	cout << "calculate=" << " " << squArea << endl;

	return squArea;


}

int recArea()

{

	float br;

	float height;

	cin >> br;
	cin >> height;

	float recArea = br * height;

	cout << "calculate=" << " " << recArea << endl;

	return recArea;


}

int main()

{
	float radious;
	cout<<





}