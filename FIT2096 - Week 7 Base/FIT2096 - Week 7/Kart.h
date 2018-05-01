#ifndef KART_H
#define KART_H

#include "GameObject.h"
#include "InputController.h"
#include "ItemBox.h"
class Kart : public GameObject
{
protected:
	InputController* m_input;

	CBoundingBox m_boundingBox;

	float m_moveSpeed;
	float m_turnSpeed;

public:
	Kart(Mesh* mesh, Shader* shader, Texture* texture, Vector3 position, InputController* input);

	void Update(float timestep);

	CBoundingBox Getbound() { return m_boundingBox; }
	void OnKartCollisionEnter(Kart* other);
	void OnKartCollisionStay(Kart* other);
	void OnKartCollisionExit(Kart* other);

	void OnItemBoxCollisionEnter(ItemBox* other); 
	void OnItemBoxCollisionStay(ItemBox* other); 
	void OnItemBoxCollisionExit(ItemBox* other);
};

#endif
