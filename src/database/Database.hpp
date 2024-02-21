#pragma once
#include <string>
#include <vector>

#include "TableNotFoundException.hpp"
#include "Table.hpp"

class Database
{
private:
    std::string name;
    std::vector<Table> tables;

public:
    Database(const std::string &databaseName);
    std::string getName() const;
    void createTable(const std::string &tableName);
    std::size_t getTableCount() const;
    void dropTable(const std::string &tableName);
    Table getTableByName(const std::string &tableName) const;
};