cmake_minimum_required(VERSION 3.20)
project(ProblemSolving CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_testing()

# One target per problem: <topic>/NN-name.test.cpp  ->  target "NN-name"
# The test file #includes the solution file NN-name.cpp.
file(GLOB TESTS CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*/*.test.cpp)

foreach(test ${TESTS})
    get_filename_component(name ${test} NAME_WE)
    add_executable(${name} ${test})
    target_include_directories(${name} PRIVATE ${CMAKE_SOURCE_DIR}/common)
    target_compile_options(${name} PRIVATE -Wall -Wextra -Werror=return-type)
    add_test(NAME ${name} COMMAND ${name})
endforeach()
