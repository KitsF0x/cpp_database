#include "DatabaseSystem.hpp"

void DatabaseSystem::createDatabase(const std::string &name)
{
    databases.push_back(name);
}

std::size_t DatabaseSystem::getDatabaseCount() const
{
    return databases.size();
}

void DatabaseSystem::dropDatabase(const std::string &name)
{
    if (std::find(databases.begin(), databases.end(), name) == databases.end())
    {
        throw DatabaseNotFoundException(name);
    }
    else
    {
        auto it = std::find(databases.begin(), databases.end(), name);
        databases.erase(it);
    }
}
