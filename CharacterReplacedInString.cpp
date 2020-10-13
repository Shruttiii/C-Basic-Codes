#include<iostream>
using namespace std;
class StringChange
{
char string[80],ch;
int i,n=0;
public:
    void string_in()
    {
cout<<"Enter a string"<<endl;
cin.getline(string,80);
    }
    void change()
    {
cout<<"Enter a character to change"<<endl;
cin>>ch;
for(i=0;string[i]!=0;i++)
{
if(string[i]==ch)
string[i]='*';
}
    }
    void String_out()
    {
cout<<"Changed string is as followed"<<endl;
cout.write(string,80);
}
};
int main ()
{

    StringChange s1;
    s1.string_in();
    s1.change();
    s1.String_out();
    return 1;
}
