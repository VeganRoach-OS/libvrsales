#ifndef INVOICE_H
#define INVOICE_H

class Customer;
class Product;
class Quote;
class Order;
class Payment;

class Invoice
{
    public:
        Invoice(std::string,
                int,
                int,
                std::vector<Product>);
        ~Invoice();

        std::string getName();
        int getID();
        Quote getParentQuote();
        Order getParentOrder();
        std::vector<Product> getItems();
        Customer getCustomer();

        void setName(std::string);
        void applyPayment(Payment);
        void excludeProduct(int);
        void excludeProduct(Product);
    private:
        std::string name;
        int id;
        int parentOrder;
        int customer;
        std::vector<Product> items;
};
