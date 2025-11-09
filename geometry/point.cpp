#include <sstream>
#include <cmath>
#include <string>
#include"point.h"
#include"vector.h"


// création d'un point à partir de ses coordonnées.
Point2f MakeP2f(float x, float y)
{
    Point2f p;
    p.x= x;
    p.y= y;
    return p;
}

// Déplacer le point de dx sur l’axe X et dy sur l’axe Y.
Point2f Translate(const Point2f& p, float dx, float dy)
{
 Point2f p1;
 p1.x= p.x + dx;
 p1.y= p.y +dy;
 return p1;   
}

//
Point2f Translate(const Point2f& p, const Vector2f& v)
{
    Point2f p2;
    p2.x= p.x+v.x;
    p2.y= p.y + v.y;
    return p2;
}

// Redimensionner les coordonnées du point.
Point2f Scale(const Point2f& p, float sx, float sy)
{
    Point2f p3;
    p3.x= p.x * sx ;
    p3.y= p.y * sy ;
    return p3;
}

// 
Point2f Scale(const Point2f& p, const Vector2f& s)
{
    Point2f p4;
    p4.x= p.x * s.x;
    p4.y= p.y * s.y;
    return p4;
}

// Rotation du point autour de l’origine (0,0).
Point2f Rotate(const Point2f& p, float angleDegree)
{
    Point2f p5;
    // Conversion de l'angle en radians car <cmath> n'utilise pas les degrees.
    float angleRad = angleDegree*(3.14/180);
    p5.x= p.x * cos(angleRad) - p.y * sin(angleRad);
    p5.y= p.x * sin(angleRad) + p.y * cos(angleRad);
    return p5;
}

// Convertit le point en texte, pour affichage.
std::string ToString(const Point2f& p)
{
      std::ostringstream oss;
      // affichage sous le format (x,y).
      oss << "(" << p.x << "," << p.y << ")";
      // str pour recuperer l'ensemble des chaines de caractere.
      return oss.str();
}