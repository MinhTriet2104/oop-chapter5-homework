#pragma once
#include "NhanVien.h"
class NhanVienCN :
	public NhanVien
{
private:
	int iNgayLam;
public:
	NhanVienCN() {
		this->iNgayLam = 0;
	}

	NhanVienCN(int iNgayLam, string sHoTen, string sDiaChi, int iNgay, int iThang, int iNam) :
	NhanVien(sHoTen, sDiaChi, iNgay, iThang, iNam) {
		this->iNgayLam = iNgayLam;
	}

	int getNgayLam();
	void setNgayLam(int iNgayLam);

	void nhapNV() {
		cout << "Ten NV: ";
		rewind(stdin);
		getline(cin, this->sHoTen);

		this->xNgaySinh.nhapNgaySinh();

		cout << "Dia chi: ";
		rewind(stdin);
		getline(cin, this->sDiaChi);

		cout << "So ngay lam: ";
		cin >> this->iNgayLam;
	}

	void xuatNV() {
		cout << "Ten NV: ";
		cout << this->sHoTen << endl;

		this->xNgaySinh.xuatNgaySinh();

		cout << "Dia chi: ";
		cout << this->sDiaChi << endl;

		cout << "So ngay lam: ";
		cout << this->iNgayLam << endl;

		cout << "Luong: " << this->luong() << endl;
	}

	int luong() {
		return this->iNgayLam * 40000;
	}

	virtual ~NhanVienCN() {};
};

