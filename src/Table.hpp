#pragma once

#include <string>

class Table
{
public:
    Table(const std::string &name);
    std::string getName() const;
};