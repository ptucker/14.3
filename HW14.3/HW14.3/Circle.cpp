#include "stdafx.h"
#include "Circle.h"

Circle::Circle()
{
	radius = 1;    
}   
Circle::Circle(double newRadius)  {
	radius = newRadius;    numberOfObjects++;   }  
double Circle::getArea()
const {
	return radius * radius * 3.14159;
}

  double Circle::getRadius() const {    return radius;   } 
 
  void Circle::setRadius(double newRadius) 
  {    radius = (newRadius >= 0) ? newRadius : 0;   } 
	
  int Circle::getNumberOfObjects() 
  {     return numberOfObjects;   }


  bool Circle::operator<(Circle ob)
  {
	  if (radius < ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }

  bool Circle::operator<=(Circle ob)
  {
	  if (radius <= ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }

  bool Circle::operator>(Circle ob)
  {
	  if (radius > ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }

  bool Circle::operator>=(Circle ob)
  {
	  if (radius >= ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }

  bool Circle::operator!=(Circle ob)
  {
	  if (radius != ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }

  bool Circle::operator==(Circle ob)
  {
	  if (radius == ob.getRadius())
	  {
		  return 1;
	  }
	  else
		  return 0;
  }