//Write a program to sort (Ascending order) the given elements using merge sort technique.

void display(int arr[15], int n) {
	int i;
	for(i = 0; i < n; i++)
		{
		printf("%d ", arr[i]);
		}
	printf("\n");
}
void merge(int arr[15], int low, int mid, int high) {
	int i = low, h = low, j = mid + 1, k, temp[15];
	while(h <= mid && j <= high)
		{
			if (arr[h]<=arr[j])
			{
				temp[i] = arr[h];
				h++;
			}
			else{
				temp[i] = arr[j];
				j++;
			}
			i++;
		}
	if(h <= mid)
	{
		for(k = h; k<=mid; k++)
			{
				temp[i]=arr[k];
				i++;
			}
	}else{
		for(k=j; k<=high; k++)
			{
				temp [i] = arr[k];
				i++;
			}
