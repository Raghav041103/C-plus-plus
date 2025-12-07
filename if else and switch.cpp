#include<iostream>
using namespace std;

// Corrected function signature and return statement
int main() 
{
    int age;
    cout << "tell me ur age" << endl;
    cin >> age;

    if (age < 18) {
        cout << "kid" << endl;
    } else if (age == 18) {
        cout << "adult ho gaya" << endl;
    } else {
        cout << "sahi hai age " << endl;
    }

    //switch case example
    switch(age)
    {
        case 18:
            cout<<"you are 18"<<endl;
            break;
        case 22:
            cout<<"you are 22"<<endl;
            break;
        case 2:
            cout<<"you are 2"<<endl;
            break;
        default:
            cout<<"no special age"<<endl;
            break;
    }

    // Standard practice for int main()
    return 0;
}
