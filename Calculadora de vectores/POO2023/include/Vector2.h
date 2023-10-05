#include "Common.h"

class Vector2
{
public:

	// Constructor: Initializes a 2D vector with the given x and y components.
	Vector2(float x, float y);
	// Constructor
	Vector2() = default;
	//Destructor
	~Vector2() = default;


	// Performs vector addition and returns the result as a new Vector2.
	Vector2 Suma(Vector2 _vec);

	// Performs vector subtraction and returns the result as a new Vector2.
	Vector2 Restar(Vector2 _vec);

	// Performs element-wise vector multiplication and returns the result as a new Vector2.
	Vector2 Multiplicacion(Vector2 _vec);

	// Performs element-wise vector division and returns the result as a new Vector2.
	Vector2 Division(Vector2 _vec);

	// Calculates the dot product between two vectors and returns a scalar value.
	float pointProduct(Vector2 _vec);

	// Calculates the cross product and returns a scalar value.
	float crossProduct(Vector2 _vec);

	// Calculates the magnitude (length) of the vector and returns a double.
	double magnitud();

	// Normalizes the vector and returns a new normalized Vector2.
	Vector2 normalizar();

	// Prints the components of the vector to the console.
	void print();

public:
	float x_; // X component of the vector.
	float y_; // Y component of the vector.
	
};
