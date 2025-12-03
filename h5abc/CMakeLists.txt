cmake_minimum_required(VERSION 3.16)

project(h5abc VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(apph5abc
    main.cpp
    classa1.cpp
    classa2.cpp
    classb.cpp
)

qt_add_qml_module(apph5abc
    URI h5abc
    VERSION 1.0
    QML_FILES Main.qml
)

set_target_properties(apph5abc PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(apph5abc
    PRIVATE Qt6::Quick
)

install(TARGETS apph5abc
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
