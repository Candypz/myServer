INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/message
    ${CMAKE_SOURCE_DIR}/src/login/log
    ${CMAKE_SOURCE_DIR}/src/login/message
)
FILE(GLOB SOURCE_NET *.h *.cpp *.cc)
ADD_LIBRARY(EtLoginNet STATIC ${SOURCE_NET})
