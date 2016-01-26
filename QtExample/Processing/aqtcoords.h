#ifndef AQTCOORDS_H
#define AQTCOORDS_H

/**
 * @brief The AqtCoords class tracks coordinates for AQT operatoins
 **/
class AqtCoords
{
public:
    AqtCoords();

    //Variables
    int x = 0;           //!< X coordinate (translation)
    int y = 0;           //!< Y Coordinate (translation)
    int z = 0;           //!< Z Coordinate (translation)
    int xAngle = 0;      //!< angle around x axis
    int yAngle = 0;      //!< angle around y axis
    int zAngle = 0;      //!< angle around z axis
};

#endif // AQTCOORDS_H
