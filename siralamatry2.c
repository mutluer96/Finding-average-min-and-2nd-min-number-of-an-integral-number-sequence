#include<stdio.h>
main()
{
	int large = -2147483647;
	int fs= 2147483647;
	int ss;
	int ts;
	int sum = 0;
	int say = 0;
	float av;
	printf("This program calculates average, minimum and second minimum number of an integral number sequence\n");
	printf("Please enter at least 3 numbers, -1 will terminate the calculations and -1 won't be included to calculations\n");
	for (int i = 0; ; i++)
	{
		scanf_s("%d", &i);
		if (i == -1)
			break;
		say += 1;
		sum += i;
		av = (float)sum / (float)say;
		if (i > large)
		{
			large = i;
		}	
		if (i < fs)
		{
			ss = fs;
			fs = i;
		}
		else if (i < ss)
		{
			ss = i;
		}
	}

	if (say < 3)
	{
		printf("please insert more than 3 numbers\n");
	}
	else
	{
		printf("\n************\n");
		printf("sum is %d and average is %.3f \n", sum, av);
		printf("the largest number is %d\n", large);
		printf("the smallest number is %d\n", fs);
		printf("the second smallest number is %d\n", ss);


	}
}