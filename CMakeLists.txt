cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME application)
project(${PROJECT_NAME})

set(BUILD_SHARED_LIBS OFF)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include(FetchContent)

add_executable(${PROJECT_NAME} 
src/main.cpp

src/Graphics/display.cpp
	include/Application/Graphics/display.h
src/Graphics/window.cpp
	include/Application/Graphics/window.h
src/Graphics/widgets.cpp
	include/Application/Graphics/widgets.h
src/Backend/backend_operations.cpp
	include/Application/Backend/backend_operations.h
)

find_package(sfml REQUIRED)
if(SFML_FOUND)
	target_include_directories(${PROJECT_NAME} PRIVATE ${SFML_INCLUDE_DIR})
        target_link_libraries(${PROJECT_NAME} PRIVATE sfml-main sfml-audio sfml-graphics sfml-system sfml-window sfml-network)
endif()


find_package(Boost COMPONENTS iostreams REQUIRED)
if(Boost_FOUND)
	target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIR})
	target_link_libraries(${PROJECT_NAME} PRIVATE ${Boost_LIBRARIES})
	add_definitions(-DBOOST_ALL_NO_LIB)
endif()

FetchContent_Declare(
        TGUI
        GIT_REPOSITORY https://github.com/texus/TGUI
        GIT_TAG v0.9.3
)
FetchContent_MakeAvailable(TGUI)

set(TGUI_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/build/_deps/tgui-src/include)
target_link_libraries(${PROJECT_NAME} PRIVATE tgui)


