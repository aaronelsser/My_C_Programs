//Aaron Elsser
//Given a radius and a height, the program will calculate volume and area of each basic shape

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float circleArea(float radius) {
		return M_PI*radius*radius;
}

float circlePerimeter(float radius) {
	return M_PI*(radius+radius);
}

float sphereVolume(float radius, float height) {
	float SphereVolume = (4.0/3)*M_PI*radius*radius*radius;
	return SphereVolume;
}

float sphereArea(float radius, float height) {
	float SphereArea = 4.0*M_PI*radius*radius;
	return SphereArea;
}
float cylinderVolume(float radius, float height) {
	float baseArea = circleArea(radius);
	float CylinderVolume = height*baseArea;
	return CylinderVolume;
}

float cylinderArea(float radius, float height) {
	float baseArea = circleArea(radius);
	float CylinderArea = 2.0*M_PI*radius*height + 2.0*baseArea;
	return CylinderArea;
}

float coneVolume(float radius, float height) {
	float ConeVolume = M_PI*radius*radius*(height/3.0);
	return ConeVolume;
}

float coneArea(float radius, float height) {
	float ConeArea = M_PI*radius*(radius+sqrt(height*height+radius*radius));
	return ConeArea;
}

float sumVolumes(float SphereVolume, float CylinderVolume, float ConeVolume) {
	float SumVolumes = SphereVolume + CylinderVolume + ConeVolume;
	return SumVolumes;
}

float sumAreas(float CircleArea, float SphereArea, float CylinderArea, float ConeArea) {
	float SumAreas = CircleArea + SphereArea + CylinderArea + ConeArea;
	return SumAreas;
	}
int main(void) {
	float radius = 0.0;
	float height = 0.0;
	fflush(stdout);
	printf("Please enter a radius: ");
	scanf("%f", &radius);
	fflush(stdout);
	printf("Please enter a height: ");
	scanf("%f", &height);
	float CircleArea = circleArea(radius);
	float SphereVolume = sphereVolume(radius, height);
	float SphereArea = sphereArea(radius, height);
	float CylinderVolume = cylinderVolume(radius, height);
	float CylinderArea = cylinderArea(radius, height);
	float ConeVolume = coneVolume(radius, height);
	float ConeArea = coneArea(radius, height);
	float SumVolumes = sumVolumes(SphereVolume, CylinderVolume, ConeVolume);
	float SumAreas = sumAreas(CircleArea, SphereArea, CylinderArea, ConeArea);
	printf("Circle: Radius = %g Area = %.1f\n", radius, CircleArea);
	printf("Sphere: Radius = %g Volume = %.1f Area = %.1f\n", radius, SphereVolume, SphereArea);
	printf("Cylinder: Radius = %g Height = %g Volume = %.1f Area = %.1f\n", radius, height, CylinderVolume, CylinderArea);
	printf("Cone: Radius = %g Height = %g Volume = %.1f Area = %.1f\n", radius, height, ConeVolume, ConeArea);
	printf("Sum: Total Volume = %.1f Total Area = %.1f", SumVolumes, SumAreas);
	return EXIT_SUCCESS;
}
