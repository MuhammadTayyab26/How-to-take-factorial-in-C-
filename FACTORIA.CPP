#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
float fac;
fac=1;
cout<<"enter the value you want to find factorial :";
cin>>n;
while(n>0)
{
fac=fac*n;
--n;
}
cout<<"factorial value:"<<fac<<endl;
getch();
return 0;
}
