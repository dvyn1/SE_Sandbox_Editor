#include "myObject.h"

//Constructors 

myObject::myObject()
{
    Point3D originPos;
    myObject::Name = "null";
    myObject::filename = "NULL";
    myObject::Mod = "NULL";
    myObject::Parent = this;
    myObject::Parent->Name="null";
    myObject::distance = NULL;
    myObject::azimuth = NULL;
    myObject::inclination = NULL;
    myObject::axialTilt = NULL;
    myObject::Heading = originPos;
    myObject::position = originPos;
    myObject::gravity = NULL;
    myObject::radius = NULL;
    myObject::atmoRadius = NULL;
    myObject::atmosphere = NULL;
    myObject::minSurfaceRadius = NULL;
    myObject::maxHillRadius = NULL;
    myObject::surfaceGravity = NULL;
    myObject::gravityFalloff = NULL;
    myObject::spawnFauna = NULL;
    myObject::spaunFlora = NULL;
    myObject::showGPS = NULL;
    myObject::planetGenerator = "NULL";
}

myObject::myObject(string name)
{
    myObject::Name = name;
}

myObject::myObject(string name, double x, double y, double z)
{
    myObject::Name = name;
    myObject::position.setX(x);
    myObject::position.setY(y);
    myObject::position.setZ(z);
}

myObject::myObject(string name, myObject parent, double azimuth, double inclination, double distance)
{
    myObject::Name = name;
    myObject::Parent = &parent;
    myObject::distance = distance;
    myObject::azimuth=azimuth;
    myObject::setInclination(inclination) ;

    myObject::position = position.vectp3D(parent.position, azimuth, inclination, distance);
}

myObject::myObject(string Name, string filename, string Mod, myObject* Parent, double distance, double azimuth, double inclination, double axialTilt, Point3D Heading, Point3D position, double gravity, double radius, double atmoRadius, bool atmosphere, double minSurfaceRadius, double maxHillRadius, double surfaceGravity, double gravityFalloff, bool spawnFauna, bool spaunFlora, bool showGPS, string planetGenerator)
{
    Point3D originPos;
    myObject::Name = Name;
    myObject::filename = filename;
    myObject::Mod = Mod;
    myObject::Parent = Parent;
    myObject::distance = distance;
    myObject::azimuth = azimuth;
    myObject::inclination = inclination;
    myObject::axialTilt = axialTilt;
    myObject::Heading = Heading;
    myObject::position = position;
    myObject::gravity = gravity;
    myObject::radius = radius;
    myObject::atmoRadius = atmoRadius;
    myObject::atmosphere = atmosphere;
    myObject::minSurfaceRadius = minSurfaceRadius;
    myObject::maxHillRadius = maxHillRadius;
    myObject::surfaceGravity = surfaceGravity;
    myObject::gravityFalloff = gravityFalloff;
    myObject::spawnFauna = spawnFauna;
    myObject::spaunFlora = spaunFlora;
    myObject::showGPS = showGPS;
    myObject::planetGenerator = planetGenerator;

    updateObject();
}


//Deconstructor
myObject::~myObject()
{
}

//getters

string myObject::getName()
{
    return Name;
}

string myObject::getFilename()
{
    return filename;
}

string myObject::getMod()
{
    return Mod;
}

myObject* myObject::getParent()
{
    return Parent;
}

double myObject::getDistance()
{
    return distance;
}

double myObject::getAzimuth()
{
    return azimuth;
}

double myObject::getInclination()
{
    return inclination;
}

double myObject::getAxialTiltt()
{
    return axialTilt;
}

Point3D myObject::getHeading()
{
    return Heading;
}

Point3D myObject::getPosition()
{
    return Point3D();
}

double myObject::getGravity()
{
    return gravity;
}

double myObject::getRadius()
{
    return radius;
}

double myObject::getAtmoRadius()
{
    return atmoRadius;
}

bool myObject::getAtmosphere()
{
    return atmosphere;
}

double myObject::getMinSurfaceRadius()
{
    return minSurfaceRadius;
}

double myObject::getMaxHillRadius()
{
    return maxHillRadius;
}

double myObject::getSurfaceGravity()
{
    return surfaceGravity;
}

double myObject::getGravityFalloff()
{
    return gravityFalloff;
}

bool myObject::getSpawnFauna()
{
    return spawnFauna;
}

bool myObject::getSpaunFlora()
{
    return spaunFlora;
}

bool myObject::getShowGPS()
{
    return showGPS;
}

string myObject::getPlanetGenerator()
{
    return planetGenerator;
}


//Setters
void myObject::setName(string name)
{
    myObject::Name = name;
}

void myObject::setFilename(string filename)
{
    myObject::filename = filename;
}

void myObject::setMod(string modName)
{
    myObject::Mod = modName;
}

void myObject::setParent(myObject* parent)
{
    myObject::Parent = parent;

    updateObject();
}

void myObject::setDistance(double distance)
{
    myObject::distance = distance;

    setPosition();
}

void myObject::setAzimuth(double azimuth)
{
    myObject::azimuth = azimuth;

    setPosition();
}

void myObject::setInclination(double inclination)
{
    myObject::inclination = inclination;

    setPosition();
}

void myObject::setAxialTilt(double axialTilt)
{
    myObject::axialTilt = axialTilt;
}

void myObject::setHeading(Point3D Heading)
{
    myObject::Heading = Heading;
}


void myObject::setPosition(Point3D position)
{
    myObject::position = position;
}


void myObject::setGravity(double gravity)
{
    myObject::gravity = gravity;
}

void myObject::setRadius(double radius)
{
    myObject::radius = radius;
}

void myObject::setAtmoRadius(double atmoRadius)
{
    myObject::atmoRadius = atmoRadius;
}

void myObject::setAtmosphere(bool atmosphere)
{
    myObject::atmosphere = atmosphere;
}

void myObject::setMinSurfaceRadius(double minSurfaceRadius)
{
    myObject::minSurfaceRadius = minSurfaceRadius;
}

void myObject::setMaxHillRadius(double maxHillRadius)
{
    myObject::maxHillRadius = maxHillRadius;
}

void myObject::setSurfaceGravity(double surfaceGravity)
{
    myObject::surfaceGravity = surfaceGravity;
}

void myObject::setGravityFalloff(double gravityFalloff)
{
    myObject::gravityFalloff = gravityFalloff;
}

void myObject::setSpawnFauna(bool spawnFauna)
{
    myObject::spawnFauna = spawnFauna;
}

void myObject::setSpaunFlora(bool spaunFlora)
{
    myObject::spaunFlora = spaunFlora;
}

void myObject::setShowGPS(bool showGPS)
{
    myObject::showGPS = showGPS;
}

void myObject::setPlanetGenerator(string planetGenerator)
{
    myObject::planetGenerator = planetGenerator;
}

