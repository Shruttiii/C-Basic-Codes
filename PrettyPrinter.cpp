#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class PrettyPrinter
{
	int l,i,F=0;
	char string[50];
public:
    void input()
    {
	cout<<"Enter a string"<<endl;
	cin.getline(string,50);

	 l=strlen(string);
    }
    void check()
    {
	for(i=0;i<=l;i++)
	{
		cout<<string[l];
		F++;

		if(F==5)
		{
			cout<<"*";
			F=0;
		}
	}
}
};
int main(){
PrettyPrinter p1;
p1.input();
p1.check();
return 1;}
