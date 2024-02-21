#include "Column.hpp"

Column::Column(const std::string &name)
{
    this->name = name;
}

std::string Column::getName() const
{
    return name;
}