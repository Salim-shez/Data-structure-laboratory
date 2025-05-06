//Write a program to search a key element in the given array of elements using binary search.
#include<stdio.h>
	printf("Enter key element : ");
	scanf("%d", &key);

	for(i=0; i<n -1 ; i++)
		{
			for(j=i+1; j<n; j++)
				{
				if(a[i]>a[j])
				{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
				}
		}
	printf("After sorting the elements in the array are\n");
	// Write the code to display the elements
	for(i=0; i<n; i++)
		{
			printf("Value of a[%d] = %d\n",i,a[i]);
		}
	low = 0; // Complete the statement
	high = n - 1;
	flag = 0; // Complete the statement
	while(low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == key) {
			flag = 1;
			break;
		}
		else if(a[mid] < key) {
			low = mid + 1;
		} 
		else {
			high = mid - 1;
		}
	}
	if (flag == 1) { // Write the condition part
		printf("The key element %d is found at the position %d\n", key,mid); // Complete the statement
	} else {
		printf("The Key element %d is not found in the array\n", key); // Complete the statement
	}
}
