#include<iostream>
using namespace std;
int main()

{int f,number1,number2,sum;

cout<<"Hello!\n";
cout<<"How many numbers do you want to calculate?\nAnswer :- ";
cin>>f;
cout<<endl;
for(int i=1;i<=f;i++)


{cout<<"number1 = ";
cin>>number1;
cout<<"number2 = ";
cin>>number2;

sum=number1+number2;

if((sum%2)==0)
cout<<"sum = "<<sum<<endl<<"It is related to even numbers";

if((sum%2)!=0)
cout<<"sum = "<<sum<<endl<<"It is related to odd numbers";

for(int i=1;i<4;i++)  cout<<endl;  } 	

system("pause");}
