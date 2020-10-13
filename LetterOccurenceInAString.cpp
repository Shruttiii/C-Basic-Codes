#include<iostream>
using namespace std;
class LetterOccurence
{
char string[20],ch;
int i,n=0;
public:
    void enterSTRING()
    {
cout<<"Enter a string"<<endl;
cin.getline(string,20);
    }
    void searchElt()
    {
cout<<"Enter a character to search"<<endl;
cin>>ch;
    }
void calc()
{


for(i=0;string[i]!=0;i++)
{
if(string[i]==ch)
n++;
}
if(n==0)
    cout<<"Character not found";
else
    cout<<"Character found"<<endl;

}

};
int main()
{

LetterOccurence str1;
str1.enterSTRING();
str1.searchElt();
str1.calc();
return 1;

}
