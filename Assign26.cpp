// 1. Define a class Complex to represent a complex number with instance variables a and b
// to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a,b;
//     public:
//     void setData(int x,int y)
//     {
//         a = x, b = y;
//     }
//     void showData()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
//     complex add(complex obj)
//     {
//         complex temp;
//         temp.a = a + obj.a;
//         temp.b = b + obj.b;
//         return temp;
//     }
// };
// int main()
// {
//     complex o1,o2,o3;
//     o1.setData(2,3);
//     o1.showData();
//     o2.setData(3,2);
//     o2.showData();
//     o3 = o1.add(o2);
//     o3.showData();
//     return 0;
// }

// 2. Define a class Time to represent a time with instance variables h,m and s to store hour,
// minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
// #include <iostream>
// using namespace std;
// class Time
// {
//     int hr, min, sec;
// public:
//     void setTime()
//     {
//         cout << "Enter hour::" << endl;
//         cin >> hr;
//         cout << "Enter minute::" << endl;
//         cin >> min;
//         cout << "Enter second::" << endl;
//         cin >> sec;
//     }
//     void showTime()
//     {
//         cout << "Time :: " << hr << ":" << min << ":" << sec << endl;
//     }
//     void normarlize()
//     {
//         min = min + sec / 60;
//         sec = sec % 60;
//         hr = hr + min / 60;
//         min = min % 60;
//     }
//     Time add(Time t)
//     {
//         Time temp;
//         temp.sec = sec + t.sec;
//         temp.min = min + t.min;
//         temp.hr = hr + t.hr;
//         temp.normarlize();
//         return temp;
//     }
// };
// int main()
// {
//     Time t,t1;
//     t.setTime();
//     t.normarlize();
//     t.showTime();
//     t1.setTime();
//     t1.add(t);
//     t1.normarlize();
//     t1.showTime();
//     return 0;
// }

// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
// #include <iostream>
// using namespace std;
// class cube
// {
//     int s;
//     public:
//     cube(int side)
//     {
//         s = side;
//     }
//     void vol()
//     {
//         cout<<"Volume of cube = "<<s*s*s<<endl;
//     }
// };
// int main()
// {
//     cube obj(2);
//     obj.vol();
//     return 0;
// }

// 4. Define a class Counter and Write a program to Show Counter using Constructor.
// #include <iostream>
// using namespace std;
// class Counter
// {
//     static int count;
//     public:
//     Counter()
//     {
//         count++;
//         cout<<"count = "<<count<<endl;
//     }
// };
// int Counter :: count;
// int main()
// {
//     Counter a,b,c;
//     return 0;
// }or

// 5. Define a class Date and write a program to Display Date and initialise date object using
// Constructors.
// #include <iostream>
// using namespace std;
// class Date
// {
//     int date,month,year;
//     public:
//     Date(int d,int m,int y)
//     {
//         date = d;
//         month = m;
//         year = y;
//     }
//     void DisplayDate()
//     {
//         cout<<"Date "<<date<<"-"<<month<<"-"<<year<<endl;
//     }
// };
// int main()
// {
//     Date obj(15,01,2023);
//     obj.DisplayDate();
//     return 0;
// }

// 6. Define a class student and write a program to enter student details using constructor and
// define member function to display all the details.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class student
// {
//    char name[40];
//    int rollno;
//    public:
//    student(char str[] , int rn)
//    {
//       strcpy(name , str);
//       rollno = rn;
//    }
//    void display_details()
//    {
//      cout<<"Name of student - "<<name<<endl;
//      cout<<"Roll No - "<<rollno<<endl;
//    }
// };
// int main()
// {
//     student s1("Vishwajeet Kumar", 20);
//     s1.display_details();
//     return 0;
// }

// 7. Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.
// #include <iostream>
// using namespace std;
// class Box
// {
//     int length,breadth,hight;
//     public:
//     Box(int l,int b,int h)
//     {
//         length = l, breadth = b, hight = h;
//     }
//     void volume()
//     {
//         cout<<"Volume of the Box = "<<length*breadth*hight<<endl;
//     }
// };
// int main()
// {
//     Box b1(2,3,1);
//     b1.volume();
//     return 0;
// }

// 8. Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor.
// #include <iostream>
// using namespace std;
// class Bank
// {
//    float p,r;
//    int t;
//    public:
//    void principal()
//    {
//     cout<<"Enter principal::"<<endl;
//     cin>>p;
//    }
//    void rate()
//    {
//     cout<<"Enter rate of interest::"<<endl;
//     cin>>r;
//    }
//    void year()
//    {
//     cout<<"Enter year::"<<endl;
//     cin>>t;
//    }
//    void si()
//    {
//     float si =(p*r*t)/100;
//     cout<<"Simple interest = "<<si<<endl;
//    }
// };
// int main()
// {
//     Bank c1;
//     c1.principal();
//     c1.rate();
//     c1.year();
//     c1.si();
//     return 0;
// }

// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
//  #include <iostream>
//  using namespace std;
//  class Bill
//  {
//    int unit;
//    float bill;
//    public:
//    void get()
//    {
//      cout<<"Enter your unit::"<<endl;
//      cin>>unit;
//    }
//    void calculateBill()
//    {
//      if (unit<100)
//      {
//        bill = unit * 1.20;
//        cout<<"Your Bill :: "<<bill;
//      }
//      else if (unit > 100 && unit <= 200)
//      {
//        bill = (unit - 100)*2 + 120;
//        cout<<"Your Bill :: "<<bill;
//      }
//      else if (unit > 200)
//      {
//        bill = (unit - 200) * 3 + 200 + 120;
//        cout<<"Your Bill ::  "<<bill;
//      }
//      else{
//        cout<<"Invalid";
//      }
//    }
//  };
//  int main()
//  {
//    Bill b1;
//    b1.get();
//    b1.calculateBill();
//    return 0;
//  }

// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
// #include <iostream>
// using namespace std;
// class StaticCount
// {
//     static int var;
//     public:
//     void fun()
//     {
//         var++;
//     }
//     void display()
//     {
//         cout<<"Static Variable = "<<var<<endl;
//     }
// };
// int StaticCount :: var;
// int main()
// {
//     StaticCount c1,c2,c3;
//     c1.fun();
//     c2.fun();
//     c3.fun();
//     c1.display();
//     return 0;
// }

