cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(Simulation)
find_package(Geant4 REQUIRED ui_all vis_all)

include(${Geant4_USE_FILE})

file(GLOB sources ${PROJECT_SOURCES_DIR}/*.cpp)
file(GLOB headers ${PROJECT_SOURCES_DIR}/*.hpp)
file(GLOB MACRO_FILES "*.mac")
file(COPY ${MACRO_FILES} DESTINATION ${PROJECT_BINARY_DIR})

add_executable(G4_Project G4_sim.cpp ${sources} ${headers})
target_link_libraries( G4_Project ${Geant4_LIBRARIES})

add_custom_target(Simulation DEPENDS G4_Project)
