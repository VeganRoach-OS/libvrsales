#ifndef SESSION_H
#define SESSION_H

class Customer;
class Quote;
class Order;
class Invoice;
class Payment;
class Logger;
class Database;

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
