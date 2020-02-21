// printPrimeNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"

using namespace std;

int checkPrimeNumber(int n) {

	if (n < 2*2) return 1;

	for (int j = 2; j <= sqrt(n); j++) {

		if (n % j == 0) {
			return 0;
		}
	}
	return 1;

}

int main()
{
	int totalNum = 100;

	for (int i = 1; i < totalNum; i++) {

		int res = checkPrimeNumber(i);

		if (res == 1) {
			cout << "the number is:" << i << endl;
		}
	}

	system("pause");

    return 0;
}

