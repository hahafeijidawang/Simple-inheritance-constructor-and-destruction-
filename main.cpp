#include <iostream>

using namespace std;

class Parent
{
public:
    void printP(){

        cout<<"I am your father"<<endl;

    }
    Parent(int a,int b){

        this->a=a;

        this->b=b;

        cout<<"Superclass constructor"<<endl;

    }
    ~Parent(){

        cout<<"Destructor of parent class"<<endl;
    }
private:
    int a;
    int b;
};
class child : public Parent{

public:
    void printC(){

        cout<<"I am son"<<endl;

    }

    child(int a,int b,int c):Parent(a,b){


        this->c = c;

    }
    ~child(){


        cout<<"Subclass destructor"<<endl;


    }



protected:


private:

    int c;



};
void howToPrint(Parent *base){

    base->printP();//父类的成员

}
void howToPrint(Parent &base){

    base.printP();//父类的成员

}
void playObj(){

    child c1(1,2,4);

}
int main()
{
  /* Parent p1;
   p1.printP();

   child c1;
   c1.printC();
   c1.printP();
//赋值兼容性原则
   //1基类指针（引用）指向 子类对象(子类就是一种特殊的父类)
   Parent *p = NULL;

   p = &c1;

   p->printP();

   //1-2 指针做函数参数。
    howToPrint(&p1);
    howToPrint(&c1);
 //1-3 引用做函数参数。
    howToPrint(p1);
    howToPrint(c1);
//第二层含义
    //可以让父类对象初始化 子类对象
    // 子类就是一种特殊的父类
    Parent p3=c1;
    */

   playObj();


}

