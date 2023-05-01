#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int a,i,j;

    cout<<"Find prime numbers upto : ";
    cin>>a;

    cout<<endl<<"All prime numbers upto "<<a<<" are : "<<endl;

    for(i=1;i<=a;i++) {

        for(j=2;j<=(i/2);j++) {

            if(i%j==0) {
                j=i;
                break;
            }
        }

        if(j != i) {
            cout<<i<<endl;
        }
    }

    getch();
}
