//Accept number from user and Print that number on reverse order.

#include<iostream>
using namespace std;

void Display(int);

int main()
{
	int iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}
void Display(int iValue)
{
	int iCnt=0;
	for(iCnt=iValue;iCnt>=1;iCnt--)
	{
		cout<<iCnt<<"\n";
	}
}