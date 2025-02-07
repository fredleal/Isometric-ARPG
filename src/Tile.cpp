#include "Tile.h"

Tile::Tile(float x, float y, float z) {
    position = glm::vec3(x, y, z);
}

glm::vec3 Tile::getPosition() {
    return position;
}
