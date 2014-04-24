#ifndef DATABASE_H
#define DATABASE_H

class Database
{
    public:
        Database(std::string);
        ~Database();

        bool hasValidStructure();
        bool hasTables();

        void createStructure();
    private:
        std::string path;
};

#endif
