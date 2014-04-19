#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
    public:
        Product(std::string);
        ~Product();

        std::string getName();
        int getID();
        double getPrice();
        double getQty();
        double getTotalPrice();

        void setName(std::string);
        void setPrice(double);
    private:
        std::string name;
        int id;
        double price;
        double qty;
};

#endif
