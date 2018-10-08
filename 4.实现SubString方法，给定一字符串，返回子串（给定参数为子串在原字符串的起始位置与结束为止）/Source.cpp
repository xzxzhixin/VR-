#include<iostream>
using namespace std;

/*传入字符串，开始结束位置，以及保存的子串*/
void SubString(char *arr,int begin,int end,char *ans) {
	int j = 0;
	for (; j < end; j++) {
		ans[j] = arr[begin++];
	}
	ans[j] = '\0';
}

int main() {
	char a[] = "asdgjklj34to98hiofnghkjn  kjnkjfhguij", b[38];
	SubString(a, 2, 9, b);
	cout << b;
	return 0;
}