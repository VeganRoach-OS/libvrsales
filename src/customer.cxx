#include <iostream>
#include "customer.hxx"

using namespace std;

string name;
int id;

Customer::Customer(string n)
{
    name = n;
}

Customer::~Customer()
{
    // todo: Save all variables to database
}

string getName()
{
    return name;
}

int getID()
{
    return id;
}

void setName(string n)
{
    name = n;
}
