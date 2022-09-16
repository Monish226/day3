#include<iostream>
using namespace std;
int main()
{
	int i,j,side,sym;
	cout<<"Enter the side of hollow square=";
	cin>>"side";
	cout<<"Enter the symbol";
	cin>>"sym";
	for(i = 0;i < side; i++)
	{
		for(j = 0;j = side; j++)
		{
			if(i == 1 || i == side-1 ||j == 1 || j == side-1 )
			{
				cout<<"*"<<"";
			}
			else
			{
				cout<<" ";
			}
			cout<<"\n";
		}
}
