//Write a program to sort the given elements using insertion sort technique.
#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	// write the for loop to read array elements
	for(i=0; i<n; i++)
		{
			printf("Enter element for a[%d] : ",i);
			scanf("%d",&a[i]);
		}
	printf("Before sorting the elements in the array are\n");
	for(i=0; i<n; i++)
		{
			printf("Value of a[%d] = %d\n",i,a[i]);
		}
	for(i=0; i<n; i++)
		{
			temp = a[i];
			pos =i;
			for(j=i-1; j>=0 && a[j]>temp; j--)
				{
					a[j+1] = a[j];
				pos =j;
				}
			a[pos] = temp;
		}
	printf("After sorting the elements in the array are\n");
	for(i=0; i<n; i++)
		{
			printf("Value of a[%d] = %d\n",i,a[i]);
		}
	
}
