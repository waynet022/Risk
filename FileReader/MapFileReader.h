//
// Created by BusinessB4Pleasure on 1/15/2020.
//

#ifndef RISK_MAPFILEREADER_H
#define RISK_MAPFILEREADER_H

#include <iostream>
#include <fstream>
#include <string>
#include "../Territory/Country.h"
#include "../Territory/Continent.h"

using namespace std;

class MapFileReader {
private:

public:
    MapFileReader();
    MapFileReader(string map_file);
    MapFileReader(const MapFileReader& map_file);
    ~MapFileReader();

    void AddMapComponents(string map_file);
    void AddCountryToMap();
    void AddContinentToMap();
    void AddNeighbors();





};


#endif //RISK_MAPFILEREADER_H
