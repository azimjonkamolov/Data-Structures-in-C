// Inserting in an array in C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define MAX_SIZE 20

void functionSeven();
void functionEight();

void space();

int main()
{
	int option;
	
	while(1)
	{
		printf("Enter the number for the one of the options bellow: \n");
		printf("7. A program to insert a number at a given location in an array.\n");
		printf("8. A program to insert a number in an array that is already sorted in ascending order.\n");
		printf("0. To exit!\n");
		scanf("%d", &option);

		switch(option)
		{
			case 7:
				functionSeven();
				break;
			case 8:
				functionEight();
				break;

			case 0:
				printf("bye!");
				exit(1);
			default:
				printf("Undefined number!");
		}					
	}
	
	return 0;
}

// A function to insert a number at a given location in an array
void functionSeven()
{
	int i, n, num, pos, arr[MAX_SIZE];
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d", &num);
	printf("Enter the number at which the number has to be added: ");
	scanf("%d", &pos);
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[pos] = num;
	n = n+1;
	printf("The array after insertion of %d is: ", num);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d] = %d", i, arr[i]);
	}
	
	space();
}

// A function to insert a number in an array that is already sorted in ascending order
void functionEight()
{
	int i, n, j, num, arr[10];
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to be inserted: ");
	scanf("%d", &num);
	
	for(i=0;i<n;i++)
	{
		if(arr[i] > num)
		{
			for(j=n-1; j>=1; j--)
			{
				arr[j+1] = arr[j];
			}
			arr[i] = num;
			break;
		}
	}
	
	n = n+1;
	printf("The array after insertion of %d is: \n", num);
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	space();
}


void space()
{
	printf("\n\n");
}
























//

