//#ifndef point_cpp
//#define point_cpp
//#include"point.h"
//
//
//
//
////driver function to test classes
//int main() {
//
//    //removes sci notation
//    std::cout << std::setiosflags(std::ios_base::fixed) << std::setprecision(10);
//
//    Point3D ass(45, 24, 32);
//    Point3D point(3, 4, 5);
//    cout << "point = " << point << endl;
//    //function distance() returns 7.07107
//    cout << point.distance() << endl;
//
//    //pointer2D points to point
//    Point2D* pointer2D = &point;
//    cout << "*pointer2D = " << *pointer2D << endl;
//    //function distance() incorrectly returns 5.0
//    cout << pointer2D->distance() << endl;
//
//    //pointer3D points to point
//    Point3D* pointer3D = &point;
//    cout << "*pointer3D = " << *pointer3D << endl;
//    //function distance() returns 7.07107
//    cout << pointer3D->distance() << endl;
//
//    cout << "ass = " << ass << endl;
//    cout << ass.distance() << endl;
//
//    Point3D Sun(30002643452.819115, -449997229960.11816, 54002840913.749352);
//    cout << "Sun's Position is: " << Sun << endl;
//
//    Point3D Mercury = Sun.vectp3D(Sun, 8, 6.3, 34149000);
//    cout << "Mercury's Position: " << Mercury << " Distance to the Sun: " << Mercury.distance(Sun, Mercury) << endl ;
//    
//    Point3D Venus = Sun.vectp3D(Sun, 257, 2.2, 63804000);
//    cout << "Venus's Position: " << Venus << " Distance to the Sun: " << Venus.distance(Sun, Venus) << endl;
//    
//    Point3D Earth = Sun.vectp3D(Sun, 8, 1.6, 88217000);
//    cout << "Earth's Position: " << Earth << " Distance to the Sun: " << Earth.distance(Sun, Earth) << endl;
//    
//    Point3D Mars= Sun.vectp3D(Sun, 55, 1.7, 134414000);
//    cout << "Mars' Position: " << Mars << " Distance to the Sun: " << Mars.distance(Sun, Mars) << endl;
//    
//    Point3D Jupiter = Sun.vectp3D(Sun, 234, .3, 458975000);
//    cout << "Jupiter's Position: " << Jupiter<< " Distance to the Sun: " << Jupiter.distance(Sun, Jupiter) << endl;
//
//    Point3D Saturn = Sun.vectp3D(Sun, 128, .9, 869554000);
//    cout << "Saturn's Position: " << Saturn << " Distance to the Sun: " << Saturn.distance(Sun, Saturn) << endl;;
//    
//    Point3D Uranus = Sun.vectp3D(Sun, 1, 30, 1694509000);
//    cout << "Uranus's Position: " << Uranus << " Distance to the Sun: " << Uranus.distance(Sun, Uranus) << endl;;
//
//    Point3D Neptune = Sun.vectp3D(Sun, 94, .7, 2654203000);
//    cout << "Neptune's Position: " << Neptune << " Distance to the Sun: " << Neptune.distance(Sun, Neptune) << endl;;
//
//    Point3D Pluto = Sun.vectp3D(Sun, 210, 17, 3400000000);
//    cout << "Pluto's Position: " << Pluto << " Distance to the Sun: " << Pluto.distance(Sun, Pluto) << endl;;
//
//    return 0;
//}
//
////
////{
////
////    template <typename T>
////    point2d<T>::point2d(const T& x, const T& y)
////    {
////        this->x = x;
////        this->y = y;
////    }
////
////
////    template <typename T>
////    point2d<T>::~point2d() { }
////
////
////    template <typename T>
////    const T& point2d<T>::getX() const
////    {
////        return this->x;
////    }
////
////
////    template <typename T>
////    const T& point2d<T>::getY() const
////    {
////        return this->y;
////    }
////
////
////    template <typename T>
////    T& point2d<T>::getX()
////    {
////        return this->x;
////    }
////
////
////    template <typename T>
////    T& point2d<T>::getY()
////    {
////        return this->y;
////    }
////
////
////    template <typename T>
////    bool point2d<T>::setX(const T& x)
////    {
////        this->x = x;
////        return true;
////    }
////
////
////    template <typename T>
////    bool point2d<T>::setY(const T& y)
////    {
////        this->y = y;
////        return true;
////    }
////
////
////    template <typename T>
////    bool point2d<T>::print()
////    {
////        printf("2d point (%f,%f)\n", (float)this->getX(), (float)this->getY());
////        return true;
////    }
////
////
////    template <typename T>
////    point2d<T> point2d<T>::operator+ (const point2d<T>& p) const
////    {
////        point2d<T> q;
////
////        q.setX(this->x + p.getX());
////        q.setX(this->y + p.getY());
////
////        return q;
////    }
////
////    template <typename T>
////    point2d<T> point2d<T>::operator- (const point2d<T>& p) const
////    {
////        point2d<T> q;
////
////        q.setX(this->x - p.getX());
////        q.setY(this->y - p.getY());
////
////        return q;
////    }
////
////    template <typename T>
////    T point2d<T>::operator* (const point2d<T>& p) const
////    {
////        T r = this->x * p.getX() + this->y * p.getY();
////        return r;
////    }
////
////    template <typename T>
////    point2d<T>& point2d<T>::operator+=(const point2d<T>& p)
////    {
////        this->x += p.getX();
////        this->y += p.getY();
////
////        return *this;
////    }
////
////
////    template <typename T>
////    point2d<T>& point2d<T>::operator-=(const point2d<T>& p)
////    {
////        this->x -= p.getX();
////        this->y -= p.getY();
////
////        return *this;
////    }
////
////
////
////    template <typename T>
////    T& point2d<T>::operator[](const unsigned int n)
////    {
////        /* exceptions */
////        if (n == 0) return this->x;
////        else if (n == 1) return this->y;
////        else assert(0);
////
////        // shouldn't ever get here but some compilers complain
////        // about missing return value
////        return this->x;
////    }
////
////    template <typename T>
////    const T& point2d<T>::operator[](const unsigned int n) const
////    {
////        /* exceptions */
////        if (n == 0) return this->x;
////        else if (n == 1) return this->y;
////        else assert(0);
////
////        // shouldn't ever get here but some compilers complain
////        // about missing return value
////        return this->x;
////    }
////
////
////
////
////    template <typename T>
////    Point3D<T>::Point3D(const T& x, const T& y, const T& z)
////    {
////        this->x = x;
////        this->y = y;
////        this->z = z;
////    }
////
////
////    template <typename T>
////    Point3D<T>::~Point3D() { }
////
////
////    template <typename T>
////    const T& Point3D<T>::getX() const
////    {
////        return this->x;
////    }
////
////
////    template <typename T>
////    const T& Point3D<T>::getY() const
////    {
////        return this->y;
////    }
////
////
////    template <typename T>
////    const T& Point3D<T>::getZ() const
////    {
////        return this->z;
////    }
////
////
////    template <typename T>
////    T& Point3D<T>::getX()
////    {
////        return this->x;
////    }
////
////
////    template <typename T>
////    T& Point3D<T>::getY()
////    {
////        return this->y;
////    }
////
////
////    template <typename T>
////    T& Point3D<T>::getZ()
////    {
////        return this->z;
////    }
////
////
////
////    template <typename T>
////    bool Point3D<T>::setX(const T& x)
////    {
////        this->x = x;
////        return true;
////    }
////
////
////    template <typename T>
////    bool Point3D<T>::setY(const T& y)
////    {
////        this->y = y;
////        return true;
////    }
////
////
////    template <typename T>
////    bool Point3D<T>::setZ(const T& z)
////    {
////        this->z = z;
////        return true;
////    }
////
////    template <typename T>
////    bool Point3D<T>::print()
////    {
////        printf("3d point (%f,%f,%f)\n",
////            (float)this->getX(), (float)this->getY(), (float)this->getZ());
////        return true;
////    }
////
////
////    template <typename T>
////    Point3D<T> Point3D<T>::operator+ (const Point3D<T>& p) const
////    {
////        Point3D<T> q;
////
////        q.setX(this->x + p.getX());
////        q.setY(this->y + p.getY());
////        q.setZ(this->z + p.getZ());
////
////        return q;
////    }
////
////
////    template <typename T>
////    Point3D<T> Point3D<T>::operator- (const Point3D<T>& p) const
////    {
////        Point3D<T> q;
////
////        q.setX(this->x - p.getX());
////        q.setY(this->y - p.getY());
////        q.setZ(this->z - p.getZ());
////
////        return q;
////    }
////
////    template <typename T>
////    T Point3D<T>::operator* (const Point3D<T>& p) const
////    {
////        T r = this->x * p.getX() + this->y * p.getY();
////        return r;
////    }
////
////    template <typename T>
////    Point3D<T>& Point3D<T>::operator+=(const Point3D<T>& p)
////    {
////        this->x += p.getX();
////        this->y += p.getY();
////        this->z += p.getZ();
////
////        return *this;
////    }
////
////    template <typename T>
////    Point3D<T>& Point3D<T>::operator-=(const Point3D<T>& p)
////    {
////        this->x -= p.getX();
////        this->y -= p.getY();
////        this->z -= p.getZ();
////
////        return *this;
////    }
////
////
////    template <typename T>
////    T& Point3D<T>::operator[](const unsigned int n)
////    {
////        /* exceptions */
////        if (n == 0) return this->x;
////        else if (n == 1) return this->y;
////        else if (n == 2) return this->z;
////        else assert(0);
////
////        // shouldn't ever get here but some compilers complain
////        // about missing return value
////        return this->x;
////    }
////
////    template <typename T>
////    const T& Point3D<T>::operator[](const unsigned int n) const
////    {
////        /* exceptions */
////        if (n == 0) return this->x;
////        else if (n == 1) return this->y;
////        else if (n == 2) return this->z;
////        else assert(0);
////
////        // shouldn't ever get here but some compilers complain
////        // about missing return value
////        return this->x;
////    }
////
////}
//
//#endif