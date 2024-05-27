#ifndef RUNTIME_EXCEPTION_H
#define RUNTIME_EXCEPTION_H
#include <iostream>
#include <string>
using std::string;

class RuntimeExecption{
    public:
        RuntimeExecption(const string& err);
        string getMessage() const;

    private:
        string errorMsg;

};


#endif