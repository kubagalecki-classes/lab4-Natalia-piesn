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
    T    sum() { return a + b; }

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
    Couple< T > get_el(unsigned int n) { return table[n]; }
    void        set_el(unsigned int n, Couple< T > p) { table[n] = p; }
    CoupleTable operator[](int n) { return table[n]; }
};

int main()
{
    Couple< double > p1(1, 2);
    Couple< double > p2(3.2, 5.4);
    Couple< double > p3(1.1, 2.3);

    cout << p1.get_a() << " " << p1.get_b() << endl;
    cout << p1.sum() << endl;
    CoupleTable< double, 4 > tab;
    cout << sizeof(tab.table) << endl;
    tab.set_el(0, p1);
    tab.set_el(1, p2);
    tab.set_el(2, p3);
    tab.set_el(3, p2);
    cout << tab.get_el(0).sum() << endl;
    cout << tab.get_el(1).sum() << endl;
    cout << tab.get_el(2).sum() << endl;
    cout << tab.get_el(3).sum() << endl;
}
