#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "Enter N" << endl;
	cin >> N;
	int min, max;
	cout << "Enter MIN and MAX" << endl;
	cin >> min >> max;
	int* a = new int[N];
	int* b = new int[max - min + 1];
	for (int i = 0; i < max - min + 1; i++) {
		b[i] = i + min;
	}
	for (int i = 0; i < N; i++) {
		int k = rand() % (max - min);
		a[i] = b[k];
		b[k] = b[max - min];
		max--;
		cout << a[i] << " ";
	}
}