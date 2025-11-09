 # Points et vecteurs 2D

Ce projet illustre la programmation modulaire en C++ à travers la manipulation de structures (`struct`)  et de fonctions réparties dans plusieurs fichiers.

#  Structure du projet

geometry-cpp/
├── main.cpp
├── geometry/
│ ├── point.h
│ ├── point.cpp
│ ├── vector.h
│ ├── vector.cpp
│ ├── utils.h


 # Structures utilisés
      * points :
        struct Point2f 
        {
    float x;
    float y;
        };

       * vecteurs :
       struct Vector2f 
       {
    float x;
    float y;
       };

# fonctions implementées
    * Gestion des points
      
      Point2f MakeP2f(float x, float y); // création d'un point à partir de ses coordonnées.

      Point2f Translate(const Point2f& p, float dx, float dy); // Déplacer le point de dx sur l’axe X et dy sur l’axe Y.

      Point2f Translate(const Point2f& p, const Vector2f& v);

    Point2f Scale(const Point2f& p, float sx, float sy); // Redimensionner les coordonnées du point.

      Point2f Scale(const Point2f& p, const Vector2f& s); 

      Point2f Rotate(const Point2f& p, float angleDegree); // Rotation du point autour de l’origine (0,0).

std::string ToString(const Point2f& p); // Convertit le point en texte, pour affichage.

    * gestion des vecteurs 

Vector2f MakeV2f(float x, float y); // Crée un vecteur à partir de ses deux composantes.

Vector2f MakeV2f(const Point2f& a, const Point2f& b);

Vector2f Add(const Vector2f& a, const Vector2f& b); // Somme de deux vecteurs :

Vector2f Sub(const Vector2f& a, const Vector2f& b); // Soustraction de deux vecteurs :

Vector2f Scale(const Vector2f& v, float scalar); // Multiplie un vecteur par un scalaire.

float Dot(const Vector2f& a, const Vector2f& b); // Produit scalaire :

float Length(const Vector2f& v); // Longueur (norme) du vecteur :

Vector2f Normalize(const Vector2f& v);

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t); // Interpolation linéaire entre a et b

float Determinant(const Vector2f& a, const Vector2f& b); // Déterminant

std::string ToString(const Vector2f& v); // afficher le vecteur


#  Description des fichiers

# main.cpp: Programme principal de test


# point.h:  Définition et implémentation de la structure `Point2f` et des fonctions de transformation (translation, rotation, etc.)


# vector.h: Définition et implémentation de la structure `Vector2f` et des opérations vectorielles (somme, produit scalaire, norme, etc.) 


# utils.h: Fonctions utilitaires comme `ToString()` et `Print()` pour afficher les structures et données


# Compilation 

g++ main.cpp geometry/*.cpp -I geometry -o geometry_app


# Execution

./geometry_app
