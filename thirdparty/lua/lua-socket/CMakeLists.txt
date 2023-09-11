
set(lib_name lua-socket)
set(target_name ${lib_name})

project(${lib_name})

set(${target_name}_src
  auxiliar.c
  buffer.c
  compat.c
  except.c
  inet.c
  io.c
  luasocket.c
  mime.c
  options.c
  select.c
  tcp.c
  timeout.c
  udp.c
  wsocket.c
)

add_library(${target_name} STATIC
  ${${target_name}_src}
)

if(NOT AX_USE_LUAJIT)
  target_include_directories(${target_name} PRIVATE ../${AX_LUA_ENGINE})
else()
  target_include_directories(${target_name} PRIVATE ../${AX_LUA_ENGINE}/include)
endif()
target_include_directories(${target_name} PUBLIC .)

set_target_properties(${target_name}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    FOLDER "ThirdParty"
)
