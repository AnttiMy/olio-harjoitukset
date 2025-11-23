cmake_minimum_required(VERSION 3.5)

project(h3b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(h3b
    main.cpp
    Animal.cpp
    Dog.cpp
)

install(TARGETS h3b
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
