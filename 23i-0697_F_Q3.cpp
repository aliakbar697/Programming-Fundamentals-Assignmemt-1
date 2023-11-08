//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int b,p,c=30;
float N,i,f,g,h,j,k,l,d;
cout<<" Enter your balance b : ";
	cin>>b;
cout<<" Enter your monthly payment p : ";
	cin>>p;
cout<<" Enter your yearly interest rate i : ";
	cin>>i; 
	i=i/365; 
	f=pow(1+i,c);
	d=1-f; 
	g=b*d/p;
	h=log(1+g); 
	j=log(1+i); 
	k=h/j; 
	l=-1/static_cast<float>(c); 
	N=l*k; 
	cout<<" The Time taken to pay credit card loan : "<<N<<endl;
	return 0;
}
