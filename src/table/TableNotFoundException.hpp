#pragma once

#include <stdexcept>

class TableNotFoundException : public std::runtime_error
{
public:
    TableNotFoundException(const std::string &tableName);
};