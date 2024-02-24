#include <gtest/gtest.h>

#include "Table.hpp"
#include "ColumnNotFoundException.hpp"
#include "Text.hpp"
#include "IType.hpp"

TEST(TableTest, WhenCalled_AddColumn_ShouldIncrementColumnCounter)
{
    // Arrange
    Table table{"MyTable"};

    // Act
    table.addColumn("MyColumn", nullptr);

    // Assert
    EXPECT_EQ(1, table.getColumnCount());
}

TEST(TableTest, WhenCalled_GetColumnByName_ShouldReturnColumn)
{
    // Arrange
    Table table{"MyTable"};
    table.addColumn("MyColumn", nullptr);

    // Act
    Column column = table.getColumnByName("MyColumn");

    // Assert
    EXPECT_EQ("MyColumn", column.getName());
}

TEST(TableTest, WhenCalled_GetColumnByName_WhenColumnDoesNotExits_ShouldThrowColumnNotFoundException)
{
    // Arrange
    Table table{"MyTable"};

    // Act + Assert
    EXPECT_THROW(table.getColumnByName("MyColumn"), ColumnNotFoundException);
}

TEST(TableTest, WhenCalled_AddColumn_WithType_ShouldIncrementColumnCounter)
{
    // Arrange
    Table table{"MyTable"};

    // Act
    table.addColumn("MyColumn", new DataType::Text());

    // Assert
    DataType::IType *type = dynamic_cast<DataType::Text *>(table.getColumnByName("MyColumn").getType());
    EXPECT_NE(type, nullptr);
}