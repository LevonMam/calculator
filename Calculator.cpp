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
int procent();
int main()
{
        procent();
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









<<<<<<< HEAD
	int degree(int num1, int num2){
		int result.;
		if (num2>0){
			for (int i=0; i<num2; i++){
				result*=num1;
			}
			return result;
		}else{
			return 1;
		}
	}

 int procent()

 {
     int tiv1;
     int tokos;
    float tiv2;
    cout<<endl<< tiv1 ;
     cin>>tiv1;
     cout <<endl<<tokos;
     cin>>tokos;
     tiv2 =tiv1*tokos/100;
     cout<<endl<<tiv2;
     
     return 0;
 }
=======

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




<<<<<<< HEAD
int mnacord(int num1, int num2){
int result;
result=num1%num2;
return result;
}
>>>>>>> 578c7c41c9c50cbcb278e06047ae17f4d97de875
=======
	int mnacord(int num1, int num2){
		int result;
		result=num1%num2;
		return result;
	}
>>>>>>> e80fc6b1d8c5a8c538bb228dba5520dd0a73d8c3

