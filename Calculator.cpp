#include <iostream>
using namespace std;
int degree();
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

		cout<<minus(num1,num2)<<endl;
		return;
	}

	if(simvol == '/')
	{

		cout<<baj(num1,num2)<<endl;
		return;
	}

}else{
	cout<<"Enter normal num & simvol";
	calc();

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





	int minus(int num1, int num2)
	{   
		int result;

		result = num1 - num2;
		return result;


	}

	int sum (int num1, int num2){
		int result;
		result=num1 + num2;
		return result;
	}

	int baj (int num1, int num2){
		int result;

		if(num2 == 0)
		{
			exit 0;
		}
		else
			result=num1/num2;
		return result;

	}









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

