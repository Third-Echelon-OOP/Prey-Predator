cmake_minimum_required(VERSION 3.20)
project(Prey_Predator)

set(CMAKE_CXX_STANDARD 14)

include_directories(Prey-Predator)

add_executable(Prey_Predator
        Prey-Predator/Animal.cpp
        Prey-Predator/Animal.h
        Prey-Predator/Controller.cpp
        Prey-Predator/Controller.h
        Prey-Predator/Coordinates.cpp
        Prey-Predator/Coordinates.h
        Prey-Predator/Deer.cpp
        Prey-Predator/Deer.h
        Prey-Predator/Interphase_movement.h
        Prey-Predator/main.cpp
        Prey-Predator/Map.cpp
        Prey-Predator/Map.h
        Prey-Predator/MapObject.cpp
        Prey-Predator/MapObject.h
        Prey-Predator/Statistic.cpp
        Prey-Predator/Statistic.h
        Prey-Predator/Tiger.cpp
        Prey-Predator/Tiger.h)
