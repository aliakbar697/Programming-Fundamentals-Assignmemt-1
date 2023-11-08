//Name : Ali Akbar ,Roll no. :23i-0697 ,Assignment no.1
#include<iostream>
using namespace std;
int main()
{ 
int D,M,Y,E;
cout<<"Enter your date of birth in numeric form : ";
	cin>>D;
cout<<"Enter your month of birth in numeric form : ";
	cin>>M;
cout<<"Enter your year of birth in numeric form : ";
	cin>>Y;
	E=D*M;
cout<<(E==Y?"The Date is Magic":"The Date is not Magic ")<<endl;
return 0;
}
