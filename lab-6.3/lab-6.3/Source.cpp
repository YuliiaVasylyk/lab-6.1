// Lab_06_3(it).cpp
// <¬асилик ёл≥€>
// Ћабораторна робота є6.3(≥терац≥йний спос≥б)
//ќпрацюванн€ одновим≥рних масив≥в за допомогою звичайних функц≥й та шаблон≥в
// ¬ар≥ант 2

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

template<typename T>
void Create(T* a, const int size, T Low, T High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template<typename T>
void Print(T* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Max(int* a, const int size)
{
	int max; // максимальний елемент
	int imax = -1; // ≥ндекс максимального елемента
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0)
		{
			max = a[i]; // перший елемент, що
			imax = i; // задовольн€Ї умов≥ Ц
			break; // вважаЇмо максимальним
		}
	if (imax == -1)
	{
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
		return 0;
	}

	for (int i = imax + 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;
}

template<typename T>
T Max(T* a, const int size)
{
	T max; // максимальний елемент
	int imax = -1; // ≥ндекс максимального елемента
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0)
		{
			max = a[i]; // перший елемент, що
			imax = i; // задовольн€Ї умов≥ Ц
			break; // вважаЇмо максимальним
		}
	if (imax == -1)
	{
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
		return 0;
	}

	for (int i = imax + 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;
}


int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low= "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create<int>(a, n, Low, High);
	Print<int>(a, n);
	cout << "max = " << Max<int>(a, n) << endl;
	delete[] a;
	a = nullptr;
	return 0;

}

