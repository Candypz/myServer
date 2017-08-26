INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/message
    ${CMAKE_SOURCE_DIR}/src/getway/log
    ${CMAKE_SOURCE_DIR}/src/netBase
)
FILE(GLOB SOURCE_NET *.h *.cpp *.cc)
ADD_LIBRARY(EtGetWayNet STATIC ${SOURCE_NET})
