#pragma once
#include <string>

class Column
{
private:
    std::string name;

public:
    Column(const std::string &name);
    std::string getName() const;
};