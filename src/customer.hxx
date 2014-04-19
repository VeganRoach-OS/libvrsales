#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
    public:
        Customer(std::string);
        ~Customer();

        std::string getName();
        int getID();

        void setName(std::string);
    private:
        std::string name;
        int id;
};

#endif
