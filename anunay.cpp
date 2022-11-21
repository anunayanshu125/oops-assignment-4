#include <iostream>
using namespace std;
class stu
{   public:
    stu()                                           //default constructor
    {
      cout<<"base class default constructor called\n";
    }
    stu(int a)                             //parameterized constructor
    {
      cout<<"base class parameterized constructor called\n";
    }
    int roll;
    int age;
    char name[20];
    void show()
    {
        cout<<"enter roll,age and name."<<endl;
        cin>>roll>>age>>name;
    }
    void out()
    {
        cout<<"roll : "<<roll<<"\n"<<"age : "<< age<<"\n"<<"name : " <<name<<"\n";
    }
    ~stu()
    {
        cout<<"base class destructor called";                 //destructor
    }
    };

    class test:public stu
    {
public:
    int marks[5];
    test()
    {
        cout<<"derive class default constructor called\n";
    }
     test(int k):stu(k)
    {
        cout<<"derive class parameterized constructor called\n";
    }
    void show1()
    {   show();
        cout<<"enter marks in 5 subject."<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void out1()
    {    out();
        cout<<" marks in 5 subject are."<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<endl;
        }
    }

    };
    class result:public test{
    public:
    int t_marks=0;
    float per;
int k=0;
    int total_marks()
    {
        for(k=0;k<5;k++)
        {
            t_marks=t_marks+marks[k];
        }
  return t_marks;
    }
    float percent()
    {
    per=(float)t_marks/5;
    return per;
    }

void show2()
    {
          show1();
    }
void out2()
    {    out1();
        cout<<"total marks :"<<total_marks()<<endl;
        cout<<"percent : "<<percent()<<endl;
    }
    };
    class add
    {
        int a,b;
    public:
        add()
        {
         cout<<"no input\n";
        }
        add(int a,int b)
        {
            this->a=a;
            this->b=b;
            cout<<a+b<<endl;

        }
    };
    int main()
    {    cout<<"hierarchial constructor called\n";
          cout<<"FIRST BASE CLASS CALLED\n";
        stu anunay;
       anunay=9;
       cout<<"SECOND BASE CLASS CALLED\n";
       test c;
       c=8;
       cout<<"DERIVED CLASS CALLED\n";
        result a;

        a.show2();
        a.out2();
         add anu;

        return 0;
    }