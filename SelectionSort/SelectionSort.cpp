#include<iostream>
using namespace std;
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		Swap(&arr[min], &arr[i]);
	}
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted"<<endl;
	PrintArray(arr, size);
	SelectionSort(arr,size);
	cout << "Array after sorted" << endl;
	PrintArray(arr, size);
	return 0;
}