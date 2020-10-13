#include<iostream>
using namespace std;
class Occurence
{
char string[20],ch;
int i,n=0,j;
public:
    void string_In()
    {
cout<<"Enter a string"<<endl;
cin.getline(string,20);
    }
    void result()
    {
for(int j=0; string[j]!=0;j++)
{
    n=0;
for(i=0;string[i]!=0;i++)
{
if(string[i]==string[j])
n++;
}
cout<<string[j]<<" is printed "<<n<<" times"<<endl;
}
    }




};
int main()
{
Occurence str1;
str1.string_In();
str1.result();


return 1;

}

