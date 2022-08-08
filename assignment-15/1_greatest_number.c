#include <stdio.h>
int greatestNum(int arr[], int n);

int main()
{
	int n;
    printf("Enter a number ");
    scanf("%d",&n);
	int arr[n];
    printf("Enter %d numbers ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
	printf("%d", greatestNum(arr, n));
	return 0;
}

int greatestNum(int arr[], int n)
{	
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}