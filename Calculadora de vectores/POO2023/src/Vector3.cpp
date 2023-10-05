#include "Vector3.h"

// Constructor: Initializes a 3D vector with the given x, y, and z components.
Vector3::Vector3(float x, float y, float z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

// Performs vector addition and returns the result as a new Vector3.
Vector3 Vector3::Suma(Vector3 _vec)
{
	Vector3 resultado;
	resultado.x_ = x_ + _vec.x_;
	resultado.y_ = y_ + _vec.y_;
	resultado.z_ = z_ + _vec.z_;
	return resultado;
}

// Performs vector subtraction and returns the result as a new Vector3.
Vector3 Vector3::Resta(Vector3 _vec)
{
	Vector3 resultado;
	resultado.x_ = x_ - _vec.x_;
	resultado.y_ = y_ - _vec.y_;
	resultado.z_ = z_ - _vec.z_;
	return resultado;
}

// Performs element-wise vector multiplication and returns the result as a new Vector3.
Vector3 Vector3::Multi(Vector3 _vec)
{
	Vector3 resultado;
	resultado.x_ = x_ * _vec.x_ ;
	resultado.y_ = y_ * _vec.y_ ;
	resultado.z_ = z_ * _vec.z_ ;
	return resultado;
}

// Performs element-wise vector division and returns the result as a new Vector3.
Vector3 Vector3::Division(Vector3 _vec)
{
	Vector3 resultado;
	resultado.x_ = x_ / _vec.x_;
	resultado.y_ = y_ / _vec.y_;
	resultado.z_ = z_ / _vec.z_;
	return resultado;
}

// Calculates the dot product between two vectors and returns a scalar value.
float Vector3::pointProduct(Vector3 _vec)
{
	return ((x_ + _vec.x_) + (y_ + _vec.y_) + (z_ + _vec.z_));
}

// Calculates the cross product between two vectors and returns a scalar value.
float Vector3::crossProduct(Vector3 _vec)
{
	return ((y_ * _vec.z_) - (z_ * _vec.y_), (x_ * _vec.z_) - (z_ * _vec.x_), (x_ * _vec.y_) - (y_ * _vec.x_));
}

// Calculates the magnitude (length) of the vector and returns a double.
double Vector3::magnitud()
{
	 
	return sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2));
}

// Normalizes the vector and returns a new normalized Vector3.
Vector3 Vector3::normalizar()
{
	Vector3 resultado;
	float dterminante = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2));
	resultado.x_ = x_ / dterminante;
	resultado.y_ = y_ / dterminante;
	resultado.z_ = z_ / dterminante;
	return resultado;
}

// Prints the components of the vector to the console.
void Vector3::print()
{
	cout << " Vector: " << x_ << ", " << y_ << ", " << z_ <<  endl;
}
