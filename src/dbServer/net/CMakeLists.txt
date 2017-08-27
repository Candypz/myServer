INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/dbServer/log
    ${CMAKE_SOURCE_DIR}/src/dbServer/message
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/netBase
    ${CMAKE_SOURCE_DIR}/src/message
)
FILE(GLOB SOURCE_NET *.h *.cpp *.cc)
ADD_LIBRARY(EtDBNet STATIC ${SOURCE_NET})
