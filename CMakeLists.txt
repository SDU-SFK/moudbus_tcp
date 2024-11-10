cmake_minimum_required(VERSION 3.5)

project(moudbus_TCP VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 寻找Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Gui SerialBus Widgets)

# 项目源文件
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

# 根据Qt版本和平台创建可执行文件
if(${Qt6_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(moudbus_TCP
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        Moudbus_TCP.h
        Moudbus_TCP.cpp

    )
else()
    if(ANDROID)
        add_library(moudbus_TCP SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(moudbus_TCP
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# 链接Qt库
target_link_libraries(moudbus_TCP PRIVATE Qt6::Core Qt6::Gui Qt6::SerialBus Qt6::Widgets)

# 设置MacOS和Windows的特定属性
if(${Qt6_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.moudbus_TCP)
endif()
set_target_properties(moudbus_TCP PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS moudbus_TCP
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 对于Qt 6，执行最终的可执行文件处理
qt_finalize_executable(moudbus_TCP)
