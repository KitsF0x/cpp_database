#pragma once

#include <string>
#include <vector>

#include "DatabaseNotFoundException.hpp"

class DatabaseSystem
{
private:
    std::vector<std::string> databases;

public:
    void createDatabase(const std::string &name);
    std::size_t getDatabaseCount() const;
    void dropDatabase(const std::string &name);
};