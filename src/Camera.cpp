#include "Camera.h"

Camera::Camera(glm::vec3 startPosition) {
    position = startPosition;
    front = glm::vec3(-1.0f, -1.0f, -1.0f); // Olhando para a origem
    up = glm::vec3(0.0f, 1.0f, 0.0f);
}

glm::mat4 Camera::getViewMatrix() {
    return glm::lookAt(position, glm::vec3(0.0f, 0.0f, 0.0f), up);
}

void Camera::processKeyboardInput(GLFWwindow* window, float deltaTime) {
    float cameraSpeed = 2.5f * deltaTime;

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        position += cameraSpeed * glm::vec3(-1.0f, 0.0f, -1.0f);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        position -= cameraSpeed * glm::vec3(-1.0f, 0.0f, -1.0f);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        position -= glm::normalize(glm::cross(front, up)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        position += glm::normalize(glm::cross(front, up)) * cameraSpeed;
}
