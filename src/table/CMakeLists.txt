add_library(table STATIC Table.cpp TableNotFoundException.cpp)
target_include_directories(table PUBLIC .)