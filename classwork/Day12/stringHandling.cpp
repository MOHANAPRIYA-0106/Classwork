
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	char name[20] = {'p','r','i','y','a'};

	for (int i = 0;i < 20;i++)

		printf("%c = %d\n", name[i], name[i]);

	for (int i = 39, count = 0;i < 59;i++)

		name[count++] = i;

	cout << "============"<<endl;
	for (int i = 0;i < 20;i++)

		printf("%c = %d\n", name[i], name[i]);
	name[0] = 'p';
	name[1] = 'r';
	name[2] = 'i';
	name[3] = 'y';
	name[4] = 'a';
	cout << "============" << endl;

	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);

	printf("Name: %s\n", name);

	*/

	char name[20];					
	
	fgets(name, 19, stdin);

	puts(name);

	printf("%s\n", name);

	return 0;
}
