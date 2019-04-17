#include "NhanVienBC.h"

int NhanVienBC::getLuongCanBan() {
	return this->iLuongCanBan;
}

int NhanVienBC::getHeSoLuong() {
	return this->iHeSoLuong;
}

int NhanVienBC::getPhuCap() {
	return this->iPhuCap;
}

void NhanVienBC::setLuongCanBan(int iLuongCanBan) {
	this->iLuongCanBan = iLuongCanBan;
}

void NhanVienBC::setHeSoLuong(int iHeSoLuong) {
	this->iHeSoLuong = iHeSoLuong;
}

void NhanVienBC::setPhuCap(int iPhuCap) {
	this->iPhuCap = iPhuCap;
}

int NhanVienBC::luong() {
	return this->iLuongCanBan * this->iHeSoLuong * this->iPhuCap;
}

void NhanVienBC::nhap() {
	cout << "Ma NV: ";
	rewind(stdin);
	getline(cin, this->sMaNV);

	cout << "Ten NV: ";
	rewind(stdin);
	getline(cin, this->sTenNV);

	cout << "Nam sinh: ";
	cin >> this->iNamSinh;

	cout << "Luong can ban: ";
	cin >> this->iLuongCanBan;

	cout << "He so luong: ";
	cin >> this->iHeSoLuong;

	cout << "Phu cap: ";
	cin >> this->iPhuCap;
}

void NhanVienBC::xuat() {
	cout << "Ma NV: ";
	cout << this->sMaNV << endl;

	cout << "Ten NV: ";
	cout << this->sTenNV << endl;

	cout << "Nam sinh: ";
	cout << this->iNamSinh << endl;

	cout << "Luong can ban: ";
	cout << this->iLuongCanBan << endl;

	cout << "He so luong: ";
	cout << this->iHeSoLuong << endl;

	cout << "Phu cap: ";
	cout << this->iPhuCap << endl;

	cout << "Luong: ";
	cout << this->luong() << endl;
}
