#include <iostream>
using namespace std;
class roll_no{
    public:
    int roll;
     set_roll_no(int a){
        roll=a;
    }
    getroll(){
        cout<<roll;
    }
};
//void roll_no :: set_roll_no(int a){
 //   roll =a;
//}
class marks : public roll_no{
    public:
    float geo,eco,pe,pol,eng;
    set_marks(float g,float e,float p, float po ,float en){
        geo = g;
        eco=e;
        pe=p;
        pol=po;
        eng=en;
    }
};
class result : public marks{
    public:
void display(){
    cout<<"the roll number is "<<roll<<endl;
    cout<<"The Percentage is "<<(geo+pe+pol+eng+eco)/5<<endl;
}
};
int main()
{
    result kabir;
    kabir.set_roll_no(1122);
    kabir.set_marks(93,92,95,88,94);
    kabir.display();
    return 0;
}