project(prj)
add_executable(prj PrintListInReversedOrder.cpp)
add_library(CList  ../Utilities/List.cpp)
target_link_libraries(prj  CList)
