#include "Common.h"

class Vector2
{
public:

	//Constructor
	Vector2(float x, float y);
	Vector2() = default;
	//Destructor
	~Vector2() = default;

	
	Vector2 Suma(Vector2 v);
	Vector2 Restar(Vector2 v);
	Vector2 Multiplicacion(Vector2 v);
	Vector2 Division(Vector2 v);
	float pointProduct(Vector2 v);
	float crossProduct(Vector2 v);
	double magnitud();
	Vector2 normalizar();
	void print();


	float x_;
	float y_;
	
};
