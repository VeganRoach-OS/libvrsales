#ifndef SESSION_H
#define SESSION_H

class Customer;
class Quote;
class Order;
class Invoice;
class Payment;
class Logger;
class Database;

class Session
{
    public:
        Session(std::string);
        ~Session();
    private:
        Logger logger;
        Database db;
};

#endif
