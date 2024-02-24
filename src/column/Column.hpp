#pragma once
#include <string>

#include "IType.hpp"

class Column
{
private:
    std::string name;
    DataType::IType *type;

public:
    Column(const std::string &name, DataType::IType *type);
    std::string getName() const;
    DataType::IType *getType() const;
};