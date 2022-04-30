#include<iostream>
using namespace std;
void Merge(int arr[], int left, int mid,int right)
{
	int subArrayLeft=mid-left+1;
	int subArrayRight = right-mid;

	int* leftArray = new int[subArrayLeft];
	int* rightArray = new int[subArrayRight];

	for (int i = 0; i < subArrayLeft; i++)
		leftArray[i] = arr[left+i];
	for (int j = 0; j < subArrayRight; j++)
		rightArray[j] = arr[mid+j+1];

	int indexOfLeftArray = 0;
	int indexOfRightArray = 0;
	int indexOfMergedArray = left;

	while (indexOfLeftArray < subArrayLeft && indexOfRightArray < subArrayRight)
	{
		if (leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray])
		{
			arr[indexOfMergedArray] = leftArray[indexOfLeftArray];
			indexOfLeftArray++;
		}
		else
		{
			arr[indexOfMergedArray] = rightArray[indexOfRightArray];
			indexOfRightArray++;
		}
		indexOfMergedArray++;
	}
	
	while (indexOfLeftArray < subArrayLeft)
	{
		arr[indexOfMergedArray] = leftArray[indexOfLeftArray];
		indexOfLeftArray++;
		indexOfMergedArray++;
	}
	while (indexOfRightArray<subArrayRight)
	{
		arr[indexOfMergedArray] = rightArray[indexOfRightArray];
		indexOfRightArray++;
		indexOfMergedArray++;
	}
}
void MergeSort(int arr[], int left, int right)
{
	if (left >= right)
		return;
	int mid = left + (right-left) / 2;
	MergeSort(arr, left, mid);
	MergeSort(arr, mid+1, right);
	Merge(arr, left, mid,right);
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<endl;
	}
}
int main()
{
	int arr[] = { 38,27,43,3,9,82,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted" << endl;
	PrintArray(arr, size);
	MergeSort(arr, 0, size - 1);
	cout << "Array after sorted" << endl;
	PrintArray(arr, size);
	return 0;
}