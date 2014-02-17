#include "VanPhong.h"

VanPhong::VanPhong()
{
    this->setHoTen("khong");
    this->setNam(0);
    MucLuong = 0;
    NgayNghi = 0;
}
VanPhong::VanPhong(string n_HoTen, int n_Nam, int n_MucLuong,int n_NgayNghi)
{
    this->setHoTen(n_HoTen);
    this->setNam(n_Nam);
    MucLuong = n_MucLuong;
    NgayNghi = n_NgayNghi;
}
/*VanPhong::VanPhong(const VanPhong &p)
{
    this->setHoTen(p.getHoTen);
    this->setNam(p.getNam);
    this->MucLuong = p.MucLuong;
    this->NgayNghi = p.NgayNghi;
}*/
int VanPhong::Luong()
{
    int L;
    L= MucLuong-NgayNghi*10;
    setTongLuong(L);
}
