#include <gtest/gtest.h>

#include "Table.hpp"
#include "ColumnNotFoundException.hpp"

TEST(TableTest, WhenCalled_AddColumn_ShouldIncrementColumnCounter)
{
    // Arrange
    Table table{"MyTable"};

    // Act
    table.addColumn("MyColumn");

    // Assert
    EXPECT_EQ(1, table.getColumnCount());
}

TEST(TableTest, WhenCalled_GetColumnByName_ShouldReturnColumn)
{
    // Arrange
    Table table{"MyTable"};
    table.addColumn("MyColumn");

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