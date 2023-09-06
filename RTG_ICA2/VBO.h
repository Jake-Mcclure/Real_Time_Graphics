#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include<glm/glm.hpp>
#include<glad/glad.h>
#include<vector>

struct Vertex
{
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec3 colour;
	glm::vec2 texUV;
};

class VBO
{
public:

	VBO(std::vector<Vertex>& vertices);

	GLuint ID;

	void Bind();

	void Unbind();

	void Delete();
};

#endif