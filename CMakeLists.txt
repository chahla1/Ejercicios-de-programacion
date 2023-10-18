cmake_minimum_required(VERSION 3.26)
project(EjerciciosProgra)

set(CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp
        Persona.cpp
        Estudiante.cpp
        matematica.cpp
        funciones.cpp)


include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)
FetchContent_MakeAvailable(fmt)


target_link_libraries(main PUBLIC fmt::fmt)
