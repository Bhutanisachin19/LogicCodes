#include<iostream>
#include<stdio.h>
using namespace std;

//Class
/*
class student{
int rollno,age;
char name[50];
public:
    void input()
    {
        cout<<"Enter Name "<<endl;
        gets(name);

        cout<<"Enter Roll number"<<endl;
        cin>>rollno;

        cout<<"Enter age"<<endl;
        cin>>age;
    }

    void disp()
    {
        cout<<"Name is ";
        puts(name);
        cout<<"Roll no is "<<rollno<<endl<<"Age is"<<age;
    }
};
int main()
{
    student obj;
    obj.input();
    //obj.disp();

    //copying objects
    student obj2;
    obj2 =obj; //allowed
    obj2.disp();
}
*/



//creating a nameless object

class ABC{
public:
void disp()
{
    cout<<"Hello C++"<<endl;
}
    ABC()
    {
        cout<<"Constructor"<<endl;
    }


    ~ABC()
    {
        cout<<"Destructor"<<endl;
    }
};
int main()
{
  ABC obj;
  obj.disp();


  //nameless obj
  ABC().disp(); //destroyed instantly

  cout<<"Lastline of code"<<endl;
}



//operator overloading

/*
class Incre
{
    int num;
public:
    void operator ++()
    {
        //pre increment
        num = ++num;
        cout<<num<<endl;
    }
    void input()
    {
        cout<<"Enter a number"<<endl;
        cin>>num;
    }
};

int main()
{
    Incre ob;
    ob.input();
    ++ob;
}
*/


//overlaoding binary operator i.e take 2 and returns 1 eg c = a * b
/*
class Multi_load{
int num;
public:
    void input()
    {
        cout<<"Enter a number"<<endl;
        cin>>num;
    }

    Multi_load operator* (Multi_load b)
    {
        Multi_load c;
        c.num = num * b.num;
        return (c); //returns an object
    }
    void disp()
    {
        cout<<"Multiplication  is "<<num<<endl;
    }
};

int main()
{
    Multi_load ob1,ob2,ob3;
    ob1.input();
    ob2.input();

    ob3 = ob1 * ob2;
    ob3.disp();
}
*/


//creating obj with and without new
/*
class One
{
public:

    One()
    {
        cout<<"Constructor called"<<endl;
    }

    ~One()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    One ob;
    cout<<"hello from main"<<endl;

    cout<<"Creating another obj"<<endl;
    One ob2;

    cout<<"Using new"<<endl;
    One* obj = new One();

    cout<<"BYE"<<endl;
    delete obj;

}
*/


//friend function
/*
class B; //forward declaration
class A
{
public :
    void fun1()
    {
        cout<<"Hello from class A"<<endl;
    }
    void friend disp(A obj , B ob);
};

class B
{
public :
    void fun2()
    {
        cout<<"Hello from class B"<<endl;
    }
    void friend disp(A obj , B ob);
};

//declaring function outside class because its not a function of any class
void disp(A obj,B ob)
{
    cout<<"Friend function called"<<endl;
}

int main()
{
    A abc;
    B xyz;
    abc.fun1();
    xyz.fun2();

    disp(abc , xyz);
}
*/



//friend class -> a friend class can access private and protected members of another class

/*
class One
{
    int a;
public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    void disp()
    {
        cout<<"Value entered is: "<<a<<endl;
    }
    friend class B; //declaring friend class , now B can access all members of One including private
};

class B
{
public:
    void dispOne(One obj)
    {
        //accessing private member of One as B is the friend
        cout<<"value of friend variable is "<<obj.a;
    }
};

int main()
{
    One ob;
    ob.input();
    ob.disp();

    B obj;
    obj.dispOne(ob);
}
*/



//static datamember and member function

/*
class Stat
{
    int a;
    static int s;
public:
    void input()
    {
        cout<<"enter value of a"<<endl;
        cin>>a;
    }
    void disp()
    {
        cout<<"hello from non static function"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of static varible s is "<<s<<endl;
    }
    static void s_disp()
    {
        //static method can only access static variables
        cout<<"Static method called"<<endl;
        cout<<"value of static variable s is "<<s<<endl;
    }
};
int Stat ::s = 10; //static need to be defined here

int main()
{
    Stat obj;
    obj.input();
    obj.disp();

    //calling static method
    Stat ::s_disp();

}

*/



//Inheritance

/*

class Base
{
    int a;
public:
    static void stat()
    {
        cout<<"hello from static method "<<endl;
    }
    void disp()
    {
        cout<<"Value of a is "<<a<<endl;
    }
    void hello1()
    {
        cout<<"hello from BASE class"<<endl;
    }
    void input()
    {
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
};


class Derived :public Base
{
    public:

    void hello2()
    {
        cout<<"hello from derived class"<<endl;
    }
};

int main()
{
    Base::stat();
    Base b;
    b.hello1();
    b.input();
    b.disp();

    Derived der;
    der.hello2();
    der.hello1();

    Derived::stat();
}



*/


//protected data members and methods

/*
class One{
    void priv1()
    {
        cout<<"Private method"<<endl;
    }
protected:
    void protec1()
    {
        cout<<"Proecteed method of class One"<<endl;
    }
public:
    void pub1()
    {
         cout<<"Public method of class One"<<endl;
    }

};


class Two: public One
{
    void priv2()
    {
        cout<<"Private method"<<endl;
    }
protected:
    void protec2()
    {
        cout<<"Proecteed method of class Two"<<endl;
    }
public:
    void pub2()
    {
         cout<<"Public method of class Two"<<endl;
    }
};



class Three: public Two
{
    void priv3()
    {
        cout<<"Private method"<<endl;
    }
protected:
    void protec3()
    {
        cout<<"Proecteed method of class Three"<<endl;
    }
public:
    void pub3()
    {
         cout<<"Public method of class Three"<<endl;
    }
    void all_proetcted()
    {
         protec1();
         protec2();
         protec3();
    }
    void base_method()
    {
        cout<<"Using scope resolution operator to call base class methed"<<endl;
        One::pub1();
        Two::pub2();
    }
};

int main()
{
    Three three;
    three.pub1();
    three.pub2();
    three.pub3();

    three.all_proetcted();

    three.base_method();

    cout<<"using scope resolution and class name and calling from main"<<endl;
    three.Two::pub2();

    three.One::pub1();
}
*/




//virtual function

/*
class One
{
    public :
   virtual void hello()
    {
        cout<<"Hello from Base class"<<endl;
    }
};



class Two : public One
{
    public :
    void hello()
    {
        cout<<"Hello from Derived class"<<endl;
    }
};


int main()
{
    One ob1;
    One *ptr1;


    Two ob2;
    Two *ptr2;

    ptr1 = &ob1;
    ptr1->hello();


    ptr1 = &ob2;
    ptr1->hello();

    ptr2 = &ob2;
    ptr2->hello();

}
*/



//Pure virtual function
/*
class Abstr
{
public:
    void hello1()
    {
        cout<<"Hello from base"<<endl;
    }

    //Abstract class
    virtual void abs_method() = 0; //abstract method
};


class No_Abstr : public Abstr
{
    public:
    void hello2()
    {
        cout<<"Hello from Child"<<endl;
    }

    //defining abstract method
    void abs_method()
    {
        cout<<"hello from redefined abstract method "<<endl;
    }
};

int main()
{

    No_Abstr obj2;
    obj2.hello2();
    obj2.abs_method();

}
*/



//Templates

/*
template < class A , class B>

class Generic_template
{
    A x ;
    B y;
public:

    Generic_template()
    {
        cout<<"This works"<<endl;
    }
    void disp()
    {
        cout<<"hello"<<endl;
    }
};

int main()
{
    Generic_template<int , char> obj;
    obj.disp();
}

*/


//exception handling , non reachable code?
/*
class Excep
{
    int a,b;
public:
    void div()
    {
        int x = a-b;

        try{

            if(x!=0)
                cout<<"Result of division is "<<a/x<<endl;
            else throw(x);
        }
        catch(int x)
        {
            cout<<"Exception : x = "<<x<<endl;
        }

        catch (...)
        {
            cout<<"All is done here "<<endl;
        }
    }

    void input()
    {
        cout<<"Enter a and b "<<endl;
        cin>>a>>b;
    }
};

int main()
{
    Excep exce;
    exce.input();
    exce.div();
}

*/


//stl

/*
#include<vector>
#include<iterator>

int main()
{
    vector<int> v1; //size 0
    cout<<v1.size()<<endl;

    vector<int> v2(5); //size 5
    cout<<v2.size()<<endl;

    vector<int> v3(3,10); //size 3 fill all 3 elements as 10

    vector<int>::iterator i;

    for(i = v3.begin() ; i<v3.end() ; i++)
    {
        cout<< *i <<endl;
    }
}

*/



// Consr data member and const object
/*
class Demo
{
    const int c;
    int i;
public:

    Demo(): c(19)
    {
        cout<<"Do Nothing constructor"<<endl;
    }
    Demo(int a): c(196)
    {
        cout<<"Parametrized Constructor called"<<endl;
    }

    void Hello()
    {
        cout<<"Non const function: "<<endl;
        cout<<"value of const c is "<<c<<endl;
        cout<<"Value of i is "<<i<<endl;
    }

    void disp() const
    {
        cout<<"Const function: "<<endl;
        cout<<"value of const c is "<<c<<endl;
        cout<<"Value of i is "<<i<<endl;
    }
    void input()
    {
        cout<<"Enter value of i "<<endl;
        cin>>i;
    }
};

int main()
{

    Demo d1(19);
    d1.input();
    d1.Hello();
    d1.disp();


    //const object
    const Demo d2;
    //d2.input(); //error because its not a const method
    d2.disp();
}

*/


/*
//virtual destructor
#include<iostream>
using namespace std;

class base {
public:
	base()
	{ cout<<"Constructing base \n"; }
	virtual ~base()
	{ cout<<"Destructing base \n"; }
};

class derived: public base {
public:
	derived()
	{ cout<<"Constructing derived \n"; }
	~derived()
	{ cout<<"Destructing derived \n"; }
};

int main()
{

derived *d = new derived();
base *b = d;
delete b;
}
*/





//String is mutable in c++
/*
#include<iostream>
#include<string>

int main()
{
    string s1 = "Hello Sachin";
    cout<<s1<<endl;

    s1[1] = 'L';
    cout<<s1;
}
*/


//overloading
/*
class One
{
    int a,b,c;
public :
    void hello(int a)
    {
        cout<<"void Hello int a"<<endl;
    }

    //overloading
    void hello(float f)
    {
        cout<<"void Hello float f"<<endl;
    }
};

int main()
{
    One obj;
    obj.hello(5.5f);
}

*/



/*
class One
{
    public :
    int hello(int a)
    {
        cout<<"Hello from Base class"<<endl;
        return a;
    }
};

class Two : public One
{
    public :
    float hello(float f)
    {
        cout<<"Hello from Derived class"<<endl;
        return f;
    }
};
int main()
{
    //One obj;
    float a = 1.5f;
    Two obj2;
    float c = obj2.hello(a);
    int x = 10 ;
    int y = obj2.hello(x);
}
*/


//Overriding
// we cannot lower the scope same as in java

/*
#include<iostream>
using namespace std;

class Parent
{
public:
    virtual void hello()
    {
        cout<<"hello from parent"<<endl;
    }
};

class Child : public Parent
{

public:
    void hello()
    {
        cout<<"hello from Child"<<endl;
    }
};

int main()
{
    Parent *p;

    Child obj;

    p = &obj;

    p->hello();

}

*/

















