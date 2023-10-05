#include "Common.h"

class Vector4
{
public:

	
	// Constructor: Initializes a 4D vector with the given x, y, z, and a components.
	Vector4(float x, float y, float z, float a);
	//Constructor
	Vector4() = default;
	//Destructor
	~Vector4() = default;


	// Performs vector addition and returns the result as a new Vector4.
	Vector4 Suma(Vector4 _vec);

	// Performs vector subtraction and returns the result as a new Vector4.
	Vector4 Resta(Vector4 _vec);

	// Performs element-wise vector multiplication and returns the result as a new Vector4.
	Vector4 Multi(Vector4 _vec);

	// Performs element-wise vector division and returns the result as a new Vector4.
	Vector4 Division(Vector4 _vec);

	// Calculates the dot product between two vectors and returns a scalar value.
	float pointProduct(Vector4 _vec);

	// Calculates the magnitude (length) of the vector and returns a double.
	double magnitud();

	// Normalizes the vector and returns a new normalized Vector4.
	Vector4 normalizar();

	// Prints the components of the vector to the console.
	void print();

public:
	float x_; // X component of the vector.
	float y_; // Y component of the vector.
	float z_; // Z component of the vector.
	float a_; // A component of the vector.

};