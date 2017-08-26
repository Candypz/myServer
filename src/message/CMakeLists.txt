INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/proto
    ${CMAKE_SOURCE_DIR}/src/log
    ${CMAKE_SOURCE_DIR}/src/message/net
    ${CMAKE_SOURCE_DIR}/src/message
    ${CMAKE_SOURCE_DIR}/src/common
)

FILE(GLOB_RECURSE SOURCE_MESG *.h *.cpp *.cc)
ADD_LIBRARY(EtMesg STATIC ${SOURCE_MESG})
