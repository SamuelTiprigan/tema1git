

#include <iostream>
#include "t1.h"

using namespace std;
int main()
{
	//cout<<isPalindrom(1111)<<endl;
	//cout<< isPalindrom(12313) << endl;


	//cout << isLeapYear(2015) << endl;
	//cout << isLeapYear(2016) << endl;

	//cout << dayOfTheWeek(2016,10,29) << endl;

	//cout << fibonnaci(20) << endl;

	//cout << perfectNumbers(1234) << endl;

	//cout << primeDivisors(12, 30) << endl;

	//cout << palindrom(4) << endl;




	/*
	//primeDivisors(30,45);


	vector vec;
	vec.length = 6;
	vec.values[0] = 0;
	vec.values[1] = 1;
	vec.values[2] = 1;
	vec.values[3] = 2;
	vec.values[4] = 3;
	vec.values[5] = 5;

	vector vec2;
	vec2.length = 5;
	vec2.values[0] = 0;
	vec2.values[1] = 1;
	vec2.values[2] = 1;
	vec2.values[3] = 2;
	vec2.values[4] = 4;

	//cout << areOrderedFibonnaci(vec) << endl;
	//cout << areOrderedFibonnaci(vec2) << endl;


	vector vecOne;
	vecOne.length = 1;
	vecOne.values[0] = 1;
	vecOne.values[1] = 2;
	vecOne.values[2] = 3;
	vecOne.values[3] = 4;
	vecOne.values[4] = 5;

	vector vecTwo;
	vecTwo.length = 5;
	vecTwo.values[0] = 1;
	vecTwo.values[1] = 2;
	vecTwo.values[2] = 3;
	vecTwo.values[3] = 4;
	vecTwo.values[4] = 5;

	//cout<<checkVectorInclude(vecOne,vecTwo)<<endl;


	*/
	//11
	vector vect11;
	vect11.length = 3;
	vect11.values[0] = 1;
	vect11.values[1] = 3;
	vect11.values[2] = 6;
	

	matrix mat;
	mat.columns = 3;
	mat.lines = 3;
	mat.values[0][0] = 1;
	mat.values[0][1] = 2;
	mat.values[0][2] = 3;

	mat.values[1][0] = 3;
	mat.values[1][1] = 4;
	mat.values[1][2] = 5;

	mat.values[2][0] = 6;
	mat.values[2][1] = 7;
	mat.values[2][2] = 8;

	//cout << checkIsIn(vect11, mat) << endl;


	//cout<<palindrom(9)<<endl;
	//cout << sumBinaryFigure(22) << endl;

	char A [100][1000];
	A[0][0] = '1';
	A[0][1] = '0';
	A[0][2] = '1';

	A[1][0] = '1';
	A[1][1] = '1';
	A[1][2] = '1';
	
	A[2][0] = '1';
	A[2][1] = '1';
	A[2][2] = '1';

	transformMatrix(A,3,3);
	/*
	matrix aux;
	aux = primeTwins(1, 2);

	int i = 0, j = 0;
	for (i = 0;i < aux.lines;i++)
	{
		for (j = 0;j < aux.columns;j++)
		{
			cout << aux.values[i][j];
		}
	}*/
	
}