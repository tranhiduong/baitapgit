#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
};
=======
int tong(int a, int b)
{
	return a+b;
};
int hieu(int a, int b);
>>>>>>> 4263623bc9300d695eae97f8b8b9ecc9a0168a94

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan=='-')
        cout << "Ket qua hieu la =" << hieu(a,b)<<endl;   
=======
	if(phepToan=='+')
        cout << "Ket qua tong la =" << tong(a,b)<<endl;   
>>>>>>> 4263623bc9300d695eae97f8b8b9ecc9a0168a94
	system("pause");
	return 0;
}