#include "Common.h"

class Vector4
{
public:

	//Constructor
	Vector4(float x, float y, float z, float a);
	Vector4() = default;
	//Destructor
	~Vector4() = default;

	Vector4 Suma(Vector4 segundoVector);
	Vector4 Resta(Vector4 segundoVector);
	Vector4 Multi(Vector4 segundoVector);
	Vector4 Division(Vector4 segundoVector);
	float pointProduct(Vector4 segundoVector);
	double magnitud();
	Vector4 normalizar();
	void print();


	float x_;
	float y_;
	float z_;
	float a_;

};