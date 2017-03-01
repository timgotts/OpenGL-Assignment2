#pragma once
#include "iostream"
#define GLEW_STATIC
#include "glew/glew.h"	// include GL Extension Wrangler
#include "glfw/glfw3.h"	// include GLFW helper library
#include "../glm/glm.hpp"
#include "Shader.h"
#include <vector>

#define WIDTH_DEFAULT 800
#define HEIGHT_DEFAULT 800

class Renderer
{
public: 
	static Renderer* getInstance();
	void Render();
	void AddPoint(glm::vec3);
	void outputClicks();
	void NewPoints(std::vector<glm::vec3>*);
	std::vector<glm::vec3> getPoints();

private: 
	Renderer();
	Shader* shader;
	std::vector<glm::vec3> points;
	GLuint m_vao, m_vbo;
	static Renderer* instance;
};

