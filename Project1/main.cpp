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
	//���ǵ� ������ ����� 
	srand((unsigned int)time(NULL));
	cout << "���ǵ� ������ Ǯ�� ����!" << endl;

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
			cout << "����" << endl;
			cout << endl;
		}
		else if (PlayerC != c) {
			cout << "Ʋ�Ƚ��ϴ�. ������ �ٽ� �������ּ���" << endl;
			break;
		}
	}
	clock_t t2 = clock();

	double duration = (double)(t2 - t1) / CLOCKS_PER_SEC;
	cout << "10���� Ǫ�� �� �ð�: " << duration << endl;

	return 0;
}