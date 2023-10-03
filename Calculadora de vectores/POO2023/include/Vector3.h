#include "Common.h"

class Vector3
{
public:

	//Constructor
	Vector3(float x, float y, float z);
	Vector3() = default;
	//Destructor
	~Vector3() = default;

	Vector3 Suma(Vector3 v);
	Vector3 Resta(Vector3 v);
	Vector3 Multi(Vector3 v);
	Vector3 Division(Vector3 v);
	float pointProduct(Vector3 v);
	float crossProduct(Vector3 v);
	double magnitud();
	Vector3 normalizar();
	void print();


	float x_;
	float y_;
	float z_;

};
