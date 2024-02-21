#include "Table.hpp"

Table::Table(const std::string &name)
{
}

std::string Table::getName() const
{
    return "MyTable";
}

void Table::addColumn(const std::string &column)
{
    columns.push_back(Column{column});
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
