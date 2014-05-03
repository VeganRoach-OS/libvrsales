#ifndef SESSION_H
#define SESSION_H

#include "logger.hxx"
#include "database.hxx"

class Customer;
class Quote;
class Order;
class Invoice;
class Payment;

class VRSalesSession
{
    public:
        VRSalesSession(std::string);
        ~VRSalesSession();
    private:
        Logger logger;
        Database db;
};

#endif
