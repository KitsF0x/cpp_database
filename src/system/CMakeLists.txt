add_library(system STATIC DatabaseSystem.cpp)
target_link_libraries(system PUBLIC database)
target_include_directories(system PUBLIC .)