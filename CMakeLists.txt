cmake_minimum_required(VERSION 3.15)
project(BoostExample)

set(CMAKE_CXX_STANDARD 14)

# Asegúrate de que esta ruta apunte al directorio donde instalaste Boost
set(BOOST_ROOT "C:/Program Files/boost/boost_1_75_0")

find_package(Boost 1.75.0)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(BoostExample Introducción a Boost.cpp)
    target_link_libraries(BoostExample ${Boost_LIBRARIES})
endif()