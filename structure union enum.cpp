//structure union enum
#include <iostream>
using namespace std;
typedef struct employee {
    int id;
    char fav_char;
    float salary;
}ep;
 int main() {
    // struct employee Raghav;
    // struct employee Shubham;
    // Shubham.id = 42;
    // Shubham.fav_char = 'x';
    // Shubham.salary = 25000.75;
    // Raghav.id = 1;
    // Raghav.fav_char = 'c';
    // Raghav.salary = 12000.50;
    // cout << "The id of employee is: " << Raghav.id << endl;
    // cout << "The fav_char of employee is: " << Raghav.fav_char << endl;
    // cout << "The salary of employee is: " <<Raghav.salary << endl;
   ep Raghav;
    ep Shubham;
    Shubham.id = 42;
    Shubham.fav_char = 'x';
    Shubham.salary = 25000.75;
    Raghav.id = 1;
    Raghav.fav_char = 'c';
    Raghav.salary = 12000.50;
    cout << "The id of employee is: " << Raghav.id << endl;
    cout << "The fav_char of employee is: " << Raghav.fav_char << endl;
    cout << "The salary of employee is: " <<Raghav.salary << endl;
typedef union money {
    //data members
    int rice;
    char car;
    float pounds;
}mn;

    mn m1;
    m1.rice = 34;
    cout << "The rice value is: " << m1.rice << endl;
    m1.car = 'c';
    cout << "The car value is: " << m1.car << endl;
    m1.pounds = 45.56;
    cout << "The pounds value is: " << m1.pounds << endl;

    return 0;
}