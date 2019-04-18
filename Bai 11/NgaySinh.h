#ifndef NgaySinh_h
#define NgaySinh_h

#pragma once
#include <iostream>
using namespace std;

class NhanVien;
class NgaySinh
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	friend NhanVien;
	NgaySinh() {
		this->iNgay = 0;
		this->iThang = 0;
		this->iNam = 0;
	}

	NgaySinh(int iNgay, int iThang, int iNam) {
		this->iNgay = iNgay;
		this->iThang = iThang;
		this->iNam = iNam;
	}

	int getNgay();
	int getThang();
	int getNam();
	void setNgay(int iNgay);
	void setThang(int iThang);
	void setNam(int iNam);
	void setNgayThangNam(int iNgay, int iThang, int iNam);

	void nhapNgaySinh();
	void xuatNgaySinh();

	virtual ~NgaySinh() {};
};

#endif // !NgaySinh_h
