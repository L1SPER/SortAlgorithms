#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
	for (int i =1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && key < arr[j])
		{
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
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
	int arr[] = { 2,8,5,3,9,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted" << endl;
	PrintArray(arr,size);
	InsertionSort(arr, size);
	cout << "Array after sorted" << endl;
	PrintArray(arr, size);

	return 0;
}