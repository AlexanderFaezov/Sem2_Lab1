#include <iostream>

const int n = 10;
int main()
{
	setlocale(LC_ALL, "ru");
    using namespace std;
    int max, s = 1, j;
	int a[n];

	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 200 - 100;
	}
	max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			s = 1;
			j = i;
		}
		else if (a[i] == max)
		{
			s += 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	cout << "Результаты: " << endl;
	cout << "Максимальное число: " << max << endl;
	cout << "Количество таких чисел: " << s << endl;
	cout << "Номер: " << j+1 << endl;

	return 0;
}

