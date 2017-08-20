INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/login/net
    ${CMAKE_SOURCE_DIR}/src/login/log
)

ADD_SUBDIRECTORY(message)
ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(net)

ADD_EXECUTABLE(login main.cpp)
TARGET_LINK_LIBRARIES(login EtLoginNet EtLoginMsg EtLoginLog EtMesg EtProto EtCommon)
