#include<iostream>
using namespace std;
/*class Employee
{
  private:
   int empno;
   char name[20];
   double basicSal;
   double allowance;
   double salary;
  public:
   void assignDetails(int eno,char ename[], double ebasicSal);
   void setallowance(double eallowance);
   void calSalary();
   void printPayslips();
};*/



class Rectangle
{
  private:
     int width;
     int length;
  public:
     Rectangle();
     Rectangle(int w, int l);
     void setWidth(int no);
     int getWidth();
     void setLength(int no);
     int getLength();
     void print();
     int calcArea();
     ~Rectangle();
};
Rectangle::Rectangle()
{
    length=10;
    width=10;
}
Rectangle::Rectangle(int l, int w)
{
    length=l;
    width=w;
}
Rectangle::~Rectangle()
{
    cout<<"Destructor is called for length: "<<length<<"and the width is: "<<width<<endl;
}
void Rectangle::print()
{
  cout<<"length: "<<length<<endl;
  cout<<"width: "<<width<<endl;
}
void Rectangle::setWidth(int no)
{
    width=no;
}
int Rectangle::getWidth()
{
    return width;
}
int Rectangle::getLength()
{
    return length;
}
void Rectangle::setLength(int no){
    length=no;
}
int Rectangle::calcArea(){
    int Area=width*length;
    return Area;
}



int main()
{
  /*Employee emp1;
  emp1.printPayslips();*/

  //defalt construtor
  Rectangle r1;
  r1.print();

  //parameterised constructor
  Rectangle r2(10,5);
  r2.print();

  //Dynamic memory Allocation
  Rectangle *rec1=new Rectangle();
  Rectangle *rec2=new Rectangle(70,50);

  //rec1->setWidth(40);
  //rec1->setLength(20);

  cout<<"Rec1 length is: "<<rec1->getLength()<<endl;
  cout<<"Rec1 width is: "<<rec1->getWidth()<<endl;

  delete rec1;
  delete rec2;
  
  return 0;
}