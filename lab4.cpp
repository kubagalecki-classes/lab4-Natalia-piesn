#include <iostream>
using namespace std;

template < typename T >

class Couple
{
public:
    Couple() {}
    Couple(T an, T bn) : a{an}, b{bn} {}

    void set_a(T param) { a = param; }
    void set_b(T param) { b = param; }
    T    get_a() { return a; }
    T    get_b() { return b; }
    T    suma() { return a + b; }

private:
    T a;
    T b;
};

template < typename T, unsigned int N >

class CoupleTable
{
public:
    CoupleTable() {}
    Couple< T > table[N];
};

int main()
{
    Couple< double > p1(1, 2);
    cout << p1.get_a() << " " << p1.get_b() << endl;
    cout << p1.suma() << endl;
    CoupleTable< int, 4 > tab;
    cout << sizeof(tab.table) << endl;
}
