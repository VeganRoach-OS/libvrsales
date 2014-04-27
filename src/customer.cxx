#include <iostream>
#include "customer.hxx"
#include "session.hxx"

using namespace std;

string name;
int id;

Customer::Customer(VRSalesSession session, int i)
{
    id = i;
}

Customer::~Customer()
{
    // TODO: Save all variables to database
}

string Customer::getName()
{
    return name;
}

int Customer::getID()
{
    return id;
}

void Customer::setName(string n)
{
    name = n;
}
