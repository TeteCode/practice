#include <iostream>
using namespace std;

int main()
{
	/*int n;

	cout << "����ֵ";
	cin >> n;

	if (n > 0)
	{
		cout << "���ֵΪ��";
	}
	else
	{
		cout << "���ֵΪ0��";
	}*/

	//1 <= a <= 3 (����)

	/*int a, b;
	cout << "����a��";
	cin >> a;

	cout << "����b��";
	cin >> b;
	
	if (a == b) cout << "a��b��ֵ��ȣ�";
	else cout << "a��b��ֵ����ȣ�";*/

	/*int n;
	cout << "����n��";
	cin >> n;

	if (!n) cout << "���ֵ��0";
	else cout << "���ֵ����0";*/

	/*int n;
	cout << "����n��";
	cin >> n;

	if (n > 0) cout << "���ֵ������";
	else if( n < 0) cout << "���ֵ�Ǹ���";
	else cout << "���ֵ��0";*/

	/*int n;
	cout << "����n��";
	cin >> n;

	if (n > 0) 
		if(n % 2 == 0) cout << "�������ż��";
		else cout << "�����������";
	else cout << "������Ǹ���";*/

	/*int n;
	cout << "����n��";
	cin >> n;

	if (n == 0) cout << "�������0";
	else if (n >= -9 && n <= 9) cout << "�������1λ��";
	else cout << "�������2λ�����ϵ���";*/

	/*int month;
	cout << "�жϼ��ڡ�\n �����·ݣ�";
	cin >> month;*/

	/*if (month >= 3 && month <= 5) cout << "���Ǵ���";
	else if (month >= 6 && month <= 8) cout << "�����ļ�";
	else if (month >= 9 && month <= 11) cout << "�����＾";
	else if (month == 12 || month == 1 || month == 2) cout << "���Ƕ���";
	else cout << "û������·�";*/

	/*if (month <1 || month >12) cout << "û������·�";
	else if (month <= 5) cout << "���Ǵ���";
	else if (month <= 8) cout << "�����ļ�";
	else if (month <= 11) cout << "�����＾";
	else cout << "���Ƕ���";*/

	/*int a, b;
	cout << "����a��";
	cin >> a;
	cout << "����b��";
	cin >> b;

	int min;
	min = a < b ? a : b;
	cout << "��СֵΪ" << min;
	cout << "��Ϊ" << (a < b ? b - a : a - b);*/

	/*int a, b, c ;
	cout << "����a��";
	cin >> a;
	cout << "����b��";
	cin >> b;
	cout << "����c��";
	cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	cout << "���ֵΪ" << max;*/

	/*int n;
	cout << "������";
	cin >> n;

	if (int mod = n % 10)
	{
		cout << "��������ܱ�10����\n";
		cout << "����Ϊ��" << mod;
	}
	else cout << "������ɱ�10����";*/

	double x;

	cout << "ʵ��ֵ��";
	cin >> x;

	if (double a = fmod(x,10))
	{
		cout << "��������ܱ�10����\n";
		cout << "����Ϊ��" << a;
	}
	else cout << "������ɱ�10����";
}

