#include "DatabaseNotFoundException.hpp"

DatabaseNotFoundException::DatabaseNotFoundException(const std::string &databaseName)
    : std::runtime_error(std::string("Database " + databaseName + " not found.").c_str())
{
}