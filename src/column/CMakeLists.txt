add_library(column STATIC Column.cpp ColumnNotFoundException.cpp)
target_include_directories(column PUBLIC .)
target_link_libraries(column PUBLIC datatype)
