#include <iostream>
using namespace std;
int main()
{
	float lado1, lado2, lado3;
	cout<<"Medida do primeiro lado: ";
	cin>>lado1;
	cout<<"Medida do segundo lado: ";
	cin>>lado2;
	cout<<"Medida do terceiro lado: ";
	cin>>lado3;
	if (lado1==lado2&&lado2==lado3)
	{
		cout<<"Este � um triangulo equil�tero!";
	}
	else if (lado1==lado2||lado2==lado3||lado3==1)
	{
		cout<<"Este � um trinagulo escaleno!";
	}
	else 
	{
		cout<<"Este � um triangulo is�celes!";
		
	}
}
