#pragma once

#include <string>
#include <vector>

#include "Column.hpp"
#include "ColumnNotFoundException.hpp"

class Table
{
private:
    std::vector<Column> columns;

public:
    Table(const std::string &name);
    std::string getName() const;
    void addColumn(const std::string &column);
    std::size_t getColumnCount() const;
    Column getColumnByName(const std::string &columnName);
};