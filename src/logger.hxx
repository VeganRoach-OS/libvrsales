#ifndef LOGGER_H
#define LOGGER_H

class Logger
{
    public:
        void info(std::string);
        void warning(std::string);
        void severe(std::string);
        void fatal(std::string);
};

#endif
