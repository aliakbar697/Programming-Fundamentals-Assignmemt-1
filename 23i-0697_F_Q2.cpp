//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
using namespace std;
int main()
{ 
int n1,n2,n3;
cout<<" Enter the positive number n1 : ";
	cin>>n1;
cout<<" Enter the positive number n2 : ";
	cin>>n2;
cout<<" Enter the positive number n3 : ";
	cin>>n3;
	n1=n1%10;
	n2=n2%10;
	n3=n3%10;
bool exp=(n1==n2 || n2==n3 || n1==n3);
cout<<boolalpha<<exp<<endl;
return 0;
}
