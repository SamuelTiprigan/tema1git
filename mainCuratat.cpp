/*
* main.cpp
*
*  Created on: Oct 24, 2016
*      Author: Samuel Tiprigan
*/

#include"t1.h"

using namespace std;

//other functions
unsigned short primeDivisors(unsigned int left, unsigned int right);
bool checkOdd(unsigned int number);
bool checkPairPrime(unsigned int number1, unsigned int number2);
bool findOnColumn(vector vect, matrix mat);
bool findOnLine(vector vect, matrix mat);
bool checkNeighbour(unsigned int number1, unsigned int number2);
bool searchElement(unsigned int numberToSearch, vector A);

//1
bool isPalindrom(unsigned long long number) {

	if (number < 0) {
		return false;
	}

	int copy = 0, reverse = 0;
	copy = number;

	while (number != 0) {
		reverse = reverse * 10 + number % 10;
		number = number / 10;
	}
	if (copy == reverse) {
		return true;
	}
	else {
	}

	return false;
}

//2
unsigned char sumBinaryFigure(unsigned long long number)
{
	if (number < 0) {
		return false;
	}

	unsigned binary = 0;

	unsigned sum = 0;

	while (number > 0)
	{
		binary = number % 2;
		sum = sum + binary;
		number = number / 2;
	}

	return (unsigned char)sum;
}


//3
bool isLeapYear(unsigned short year) {

	if (year <= 0) {
		return false;
	}

	if (year > 0) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

//4
unsigned char dayOfTheWeek(unsigned short year, unsigned char month,
	unsigned char day) {

	if (year > 0 && month > 0 && day > 0) {

		int algA = (14 - month) / 12;
		int algY = year - algA;
		int algM = month + 12 * algA - 2;

		int resultDay = (day + algY + algY / 4 - algY / 100 + algY / 400 + (31 * algM / 12)) % 7;
		return resultDay;
	}
	return 0;
}


//5
unsigned int fibonnaci(int index) {

	if (index >= 0) {

		if (index == 0) {
			return 0;
		}
		if (index == 1) {
			return 1;
		}
		return fibonnaci(index - 1) + fibonnaci(index - 2);
	}
	return 0;
}


//6
unsigned long perfectNumbers(unsigned int number) {

	unsigned int result = 0, sum = 0;
	unsigned int iterator = 0;
	int reportFlag = 0;

	while (reportFlag != 2) {
		sum = 0;
		for (iterator = 1; iterator <= number / 2; iterator++) {
			if (number % iterator == 0) {
				sum += iterator;
			}
		}

		if (sum == number) {
			result += number;
			reportFlag++;
		}

		number--;
	}
	return result;
}

//7
bool primenumber(unsigned int number) {
	//numarul trebuie sa fie mai mare ca 1;
	if (number > 1)
	{
		unsigned int i = 0;

		for (i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
				return false;
			}
		}

		return true;
	}
	return false;
}


unsigned short primeDivisors(unsigned int left, unsigned int right) {
	unsigned int i = 0, j = 0;
	unsigned int number = left;

	int maxDivizori = 0;
	int counterDivizori = 0;
	int counterNumber = 0;

	for (j = left;j <= right;j++)
	{
		counterDivizori = 0;
		for (i = 0;i <= j / 2;i++)
		{
			if (primenumber(i) == true && j % i == 0)
			{
				counterDivizori++;
			}
		}
		if (counterDivizori > maxDivizori)
		{
			maxDivizori = counterDivizori;
		}

		if (counterDivizori == maxDivizori && maxDivizori > 0)
		{
			counterNumber++;
		}
	}
	return maxDivizori;
}


//8
bool checkNeighbour(unsigned int number1, unsigned int number2) {
	if ((number2 - number1 == 2) || (number1 - number2 == 2))
	{
		return true;
	}
	return false;
}

bool checkOdd(unsigned int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	return false;
}

bool checkPairPrime(unsigned int number1, unsigned int number2)
{
	//&& checkOdd(number1) == false && checkOdd(number2) == false) && checkNeighbour(number1,number2)==true)

	if (checkOdd(number1) == false && checkOdd(number2) == false && checkNeighbour(number1, number2) == true)
	{
		if (primenumber(number1) == true && primenumber(number2) == true) {
			return true;
		}
	}

	return false;
}



matrix primeTwins(unsigned int count, unsigned int lowerBound)
{
	matrix mat;
	mat.lines = 0;
	mat.columns = 0;
	//first odd number = 3;
	int prim = 3;

	while (count > 0)
	{
		if (prim > lowerBound && (checkPairPrime(prim, prim + 2) == true))
		{
			mat.values[mat.lines][mat.columns] = prim;
			mat.values[mat.lines][mat.columns + 1] = prim + 2;
			mat.lines++;
			count--;
		}
		prim += 2;
	}
	return mat;
}

//9
bool areOrderedFibonnaci(vector vec)
{
	int counter = 0;
	int i = 1;
	for (i = 0; i <= vec.length;i++)
	{
		if (fibonnaci(i) == vec.values[i])
		{
			counter++;
		}
	}

	if (counter == vec.length)
	{
		return true;
	}
	return false;
}


//10
unsigned char checkVectorInclude(vector vecOne, vector vecTwo)
{
	if (vecOne.length == vecTwo.length)
	{
		int i = 0, counter = 0;
		for (i = 0;i < vecOne.length;i++)
		{
			if (vecOne.values[i] == vecTwo.values[i])
			{
				counter++;
			}
		}
		if (counter == vecOne.length) {
			return '0';
		}
		else
		{
			return '3';
		}
	}
	else if (vecOne.length > vecTwo.length)
	{
		int i = 0, j = 0, counterRight = 0;
		for (i = 0;i < vecOne.length;i++)
		{
			for (j = 0;j < vecTwo.length;j++)
			{
				if (vecOne.values[i] == vecTwo.values[j])
				{
					counterRight++;
				}
			}
		}
		if (counterRight == vecTwo.length)
		{
			return '2';
		}
		else
		{
			return '3';
		}

	}
	else if (vecOne.length < vecTwo.length) {
		int i = 0, j = 0, counterLeft = 0;

		for (i = 0;i < vecTwo.length;i++) {
			for (j = 0;j < vecOne.length;j++)
			{
				if (vecTwo.values[i] == vecOne.values[j])
				{
					counterLeft++;
				}
			}
		}
		if (counterLeft == vecOne.length)
		{
			return '1';
		}
		else
		{
			return '3';
		}
	}
	return '3';
}

//11
bool findOnLine(vector vect, matrix mat)
{

	int i = 0, j = 0, counter = 0;
	for (i = 0;i < mat.lines;i++)
	{
		for (int j = 0;j < mat.columns;j++)
		{
			if (vect.values[i] == mat.values[i][j])
			{
				counter++;
			}
		}
	}

	if (counter == vect.length)
	{
		return true;
	}
	return false;
}

bool findOnColumn(vector vect, matrix mat)
{

	int i = 0, j = 0, counter = 0;
	for (i = 0;i < mat.lines;i++)
	{
		for (int j = 0;j < mat.columns;j++)
		{
			if (vect.values[i] == mat.values[j][i])
			{
				counter++;
			}
		}
	}

	if (counter == vect.length)
	{
		return true;
	}
	return false;
}


bool checkIsIn(vector vec, matrix mat)
{
	bool Line = findOnLine(vec, mat);
	bool Column = findOnColumn(vec, mat);

	if ((Line == true) || (Column == true))
	{
		return true;
	}
	return false;
}


//12
matrix rotate(matrix mat, unsigned int rotLeft, unsigned int rotRight)
{
	matrix A;
	A.columns = 1;
	A.lines = 1;
	A.values[1][1] = 0;
	return A;
}

//13
bool searchElement(unsigned int numberToSearch, vector A) {
	unsigned int j = 0;

	for (j = 0; j < A.length; j++) {
		if (A.values[j] == numberToSearch) {
			return true;
		}
	}
	return false;
}


bool isPartOfFibonnaci(vector vec, unsigned int startingNumber) {
	if (startingNumber >= 2) {

		unsigned int i = 0, k = 0;
		unsigned int counterFounded = 0;

		vector aux;
		aux.length = vec.length;

		//dimensiunea array-ului sizeof(A) / sizeof(int)

		while (counterFounded != aux.length) {

			aux.values[counterFounded] = fibonnaci(startingNumber);
			startingNumber++;
			counterFounded++;
		}

		counterFounded = 0;

		for (i = 0; i < vec.length; i++) {
			if (searchElement(vec.values[i], aux) == true) {
				counterFounded++;
			}
		}
		if (counterFounded == aux.length) {
			return true;
		}

	}
	return false;
}

//14
unsigned long setOperations(long sets[], char operations[], unsigned int x)
{
	return 0;
}

//15
unsigned long bitOperations(long numbers[], char operations[], unsigned int x)
{
	return 0;
}


//16
long convertDecimalToBinary(long n) {
	int remainder;
	long binary = 0, i = 1;

	while (n != 0) {
		remainder = n % 2;
		n = n / 2;
		binary = binary + (remainder*i);
		i = i * 10;
	}
	return binary;
}


bool palindrom(long number)
{
	if (isPalindrom(convertDecimalToBinary(number)))
	{
		return true;
	}
	return false;
}

//17
bool fibonnaciSpirale(matrix mat)
{
	return false;
}

//18
void transformMatrix(char mat[MAX_ARRAY_LENGTH_LONG][MAX_ARRAY_LENGTH_LONG], unsigned int rows, unsigned int columns)
{
	int i = 0, j = 0;
	int position = 0;

	for (i = 0; i < rows;i++)
	{
		for (j = 0;j < columns;j++)
		{
			int k = 0, p = 0;
			if (mat[i][j] == '0')
			{
				
				for (k = i;k < rows;k++)
				{
					mat[i][k] = '0';
				}
			}
		}
	}
}

