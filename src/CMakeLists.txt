add_library(${PROJECT_NAME} STATIC DatabaseSystem.cpp DatabaseNotFoundException.cpp Database.cpp TableNotFoundException.cpp Table.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC .)