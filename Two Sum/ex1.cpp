#include<iostream>
using namespace std;
#define n 10


int main()
{
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    int sum=0,v=a[n],m=a[n];

    for(int i=0 ; i<10 ; i++)
    {
        cout<<" "<<a[i];
    }
    
    // cout << "\n\nEnter First Array  : ";
    // cin >> a[n];

    // cout << "Enter Second Array : ";
    // cin >> a[m];
    cout << "Enter The Sum : ";
    cin >> sum ;

    sum = a[v] + a[m];
    cout << endl;
    
    cout << "First Array  : "<< a[v] << endl;
    cout << "Secend Array : "<< a[m] << endl;

    
    
    return 0;
}

/*

1 2 3 4 5 6 7 8 9 10
Sum : 3

*/