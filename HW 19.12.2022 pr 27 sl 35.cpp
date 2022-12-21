
#include <iostream>
#include "Customer.h"
#include "User.h"
using namespace std;

int main()
{
    Customer cust1; 
    cust1.ammountOfProducts = 10;
    cust1.out();
    User u1;
    u1.age = 15;
    u1.out();
}
