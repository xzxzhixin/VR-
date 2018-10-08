#include<iostream>
using namespace std;

void swap(int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}

int *sort(int a[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	return a;
}

int main() {
	int a[] = {4234,156,646,7345,77,45};
	int *b = sort(a, 6);
	for (int i = 0; i < 6; i++) {
		cout << b[i] << endl;
	}
	return 0;
}
