#pragma once
#ifndef OBJECT_H_
#define OBJECT_H_
#endif // !OBJECT_H_

#include"point.h"
#include<string>
#include <iostream>
//#include"myObject.cpp"
using namespace std;


class myObject
{
public:
	//methods

	myObject(string name);
	myObject(string name, double x, double y, double z);
	myObject(string name, myObject parent, double distance, double azimuth, double inclination );
	myObject(
		string Name,
		string filename,
		string Mod,
		myObject* Parent,
		double distance,
		double azimuth,
		double inclination,
		double axialTilt,
		Point3D Heading,
		Point3D position,
		double gravity,
		double radius,
		double atmoRadius,
		bool atmosphere,
		double minSurfaceRadius,
		double maxHillRadius,
		double surfaceGravity,
		double gravityFalloff,
		bool spawnFauna,
		bool spaunFlora,
		bool showGPS,
		string planetGenerator);
	myObject();
	~myObject();
	//setters
	void setName(string name);
	void setFilename(string filename);
	void setMod(string modName);
	void setParent(myObject* parent);
	void setDistance(double distance);
	void setAzimuth(double azimuth);
	void setInclination(double inclination);
	void setAxialTilt(double axialTilt);
	void setHeading(Point3D Heading);
	void setPosition(Point3D position);
	void setGravity(double gravity);
	void setRadius(double radius);
	void setAtmoRadius(double atmoRadius);
	void setAtmosphere(bool atmosphere);
	void setMinSurfaceRadius(double minSurfaceRadius);
	void setMaxHillRadius(double maxHillRadius);
	void setSurfaceGravity(double surfaceGravity);
	void setGravityFalloff(double gravityFalloff);
	void setSpawnFauna(bool spawnFauna);
	void setSpaunFlora(bool spaunFlora);
	void setShowGPS(bool showGPS);
	void setPlanetGenerator(string planetGenerator);

	//Getters
	string getName();
	string getFilename();
	string getMod();
	myObject* getParent();
	double getDistance();
	double getAzimuth();
	double getInclination();
	double getAxialTiltt();
	Point3D getHeading();
	Point3D getPosition();
	double getGravity();
	double getRadius();
	double getAtmoRadius();
	bool getAtmosphere();
	double getMinSurfaceRadius();
	double getMaxHillRadius();
	double getSurfaceGravity();
	double getGravityFalloff();
	bool getSpawnFauna();
	bool getSpaunFlora();
	bool getShowGPS();
	string getPlanetGenerator();

	//overload operator=
	myObject operator= (myObject const& obj)
	{
		myObject passer;
		passer.Name = obj.Name;
		passer.filename = obj.filename;
		passer.Mod = obj.Mod;
		passer.Parent = obj.Parent;
		passer.distance = obj.distance;
		passer.azimuth = obj.azimuth;
		passer.inclination = obj.inclination;
		passer.axialTilt = obj.axialTilt;
		passer.Heading = obj.Heading;
		passer.position = obj.position;
		passer.gravity = obj.gravity;
		passer.radius = obj.radius;
		passer.atmoRadius = obj.atmoRadius;
		passer.atmosphere = obj.atmosphere;
		passer.minSurfaceRadius = obj.minSurfaceRadius;
		passer.maxHillRadius = obj.maxHillRadius;
		passer.surfaceGravity = obj.surfaceGravity;
		passer.gravityFalloff = obj.gravityFalloff;
		passer.spawnFauna = obj.spawnFauna;
		passer.spaunFlora = obj.spaunFlora;
		passer.showGPS = obj.showGPS;
		passer.planetGenerator = obj.planetGenerator;

		 return passer;
	}



	//friend function for overloading output operator<<()
	friend ostream& operator<<(ostream& output, const myObject& myObject) {
		//output << "(" << point.x << ", " << point.y << ")"; /*Refference***/

		output << endl;
		if (&myObject.Name) output << "Object Name: " << myObject.Name << endl;
		if (&myObject.filename) output <<"Filename: " << myObject.filename << endl;
		if (&myObject.Mod) output << "Mod Name: " << myObject.Mod << endl;
		if (&myObject.Parent) output << "Parent Object: " << myObject.Parent->getName() << endl;
		if (&myObject.distance) output << "Distance: " << myObject.distance << endl;
		if (&myObject.azimuth) output << "Azimuth: " << myObject.azimuth << endl;
		if (&myObject.inclination) output << "Inclination: " << myObject.inclination << endl;
		if (&myObject.axialTilt) output << "Axial Tilt: " << myObject.axialTilt << endl;
		if (&myObject.Heading) output << "Heading: " << myObject.Heading <<endl;
		if (&myObject.position) output << "Position: " << myObject.position << endl;
		if (&myObject.gravity) output << "Gravity: " << myObject.gravity << endl;
		if (&myObject.radius) output << "Radius: " << myObject.radius << endl;
		if (&myObject.atmoRadius) output << "Atmospkere Radius: " << myObject.atmoRadius << endl;
		if (&myObject.atmosphere) output << "Has Atmopsphere: " << myObject.atmosphere << endl;
		if (&myObject.filename) output << "Minimum Surface Radius: " << myObject.minSurfaceRadius << endl;
		if (&myObject.maxHillRadius) output << "Maximum Hill Radius: " << myObject.maxHillRadius << endl;
		if (&myObject.surfaceGravity) output << "Surface Gravity: " << myObject.surfaceGravity << endl;
		if (&myObject.gravityFalloff) output << "Gravity Falloff Distance: " << myObject.gravityFalloff << endl;
		if (&myObject.spawnFauna) output << "Spawns Fauna: " << myObject.spawnFauna << endl;
		if (&myObject.spaunFlora) output << "Spawns Flora: " << myObject.spaunFlora << endl ;
		if (&myObject.showGPS) output << "Show GPS: " << myObject.showGPS << endl;
		return output;
	}
//Worker Methods
	void setPosition(void)
	{
		Point3D tempoint = Parent->position;
		if (myObject::azimuth && myObject::inclination && myObject::distance && myObject::Parent)
			position = position.vectp3D(tempoint, azimuth, inclination, distance);
	}
	void updateObject()
	{
		Point3D tempoint = Parent->position;
		if (myObject::azimuth && myObject::inclination && myObject::distance && myObject::Parent)
			position = position.vectp3D(tempoint, azimuth, inclination, distance);


	}

protected:
	string Name;
	string filename;
	string Mod;
	myObject* Parent;
	double distance;
	double azimuth;
	double inclination;
	double axialTilt;
	Point3D Heading;
	Point3D position;
	double gravity;
	double radius;
	double atmoRadius;
	bool atmosphere;
	double minSurfaceRadius;
	double maxHillRadius;
	double surfaceGravity;
	double gravityFalloff;
	bool spawnFauna;
	bool spaunFlora;
	bool showGPS;
	string planetGenerator;
};