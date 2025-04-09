// c++level2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int d = 2;
	printf("int printf ==>  %d", d);
	printf("int printf ==>  %0*d",4, d);
	printf("\n");

	char c = 'A';
	float f = 2.5;
	float ff = 2.555, ff2 = 3.253;
	printf("float printf ==>  %f", f);
	printf("\n");
	printf("float printf ==>  %.*f",2, f);
	printf("float printf ==>  %.*f",3, f);
	printf("\n");
	printf("float printf ==>  %.3f : and %.5f", ff, ff2);

    
}

