//  Fibonacci Search
#include <stdio.h>

int min(int x, int y) { 
    return (x <= y) ? x : y;
}

int fibMonaccianSearch(int arr[], int x, int n)
{
	int fibMMm2 = 0; 
	int fibMMm1 = 1;  
	int fibM = fibMMm2 + fibMMm1; 
	while (fibM < n) {
		fibMMm2 = fibMMm1;
		fibMMm1 = fibM;
		fibM = fibMMm2 + fibMMm1;
	}
	int offset = 3;//-2,-1,0,1,2,
	while (fibM > 1) {
		int i = min(offset + fibMMm2, n - 1);
		if (arr[i] < x) {
			fibM = fibMMm1;
			fibMMm1 = fibMMm2;
			fibMMm2 = fibM - fibMMm1;
			offset = i;
		}
		else if (arr[i] > x) {
			fibM = fibMMm2;
			fibMMm1 = fibMMm1 - fibMMm2;
			fibMMm2 = fibM - fibMMm1;
		}
		else
			return i;
	}
	if (fibMMm1 && arr[offset + 1] == x)
		return offset + 1;
	return -1;
}
int main(void)
{
    int i,se;
    int max=0;
     printf("Please Enter Your Array Size :\n");
     scanf("%d",&max);
    int arr[max];
    printf("Please Enter Your Array Element :\n");
    for (i = 0; i <max; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Your Array Element is \n");
    for (i = 0; i <max; i++)
    {
       printf("%d ",arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nEnter Search Element : ");
    scanf("%d",&se);
	
	int ind = fibMonaccianSearch(arr, se, n);
				if(ind>=0)
					printf("\nFound at index: %d :",ind);
			else
					printf("%d isn't present in the array",se);
	return 0;
}
