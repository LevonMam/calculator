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
int hamematum(int firstnum, int secnum)
{

	if(firstnum>secnum)
	{
		return firstnum;

	}
	else
	{
		return secnum;
	}





int minus(int firstnum, int secnum)
{   
	int result;

	result = firstnum - secnum;
	return result;


}

int sum (int first, int sec){
int res;
res=first+sec;
return res;
}
