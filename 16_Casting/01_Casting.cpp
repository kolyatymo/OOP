//#include <iostream>
//using namespace std;
//
//// explicit
//// implicit
//
//
//enum Colors {RED, GREAN,BLUE};
//
//struct Point
//{
//    int x = 0, y = 0;
//    virtual void print() const
//    {
//        cout << "(" << x << "," << y << ")" << endl;
//    }
//};
//
//struct Point3D : Point // struct = def - public   (clas = def - privat)
//{
//    int z = 0;
//    void print() const override
//    {
//        cout << "(" << x << "," << y << "," << z << ")" << endl;
//    }
//};
//
//
//struct String
//{
//    string str; // -1 бо рядок порожній
//};
//
//
//
//int main()
//{
//    char ch = 90; // неявне перетворення
//    cout << ch << endl;
//    int number = (int)20.9; // явне перетворення 
//    cout << (int)Colors::RED << endl;
//
//
//    Point point;
//    point.x = 1;
//    point.y = 2;
//
//    //String str = (String&)point;
//    //cout << str.str << endl;
//
//    // if exixts implicit type1 ---> type2      static_cast<type2>(var type1)
//    cout << " \n ______________ STATIC_CAST ______________" << endl;
//    cout << " static_cast<char>(122)         --> " << static_cast<char>(122) << endl;
//    cout << "static_cast<int>(Colors::GREAN) -->" << static_cast<int>(Colors::GREAN) << endl;
//
//    Colors color = static_cast<Colors>(3);
//    //String& str = static_cast<String&>(point); // несумісні дані
//
//    Point3D point3d;
//    point3d.x = 1;
//    point3d.y = 2;
//    point3d.z = 3;
//
//    Point& point_ = point3d; // дозволено від похідного типу до базового
//    //Point& point2 = point_;
//
//    /*cout << "Point 3d            --> "; point3d.print();
//    cout << "Point 3d copy point --> "; point_.print();
//
//    Point3D point3 = (Point3D&)point_;
//
//    cout << "Point explicit point --> "; point_.print();*/
//
//    if (typeid(point_) == typeid(Point3D))
//    {
//        Point3D point3 = static_cast<Point3D&>(point_);
//        point3.print();
//    }
//    else
//    {
//        cout << "Untenable casting " << endl;
//    }
//    
//    double a = 5;
//    double* ptr_d = &a;
//
//    char* ptr_ch = &ch;
//
//    //ch = static_cast<char>(ptr_ch); // error
//    ch = reinterpret_cast<char>(ptr_ch);
//    ptr_d = reinterpret_cast<double*>(ptr_ch); // можна перетворити вказівники одного типу в інший
//    cout << ch << endl;
//
//    //char symbol = reinterpret_cast<char>(ch)
//
//
// 
//
//
//}
