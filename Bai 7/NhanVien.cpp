#include "NhanVien.h"

string NhanVien::getMaNV() {
	return this->sMaNV;
}

string NhanVien::getTenNV() {
	return this->sTenNV;
}

int NhanVien::getNamSinh() {
	return this->iNamSinh;
}

void NhanVien::setMaNV(string sMaNV) {
	this->sMaNV = sMaNV;
}

void NhanVien::setTenNV(string sTenNV) {
	this->sTenNV = sTenNV;
}

void NhanVien::setNamSinh(int iNamSinh) {
	this->iNamSinh = iNamSinh;
}
