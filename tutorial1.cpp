#include <iostream>

using namespace std;


class Circle{

private: 

double radius;
string color;

public:

double getRadius(return Radius;){
    void setRadius(double Radius){this->Radius=Radius;}                                 //defining attributes in private and public methods
}                                                                                       // Also used getters and setters from the 4th task in the 1st task to make the code more brief.

double getArea(return Area;){
    void setArea(double Area){this->Area=Area;}

}

}

void Describe(){

    cout << "This is a"<< this ->Color << "circle with a radius of"<< this -> Radius << "and the area of"<<this ->Area <<endl;
      
      // Describe method with "this" pointers. TASK 4

}


//1st and 4th tasks are combined together. I hope its not a problem and if it bothers you please let me know.


int main(){

Radius=2;
Area=12;

Circle firstcircle;
firstcircle.setRadius();
firstcircle.setArea();
                                                                                        //end of first task.
return 0;

}                           




//starting 2nd task in the same cpp to make it easier to control

class Circle{

public: 
double Radius;
string Color;
double Area;

          Circle(){
              Radius=2;
              Area=12;
              color=red;               //default constructor.

        
          }
}


          Circle(double r,string c,double are){
              Radius=rad;
              Area=ar;
              color=col;                             //parameterized constructor

          }

int main(){

Circle second;   //default constructed circle
circle third(2,red,12);     //parameterized constructed circle 

return 0;
}


//end of 2nd task


//TASK 3 COMPARE AREAS

void CompareArea(circle firstcircle,circle second)
{
    double area1=firstcircle.getArea();
    double area2=second.getArea();
    if(area1>area2)
        cout<<"\n The First circle has the larger area"<<endl ;                 //task 3 to compareAREAs
    else if(area1<area2)
        cout<<"\n The Second circle has the larger area"<<endl;
    else
        cout<<"\n They have the same area"<<endl;


}

//Task 4 is done with task 1 together.

