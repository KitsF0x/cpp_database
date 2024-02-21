#include <gtest/gtest.h>
#include "DatabaseSystem.hpp"
#include "DatabaseNotFoundException.hpp"
#include "Database.hpp"

TEST(DatabaseSystemTest, WhenCalled_CreateDatabase_ShouldIncrementDatabaseCounterByOne)
{
    // Arrange
    DatabaseSystem system;

    // Act
    system.createDatabase("MyDatabase");

    // Assert
    EXPECT_EQ(1, system.getDatabaseCount());
}

TEST(DatabaseSystemTest, WhenCalled_DropDatabase_ShouldDecrementCounterByOne)
{
    // Arrange
    DatabaseSystem system;
    system.createDatabase("MyDatabase");

    // Act
    system.dropDatabase("MyDatabase");

    // Assert
    EXPECT_EQ(0, system.getDatabaseCount());
}

TEST(DatabaseSystemTest, WhenCalled_DropDatabase_WhenDatabaseDoesNotExist_ShouldThrowDatabaseNotFoundException)
{
    // Arrange
    DatabaseSystem system;

    // Act + Assert
    EXPECT_THROW(system.dropDatabase("MyDatabase"), DatabaseNotFoundException);
}

TEST(DatabaseSystemTest, WhenCalled_GetDatabaseByName_ShouldReturnDatabase)
{
    // Arrange
    DatabaseSystem system;
    system.createDatabase("MyDatabase");

    // Act
    Database database = system.getDatabaseByName("MyDatabase");

    // Assert
    EXPECT_EQ("MyDatabase", database.getName());
}

TEST(DatabaseSystemTest, WhenCalled_GetDatabaseByName_WhenDatabaseDoesNotExits_ShouldThrowDatabaseNotFoundException)
{
    // Arrange
    DatabaseSystem system;

    // Act + Assert
    EXPECT_THROW(system.getDatabaseByName("MyDatabase"), DatabaseNotFoundException);
}
