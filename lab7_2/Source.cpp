// Source.cpp
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void create(vector<int>& arr, int n);
void print(vector<int> arr, int n);
bool task(vector<int> arr, int n);

int main() {
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	vector<int> arr = { 0 };
	create(arr, n);
	print(arr, n);
	cout << "Sum = " << task(arr, n) << endl;

	system("pause");
	return 0;
}

void create(vector<int>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void print(vector<int> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

bool task(vector<int> arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0){
			sum += arr[i];
		}
	return sum;
}