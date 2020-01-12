cmake_minimum_required(VERSION 3.5)

# Compile and run test
set(CMAKE_CXX_STANDARD 17)
add_executable(ts_default ${CMAKE_CURRENT_SOURCE_DIR}/ts_default_main.cpp)
target_link_libraries(ts_default volt_emote)

# set(WARNING_FLAGS "-Wall -Wextra -pedantic -Werror -Wno-unknown-pragmas -Wno-unused-parameter")
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} ${WARNING_FLAGS} -g -fprofile-arcs -ftest-coverage")
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${WARNING_FLAGS} -flto -O3")

# Run test in bin directory 
add_test(NAME default_test COMMAND ts_default WORKING_DIRECTORY ${UNIT_TEST_BIN_OUTPUT_DIR})
