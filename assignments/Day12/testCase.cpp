
/*
TC01
i/p
s1 = "ABCDE"
s2 = "abcde"
o/p
s3 = AaBbCcDdEe

*/

#include <iostream>

#include <cstring>

using namespace std;

int main()

{
	char s1[20];

	char s2[20];

	cout<< "Enter the first string: ";
	cin >> s1;
	cout<< "Enter the second string: ";
	cin >> s2;
	int i = 0, j = 0;
	int count = 0;
	while (s1[i] != '\0' && s2[j] != '\0') {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			s1[i] = s1[i] + 32;
		}
		if (s2[j] >= 'a' && s2[j] <= 'z') {
			s2[j] = s2[j] - 32;
		}
		i++;
		j++;
	}	
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;	
	char s3[20];
	for (int i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++) {
		s3[count++] = s1[i];
		s3[count++] = s2[j];
	}
	s3[count] = '\0';
	cout << "s3 = " << s3 << endl;
	cout << "Length of s3 = " << count << endl;


	{

		count++;
		
	}
	return count;
}





