#include <iostream>
using namespace std;


struct Vector3d{
    float x;
    float y;
    float z;
};

struct Vector2d {
    float x;
    float y;
};

class Vector {

private:
    float x = 0;
    float y = 0;
    float z = 0;

   

public:
    Vector (float defX, float defY, float defZ) {
        x = defX;
        y = defY;
        z = defZ;
    }
     
     Vector (float defX, float defY) {
         x = defX;
         y = defY;
     }

    void setCoord (Vector3d coords) {
        x = coords.x;
        y = coords.y;
        z = coords.z;
    }

    Vector3d getCoords3d() {
        return { x, y, z };
    }

    Vector2d getCoords2d() {
        return { x, y };
    }

    float getModule(){
        return sqrt(x*x + y*y + z*z);     
    }

};

int main()
{
    Vector myVector3d(-5, 5, -5);
    Vector myVector2d(50, 100);
   
    Vector3d coords3d = myVector3d.getCoords3d();
    Vector2d coords2d = myVector2d.getCoords2d();
   
    cout << "\n x = " << coords3d.x << ", y = " << coords3d.y << ", z = " << coords3d.z;
    cout << "\n x = " << coords2d.x << ", y = " << coords2d.y;

    float module3 = myVector3d.getModule();
    float module2 = myVector2d.getModule();
    cout << "\n module 3d = " << module3;
    cout << "\n module 2d = " << module2 << "\n";

    return 0;
}

