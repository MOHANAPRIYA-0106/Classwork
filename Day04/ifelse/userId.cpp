#include<iostream>

using namespace std;

struct users
{
	int Id;
	int userType;					// 0 for admin, 1 for user
	string userName;

}

USRES;

void disMenuNU(string);
void disMenuAU();

int main()

{
	users u;
	cout << "Enter id";
	cin >> u.Id;
	cout << "Enter user type(0/1)";
	cin >> u.userType;
	cout << "Enter user name";
	cin >> u.userName;

	if (u.userType == 0)
	{
		disMenuAU();
	}
	else 
	{
		disMenuNU(u.userName);
	}
		cout<<"Application ended successfully"<<endl;

		return 0;

	}
void disMenuAU()
{

	cout << " I am able to access admin menu" << endl;

}
void disMenuNU(string name)
{
	cout << " user"<<name<<"logged in" << endl;
	cout << "Hello " << name << endl;

	cout << "I am able to access user menu" << endl;
}

