# The following is required by CMake
cmake_minimum_required(VERSION 3.0.0)

# Set hw0 as the project name, C as the target language
# A project can contain multiple build products

project(work VERSION 0.1.0 LANGUAGES C)

# # (Optionally uncomment): see more output from cmake during build,
# # including specific gcc command(s).
# set(CMAKE_VERBOSE_MAKEFILE ON)
# Set variables holding flags for gcc

set(MTM_FLAGS_DEBUG "-std=c99 --pedantic-errors -Wall -Werror")
set(MTM_FLAGS_RELEASE "${MTM_FLAGS_DEBUG} -DNDBUG")

# Set the flags for gcc (can also be done using target_compile_options and a couple of other ways)

set(CMAKE_C_FLAGS ${MTM_FLAGS_DEBUG})

# Tell CMake to build an executable named mtm_tot, specifying the comprising file(s)
add_executable(my_executable priority_queue.c priority_queue.h)