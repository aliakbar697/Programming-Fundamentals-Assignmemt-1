//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,n4,max1,max2,a;
cout<<" Enter the number n1 : ";
	cin>>n1;
cout<<" Enter the number n2 : ";
	cin>>n2;
cout<<" Enter the number n3 : ";
	cin>>n3;
cout<<" Enter the number n4 : ";
	cin>>n4;	
max1=(n1>n2&&n1>n3&&n1>n4 ? n1:n2&&n2>n3&&n2>n4 ? n2:n3&&n3>n4 ? n3:n4);
cout<<" The first maximum value is :"<<max1<<endl;


//cout<<" The second maximum value is:"<<max2<<endl;
return 0;
}
