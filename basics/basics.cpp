#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h> 


int main()
{

	int count, n;
	float x, y;

	printf("Input the values of x and n:\n");
	scanf_s("%f%d", &x, &n);
	y = 1.0;
	count = 1;
	while (count <= n)
	{
		y = y * x;
		count++;
	}
	printf("x=%f; n=%d; \nx to power n=%f", x, n, y);
	return 0;

	return 0;

}






  /*
	//Highest number from 3 int:
	int a = 15;
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

	//Fuel consumption:
	
int distance = 0;
float fuel = 0;
printf("Distance: \n");
scanf_s("%d", &distance);
printf("Fuel: \n");
scanf_s("%f", &fuel);
float cons = distance / fuel;
printf("%.3f", cons);

	//Distance between the two points:
	
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

	//4 integers
	int p, q, r, s;

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
}
	//Roots of Bhaskara�s formula
	
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

	//21.range where integer belongs
	
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

	
	//22. Counting odds 
	int a, b, c, d, sum;
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
		
	//23. Triangle
	float a, b, c;
	printf("Input a: \n");
	scanf_s("%f", &a);
	printf("Input b: \n");
	scanf_s("%f", &b);
	printf("Input c: \n");
	scanf_s("%f", &c);

	if (a + b > c && b + c > a && c + a > b)
	{
		printf("Paramiter = %f \n", a + b + c);
	}
	else
	{
		printf("You cant build triangle with this values");
	}
	//24. Multiplied
	int a, b;
	printf("Input a: \n");
	scanf_s("%d", &a);
	printf("Input b: \n");
	scanf_s("%d", &b);

	if (a % b == 0)
	{
		printf("multiplied");
	}	
	else
	{
		printf("not multiplied");
	}
	//25. Months
		int number;

	printf("Write the month number: \n");
	scanf_s("%d", &number);

	if (number > 0 && number< 12)
	{
		switch (number)
		{
		case 1:
			printf("January\n");
			break;
		case 2:
			printf("February\n");
			break;
		case 3:
			printf("March\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;
		case 8:
			printf("August\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("October\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("December\n");
			break;
		
		}
	}
	else
	{
		printf("Wrong month numbers");
	}

	//26. Even numbers between 1 to 50
		for (int i = 1; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d \n", i);
		}
	}
	//30.List of square of each one of the even values from 1 to x :
		int val = 0;
	printf("Input end value: ");
	scanf_s("%d", &val);

	for (int i = 0; i < val; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d^2 = %d\n", i, i * i);
		}
	}
	//32. Reminder = 3 
		int n;
	printf("Input some number: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 100; i++)
	{
		if (i % n == 3)
		{
			printf("%d \n", i);
		}
	}
	//33.  Highest value and the input position.
	
	int numbers[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Input %d number: ", i);
		scanf_s("%d", &numbers[i]);
	}

	int val, max = 0, pos = 0;
	for (int j = 0; j < 5; j++)
	{
		if (numbers[j] > max)
		{
			max = numbers[j];
			pos = j;
		}
		
	}
	printf("Highest number: %d on position: %d", max, pos);

	//34. Sum of consecutive odd numbers from a given pair of integers
	int num1, num2, sum = 0;
	printf("Input first number : \n");
	scanf_s("%d", &num1);
	printf("Input second number : \n");
	scanf_s("%d", &num2);
	
	if (num1 > num2)
	{
		for (int i = num2; i < num1; i++)
		{
			if ((i%2) != 0)
			{
				printf("%d \n", i);
				sum += i;
			}
		}
		
	}
	if (num2 > num1)
	{
		for (int j = num1; j < num2; j++)
		{
			if ((j%2) != 0)
			{
				printf("%d \n", j);
				sum += j;
			}
		}
		
	}
	printf("sum= %d \n", sum);

	//41. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.
		int numbersOfLines = 0;
	printf("How many lines? : \n");
	scanf_s("%d", &numbersOfLines);

	for (int i = 0; i < numbersOfLines*3; i+=3)
	{
		printf("%d %d %d \n", i, i + 1, i + 2);
	}
	return 0;
	//45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + � + 1/50.
		float sum = 0;
	for (int i = 1; i <= 50; i++)
	{
		sum =sum + (float)1 / i;
	}
	printf("Sum = %.2f", sum);
	//48.
	int numery[7];
	int x = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("Input nr %d :", i);
		scanf_s("%d", &x);
		
		if (x>0)
		{
			numery[i] = x;
		}
		else
		{
			numery[i] = 100;
		}
	}

	for (int j = 0;  j < 5; j++)
	{
		printf("Nr %d is: %d\n", j, numery[j]);
	}

	//49.
		int numbers[7];
	int x;

	printf("Input first number into array: ");
	scanf_s("%d", &x);

	numbers[0] = x;

	printf("numbers [0] = %d \n", numbers[0]);
	for (int i = 1; i < 7; i++)
	{
		x = x * 3;
		numbers[i] = x;

		printf("numbers [%d] = %d \n",i, numbers[i]);
	}
	//50
	int numbers[5], x;

	for (int i = 0; i < 5; i++)
	{
		printf("Input %d number: \n", i);
		scanf_s("%d", &x);
		numbers[i] = x;
	}

	for (int j = 0; j < 5; j++)
	{
		if (numbers[j] < 5)
		{
			printf("numbers[%d] is < than 5 and = %d\n", j, numbers[j]);
		}
	}

	//51
	int temp, x;
	int numbers[] = { 10, 15, 20, 25, 30, 35 };

	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", numbers[i]);
	}

	printf("-----------------\n");
	for (int j = 0; j < 6; j++)
	{
		if (j < 6/2)
		{
			temp = numbers[j];
			numbers[j] = numbers[6 - (j+1)];
			numbers[6 - (j+1)] = temp;
		}

		printf("%d \n", numbers[j]);

	}
	//57. reverse number
		int number;
	int x, y = 0;
	printf("Input the number to reverse: ");
	scanf_s("%d", &number);

	while (number >= 1)
	{
		x = number % 10;
		y = y * 10 + x;
		number /= 10;
	}

	printf("%d\n", y);
	//58.
		float numbers[4];
	float min = 0, max = 0;

	for (int i = 0; i < 4; i++)
	{
		printf("input %d number: ", i);
		scanf_s("%f", &numbers[i]);
	}
	min = numbers[0];
	max = numbers[0];
	for (int j = 0; j < 4; j++)
	{
	
		if (numbers[j] < min)
		{
			min = numbers[j];

		}
		else 
		{
			max = numbers[j];
		}
	}

	printf("max = %.2f\n", max);
	printf("min = %.2f\n", min);

	printf("diff = %.2f", max - min);
	//59
		int num, sum = 0;

	printf("Input any number: ");
	scanf_s("%d", &num);
	printf("1 + ");

	for (int i = 0; i < num; i++)
	{
		printf(" 1/%d +", i);
		
	}
	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	printf(" 1/%d", num);
	printf("\nSum = 1/%d", sum + 1 / num);
	//60 Enumeration
	enum {sun, mon, tue, wed, thu, fri, sat };

	printf("Sun = %d\n", sun);
	printf("Mon = %d\n", mon);
	printf("tue = %d\n", tue);
	printf("Wed = %d\n", wed);
	printf("Thu = %d\n", thu);
	printf("Fri = %d\n", fri);
	printf("Sat = %d\n", sat);


	//61
	float x;
	printf("Input value: ");
	scanf_s("%f", &x);
	if (x != 0)
	{
		printf("Value of sin (1/x) = %.4f", sin(1 / x));
	}
	else
	{
		printf("x can't be equal 0");
	}
	//62
	int number, x = 0, sum = 0;

	printf("Input number: ");
	scanf_s("%d", &number);
	
	for (int i = 0; i < 3; i++)
	{
		x = number % 10;
		number -= x;
		number /= 10;
		sum += x;
	}
	printf("sum = %d", sum);
	//63
	int n, x = 1, sum = 0;
	
	printf("Input number:");
	scanf_s("%d", &n);

	if (n > 0 && n <= 100)
	{
		for (int i = 1; x <= n; i++)
		{
			sum += pow(x, 4);
			x += i;
		}
		printf(" sum = %d ", sum);
	}

	//64
	int i = 0, num[100], sum = 0, max = -100, min, avg ;
	
	while (1)
	{
		printf("Input positive numbers #%d: ", i);
		scanf_s("%d", &num[i]);
		
		if (num[i] <= 0)
		{
			break;
		}
		sum = sum + num[i];
		i++;
	} 

	min = num[0];
	for (int j = 0; j < i; j++)
	{
		if (num[j] > 0 && num[j] > max)
		{
			max = num[j];
		}
		if (num[j] > 0 && num[j] < min)
		{
			min = num[j];
		}
	}
	avg = sum / i;
	
	printf("sum = %d\n", sum);
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	printf("avg = %d\n", avg);
	printf("Number of integers  = %d\n", i);

	//65 

		int n, flag, counter = 0;


	for (int i = 2; i < 200; i++)
	{
		flag = 1;

		for (int j = 2; j <= i / 2 && flag == 1; j++)
		{
			if (i % j == 0)
			{

				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			counter++;
		}

		if (counter >= 10)
		{
			counter = 0;
			printf("\n");
		}
	}

*/



  /**/

	/*	long int p;
	int n;
	double q;

	p = 1;
	for (n = 0; n < 11; ++n) {
		if (n == 0)
			p = 1;
		else
			p = p * 2;
		q = 1.0 / (double)p;
		printf("\n%2d   %8d     %20.12lf", n, p, q);
	}
*/