#include<iostream>
using namespace std;

int findbigchild(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {/*遍历全部数值*/
		if (n%i == 0) {/*当数值为因数时进行判断*/
			int j = 2;
			for (j; j < i; j++) {/*判断是否是质数*/
				if (i%j == 0) {/*不是跳出*/
					break;
				}
			}
			if (j == i) {/*是赋值*/
				ans = i;
			}
		}
	}
	return ans;
}

int main() {
	cout << findbigchild(865751897) << endl;
	return 0;
}