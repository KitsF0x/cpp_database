#pragma once

#include <algorithm>
#include <string>
#include <vector>

#include "DatabaseNotFoundException.hpp"
#include "Database.hpp"

class DatabaseSystem
{
private:
    std::vector<Database> databases;

public:
    void createDatabase(const std::string &name);
    std::size_t getDatabaseCount() const;
    void dropDatabase(const std::string &name);
    Database getDatabaseByName(const std::string &name) const;
};