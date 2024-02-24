#pragma once

#include "IType.hpp"

namespace DataType
{
    class Text : public IType
    {
    private:
        std::string value;

    public:
        void setValueFromString(const std::string &value) override;
        std::string getValueAsString() override;
    };
}