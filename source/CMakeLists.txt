cmake_minimum_required(VERSION 3.1.0)
project(apup)

set(CMAKE_BUILD_TYPE DEBUG)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

include_directories(include)
link_directories(.)

macro(exec T)
  add_executable(${T} ${T})
  target_link_libraries(${T} apue)
endmacro()

foreach(dir
    # lib
    intro
    # sockets
    # advio
    # daemons
    # datafiles
    # db
    # environ
    # fileio
    # filedir
    # ipc1
    # ipc2
    # proc
    # pty
    # relation
    # signals
    # standards
    # stdio
    # termios
    # threadctl
    # threads
    # printer
    # exercises
    )
  add_subdirectory(${dir})
endforeach()
