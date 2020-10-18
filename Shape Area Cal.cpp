#include <iostream>  
using namespace std;
class Shape{  
	protected:  
    	double x, y;  
  	public:  
    	void set_dimension(double i,double j=0) {  
      		x=i;  
      		y=j;  
    	}  
    	virtual void show_area(void) = 0;
};  

class two_dimensional_shape:public virtual Shape{
	
};
 class three_dimensional_shape:public virtual Shape{
	
};
       
class Triangle : public two_dimensional_shape {  
	public:  
    	void show_area(void){   
        	cout<<"The area of the triangle is: ";  
        	cout<<x*0.5*y<<endl;  
      	}  
  };  
       
class Square : public two_dimensional_shape {  
	public:  
    	void show_area(void) {  
        	cout<<"The area of the square is: ";  
        	cout<<x*y<<endl;  
        }  
};  
       
class Circle : public two_dimensional_shape {  
	public:  
    	void show_area(void) {   
        	cout<<"The area of the circle is: ";  
        	cout<<3.14*x*x<<endl;  
      	}  
};  
class Cube : public three_dimensional_shape {  
	public:  
    	void show_area(void) {   
        	cout<<"The area of the cube is: ";  
        	cout<<6*x*x<<endl;  
      	}  
};
class Sphere : public three_dimensional_shape {  
	public:  
    	void show_area(void) {   
        	cout<<"The sphere of the cube is: ";  
        	cout<<4*3.14*x*x<<endl;  
      	}  
};
       
int main(){  
	Shape *ptr;  
    Triangle t; 
    Square s;  
    Circle c; 
    Sphere S;
    Cube C;
       
    ptr=&t;  
    ptr->set_dimension(10.0, 5.0);  
    ptr->show_area();  
       
    ptr=&s;  
    ptr->set_dimension(10.0, 5.0);  
    ptr->show_area();  
       
    ptr=&c;  
    ptr->set_dimension(3.0);  
    ptr->show_area();  
    
    ptr=&C;
    ptr->set_dimension(2.5);
    ptr->show_area();
    
    ptr=&S;
    ptr->set_dimension(2.0);
    ptr->show_area();
       
    return 0;  
  }
