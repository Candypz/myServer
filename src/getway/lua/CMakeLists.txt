INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/3rd/lua
    ${CMAKE_SOURCE_DIR}/src/getway/log
)


FILE(GLOB SOURCE_LUA *.c *.h *.cpp *.cc)
ADD_LIBRARY(EtGetWayLua STATIC ${SOURCE_LUA})
