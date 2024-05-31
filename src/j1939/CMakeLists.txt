add_library(j1939 STATIC j1939.c)
target_include_directories(j1939 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include/j1939)
