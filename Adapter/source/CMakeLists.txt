aux_source_directory(. SRCE_TOOL_DIR)

include_directories(../include)
include_directories(../../CommonTool/include)

add_library (tool ${SRCE_TOOL_DIR})
