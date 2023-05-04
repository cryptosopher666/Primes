#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b=0;
	cout<<"Enter number: ";
	cin>>a;
	for(int i=2;i<a;i++){
		if(a%i==0)
		b++;
	}
	if(b>0 || a==1)
	cout<<"not prime";
	else
	cout<<"prime";
	getch();
}
