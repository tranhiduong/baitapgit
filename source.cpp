#include <iostream>

using namespace std;


int hieu(int a, int b)
{
	return a-b;
};

int tong(int a, int b)
{
	return a+b;
};
double tich(int a, int b)
{
	return (double)a/b;
};
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,/) ";
	cin >> phepToan;  

	if(phepToan=='-')
	{
		cout<<"Ket qua phep hieu la = "<<hieu(a,b)<<endl;

	if(phepToan=='+')
	{
		cout<<"Ket qua phep tong la = "<<tong(a,b)<<endl;
	} 
	if(phepToan=='/')
	{
		cout<<"Ket qua phep tich la = "<<tich(a,b)<<endl;
	}
	system("pause");
	return 0;
}
