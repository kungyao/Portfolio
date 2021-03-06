#ifndef CAMERA_H
#define CAMERA_H
#include <glm/glm.hpp>

class Camera
{
private:
	glm::vec3 anchorPoint;
	glm::vec3 spherePosition;
	glm::vec3 upDirection;
	float minRadius;

	glm::vec3 GetPosRelAnchor();
public:
	Camera(glm::vec3 anchorPoint, glm::vec3 spherePosition, glm::vec3 upDirection, float minRadius);
	glm::mat4 GetCameraMatrix();
	glm::vec3 GetLookDirection();
	glm::vec3 GetEyePosition();

	void OffsetAnchor(glm::vec3 offset);
	void OffsetSphere(glm::vec3 offset);
	void OffsetRadius(float radius);

	void SetSphereDirection(glm::vec2 direction);
};





#endif
