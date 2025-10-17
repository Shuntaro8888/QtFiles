cmake_minimum_required(VERSION 3.19)
project(qt6cb-4-5 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(qt6cb-4-5
    main.cpp
)

target_link_libraries(qt6cb-4-5
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS qt6cb-4-5
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
