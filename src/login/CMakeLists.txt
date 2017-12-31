INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/login/net
    ${CMAKE_SOURCE_DIR}/src/login/log
    ${CMAKE_SOURCE_DIR}/src/login/message
    ${CMAKE_SOURCE_DIR}/src/netBase
    ${CMAKE_SOURCE_DIR}/src/message
    ${CMAKE_SOURCE_DIR}/src/message/net)

ADD_SUBDIRECTORY(message)
ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(net)

ADD_EXECUTABLE(login main.cpp)
TARGET_LINK_LIBRARIES(login EtLoginNet EtLoginMsg EtLoginLog EtMesg EtProto EtCommon EtNetBase)
