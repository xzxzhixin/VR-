#include<iostream>
using namespace std;

void sort(char a[], int len) {
	int number = 0, word = 0, other = 0, space = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] >= '0'&&a[i] <= '9') {
			number++;
		}
		else if (a[i] == ' ') {
			space++;
		}
		else if (a[i] >= 'a'&&a[i] <= 'z' || a[i] >= 'A'&&a[i] <= 'Z') {
			word++;
		}
		else {
			other++;
		}
	}
	cout << "有数字：" << number << endl << "字符：" << word << endl << "空格：" << space << endl << "其他：" << other << endl;
}

int main() {
	char a[] = "asdgasdgaIOHGDSKJG646545465d4 56sad4 54wet waet4 awet54ew84t";
	sort(a, 61);
	return 0;
}