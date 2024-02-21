#include "Table.hpp"

Table::Table(const std::string &tableName)
{
}

std::string Table::getName() const
{
    return "MyTable";
}

void Table::addColumn(const std::string &columnName)
{
    columns.push_back(Column{columnName});
}

std::size_t Table::getColumnCount() const
{
    return columns.size();
}

Column Table::getColumnByName(const std::string &columnName)
{
    auto it = std::find_if(columns.begin(), columns.end(), [columnName](const Column &column)
                           { return column.getName() == columnName; });

    if (it == columns.end())
    {
        throw ColumnNotFoundException{columnName};
    }
    return *it;
}
