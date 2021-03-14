#include<inbuild_functions.h>
#include<math.h>
float Area_Of_Triangle(float side_1,float side_2,float side_3)
{                float areaoftriangle0,areaoftriangle1;
                 float s;
                 s = (side_1 + side_2 + side_3)/2;
                 areaoftriangle0 = (s*(s-side_1)*(s-side_2)*(s-side_3));
                 areaoftriangle1=sqrt(areaoftriangle0);
                 return areaoftriangle1;
}
float Perimeter_Of_Triangle(float side_1,float side_2,float side_3)
{                float perimeteroftriangle;
                 perimeteroftriangle = side_1+side_2+side_3;                 
                 return perimeteroftriangle;
}
float Area_Of_Circle(float radius)
{
                 float areaofcircle;
                 areaofcircle = M_PI * radius * radius;
                 return areaofcircle;

}
float Perimeter_Of_Circle(float radius)
{
                 float perimeterofcircle;
                 perimeterofcircle = 2*M_PI*radius;
                 return perimeterofcircle;
}
