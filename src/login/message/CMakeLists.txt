INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/login/log
    ${CMAKE_SOURCE_DIR}/src/message
    ${CMAKE_SOURCE_DIR}/src/proto
)

FILE(GLOB SOURCE_LOGINMSG *.h *.cpp *.cc)
ADD_LIBRARY(EtLoginMsg STATIC ${SOURCE_LOGINMSG})
