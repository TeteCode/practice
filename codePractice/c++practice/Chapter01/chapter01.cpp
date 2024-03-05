/*
	我是注释
*/
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout << "第一个C++程序。\n";
	cout << "在画面上输出。\n";

	int x;
	int y;
	//int x(63);
	//int x{ 63 };
	//x = 63;
	//y = 18;

	//cout << "x和y" << "的平均值是" << (x + y) / 2 << "。\n";

	/*cout << "x的值是";
	cin >> x;

	cout << "y的值是";
	cin >> y;

	cout << "x*y的值是" << x * y << "。";*/

	srand(time(NULL));
	int lucky = rand() % 10;
	cout << "今天的幸运数字是：" << lucky << "。\n";
}