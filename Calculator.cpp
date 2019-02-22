#include <iostream>
#include <cmath>
using namespace std;

int degree(int num1, int num2);
int sum(int num1, int num2);
int minuss(int num1, int num2);
int mnacord(int num1, int num2);
int baj(int num1, int num2);
int hamematum(int num1, int num2);
int procent(int num1, int num2);
void calc();

int main()
{

	calc();

	return 0;
}

void calc(){

	int num1, num2;
	char simvol;
	while(simvol != num1 || simvol == '>' || simvol == '+' || simvol == '-' || simvol == '*' || simvol == '/'|| simvol == '$'|| simvol == '^')

	{
		cout<<"Enter num1: ";
		cin>>num1;
		cout<<"Enter num2: ";
		cin>>num2;

		cout<<"Enter simvol: ";

		cin>> simvol;

		if(simvol == '+')
		{
			cout<<sum(num1,num2)<<endl;
			return;
		}
		if(simvol =='<' || simvol == '>')
		{

			cout<<hamematum(num1,num2)<<endl;
			return;
		}
		if(simvol == '-')
		{

			cout<<minuss(num1,num2)<<endl;
			return;
		}

		if(simvol == '/')
		{

			cout<<baj(num1,num2)<<endl;
			return;
		}

		if(simvol == '%')
		{

			cout<< mnacord(num1,num2)<<endl;
			return;		
		}

		if(simvol == '^')
		{

			cout<< degree(num1,num2)<<endl;
			return;
		}


		if(simvol == '$')
                {

                        cout<< procent(num1,num2)<<endl;
                        return;
                }
	}
}
int hamematum(int num1, int num2)
{
	if(num1>num2)
	{
	return num1;

	}
	else
	{
		return num2;
	}
}

int minuss(int num1, int num2)
{
	int result;
	result = num1 - num2;
	return result;
}

int sum (int num1, int num2)
{
	int result;
	result=num1 + num2;
	return result;
}

int baj (int num1, int num2)
{
	int result;
	if(num2 == 0)
	{
		return 0;
	}
	else
		result=num1/num2;
	return result;
}

int degree(int num1, int num2){
	int result=1;
	if (num2>0){
		for (int i=0; i<num2; i++){
			result*=num1;
		}
		return result;
	}else{
		return 1;
	}
}

int procent(int num1,int num2)

{

	int result;
	result = num1*num2/100;
	return result;
}

int mnacord(int num1, int num2){
	int result;
	result=num1%num2;
	return result;
}

