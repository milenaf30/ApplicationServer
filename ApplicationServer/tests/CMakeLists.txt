message(STATUS "Building tests")

set(TARGET ApplicationServer_test)
message (STATUS "Building application ${TARGET}")

include_directories ("${PROJECT_SOURCE_DIR}/leveldb/db")
include_directories ("${PROJECT_SOURCE_DIR}/leveldb/include/")
include_directories ("${PROJECT_SOURCE_DIR}/leveldb/leveldb/util")
include_directories ("${PROJECT_SOURCE_DIR}/leveldb/leveldb/port")

set (SOURCES testing_levedb.cpp)

add_executable (${TARGET} ${SOURCES})
target_link_libraries (${TARGET} leveldb)
add_test (all ${EXECUTABLE_OUTPUT_PATH}/${TARGET})
