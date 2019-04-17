#include "NhanVienHD.h"

int NhanVienHD::getTienCongGio() {
	return this->iTienCongGio;
}

int NhanVienHD::getSoGio() {
	return this->iSoGio;
}

void NhanVienHD::setTienCongGio(int iTienCongGio) {
	this->iTienCongGio = iTienCongGio;
}

void NhanVienHD::setSoGio(int iSoGio) {
	this->iSoGio = iSoGio;
}

int NhanVienHD::luong() {
	return this->iTienCongGio * this->iSoGio;
}

void NhanVienHD::nhap() {
	cout << "Ma NV: ";
	rewind(stdin);
	getline(cin, this->sMaNV);

	cout << "Ten NV: ";
	rewind(stdin);
	getline(cin, this->sTenNV);

	cout << "Nam sinh: ";
	cin >> this->iNamSinh;

	cout << "Luong moi gio: ";
	cin >> this->iTienCongGio;

	cout << "So gio: ";
	cin >> this->iSoGio;

}

void NhanVienHD::xuat() {
	cout << "Ma NV: ";
	cout << this->sMaNV << endl;

	cout << "Ten NV: ";
	cout << this->sTenNV << endl;

	cout << "Nam sinh: ";
	cout << this->iNamSinh << endl;

	cout << "Luong moi gio: ";
	cout << this->iTienCongGio << endl;

	cout << "So gio: ";
	cout << this->iSoGio << endl;

	cout << "Luong: ";
	cout << this->luong() << endl;
}
