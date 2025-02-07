#ifndef TILE_H
#define TILE_H

#include <glm/glm.hpp>

class Tile {
public:
    glm::vec3 position;

    Tile(float x, float y, float z);
    glm::vec3 getPosition();
};

#endif
