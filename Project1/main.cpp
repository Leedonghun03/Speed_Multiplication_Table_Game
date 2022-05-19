#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int Randgugudan(int min, int max);

int Randgugudan(int min, int max)
{
	int n;

	while (true)
	{
		n = rand();

		n = n % max;
		if (n >= 2)
			break;
	}

	return n;
}


int main()
{
	//스피드 구구단 만들기 
	srand((unsigned int)time(NULL));
	cout << "스피드 구구단 풀기 시작!" << endl;

	int n1, n2, c, PlayerC;
	int count = 10;

	clock_t t1 = clock();
	for (int i = 0; i <= count; i++) 
	{
		n1 = Randgugudan(2, 10);
		n2 = Randgugudan(2, 10);

		cout << n1 << " X " << n2 << " = ";
		cin >> PlayerC;

		c = n1 * n2;

		if (PlayerC == c) {
			cout << "정답" << endl;
			cout << endl;
		}
		else if (PlayerC != c) {
			cout << "틀렸습니다. 다음에 다시 도전해주세요" << endl;
			break;
		}
	}
	clock_t t2 = clock();

	double duration = (double)(t2 - t1) / CLOCKS_PER_SEC;
	cout << "10문제 푸는 총 시간: " << duration << endl;

	return 0;
}