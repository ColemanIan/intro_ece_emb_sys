#include insertion_sort.h


int main() {
	int a[] = {8,5,2,6,3,85,92,7,0};
	insertion_sort_rev(a, 9);
	for (int i=0; i<9; ++i){
	printf("a[%d] =%d\n", i, a[i]);
	
	
	}
	float median = find_median(a, 9);
	printf("Median = %f", median);
	
	

return 0;
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
	float median = 0;
	if (length%2==0)
	{ return a[length/2 - 1]; }
	else {
	return a[(length+1)/2 -1];
	}
}
