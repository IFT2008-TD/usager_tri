cmake_minimum_required(VERSION 3.22)
project(usager_tri)

set(CMAKE_CXX_STANDARD 14)
set(header_algo "~/Desktop/IFT2008-A2024/TD1/algos_de_tri")

# Définition du fichier exécutable: le target usager_tri
add_executable(usager_tri main.cpp)

# Où trouver le .h de la librairie
target_include_directories(usager_tri PRIVATE ${header_algo})

# Où trouver la librairie
find_library(TRILIB algos_de_tri ${header_algo}/bin)

# Linker la librairie au target
target_link_libraries(usager_tri ${TRILIB})
