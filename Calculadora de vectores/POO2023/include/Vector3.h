#include "Common.h"

class Vector3
{
public:

	//Constructor
	Vector3(float x, float y, float z);
	Vector3() = default;
	//Destructor
	~Vector3() = default;

	Vector3 Suma(Vector3 segundoVector);
	Vector3 Resta(Vector3 segundoVector);
	Vector3 Multi(Vector3 segundoVector);
	Vector3 Division(Vector3 segundoVector);
	float pointProduct(Vector3 segundoVector);
	float crossProduct(Vector3 segundoVector);
	double magnitud();
	Vector3 normalizar();
	void print();


	float x_;
	float y_;
	float z_;

};
