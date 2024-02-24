#include <gtest/gtest.h>
#include "Text.hpp"

TEST(DataTypeTest, Text_WhenCalled_SetValueFromString_ShouldSetValueAsString)
{
    // Arrange
    DataType::Text text;

    // Act
    text.setValueFromString("Hello");

    // Assert
    EXPECT_STREQ("Hello", text.getValueAsString().c_str());
}

TEST(DataTypeTest, Text_WhenCalled_SetValueFromString_WithStringSize65636_ShouldSetValueAsString)
{
    // Arrange
    DataType::Text text;

    // Act
    text.setValueFromString(std::string(65636, 'g'));

    // Assert
    EXPECT_EQ(65636, text.getValueAsString().size());
}