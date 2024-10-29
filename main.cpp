#include "stdafx.h"
#include "extra.cpp"
using namespace std;
using namespace ext;


int main(int argc, char** argv)
{
    Point a(2, 4);
    Point b(3, 10);
    cout << a * b << endl;
    ++a;
    --b;
    cout << a.x << "\t" << a.y << endl;
    cout << b.x << "\t" << b.y << endl;
    return 0;
}