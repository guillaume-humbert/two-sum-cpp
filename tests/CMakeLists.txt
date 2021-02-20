cmake_minimum_required(VERSION 3.16)

set(Sources testts.cc)

add_executable(testts ${Sources})
target_link_libraries(testts PUBLIC gtest_main ts)

add_test(NAME testts COMMAND testts)
