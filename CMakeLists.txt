cmake_minimum_required(VERSION 3.15)
project(Risk)

set(CMAKE_CXX_STANDARD 14)

add_executable(Risk main.cpp
        Territory/Country.cpp
        Territory/Country.h
        Territory/Continent.cpp
        Territory/Continent.h
        Territory/Map.cpp
        Territory/Map.h
        Cards/Card.cpp
        Cards/Deck.cpp
        Cards/Hand.cpp
        Player/Player.cpp
        )

add_executable(TerritoryTest Territory/TerritoryDriver.cpp
        Territory/Country.cpp
        Territory/Country.h
        Territory/Continent.cpp
        Territory/Continent.h
        Territory/Map.cpp
        Territory/Map.h
        Cards/Card.cpp
        Cards/Deck.cpp
        Cards/Hand.cpp
        Player/Player.cpp
        Territory/Territory.cpp Territory/Territory.h)

add_executable(PlayerTest
        Player/PlayersTest.cpp
        Territory/Country.cpp
        Territory/Country.h
        Territory/Continent.cpp
        Territory/Continent.h
        Territory/Map.cpp
        Territory/Map.h
        Cards/Card.cpp
        Cards/Deck.cpp
        Cards/Hand.cpp
        Player/Player.cpp
        Territory/Territory.cpp Territory/Territory.h FileReader/MapFileReader.cpp FileReader/MapFileReader.h)