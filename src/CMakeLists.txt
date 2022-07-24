add_library(clox)

target_include_directories(clox 
  PUBLIC 
    ${clox_SOURCE_DIR}/includes/clox
)

target_sources(clox
    PUBLIC
    common.c
    chunk.c
    memory.c
)

add_executable(clox main.c)

set_target_properties(clox_repl PROPERTIES OUTPUT_NAME "clox")


target_sources(clox_repl PRIVATE main.c)
target_link_libraries(clox_repl PRIVATE clox)
