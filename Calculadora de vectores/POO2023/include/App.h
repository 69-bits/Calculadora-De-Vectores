#include "Common.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class App
{
public:

	// Constructor: Initializes an instance of the App class.
	App() = default;
	// Destructor: Cleans up resources when the object is destroyed.
	~App() = default;


	// Displays a menu for selecting vector operations.
	void menuSelector();

	// Displays a menu for 2D vector operations.
	void menuVector2();

	// Displays a menu for 3D vector operations.
	void menuVector3();

	// Displays a menu for 4D vector operations.
	void menuVector4();

public:
	int opcion; // Stores the user's selected operation within menus.

	int opcionSelector; // Stores the user's choice for the initial selection.

};
