#include "Vector4.h"

// Constructor: Initializes a 4D vector with the given x, y, z, and a components.
Vector4::Vector4(float x, float y, float z, float a)
{
	x_ = x;
	y_ = y;
	z_ = z;
	a_ = a;
}

// Performs vector addition and returns the result as a new Vector4.
Vector4 Vector4::Suma(Vector4 _vec)
{
	Vector4 resultado;
	resultado.x_ = x_ + _vec.x_;
	resultado.y_ = y_ + _vec.y_;
	resultado.z_ = z_ + _vec.z_;
	resultado.a_ = a_ + _vec.a_;
	return resultado;
}

// Performs vector subtraction and returns the result as a new Vector4.
Vector4 Vector4::Resta(Vector4 _vec)
{
	Vector4 resultado;
	resultado.x_ = x_ - _vec.x_;
	resultado.y_ = y_ - _vec.y_;
	resultado.z_ = z_ - _vec.z_;
	resultado.a_ = a_ - _vec.a_;
	return resultado;
}

// Performs element-wise vector multiplication and returns the result as a new Vector4.
Vector4 Vector4::Multi(Vector4 _vec)
{
	Vector4 resultado;
	resultado.x_ = x_ * _vec.x_;
	resultado.y_ = y_ * _vec.y_;
	resultado.z_ = z_ * _vec.z_;
	resultado.a_ = a_ * _vec.a_;
	return resultado;
}

// Performs element-wise vector division and returns the result as a new Vector4.
Vector4 Vector4::Division(Vector4 _vec)
{
	Vector4 resultado;
	resultado.x_ = x_ / _vec.x_;
	resultado.y_ = y_ / _vec.y_;
	resultado.z_ = z_ / _vec.z_;
	resultado.a_ = a_ / _vec.a_;
	return resultado;
}

// Calculates the dot product between two vectors and returns a scalar value.
float Vector4::pointProduct(Vector4 _vec)
{
	return ((x_ + _vec.x_) + (y_ + _vec.y_) + (z_ + _vec.z_) + (a_ + _vec.a_));
}

// Calculates the magnitude (length) of the vector and returns a double.
double Vector4::magnitud()
{
	
	return sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2) + pow((a_), 2));
}

// Normalizes the vector (sets its length to 1) and returns a new normalized Vector4.
Vector4 Vector4::normalizar()
{
	Vector4 resultado;
	float dterminante = sqrt(pow(x_, 2) + pow(y_, 2) + pow((z_), 2) + pow((a_), 2));
	resultado.x_ = x_ / dterminante;
	resultado.y_ = y_ / dterminante;
	resultado.z_ = z_ / dterminante;
	resultado.a_ = a_ / dterminante;
	return resultado;
}

// Prints the components of the vector to the console.
void Vector4::print()
{
	cout << " Vector: " << x_ << ", " << y_ << ", " << z_ << ", " << a_ << endl;
}