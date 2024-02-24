#pragma once

#include <string>
#include <vector>

#include "Column.hpp"
#include "ColumnNotFoundException.hpp"
#include "IType.hpp"

class Table
{
private:
    std::vector<Column> columns;

public:
    Table(const std::string &tableName);
    std::string getName() const;
    void addColumn(const std::string &columnName, DataType::IType *type);
    std::size_t getColumnCount() const;
    Column getColumnByName(const std::string &columnName);
};