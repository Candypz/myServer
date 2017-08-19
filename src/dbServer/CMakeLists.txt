INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/dbServer/net
    ${CMAKE_SOURCE_DIR}/src/dbServer/log
)

ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(net)

ADD_EXECUTABLE(dbServer main.cpp)
TARGET_LINK_LIBRARIES(dbServer EtDBLog EtDBNet EtCommon)
