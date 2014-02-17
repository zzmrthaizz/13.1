#ifndef VANPHONG_H
#define VANPHONG_H
#include <string>
#include <SanXuat.h>

using namespace std;

class VanPhong: public SanXuat
{
    private:
        int MucLuong;
        int NgayNghi;
    public:
        VanPhong ();
        VanPhong (string n_HoTen, int n_Nam, int n_MucLuong,int n_NgayNghi);
//        VanPhong (const VanPhong &p);
        int Luong ();
};

#endif // VANPHONG_H
