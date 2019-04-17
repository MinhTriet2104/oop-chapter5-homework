#include "NhanVienBC.h"
#include "NhanVienHD.h"
#include <vector>

void nhapDanhSachNhanVien(vector<NhanVien*> &dsNhanVien);
void xuatDanhSachNhanVien(vector<NhanVien*> dsNhanVien);

int main() {
	int iN;
	cout << "Nhap n: ";
	cin >> iN;

	vector<NhanVien*> dsNhanVien(iN);

	nhapDanhSachNhanVien(dsNhanVien);
	xuatDanhSachNhanVien(dsNhanVien);

	system("pause");
	return 0;
}

void xuatDanhSachNhanVien(vector<NhanVien*> dsNhanVien) {
	cout << "\n****************THONG TIN NHAN VIEN****************" << endl;
	for (int i = 0; i < dsNhanVien.size(); i++) {
		cout << "\n- NV thu" << i + 1 << " - \n";
		dsNhanVien[i]->xuat();
	}
}

void nhapDanhSachNhanVien(vector<NhanVien*> &dsNhanVien) {
	int option;
	cout << "- Loai nhan vien -" << endl;
	cout << "1. Nhan vien Bien che" << endl;
	cout << "2. Nhan vien Hop dong" << endl;
	for (int i = 0; i < dsNhanVien.size(); i++) {
		cout << "\tNhap loai: ";
		cin >> option;
		if (option == 1) {
			dsNhanVien[i] = new NhanVienBC;
			dsNhanVien[i]->nhap();
		}
		else {
			dsNhanVien[i] = new NhanVienHD;
			dsNhanVien[i]->nhap();
		}
	}
}