#ifndef CUSTOMER_H
#define CUSTOMER_H

class VRSalesSession;

class Customer
{
    public:
        Customer(VRSalesSession,int);
        ~Customer();

        std::string getName();
        int getID();

        void setName(std::string);
    private:
        int id;
};

#endif
