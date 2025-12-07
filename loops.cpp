//loops in c++
#include <iostream>
using namespace std;
int main()
{
    // for loop 
    cout<<"for loop"<<endl;
    int i=1;
    for(i=1; i<=100; i++){
        cout<<i<<endl;

    }
    // while loop
    cout<<"while loop"<<endl;
    int j=0;
    while(j<=5){
        cout<<j<<endl;
        j++;
    }
    
    cout<<"do while loop"<<endl;
    int k=0;
    do{
        cout<<k<<endl;
        k++;
    }while(k<=5);
    return 0;
}