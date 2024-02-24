#pragma once

#include <string>

namespace DataType
{
    class IType
    {
    public:
        virtual void setValueFromString(const std::string &value) = 0;
        virtual std::string getValueAsString() = 0;
        virtual ~IType() = default;
    };
}