#include "insertion_sort.h"

int a[SIZE];	//imported from insertion_sort.h
int length;	//length variable that is equal to or less than SIZE
char asc_desc;	//decision maker




int main() {
	request_array();
	print_statistics(a, length);
	

return 0;
}













void request_array(){
	printf("Enter a string of numbers \n Enter \"-1\" to end.\n");
	{
	for (int i=0;i<(SIZE-1);++i){
		scanf("%d", &a[i]);
		if (a[i]==-1) {
		a[i]=NULL;
		fflush(stdin);
		break;
		}
	length=sizeof(a)/sizeof(sizeof(a[i-1]));
	}
	
	}
}

void print_array(int a[], int length)
{
	for (int i=0; i<length; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void print_statistics(int a[], int length)
{
	printf("For the following array of %d length:\n", length);
	print_array(a, length);
	printf("Would you like it sorted in ascending [1] or descending [2] order?\n Default to ascending order/\n");
	asc_desc=getchar();
	switch (asc_desc){
	case 1:
	//printf("%d", asc_desc);
	insertion_sort(a, length);
	find_maximum(a, length);
	printf("The function has been sorted in ascending order:\n");
	break;
	
	case 2:
	//printf("%d", asc_desc);
	insertion_sort_rev(a, length);
	printf("The function has been sorted in descending order:\n");
	break;
	
	default:
	//printf("%d", asc_desc);
	insertion_sort(a, length);
	printf("The function has been sorted in ascending order:\n");
	break;
	}
	print_array(a, length);
	printf("The median is %f\n The mean is %f\n", find_median(a, length), find_mean(a, length));
	
	
}

void insertion_sort(int a[], int length)
{
	for (int i = 1; i < length; ++i) 
	{
		int key = a[i];
		int j = i-1;
		while (j >= 0 && a[j] > key) 
		{
		a[j+1]=a[j];
		--j;
		}
		a[j+1] = key;
	}

}
void insertion_sort_rev(int a[], int length)
{
	for (int i=1; i < length; ++i)
	{
		int key = a[i];
		int j = i-1;
		while (j>=0 && a[j] < key)
		{
			a[j+1]=a[j];
			--j;
		}
		a[j+1] = key;
	}
}
float find_median(int a[], int length)
{
	if (length%2==0)
	{ return a[length/2 - 1]; }
	else {
	return a[(length+1)/2 -1];
	}
}

float find_mean(int a[], int length)
{	
	float sum=0;
	for (int i=0; i<length; ++i){
		sum = sum + a[i];
	}
	return (sum/length);
}

int find_maximum(int a[], int length)
{
	int max=0;
	for (int i=1; i<length; ++i)
	{
	if (max<a[i])
		{
		max=a[i];
		}
	}
	return max;
}

int find_minimum(int a[], int length)
{
	int min=0;
	for (int i=1; i<length; ++i)
	{
	if (min>a[i])
		{
		min=a[i];
		}
	}
	return min;
}
