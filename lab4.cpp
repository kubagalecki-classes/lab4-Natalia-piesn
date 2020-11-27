#include <iostream>
using namespace std;

template < typename T >

class Couple
{
public:
    Couple(T an, T bn)
    {
        a = an;
        b = bn;
    }
    void set_a(T param) { a = param; }
    void set_b(T param) { b = param; }
    T    get_a() { return a; }
    T    get_b() { return b; }

private:
    T a;
    T b;
};

int main()
{
    Couple p1 = Couple{'a', 'b'};
    cout << p1.get_a() << " " << p1.get_b() << endl;
}
