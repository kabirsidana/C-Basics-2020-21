#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    void getroll()
    {
        cout << "Enter Your Roll number " << endl;
        cin >> roll;
    }
    void printroll()
    {
        cout << " Roll Number is - " << roll;
    }
};
class theory :  public virtual student // syntax of virtual class
                                      // virtual base class is --> student
{
public:
    int computer, maths;
    void get_theory_marks()
    {
        cout << "Enter Computer Marks" << endl;
        cin>>computer;
        cout << "Enter Maths Marks" << endl;
        cin>>maths;
    }
     void print_theory_marks()
    {
        cout<<"computer Marks ->  "<<computer<<endl;
        cout<<"Maths Marks ->  "<<maths<<endl;  
    }
};

class sports : virtual public student
{  
     
    public:
    int sp;

    void get_sports_marks()
    {
        cout<<"Enter Sports Marks -> "<<endl;
        cin>>sp; 
    }
    void print_sports_marks()
    {
        cout<<"The Sports Marks is ->"<<sp<<endl;
    }
};  
    class result : public theory, public sports {
        public:
        int result;
        void enter_marks()
        {
            get_theory_marks();
            get_sports_marks();
        }
        void sum(){
            print_theory_marks();
            print_sports_marks();
            cout<<"The Total Marks is "<<computer+maths+sp;
        }
    };
    int main()
    {

        result obj;
        obj.getroll();
        obj.enter_marks();
        obj.sum();


        return 0;
    }