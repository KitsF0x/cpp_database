#pragma once

#include <stdexcept>

class DatabaseNotFoundException : public std::runtime_error
{
public:
    DatabaseNotFoundException(const std::string &databaseName);
};