#include <gtest/gtest.h>

#include "Database.hpp"
#include "TableNotFoundException.hpp"
#include "Table.hpp"

TEST(DatabaseTest, WhenCalled_Constructor_ShouldSetNameFromConstructor)
{
    // Arrange
    Database database{"Database"};

    // Act
    std::string name = database.getName();

    // Assert
    EXPECT_STREQ(name.c_str(), "Database");
}

TEST(DatabaseTest, WhenCalled_CreateTable_ShouldIncrementIncrementTableCounter)
{
    // Arrange
    Database database{"Database"};

    // Act
    database.createTable("MyTable");

    // Assert
    EXPECT_EQ(1, database.getTableCount());
}

TEST(DatabaseTest, WhenCalled_DropTable_ShouldDecrementTableCounter)
{
    // Arrange
    Database database{"Database"};
    database.createTable("MyTable");

    // Act
    database.dropTable("MyTable");

    // Assert
    EXPECT_EQ(0, database.getTableCount());
}

TEST(DatabaseTest, WhenCalled_DropTable_WhenTableDoesNotExist_ShouldThrowTableNotFoundException)
{
    // Arrange
    Database database{"Database"};

    // Act + Assert
    EXPECT_THROW(database.dropTable("MyTable"), TableNotFoundException);
}

TEST(DatabaseTest, WhenCalled_GetTableByName_ShouldReturnTable)
{
    // Arrange
    Database database{"MyDatabase"};
    database.createTable("MyTable");

    // Act
    Table table = database.getTableByName("MyTable");

    // Assert
    EXPECT_EQ("MyTable", table.getName());
}

TEST(DatabaseTest, WhenCalled_GetTableByName_WhenTableDoesNotExits_ShouldThrowTableNotFoundException)
{
    // Arrange
    Database database{"MyDatabase"};

    // Act + Assert
    EXPECT_THROW(database.getTableByName("MyTable"), TableNotFoundException);
}
