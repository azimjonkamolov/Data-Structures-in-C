// Traversing in an array in C
#include<stdio.h>
#include <stdlib.h>

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
//			case 3:
//				functionThree();
//				break;
//			case 4:
//				functionFour();
//				break;
//			case 5:
//				functionFive();
//				break;
//			case 6:
//				functionSix();
//				break;
			case 7:
				exit(1);
			default:
				printf("Undefined number!");
		}					
	}
	
	return 0;
}

int functionOne()
{
	int i, n, arr[20];
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe array elements are ");
	for(i=0;i<n;i++)
	{
		printf("\t %d", arr[i]);
	}
	printf("\n\n");
}

int functionTwo()
{
	int i, n, arr[20], sum=0;
	float mean = 0.0;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++)
		sum += arr[i];
	mean = (float)sum/n;
	printf("\n");
	printf("The sum of the array elements = %d\n", sum);
	printf("The mean of the array elements = %.2f\n", mean);
}






























//

