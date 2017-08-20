INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/res/jsonCfg
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/getway/net
    ${CMAKE_SOURCE_DIR}/src/getway/log
)

ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(net)

ADD_EXECUTABLE(getway main.cpp)
TARGET_LINK_LIBRARIES(getway EtGetWayLog EtGetWayNet EtMesg EtCommon)
