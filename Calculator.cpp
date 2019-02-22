#include <iostream>
#include <cmath>
using namespace std;
int degree(int num1, int num2);
int sum(int num1, int num2);
int minuss(int num1, int num2);
int mnacord(int num1, int num2);
int baj(int num1, int num2);
int hamematum(int num1, int num2);
void calc();
int main()
{

	calc();

	return 0;
}

void calc(){

	int num1, num2;
	char simvol;
	do{
		cout<<"Enter num1 ";
		cin>>num1;
		cout<<"Enter num 2";
		cin>>num2;

		cout<<"Enter simvol ";

		cin>> simvol;
	}while(!num1 || !num2 || simvol != '<' || simvol == '>' || simvol == '+' || simvol == '-' || simvol == '*' || simvol == '/');

	{

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
	}

	if(simvol == '^')
	{

		cout<< degree(num1,num2)<<endl;
	}







}
}
int hamematum(int num1, int num2)
{

	if(num1>num2)
	{
		cout<< num1<<endl;

	}
	else
	{
		cout<<num2<<endl;
	}
}




	int minuss(int num1, int num2){
	   
		int result;

		result = num1 - num2;
		return result;


	}

	int sum (int num1, int num2){
		int result;
		result=num1 + num2;
		cout<< result<<endl;
	}

	int baj (int num1, int num2){
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
		int result;
		if (num2>0){
			for (int i=0; i<num2; i++){
				result*=num1;
			}
			return result;
		}else{
			return 1;
		}
	}




	int mnacord(int num1, int num2){
		int result;
		result=num1%num2;
		return result;
	}

