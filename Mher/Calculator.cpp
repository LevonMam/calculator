#include <iostream>
using namespace std;

void calc();
int main()
{

calc();

return 0;
}

void calc(){

  int num1,num2;
  char simvol;
do{
  cout<<"Enter num1 ";
  cin>>num1;
  cout<<"Enter num 2";
  cin>>num2;

  cout<<"Enter simvol ";

  cin>> simvol;
}while(!num1 || !num2 || simvol != '<' || simvol == '>' || simvol == '+' || simvol == '-' || simvol == '*' || simvol == '/');

 

    if(simvol == 'sum')
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
