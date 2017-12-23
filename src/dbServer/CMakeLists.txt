INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/dbServer/message
    ${CMAKE_SOURCE_DIR}/src/dbServer/net
    ${CMAKE_SOURCE_DIR}/src/dbServer/log
    ${CMAKE_SOURCE_DIR}/src/netBase
    ${CMAKE_SOURCE_DIR}/src/dbServer/sqlMag
)

ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(sqlMag)
ADD_SUBDIRECTORY(net)
ADD_SUBDIRECTORY(message)

ADD_EXECUTABLE(dbServer main.cpp)
TARGET_LINK_LIBRARIES(dbServer EtDBNet EtMysql EtDBMsg EtCommon EtMesg EtProto EtDBLog EtNetBase)
