// Traversing in an array in C
#include<stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void functionOne();
void functionTwo();
void functionThree();
void functionFour();
void functionFive();
void functionSix();

void getArray(int n, int arr[]);
void space();

int main()
{
	int option;
	
	while(1)
	{
		printf("Enter the number for the one of the options bellow: \n");
		printf("1. A program to read and display n numbers using an array.\n");
		printf("2. A program to find the mean of n numbers using an array.\n");
		printf("3. A program to print the position of the smallest number of n numbers using an array.\n");
		printf("4. A program to find the second largest number of n numbers using an array.\n");
		printf("5. A program to enter n number of digits. Form a number using these digits n.\n");
		printf("6. A program to find weather the array of integers contains a duplicate number.\n");
		printf("7. To exit!\n");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				functionOne();
				break;
			case 2:
				functionTwo();
				break;
			case 3:
				functionThree();
				break;
			case 4:
				functionFour();
				break;
//			case 5:
//				functionFive();
//				break;
//			case 6:
//				functionSix();
//				break;
			case 7:
				printf("bye!");
				exit(1);
			default:
				printf("Undefined number!");
		}					
	}
	
	return 0;
}

// A function to read and display n numbers using an array
void functionOne()
{
	int i, n, arr[MAX_SIZE];
	
	getArray(n, arr);
	
	printf("n is %d\n", n);
	
	printf("\nThe array elements are ");
	for(i=0;i<n;i++)
	{
		printf("\t %d", arr[i]);
	}
	space();
}

// A function to find the mean of n numbers using an array
void functionTwo()
{
	int i, n, arr[MAX_SIZE], sum=0;
	float mean = 0.0;
	
	getArray(n, arr);
	
	for(i=0;i<n;i++)
	{
		sum += arr[i];
	}
	mean = (float)sum/n;
	printf("\n");
	printf("The sum of the array elements = %d\n", sum);
	printf("The mean of the array elements = %.2f\n", mean);
	space();
}

// A function to print the position of the smallest number of n numbers using an array.
void functionThree()
{
	int i, n, arr[MAX_SIZE], small, pos;
	
	getArray(n, arr);
	
	small = arr[0];
	pos = 0;
	for(i=1; i<n; i++)
	{
		if(arr[i]<small)
		{
			small = arr[i];
			pos = i;
		}
	}
	
	printf("The smallest element is : %d\n", small);
	printf("The position of the smallest element in the array is: %d\n", pos);
	space();
}

void functionFour()
{
	int i, n, arr[MAX_SIZE], large, second_large;
	
	getArray(n, arr);
	
	large= arr[0];
	
	for(i=1; i<n;i++)
	{
		if(arr[i]>large)
		{
			large = arr[i];
		}
	}
	second_large = arr[1];
	for(i=0;i<n;i++)
	{
		if(arr[i] != large)
		{
			if(arr[i]>second_large)
			{
				second_large = arr[i];
			}
		}
	}
	printf("The largest number is %d\n", large);
	printf("The second largest number is %d\n", second_large);
	space();
	
}

// A function to enter n number of digits. Form a number using these digits
void functionFive()
{
	int i, n, arr[MAX_SIZE], formNumber;
	
	getArray(n, arr);
	
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	
	
	
}

void getArray(int n, int arr[])
{
	int i;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter %d elements: \n", n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

}

void space()
{
	printf("\n\n");
}





























//

