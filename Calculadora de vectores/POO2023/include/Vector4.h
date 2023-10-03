#include "Common.h"

class Vector4
{
public:

	//Constructor
	Vector4(float x, float y, float z, float a);
	Vector4() = default;
	//Destructor
	~Vector4() = default;

	Vector4 Suma(Vector4 v);
	Vector4 Resta(Vector4 v);
	Vector4 Multi(Vector4 v);
	Vector4 Division(Vector4 v);
	float pointProduct(Vector4 v);
	double magnitud();
	Vector4 normalizar();
	void print();


	float x_;
	float y_;
	float z_;
	float a_;

};