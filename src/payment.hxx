#ifndef PAYMENT_H
#define PAYMENT_H

class Payment
{
    public:
        Payment(std::string,
                int);
        ~Payment();

        std::string getName();
        int getID();
        Customer getCustomer();

        void setName(std::string);
    private:
        std::string name;
        int id;
        int customer;
};

#endif
