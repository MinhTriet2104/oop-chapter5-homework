#pragma once
#include "NhanVien.h"
class NhanVienSX :
	public NhanVien
{
private:
	int iSoSanPham;
public:
	NhanVienSX() {
		this->iSoSanPham = 0;
	}

	NhanVienSX(int iSoSanPham, string sHoTen, string sDiaChi, int iNgay, int iThang, int iNam) :
	NhanVien(sHoTen, sDiaChi, iNgay, iThang, iNam) {
		this->iSoSanPham = iSoSanPham;
	}

	int getSoSanPhan();
	void setSoSanPham(int iSoSanPham);

	void nhapNV() {
		cout << "Ten NV: ";
		rewind(stdin);
		getline(cin, this->sHoTen);

		this->xNgaySinh.nhapNgaySinh();

		cout << "Dia chi: ";
		rewind(stdin);
		getline(cin, this->sDiaChi);

		cout << "So san pham: ";
		cin >> this->iSoSanPham;
	}

	void xuatNV() {
		cout << "Ten NV: ";
		cout << this->sHoTen << endl;

		this->xNgaySinh.xuatNgaySinh();

		cout << "Dia chi: ";
		cout << this->sDiaChi << endl;

		cout << "So san pham: ";
		cout << this->iSoSanPham << endl;

		cout << "Luong: " << this->luong() << endl;
	}

	int luong() {
		return this->iSoSanPham * 3000;
	}

	virtual ~NhanVienSX() {};
};

