#include "TableNotFoundException.hpp"

TableNotFoundException::TableNotFoundException(const std::string &tableName)
    : std::runtime_error(std::string("Table " + tableName + " not found.").c_str())
{
}