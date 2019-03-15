cmake_minimum_required(VERSION 3.7)
project(LibFoo C)

SET(CMAKE_C_FLAGS_RELEASE "-Wall -O2")
SET(CMAKE_C_FLAGS_DEBUG "-g -Wall -O2")

include_directories(third_party/boringssl/include)
add_subdirectory(third_party/boringssl)

file(GLOB SRC src/*.c)
add_library(foo STATIC ${SRC})

target_link_libraries(foo crypto ssl)

install(TARGETS foo DESTINATION .)
