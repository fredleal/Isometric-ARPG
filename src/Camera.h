#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <GLFW/glfw3.h>

class Camera {
public:
    glm::vec3 position;
    glm::vec3 front;
    glm::vec3 up;

    Camera(glm::vec3 startPosition);

    glm::mat4 getViewMatrix();
    void processKeyboardInput(GLFWwindow* window, float deltaTime);
};

#endif
