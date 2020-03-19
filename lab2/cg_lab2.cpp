#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>

using namespace std;
using namespace glm;

void exercise2() {
	cout << "Exercise 2" << endl;
	vec4 u = vec4(9, 8, 5, 1.0f);
	vec4 v = vec4(6, 6, 3, 1.0f);
	vec4 a = u - v;
	cout << "(a) u - v = (" << a.x << "," << a.y << "," << a.z << ")\n";
	vec4 b = u + 5.0f * v;
	cout << "(b) u + 5v = (" << b.x << "," << b.y << "," << b.z << ")\n";
}

void exercise5() {
	cout << "Exercise 5" << endl;
	vec3 u = vec3(7, 3, 8);
	double result = sqrt(dot(u, u));
	cout << "|u| = " << result << "\n";
}

void exercise12() {
	cout << "Exercise 12" << endl;
	vec2 e1 = vec2(1 / sqrt(2), 1 / sqrt(2));
	vec2 u = vec2(9, 4);
	double result = dot(e1, u) / sqrt(dot(e1, e1));
	cout << "a := <e1,u> of u onto e1 = " << result << "\n";
}

void exercise16() {
	cout << "Exercise 16" << endl;
	mat2 matrix1 = mat2( 9, -8, 8, 9 );
	mat2 inverse_matrix = inverse(matrix1);
	vec2 matrix2 = vec2(4, 3);
	vec2 result = inverse_matrix * matrix2;
	cout << "x: " << result.x << "\ny: " << result.y << endl;
}


int main() {
	exercise16();
}
