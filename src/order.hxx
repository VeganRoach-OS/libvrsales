#ifndef ORDER_H
#define ORDER_H

class Customer;
class Product;
class Quote;

class Order
{
    public:
        Order(  std::string,
                int,
                int,
                std::vector<Product>);
        ~Order();

        void convertToInvoice();

        std::string getName();
        int getID();
        Quote getParentQuote();
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
