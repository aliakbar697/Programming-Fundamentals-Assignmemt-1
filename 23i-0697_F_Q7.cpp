//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
unsigned short int a,i;
cout<<"Enter any number :";
cin>>a;
cout<<"Binary code : "<<bitset<16>(a)<<endl;
	i=a>>1;
cout<<"Grey code :"<<bitset<16>(a^i)<<endl;
return 0;
} 
