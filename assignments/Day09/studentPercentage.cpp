/* 
scan and print the details of the students with their marks scored with calculated percentage (minimum 5 students)
*/

#include <iostream>

#include<stdio.h>

						// Number of students
using namespace std;
	
int main()
{
	int i = 0;										// Counter variable
	int n = 5;	
	int sNo;	

	int stuID_01,ID_02,ID_03,ID_04,ID_05;

	char stuName_01[20], stuName_02[20], stuName_03[20], stuName_04[20], stuName_05[20];

	float stuMark1_01, stuMark1_02, stuMark1_03, stuMark1_04, stuMark1_05;
	float stuMark2_01, stuMark2_02, stuMark2_03, stuMark2_04, stuMark2_05;
	float stuMarK3_01, stuMark3_02, stuMark3_03, stuMark3_04, stuMark3_05;
	float stuMark4_01, stuMark4_02, stuMark4_03, stuMark4_04, stuMark4_05;
	float stuMark5_01, stuMark5_02, stuMark5_03, stuMark5_04, stuMark5_05;

	float stuAvg_01, stuAvg_02, stuAvg_03, stuAvg_04, stuAvg_05;

	 
	
	scanf("%d%f%f%f%f", stuID_01, stuMark1_01, stuMark2_01, stuMarK3_01, stuMark4_01, stuMark5_01);


