#include<iostream>
using namespace std;

void CountingSort(int arr[],int size)
{
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (min >arr[i]) min = arr[i];
		else if (max < arr[i]) max = arr[i];
	}

	int range = max - min + 1;
	int* temp = new int[range];

	for (int i = 0; i < range; i++) temp[i] = 0;

	for (int i = 0; i < size; i++)
	{
		temp[arr[i] - min]++;
	}
	int k = 0;
	for (int i = 0; i < range; i++)
	{
		for (int j = 0; j < temp[i]; j++)
		{
			arr[k++] = i + min;
		}
	}
	delete[] temp;
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
	int arr[] = { 3, 5, 4, 3, 7, 4, 5, 6, 3, 8, 7, 6, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted" << endl;
	PrintArray(arr, size);
	CountingSort(arr, size);
	cout << "Array after sorted" << endl;
	PrintArray(arr, size);
	return 0;
}