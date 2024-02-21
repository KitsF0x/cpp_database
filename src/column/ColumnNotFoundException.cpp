#include "ColumnNotFoundException.hpp"

ColumnNotFoundException::ColumnNotFoundException(const std::string &columnName)
    : std::runtime_error("Column '" + columnName + "' not found")
{
}