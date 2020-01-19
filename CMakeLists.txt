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
        Territory/Territory.cpp Territory/Territory.h Territory/TerritoryObserver.cpp Territory/TerritoryObserver.h)

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
        Territory/Territory.cpp Territory/Territory.h FileReader/MapFileReader.cpp FileReader/MapFileReader.h Player/PlayerObserver.cpp Player/PlayerObserver.h)

add_executable(CardTest
        Cards/CardTest.cpp
        Cards/Card.cpp
        Cards/Card.h
        Cards/Deck.cpp
        Cards/Deck.h
        Cards/Hand.cpp
        Cards/Hand.h
        Cards/CardObserver.cpp Cards/CardObserver.h)