#include <iostream>
using namespace std;
int main()
{
	int idade;
	cout<<"Idade do competidor: ";
	cin>>idade;
	if (idade>7&&idade<=12)
	{
		cout<<"Categoria: INFANTIL";
	}
	else if (idade>=13&&idade<=17)
	{
		cout<<"Categoria: JUVENIL";
	}
	else if (idade>=18&&idade<=49)
	{
		cout<<"Categoria: ADULTO";
	}
	else if (idade>=50&&idade<=99)
	{
		cout<<"Categoria: SENIOR";
	}
	else if (idade<=6)
	{
		cout<<"Categoria: Vai tomar mamadeira";
	}
	else
	{
		cout<<"Categoria: PE NA COVA!";
	}
}
