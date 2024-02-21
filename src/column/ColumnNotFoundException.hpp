#pragma once

#include <stdexcept>

class ColumnNotFoundException : public std::runtime_error
{
public:
    ColumnNotFoundException(const std::string &columnName);
};