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
	cout<<"Voc� tem ou far� "<<idade<<" anos.";
	if (idade>=16)
	{
		cout<<"Voc� j� pode votar!";
	}	
	else
	{
		cout<<"Voce n�o pode votar!";
	}
}

