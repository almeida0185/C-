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
		cout<<"Este é um triangulo equilátero!";
	}
	else if (lado1==lado2||lado2==lado3||lado3==1)
	{
		cout<<"Este é um trinagulo escaleno!";
	}
	else 
	{
		cout<<"Este é um triangulo isóceles!";
		
	}
}
