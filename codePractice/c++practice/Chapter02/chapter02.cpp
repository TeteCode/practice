#include <iostream>
using namespace std;

int main()
{
	/*int n;

	cout << "整数值";
	cin >> n;

	if (n > 0)
	{
		cout << "这个值为正";
	}
	else
	{
		cout << "这个值为0或负";
	}*/

	//1 <= a <= 3 (不行)

	/*int a, b;
	cout << "整数a：";
	cin >> a;

	cout << "整数b：";
	cin >> b;
	
	if (a == b) cout << "a和b的值相等！";
	else cout << "a和b的值不相等！";*/

	/*int n;
	cout << "整数n：";
	cin >> n;

	if (!n) cout << "这个值是0";
	else cout << "这个值不是0";*/

	/*int n;
	cout << "整数n：";
	cin >> n;

	if (n > 0) cout << "这个值是正数";
	else if( n < 0) cout << "这个值是负数";
	else cout << "这个值是0";*/

	/*int n;
	cout << "整数n：";
	cin >> n;

	if (n > 0) 
		if(n % 2 == 0) cout << "这个数是偶数";
		else cout << "这个数是奇数";
	else cout << "这个数是负数";*/

	/*int n;
	cout << "整数n：";
	cin >> n;

	if (n == 0) cout << "这个数是0";
	else if (n >= -9 && n <= 9) cout << "这个数是1位数";
	else cout << "这个数是2位及以上的数";*/

	/*int month;
	cout << "判断季节。\n 输入月份：";
	cin >> month;*/

	/*if (month >= 3 && month <= 5) cout << "这是春季";
	else if (month >= 6 && month <= 8) cout << "这是夏季";
	else if (month >= 9 && month <= 11) cout << "这是秋季";
	else if (month == 12 || month == 1 || month == 2) cout << "这是冬季";
	else cout << "没有这个月份";*/

	/*if (month <1 || month >12) cout << "没有这个月份";
	else if (month <= 5) cout << "这是春季";
	else if (month <= 8) cout << "这是夏季";
	else if (month <= 11) cout << "这是秋季";
	else cout << "这是冬季";*/

	/*int a, b;
	cout << "整数a：";
	cin >> a;
	cout << "整数b：";
	cin >> b;

	int min;
	min = a < b ? a : b;
	cout << "较小值为" << min;
	cout << "差为" << (a < b ? b - a : a - b);*/

	/*int a, b, c ;
	cout << "整数a：";
	cin >> a;
	cout << "整数b：";
	cin >> b;
	cout << "整数c：";
	cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	cout << "最大值为" << max;*/

	/*int n;
	cout << "整数：";
	cin >> n;

	if (int mod = n % 10)
	{
		cout << "这个数不能被10整除\n";
		cout << "余数为：" << mod;
	}
	else cout << "这个数可被10整除";*/

	double x;

	cout << "实数值：";
	cin >> x;

	if (double a = fmod(x,10))
	{
		cout << "这个数不能被10整除\n";
		cout << "余数为：" << a;
	}
	else cout << "这个数可被10整除";
}

