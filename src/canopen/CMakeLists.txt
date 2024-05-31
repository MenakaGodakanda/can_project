add_library(canopen STATIC canopen.c)
target_include_directories(canopen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include/canopen)
