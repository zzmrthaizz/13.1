#include "SanXuat.h"
#include <iostream>
#include <ostream>
// Ham dung
using namespace std;
SanXuat::SanXuat()
{
    this->Hoten = "thai";
    this->Nam = 2;
    this->SanPham =8;
}
SanXuat::SanXuat(string n_Hoten, int n_Nam, int n_SanPham)
{
    this->Hoten = n_Hoten;
    this->Nam = n_Nam;
    this->SanPham = n_SanPham;
}
SanXuat::SanXuat(const SanXuat &p)
{
    this->Hoten=p.Hoten;
    this->Nam= p.Nam;
    this->SanPham=p.SanPham;
}
//Tinh luong
int SanXuat::Luong()
{
    int L;
    L = 100+20*Nam+SanPham*10;
    TongLuong=TongLuong+L;
}
//Get/set private
string SanXuat::getHoTen()
{
    return this->Hoten;
}
void SanXuat::setHoTen(string m_HoTen)
{
    this->Hoten = m_HoTen;
}
int SanXuat::getNam()
{
    return this->Nam;
}
void SanXuat::setNam(int nam)
{
    this->Nam = nam;
}
// Ham toan tu
ostream& operator << (ostream& outputStream,const SanXuat &p)
{
    outputStream<< p.Hoten << endl;
    outputStream<< p.Nam << endl;
    outputStream<< p.SanPham <<endl;
    outputStream<< p.TongLuong <<endl;
    outputStream<< p.getTongLuong <<endl;
//    outputStream << p.Luong << endl;
}
SanXuat SanXuat::operator = (const SanXuat &p)
{
    Hoten = p.Hoten;
    Nam = p.Nam;
    SanPham = p.SanPham;
}
