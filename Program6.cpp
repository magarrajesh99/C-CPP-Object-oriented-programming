#include<iostream>
using namespace std;
void Display(int iValue)
{
	int i=0;
	
	if(iValue==0)
	{
		cout<<"Your entered number is 0";
	}
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(i=1;i<=iValue;i++)
	{
		cout<<i<<"\n";
	}
}
int main()
{
	int iNo=0;
	
	cout<<"Enter number\n";
	cin>>iNo;
	
	Display(iNo);
	
	return 0;
}