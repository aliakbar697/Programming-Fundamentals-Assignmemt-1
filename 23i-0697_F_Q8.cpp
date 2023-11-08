//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f,g,h,i,j,k,l;
cout<<" Enter the number of gallons : ";
cin>>a;
b=((a<=100)&&1)*a;
c=b*0.45;
d=((a>100&&a<=350)&&1)*a;
e=d*0.85;
f=((a>350&&a<=600)&&1)*a;
g=f*1.45;
h=(a>600&&1)*a;
i=h*2.60;
j=c+e+g+i;
k=j*0.14;
l=j+k;
cout<<"The Total water consumption bill is :"<<l<<"$"<<endl;

return 0;
}
