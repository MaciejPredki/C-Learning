#include <iostream>
#include <stdio.h>
#include <math.h>


int main()
{
	return 0;

}







	//Highest number from 3 int:
	/*int a = 15;
int b = 15;
int c = 25;

if(a > b)
{
	if (a > c)
	{
		printf("%i", a);
	}
	else
	{
		printf("%i", c);
	}
}
else
{
	printf("%i", b);
}
*/
	//Fuel consumption:
	/*
int distance = 0;
float fuel = 0;
printf("Distance: \n");
scanf_s("%d", &distance);
printf("Fuel: \n");
scanf_s("%f", &fuel);
float cons = distance / fuel;
printf("%.3f", cons);
*/
	//Distance between the two points:
	/*
int x1, x2, y1, y2;

printf("Podaj x1: ");
scanf_s("%i", &x1);
printf("Podaj y1: ");
scanf_s("%i", &y1);
printf("Podaj x2: ");
scanf_s("%i", &x2);
printf("Podaj y2: ");
scanf_s("%i", &y2);

float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

printf("%f", distance);
*/
	//4 integers
	/*int p, q, r, s;

printf("Input p: \n");
scanf_s("%d", &p);

printf("Input q: \n");
scanf_s("%d", &q);

printf("Input r: \n");
scanf_s("%d", &r);

printf("Input s: \n");
scanf_s("%d", &s);

if (p > 0 && q > 0 && r > 0 && p%2 == 0 && q > r && s > p && r+s > p+q)
{
	printf("Corect values");
}
else
{
	printf("Wrong valuse");
}*/
	//Roots of Bhaskara’s formula
	/*
float a, b, c, sqr;

printf("Input a: \n");
	scanf_s("%f", &a);

printf("Input b: \n");
	scanf_s("%f", &b);

printf("Input c: \n");
	scanf_s("%f", &c);

	sqr = sqrt((b * b) - (4 * a * c));

	if (a != 0 && sqr > 0)
	{
		float x1, x2;

		x1 = (-b + sqr) / (2 * a);
		x2 = (-b - sqr) / (2 * a);

		printf("x1 = %f\n", x1);
		printf("x2 = %f", x2);

	}
	else
	{
		printf("a can't be equal 0");
	}
*/
	//21.range where integer belongs
	/*
int x;
printf("Input x : \n");
scanf_s("%d", &x);

	if (x > 0 && x <= 20)
	{
		printf("Range [0,20]");
	}
	else if (x > 20 && x <= 40)
	{
		printf("Rage [20,40]");
	}
	else if (x > 40 && x <= 60)
	{
		printf("Rage [40,60]");
	}
	else if (x > 60 && x <= 80)
	{
		printf("Rage [60,80]");
	}
	else
	{
		printf("Wrong number");
		return 1;
	}

	*/
	//22. Counting odds 
	/*	int a, b, c, d, sum;
		printf("Input a: \n");
		scanf_s("%d", &a);
		printf("Input b: \n");
		scanf_s("%d", &b);
		printf("Input c: \n");
		scanf_s("%d", &c);
		printf("Input d: \n");
		scanf_s("%d", &d);
		sum = 0;
		if (a % 2 != 0)
		{
			sum = sum + a;
		}
		if (b % 2 != 0)
		{
			sum = sum + b;
		}
		if (c % 2 != 0)
		{
			sum = sum + c;
		}
		if (d % 2 != 0)
		{
			sum = sum + d;
		}

		printf("sum = %d", sum);
		*/

