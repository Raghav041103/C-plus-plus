//predecence of operators in c++
#include<iostream>
#include<iomanip>

using namespace std;
int main() {
    const float g =3.14;
    char cg='c';
    cout<<"The value of cg is "<<cg<<endl;
    cout<<"The value of g is "<<g<<endl;
    int a=4 , b=5, c=1233;
    cout<<"the value of a is  "<<a<<endl;
    cout<<"the value of b is  "<<b<<endl;
    cout<<"the value of c is  "<<c<<endl;

    cout<<"the value of a with setw as "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw as "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw as "<<setw(4)<<c<<endl;

    //operator in c++
    int x=4, y=5;
    int f = ((x*5) + (y-45))+980;
    cout<<"The value of f is "<<f<<endl;
    return 0;
}