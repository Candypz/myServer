INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/dbServer/log
    ${CMAKE_SOURCE_DIR}/src/dbServer/message
    ${CMAKE_SOURCE_DIR}/src/common
)
FILE(GLOB SOURCE_NET *.h *.cpp *.cc)
ADD_LIBRARY(EtDBNet STATIC ${SOURCE_NET})
