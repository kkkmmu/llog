cmake_minimum_required(VERSION 2.8)

project(libllog)

set(CMAKE_VERBOSE_MAKEFILE on)

enable_language(C)

set(CFLAGS "-Wall -Werror")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CFLAGS} -I include")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CFLAGS}")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# enable_testing()

add_subdirectory(src)
add_subdirectory(test)
