#include "vector.h"
#include "point.h"
#include <sstream>
#include <string>

// Crée un vecteur à partir de ses deux composantes.
Vector2f MakeV2f(float x, float y)
{
     Vector2f v;
     v.x = x;
     v.y = y;
     return v;
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b) 
{
    Vector2f v;
    v.x = b.x - a.x;
    v.y = b.y - a.y;
    return v;
}

// Somme de deux vecteurs :
Vector2f Add(const Vector2f& a, const Vector2f& b)
{
    Vector2f v1;
    v1.x= a.x + b.x;
    v1.y= a.y + b.y;
    return v1;
}

// Soustraction de deux vecteurs :
Vector2f Sub(const Vector2f& a, const Vector2f& b)
{
    Vector2f v2;
    v2.x= a.x - b.x;
    v2.y= a.y - b.y;
    return v2;
}

// Multiplie un vecteur par un scalaire.
Vector2f Scale(const Vector2f& v, float scalar)
{
     Vector2f v3;
     v3.x= v.x * scalar;
     v3.y= v.y * scalar;
     return v3;
}

// Produit scalaire :
float Dot(const Vector2f& a, const Vector2f& b)
{
     Vector2f v4;
     v4.x= a.x * b.x;
     v4.y= a.y * b.y;
     return (v4.x + v4.y);
}

// Longueur (norme) du vecteur :
float Length(const Vector2f& v)
{
     Vector2f v5;
     v5.x= v.x * v.x;
     v5.y= v.y * v.y;
     return (v5.x + v5.y);
}

// 
Vector2f Normalize(const Vector2f& v)
{
     Vector2f v6;
     float len= Length(v);
     if(len == 0 )
       {
        return {0.0f , 0.0f};
       }
     else 
       { 
     v6.x= v.x/len;
     v6.y= v.y/len;
     return v6;
       }
}
 
// Interpolation linéaire entre a et b
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t)
{
      Vector2f v7;
      v7.x= a.x + t * (b.x - a.x);
      v7.y= a.y + t * (b.y - a.y);
      return v7;
}

// Déterminant
float Determinant(const Vector2f& a, const Vector2f& b)
{
    Vector2f v8;
    v8.x= a.x * b.y;
    v8.y= a.y * b.x;
    return (v8.x - v8.y);
}

// afficher le vecteur
std::string ToString(const Vector2f& v)
{
   std::ostringstream oss;
   oss << "<" << v.x << ", " << v.y << ">";
   return oss.str();
}
