#include <iostream>
int sum();
int main(){
	int firstnum;
	int secnum;
	char gorc;
	cout<<"enter number 1"<<endl;
	cin >> firsnum>>endl;
	cout<<"enter number 2"<<endl;
	cin >> secnum>>endl;
	cout <<"gorcoxutyan nshan"<<endl;
	cin >> gorc;
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
