#include "NhanVien.h"

string NhanVien::getTen() {
	return this->sHoTen;
}

string NhanVien::getDiaChi() {
	return this->sDiaChi;
}

void NhanVien::setTen(string sHoTen) {
	this->sHoTen = sHoTen;
}

void NhanVien::setDiaChi(string sDiaChi) {
	this->sDiaChi = sDiaChi;
}

void NhanVien::setNhanVien(string sHoTen, string sDiaChi) {
	this->sHoTen = sHoTen;
	this->sDiaChi = sDiaChi;
}
