#include<iostream>
using namespace std;

int findbigchild(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {/*����ȫ����ֵ*/
		if (n%i == 0) {/*����ֵΪ����ʱ�����ж�*/
			int j = 2;
			for (j; j < i; j++) {/*�ж��Ƿ�������*/
				if (i%j == 0) {/*��������*/
					break;
				}
			}
			if (j == i) {/*�Ǹ�ֵ*/
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