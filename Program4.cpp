#include<iostream>
using namespace std;
void Display(int iValue)
{
	int i=0;
	for(i=1;i<=iValue;i++)
	{
		cout<<"Marvellous\n";
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