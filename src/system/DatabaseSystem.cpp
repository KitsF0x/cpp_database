#include "DatabaseSystem.hpp"

void DatabaseSystem::createDatabase(const std::string &name)
{
    databases.push_back(Database{name});
}

std::size_t DatabaseSystem::getDatabaseCount() const
{
    return databases.size();
}

void DatabaseSystem::dropDatabase(const std::string &name)
{
    auto it = std::find_if(databases.begin(), databases.end(), [name](const Database &database)
                           { return database.getName() == name; });
    if (it != databases.end())
    {
        databases.erase(it);
        return;
    }
    throw DatabaseNotFoundException{name};
}

Database DatabaseSystem::getDatabaseByName(const std::string &name) const
{
    auto it = std::find_if(databases.begin(), databases.end(), [name](const Database &database)
                           { return database.getName() == name; });
    if (it != databases.end())
    {
        return *it;
    }
    throw DatabaseNotFoundException{name};
}
