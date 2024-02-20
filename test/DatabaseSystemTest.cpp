#include <gtest/gtest.h>
#include "DatabaseSystem.hpp"
#include "DatabaseNotFoundException.hpp"

TEST(DatabaseTest, WhenCalled_CreateDatabase_ShouldIncrementDatabaseCounterByOne)
{
    // Arrange
    DatabaseSystem system;

    // Act
    system.createDatabase("MyDatabase");

    // Assert
    EXPECT_EQ(1, system.getDatabaseCount());
}

TEST(DatabaseTest, WhenCalled_DropDatabase_ShouldDecrementCounterByOne)
{
    // Arrange
    DatabaseSystem system;
    system.createDatabase("MyDatabase");

    // Act
    system.dropDatabase("MyDatabase");

    // Assert
    EXPECT_EQ(0, system.getDatabaseCount());
}

TEST(DatabaseTest, WhenCalled_DropDatabase_WhenDatabaseDoesNotExist_ShouldThrowDatabaseNotFoundException)
{
    // Arrange
    DatabaseSystem system;

    // Act + Assert
    EXPECT_THROW(system.dropDatabase("MyDatabase"), DatabaseNotFoundException);
}