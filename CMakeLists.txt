cmake_minimum_required(VERSION 3.5.0)
project(Boost_Sandboox VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.83.0 COMPONENTS filesystem) 

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    #add_executable(progname file1.cxx file2.cxx) 
    add_executable(Boost_Sandboox main.cpp)
    target_link_libraries(Boost_Sandboox ${Boost_LIBRARIES})
#    target_compile_options(Boost_Sandboox PUBLIC "-lboost_system-mt" "-L/usr/lib/aarch64-linux-gnu/" "-I/usr/include")
endif()

