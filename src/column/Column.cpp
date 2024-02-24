#include "Column.hpp"

Column::Column(const std::string &name, DataType::IType *type)
{
    this->name = name;
    this->type = type;
}

std::string Column::getName() const
{
    return name;
}

DataType::IType *Column::getType() const
{
    return type;
}
