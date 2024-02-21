#include "Database.hpp"

Database::Database(const std::string &databaseName)
{
    this->name = name;
}

std::string Database::getName() const
{
    return name;
}

void Database::createTable(const std::string &tableName)
{
    tables.push_back(tableName);
}

std::size_t Database::getTableCount() const
{
    return tables.size();
}

void Database::dropTable(const std::string &tableName)
{

    auto it = std::find_if(tables.begin(), tables.end(), [tableName](const Table &table)
                           { return table.getName() == tableName; });

    if (it == tables.end())
    {
        throw TableNotFoundException{tableName};
    }
    tables.erase(it);
}

Table Database::getTableByName(const std::string &tableName) const
{
    auto it = std::find_if(tables.begin(), tables.end(), [tableName](const Table &table)
                           { return table.getName() == tableName; });

    if (it == tables.end())
    {
        throw TableNotFoundException{tableName};
    }
    return *it;
}
