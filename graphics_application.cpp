#include<iostream>
using namespace std;

class circle
{
    private:
    float radius;
    float x;
    float y;
    public:
    circle()

    {
        float radius=0;
        float x=0;
        float y=0;
    }

        circle(float r,float xvel,float yvel){
        setvalues( r, xvel, yvel);
       }
        void setvalues(float r,float xvel,float yvel)
        {
x = xvel;
y = yvel;
if (r < 0)
{
    cout<<" negative radius is not allowed";
    radius = 0;
}else{
    radius = r;
}
    }
    float area() const {
        return 3.14 * radius * radius;
    }
    float circumference() const {
        return 2 * 3.14 * radius;
    }
    void print() const {
        cout << "circle center: ("<< x <<", "<<y<<"), radius: "<<radius<<endl;
    }
};
int main()
{
circle c1;
cout<< "---circle 1---"<<endl;
c1.print();
circle c2(5.0, 2.5, 3.5);
cout<< "---circle 2---"<<endl;
c2.print();
cout<< "Area : "<<c2.area()<<endl;
cout<< "circumference : "<<c2.circumference()<<endl;
circle c3(-4.0,1.0,1.0);
cout<< "---circle 3(negative radius)---"<<endl;
c3.print();
return 0;
}