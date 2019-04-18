#include "NhanVienSX.h"
#include "NhanVienCN.h"
#include <vector>

void nhapDanhSachNV(vector<NhanVien*> &dsNhanVien);
void xuatDanhSachNV(vector<NhanVien*> dsNhanVien);
NhanVien* timNVLuongCaoNhat(vector<NhanVien*> dsNhanVien);

int main() {
	vector<NhanVien*> dsNhanVien;

	nhapDanhSachNV(dsNhanVien);
	xuatDanhSachNV(dsNhanVien);

	cout << "\n********************LUONG CAO NHAT********************" << endl;
	NhanVien *nv = timNVLuongCaoNhat(dsNhanVien);
	nv->xuatNV();

	system("pause");
	return 0;
}

NhanVien* timNVLuongCaoNhat(vector<NhanVien*> dsNhanVien) {
	NhanVien* max = dsNhanVien[0];

	for (int i = 1; i < dsNhanVien.size(); i++) {

		int iLuongHienTai = dsNhanVien[i]->luong();
		int maxLuong = max->luong();

		if (maxLuong < iLuongHienTai) {
			max = dsNhanVien[i];
		}
	}
	return max;
}

void xuatDanhSachNV(vector<NhanVien*> dsNhanVien) {
	cout << "******************THONG TIN NHAN VIEN******************" << endl;
	for (int i = 0; i < dsNhanVien.size(); i++) {
		cout << "- Nhan vien thu " << i + 1 << " -" << endl;
		dsNhanVien[i]->xuatNV();
	}
}

void nhapDanhSachNV(vector<NhanVien*> &dsNhanVien) {
	int iOption = 0;

	cout << "  - Loai Nhan Vien -" << endl;
	cout << "1. Nhan Vien San Xuat" << endl;
	cout << "2. Nhan Vien Cong Nhat" << endl;

	do {
		do {
			cout << "\tLoai nhan vien: ";
			cin >> iOption;
			if (iOption == -1) break;
		} while (iOption < 1 || iOption > 2);
		
		NhanVien *nv;

		if (iOption == 1) {
			nv = new NhanVienSX;
			nv->nhapNV();
			dsNhanVien.push_back(nv);
		}
		else if (iOption == 2) {
			nv = new NhanVienCN;
			nv->nhapNV();
			dsNhanVien.push_back(nv);
		}
	} while (iOption != -1);
}