#include <iostream>
using namespace std;

bool kiemTraSoNguyenTo(int n) {
	if (n < 2) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool kiemTraNamNhuan(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
	int choice;
	do {
		cout << "======MENU======\n";
		cout << "1. Kiem tra so nguyen to\n";
		cout << "2. Kiem tra nam nhuan\n";
		cout << "3. Thoat\n";
		cout << "Chon chuc nang: ";
		cin >> choice;

		switch (choice)
		{
		case 1: {
			int n;
			cout << "Nhap mot so nguyen duong: ";
			cin >> n;

			if (kiemTraSoNguyenTo(n)) {
				cout << n << " la so nguyen to.\n";
			}
			else {
				cout << n << " khong phai so nguyen to.\n";
			}
			break;
		}
		case 2:
		{
			int year;
			cout << "Nhap nam: ";
			cin >> year;

			if (kiemTraNamNhuan(year))
			{
				cout << year << " la nam nhuan.\n";
			}
			else
			{
				cout << year << "khong phai la nam nhuan.\n";
			}
		}
		break;
		case 3:
			cout << "Thoat chuong trinh.\n";
			break;
		default:
			cout << "Lua chon khong hop le. Vui long chon lai.\n";
		}
	} while (choice != 3);

	return 0;
}