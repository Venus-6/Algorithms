#include <iostream>
using namespace std;
void Quick_Sort(int* arr, int first, int last)//Быстрая
{
	int l = first, r = last;
	int mid = arr[(l + r) / 2]; //Поиск центрального элемента 
	do
	{
		while (arr[l] < mid)
		{
			l++;
		}
		while (arr[r] > mid)
		{
			r--;
		}
		if (l <= r) //Перестановка элементов
		{
			int temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
			l++;
			r--;
		}
	} while (l < r);
	if (first < r)
	{
		Quick_Sort(arr, first, r);
	}
	if (l < last)
	{
		Quick_Sort(arr, l, last);
	}
}
int main()
{
	int input;
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//Алгоритмы сортировки
	cin >> input;
	switch (input)
	{
	case 1:
	{
		//Пузырьковая
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	case 2:
	{
		//Вставками
		for (int i = 1; i < n; i++)
		{
			int temp = arr[i];
			for (int j = i - 1; j >= 0 && arr[j] > temp; j--)
			{
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	case 3:
	{
		//Выбором
		int temp = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int min = i;
			for (int j = i; j < n; j++)
			{
				if (arr[j] < arr[min])
				{
					min = j;
				}
			}
			if (i != min)
			{
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		}
	}
	case 4:
	{
		//Быстрая
		int l = 0, r = n - 1;
		Quick_Sort(arr, l, r);
	}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
