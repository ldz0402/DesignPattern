aux_source_directory(. SRCE_COMMONTOOL_DIR)

include_directories(../include)

set(CMAKE_BUILD_TYPE Debug)

add_library (commonTool ${SRCE_COMMONTOOL_DIR})
