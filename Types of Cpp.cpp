#include <iostream>
using namespace std;

const int STATUS = 3456;

int main()
{
    //setlocale(LC_ALL, "rus");
    short a1 = SHRT_MIN;
    short a2 = SHRT_MAX;
    int a3 = INT32_MIN;
    int a4 = INT32_MAX;
    long long a5 = LLONG_MIN;
    long long a6 = LLONG_MAX;
    unsigned short a7 = 0;
    unsigned short a8 = USHRT_MAX;
    unsigned int a9 = UINT32_MAX;
    unsigned long long a10 = ULLONG_MAX;
    float a11 = FLT_MIN;
    float a12 = FLT_MAX;
    double a13 = DBL_MIN;
    double a14 = DBL_MAX;
    char a15 = 0;
    char a16 = 255;
    bool a17 = 0;
    bool a18 = 1;

    cout << "type\t\Byte\t\min\t\t\t\t\t\t\t|max"<<endl;
    cout << "short\t|" << sizeof(a1) << "\t|" << a1 << "\t\t\t\t\t\t\t|" << a2 << endl;
    cout << "int\t|" << sizeof(a3) << "\t|" << a3 << "\t\t\t\t\t\t|" << a4 << endl;
    cout << "long long\t|" << sizeof(a5) << "\t|" << a5 << "\t\t\t\t|" << a6 << endl;
    cout << "unsigned short\t|" << sizeof(a7) << "\t|" << a7 << "\t\t\t\t\t\t|" << a8 << endl;
    cout << "unsigned int\t|" << sizeof(a9) << "\t|" << a9 << "\t\t\t\t\t|" << a10 << endl;
    cout << "float\t|" << sizeof(a11) << "\t|" << a11 << "\t\t\t\t\t\t|" << a12 << endl;
    cout << "double\t|" << sizeof(a13) << "\t|" << a13 << "\t\t\t\t\t\t|" << a14 << endl;
    cout << "char\t|" << sizeof(a15) << "\t|" << a15 << "\t\t\t\t\t\t\t|" << a16 << endl;
    cout << "bool\t|" << sizeof(a17) << "\t|" << a17 << "\t\t\t\t\t\t\t|" << a18 << endl;
    

    cout << "Start\n";
    cout << "Learning C++\n"; 
}

