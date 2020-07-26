// Merging.c
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 10

void functionOne();
//void functionTwo();
void getArray();
void space();

int main()
{
	int option;
	while(1)
	{
		printf("Enter the number for the one of the options bellow: \n");
		printf("1. A program to merge two unsorted arrays.\n");
		printf("2. A program to merge two sorted arrays.\n");
		printf("3. To exit!\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				functionOne();
				break;
			case 2:
//				functionTwo();
				break;
			case 3:
				printf("bye!");
				exit(1);
			default:
				printf("Undefined number!");
		}					
	}
	return 0;
}

void functionOne()
{
	int i, n1, n2, m;
	int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE];
	int index=0, index_one = 0, index_two = 0;
	
	printf("Enter the number of elements in the first array: ");
	scanf("%d", &n1);
	printf("Enter %d elements: \n", n1);
	
	getArray(n1, arr1);
	
	printf("Enter the number of elements in the second array: ");
	scanf("%d", &n2);
	printf("Enter %d elements: \n", n2);
	
	getArray(n2, arr2);
	
	m = n1+n2;
	
	while(index_one < n1 && index_two < n2)
	{
		if(arr1[index_one]<arr2[index_two])
		{
			arr3[index] = arr1[index_one];
			index_one++;
		}
		else
		{
			arr3[index] = arr2[index_two];
			index_two++;
		}
		index++;
	}
	// if elements of the first array are over and the second array has some elements
	if(index_one==n1)
	{
		while(index_two<n2)
		{
			arr3[index] = arr2[index_two];
			index_two++;
			index++;	
		}	
	}
	else if (index_two)
	{
		while(index_one<n1)
		{
			arr3[index] = arr1[index_one];
			index_one++;
			index++;
		}	
	}
	printf("The merged array is ");
	for(i=0;i<m;i++)
		printf("\narr[%d] = %d", i, arr3[i]);
	space();
}

void getArray(int n, int arr[])
{
	int i;
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


