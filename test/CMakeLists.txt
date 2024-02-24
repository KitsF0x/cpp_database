add_executable(${PROJECT_NAME}-ut DatabaseSystemTest.cpp DatabaseTest.cpp TableTest.cpp)
target_link_libraries(${PROJECT_NAME}-ut PUBLIC 
    GTest::gtest 
    GTest::gtest_main 
    database
    system
    table
    column
    datatype
)
