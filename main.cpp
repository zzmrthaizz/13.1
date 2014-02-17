#include <iostream>
#include <VanPhong.h>
#include <SanXuat.h>

using namespace std;
int SanXuat::TongLuong = 0;

int main()
{   SanXuat b;
    b.Luong();
    cout << b;
    SanXuat c("mr.x",6,9);
    c.Luong();
    cout << c;
    SanXuat d = c;
    d.Luong();
    cout << d;
    VanPhong e("mr.t",6,200,1);
    e.Luong();
    cout << e;

    return 0;
}


