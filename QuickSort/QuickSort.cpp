#include<iostream>
using namespace std;
int Partition(int arr[], int low,int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high-1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i+1;

}
void QuickSort(int arr[], int low,int high)
{
	if (low >=high)
		return;
	int index = Partition(arr, low, high); //index of pivot
	QuickSort(arr, low, index-1);
	QuickSort(arr, index +1, high);
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
	int arr[] = {10,80,30,90,40,50,70};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted" << endl;
	PrintArray(arr, size);
	QuickSort(arr, 0, size - 1);
	cout << "After arrray sorted" << endl;
	PrintArray(arr, size);

	return 0;
}