#include<iostream>
using namespace std;

void Display();

int main()
{
	Display();
	
	return 0;
}
void Display()
{
	int iCnt=0;
	for(iCnt=5;iCnt>=1;iCnt--)
	{
		cout<<iCnt<<"\n";
	}
}