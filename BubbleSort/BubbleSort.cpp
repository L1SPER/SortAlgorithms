#include<iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}
}
void OptimizedBubbleSort(int arr[], int size)
{
	bool flag;
	for (int i = 0; i < size; i++)
	{
		flag = false;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
				flag = true;
			}
		}
		if (!flag)
			break;
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
	int arr[] = { 5, 1 ,4 ,2 ,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Array before sorted" << endl;
	PrintArray(arr, size);
	cout << "Array after sorted" << endl;
	BubbleSort(arr, size);
	PrintArray(arr, size);

	//Optimized Bubble Sort içerdeki loopta swap yapmazsa dizinin doðru olduðunu anlar ve looptan çýkar.
	#if 0
		OptimizedBubbleSort(arr, size);
		PrintArray(arr, size);
	#endif // 0
	

	return 0;
}
