//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
#include<bitset>
using namespace std;
int main()
{ 
unsigned int a;
cout<<"Enter any number : ";
cin>>a;
cout<<bitset<32>(a)<<endl;
cout<<"Gate 1 :"<<bitset<8>(a&255)<<endl;
cout<<"Gate 2 : "<<bitset<8>(a>>8&255)<<endl;
cout<<"Gate 3 :"<<bitset<8>(a>>16&255)<<endl;
cout<<"Constant : "<<bitset<8>(a>>24&255)<<endl;
cout<<"Key is :"<<bitset<8>((a&255)^(a>>8&255)^(a>>16&255)^(a>>24&255))<<endl;
return 0;
}
