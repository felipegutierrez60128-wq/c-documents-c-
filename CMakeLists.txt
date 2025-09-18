cmake_minimum_required(VERSION 3.29)
project(evaluacion1)

set(CMAKE_CXX_STANDARD 20)

add_executable(evaluacion1 Documento.cpp
        Documento.h
        factura.h
        factura.cpp
        main.cpp
        contrato.cpp)
