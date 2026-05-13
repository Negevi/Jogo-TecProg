cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

message(VERBOSE "Executing patch step for freetype")

block(SCOPE_FOR VARIABLES)

execute_process(
  WORKING_DIRECTORY "C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/freetype-src"
  COMMAND_ERROR_IS_FATAL LAST
  COMMAND  [====[C:/msys64/mingw64/bin/cmake.exe]====] [====[-DFREETYPE_DIR=C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/freetype-src]====] [====[-P]====] [====[C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/sfml-src/tools/freetype/PatchFreetype.cmake]====]
)

endblock()
