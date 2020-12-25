#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int input;
	//Алгоритмы поиска
	cout << "Выберете метод поиска:" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
	{
		
		int n, k;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> k;

		//Линейный
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == k)
			{
				cout << "Число "<< arr[i] << " найдено в " << i << " элементе" << endl;
			}
		}
	}
	case 2:
	{
		//Индексно-последовательный
		cout << "Не получился :(";
	}
	case 3:
	{
		int n, k;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> k;

		//Бинарный
		//Работает только с отсортированным массивом
		int l = 0;
		int r = n - 1;
		int mid;
		bool flag = false;
		while ((l <= r) && (flag != true)) {
			mid = (l + r) / 2; //Индекс элемента по середине

			if (arr[mid] == k) {
				flag = true;
			}
			if (arr[mid] > k) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		if (flag) 
		{
			cout << "Индекс элемента " << k << " равен: " << mid;
		}
		else {
			cout << "Элемент не найден";
		}
	}
	case 4:
	{
		//Алгоритм Кнута-Морриса-Пратта

	}
	}
}