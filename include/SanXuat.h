#ifndef SANXUAT_H
#define SANXUAT_H
#include <string>
#include <iostream>

// static
// ke thua
// scope

using namespace std;
class SanXuat
{
    private:
        string Hoten;
        int Nam;
        int SanPham;
        static int TongLuong;

    public:
        SanXuat ();
        SanXuat (string n_Hoten, int n_Nam, int n_SanPham);
        SanXuat (const SanXuat &p);
        int Luong ();
        string getHoTen();
        void setHoTen(string m_Hoten);
        int getNam();
        void setNam(int nam);
        static int getTongLuong() {return TongLuong;}
        static int setTongLuong(int L) {TongLuong = TongLuong+L;};
        friend ostream& operator << (ostream& outputStream, const SanXuat &p);
        SanXuat operator= (const SanXuat &p);
};

#endif // SANXUAT_H
