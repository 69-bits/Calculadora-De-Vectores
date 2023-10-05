#include "Common.h"

class Vector3
{
public:

	// Constructor: Initializes a 3D vector with the given x, y, and z components.
	Vector3(float x, float y, float z);
	//Constructor
	Vector3() = default;
	//Destructor
	~Vector3() = default;

	// Performs vector addition and returns the result as a new Vector3.
	Vector3 Suma(Vector3 _vec);

	// Performs vector subtraction and returns the result as a new Vector3.
	Vector3 Resta(Vector3 _vec);

	// Performs element-wise vector multiplication and returns the result as a new Vector3.
	Vector3 Multi(Vector3 _vec);

	// Performs element-wise vector division and returns the result as a new Vector3.
	Vector3 Division(Vector3 _vec);

	// Calculates the dot product between two vectors and returns a scalar value.
	float pointProduct(Vector3 _vec);

	// Calculates the cross product between two vectors and returns a scalar value.
	float crossProduct(Vector3 _vec);

	// Calculates the magnitude (length) of the vector and returns a double.
	double magnitud();

	// Normalizes the vector (sets its length to 1) and returns a new normalized Vector3.
	Vector3 normalizar();

	// Prints the components of the vector to the console.
	void print();

public:
	float x_;// X component of the vector. 
	float y_;// Y component of the vector.
	float z_;// Z component of the vector.

};
