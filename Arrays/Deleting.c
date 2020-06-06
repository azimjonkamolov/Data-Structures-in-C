// Deleting in an array in C
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

void functionNine();
void functionTen();

void getArray();
void space();

int main()
{
	int option;
	
	while(1)
	{
		printf("Enter the number for the one of the options bellow: \n");
		printf("9. A program to delete a number from a given location in an array.\n");
		printf("10. A program to delete a number from an array that is already sorted in ascending order.\n");
		printf("0. To exit!\n");
		
		scanf("%d", &option);

		switch(option)
		{
			case 9:
				functionNine();
				break;
			case 10:
				functionTen();
				break;

			case 0:
				printf("bye!");
				exit(0);
			default:
				printf("Undefined number!");
		}					
	}
	
	return 0;
}

// A function to insert a number at a given location in an array
void functionNine()
{
	int i, n,pos, arr[MAX_SIZE];
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	getArray(n, arr);
	
	printf("Enter the position from which the number has to be deleted: ");
	scanf("%d", &pos);
	for(i=pos;i<n-1;i++)
	{
		arr[i] = arr[i+1];
	}
	n--;
	
	printf("The array after deletion is: \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	space();
}

// A function to insert a number in an array that is already sorted in ascending order
void functionTen()
{
	int i, n, j, num, arr[10];
	
	printf("Enter the number of elmenets in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to be deleted: ");
	scanf("%d", &num);
	
	for(i=0;i<n;i++)
	{
		if(arr[i] == num)
		{
			for(j=i; j<n; j++)
			{
				arr[j] = arr[j+1];
			}
		}
	}
	n = n-1;
	printf("The array after deletion is: \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
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
























//

