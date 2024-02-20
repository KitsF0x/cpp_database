add_library(${PROJECT_NAME} STATIC DatabaseSystem.cpp DatabaseNotFoundException.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC .)