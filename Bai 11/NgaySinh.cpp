#include "NgaySinh.h"

int NgaySinh::getNgay() {
	return this->iNgay;
}

int NgaySinh::getThang() {
	return this->iThang;
}

int NgaySinh::getNam() {
	return this->iNam;
}

void NgaySinh::setNgay(int iNgay) {
	this->iNgay = iNgay;
}

void NgaySinh::setThang(int iThang) {
	this->iThang = iThang;
}

void NgaySinh::setNam(int iNam) {
	this->iNam = iNam;
}

void NgaySinh::setNgayThangNam(int iNgay, int iThang, int iNam) {
	this->iNgay = iNgay;
	this->iThang = iThang;
	this->iNam = iNam;
}

void NgaySinh::nhapNgaySinh() {
	cout << "Ngay: ";
	cin >> this->iNgay;
	
	cout << "Thang: ";
	cin >> this->iThang;

	cout << "Nam: ";
	cin >> this->iNam;
}

void NgaySinh::xuatNgaySinh() {
	cout << this->iNgay << "-" << this->iThang << "-" << this->iNam << endl;
}
