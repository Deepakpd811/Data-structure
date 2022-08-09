#include <iostream>
using namespace std;

class Time{
  
    
  public:
    int hour;
    int min;
    
    
  void add(Time t1 ,Time t2){
    hour = (t1.min + t2.min)/ 60;
    min = (t1.min + t2.min)%60;
    hour =  hour + t1.hour + t2.hour;
    
  }  
  
  void display(){
    cout << hour << " hour and  " << min <<" minute"  <<endl;
  }
  
  Time(){ // default constructor with empty cout  for t3 object
    
  }
  
  Time(int hour, int min){
    this-> hour = hour;
    this-> min = min;
  }
};


  

int main() 
{
  Time t1(1,90); //(hour, min)
  Time t2(2,30);
  Time t3;
  
  
  
  t3.add(t1,t2);
  
  t3.display();
  
  
  
  

  
  
  
   
    return 0;
}