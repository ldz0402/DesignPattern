cmake_minimum_required(VERSION 3.0)

project(DesignPattern VERSION 1.0.0)

set(Pattern "Default" CACHE STRING "Helpstring")

add_subdirectory(CommonTool)

if(Pattern STREQUAL "Singleton")
    add_subdirectory(Singleton)
elseif(Pattern STREQUAL "SimpleFactory")
    add_subdirectory(SimpleFactory)
elseif(Pattern STREQUAL "FactoryMethod")
    add_subdirectory(FactoryMethod)
elseif(Pattern STREQUAL "AbstractFactory")
    add_subdirectory(AbstractFactory)
elseif(Pattern STREQUAL "Prototype")
    add_subdirectory(Prototype)
elseif(Pattern STREQUAL "Builder")
    add_subdirectory(Builder)
else()
    message(FATAL_ERROR  "The ${Pattern} is not supported!")
endif()
