include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/3rdparty/jsoncpp/include)

link_libraries(${PROJECT_SOURCE_DIR}/3rdparty/jsoncpp/lib/jsoncpp.lib)

add_executable(WRITE_DEMO1 "write_demo_1.cpp")
add_executable(READ_DEMO1 "read_demo_1.cpp")

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})