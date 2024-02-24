#include "Text.hpp"

void DataType::Text::setValueFromString(const std::string &value)
{
    this->value = value;
}

std::string DataType::Text::getValueAsString()
{
    return value;
}
