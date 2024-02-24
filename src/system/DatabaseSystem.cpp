#include "DatabaseSystem.hpp"

std::vector<Database>::iterator DatabaseSystem::findDatabaseByName(const std::string &name)
{
    auto it = std::find_if(databases.begin(), databases.end(), [name](const Database &database)
                           { return database.getName() == name; });
    if (it == databases.end())
    {
        throw DatabaseNotFoundException{name};
    }
    return it;
}

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
    databases.erase(findDatabaseByName(name));
}

Database DatabaseSystem::getDatabaseByName(const std::string &name)
{
    return *findDatabaseByName(name);
}
