#include<iostream>
using namespace std;
int main()
{
	int anoAtual,anoNasc,idade;
	cout<<"Ano atual: ";
	cin>>anoAtual;
	cout<<"Ano de Nascimento: ";
	cin>>anoNasc;
	idade=anoAtual-anoNasc;
	cout<<"Você tem ou fará "<<idade<<" anos.";
	if (idade>=16)
	{
		cout<<"Você já pode votar!";
	}	
	else
	{
		cout<<"Voce não pode votar!";
	}
}

