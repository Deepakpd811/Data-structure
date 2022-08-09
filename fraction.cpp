#include <iostream>
using namespace std;

class fraction{
    private:
      int nummerator;
      int denominator;
      
    public:  
      fraction(int nummerator, int denominator){
        this-> nummerator = nummerator;
        this-> denominator = denominator;
        
      }
      
      void print(){
        cout<<nummerator<< "/" << denominator<<endl;
      }
      
      void add(fraction f2){
        int lcm = nummerator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/nummerator;
        
        int num = x * nummerator + (y * f2.nummerator);
        nummerator = num;
        denominator = lcm;
      }
      
      
      

};





int main() {
  
  fraction f1(3,5);
  fraction f2(2,7);
  
  f1.add(f2);
  
  f1.print();
  
  
   
}