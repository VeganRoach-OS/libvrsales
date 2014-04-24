#ifndef QUOTE_H
#define QUOTE_H

class Customer;
class Product;

class Quote
{
    public:
        Quote(std::string,int);
        ~Quote();

        void convertToOrder(std::string);
        void copy(std::string);

        std::string getName();
        int getID();
        std::vector<Product> getItems();
        Customer getCustomer();

        void setName(std::string);
        void addProduct(Product);
        void removeProduct(int);
        void removeProduct(Product);
    private:
        std::string name;
        int id;
        std::vector<Product> items;
};

#endif
