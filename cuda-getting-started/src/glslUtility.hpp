/**
 * @file      glslUtility.hpp
 * @brief     A utility namespace for loading GLSL shaders.
 * @authors   Varun Sampath, Patrick Cozzi, Karl Li
 * @date      2012
 * @copyright University of Pennsylvania
 */

#ifndef GLSLUTILITY_H
#define GLSLUTILITY_H

#include <GL/glew.h>

namespace glslUtility {
    GLuint createDefaultProgram(const char *attributeLocations[], GLuint numberOfLocations);
    GLuint createProgram(const char *vertexShaderPath, const char
            *fragmentShaderPath, const char *attributeLocations[], GLuint
            numberOfLocations);
}

#endif /* GLSLUTILITY_H*/