/*
	����ע��
*/
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout << "��һ��C++����\n";
	cout << "�ڻ����������\n";

	int x;
	int y;
	//int x(63);
	//int x{ 63 };
	//x = 63;
	//y = 18;

	//cout << "x��y" << "��ƽ��ֵ��" << (x + y) / 2 << "��\n";

	/*cout << "x��ֵ��";
	cin >> x;

	cout << "y��ֵ��";
	cin >> y;

	cout << "x*y��ֵ��" << x * y << "��";*/

	srand(time(NULL));
	int lucky = rand() % 10;
	cout << "��������������ǣ�" << lucky << "��\n";
}