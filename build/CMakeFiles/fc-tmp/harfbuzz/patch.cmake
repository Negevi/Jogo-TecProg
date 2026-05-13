cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

message(VERBOSE "Executing patch step for harfbuzz")

block(SCOPE_FOR VARIABLES)

execute_process(
  WORKING_DIRECTORY "C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/harfbuzz-src"
  COMMAND_ERROR_IS_FATAL LAST
  COMMAND  [====[C:/msys64/mingw64/bin/cmake.exe]====] [====[-DHARFBUZZ_DIR=C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/harfbuzz-src]====] [====[-P]====] [====[C:/msys64/home/luken/Codes/Tec_prog_jogo/build/_deps/sfml-src/tools/harfbuzz/PatchHarfBuzz.cmake]====]
)

endblock()
