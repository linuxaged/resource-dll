#include "dll.h"
#include <Corrade/Utility/Resource.h>

int sum(int a, int b) {
	//CORRADE_RESOURCE_INITIALIZE(TexturedTriangle_RESOURCES);
	///const Corrade::Utility::Resource rs{"textured-triangle-data"};// Crash! resource not found ~
	//auto r = rs.get("TexturedTriangleShader.vert");
	return a + b;
}