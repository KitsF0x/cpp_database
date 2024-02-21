add_library(database STATIC Database.cpp DatabaseNotFoundException.cpp)
target_link_libraries(database PUBLIC table)
target_include_directories(database PUBLIC .)