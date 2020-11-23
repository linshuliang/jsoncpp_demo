file(GLOB_RECURSE DEMO_1_SRC "./*.cpp" "./*.h")
add_executable(DEMO1 ${DEMO_1_SRC})

target_include_directories(DEMO1
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/3rdparty/jsoncpp/include)

target_link_libraries(DEMO1
    PUBLIC
    ${PROJECT_SOURCE_DIR}/3rdparty/jsoncpp/lib/jsoncpp.lib)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})