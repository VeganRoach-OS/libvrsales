#include <iostream>
#include "customer.hxx"
#include "session.hxx"

using namespace std;

int id;

Customer::Customer(VRSalesSession session, int i)
{
    id = i;
}

Customer::~Customer()
{
}

string Customer::getName()
{
    // TODO: get name from DB
	return "";
}

int Customer::getID()
{
    return id;
}

void Customer::setName(string n)
{
    // TODO: set name in DB
}
