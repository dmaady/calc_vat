#include <iostream>
using namespace std;
const double stavka_vat = 0.2;
void dedicated(double TAX, double VAT, double no_VAT) //���������� 
{
	VAT = TAX / 1.2*stavka_vat;

	no_VAT = TAX - VAT;

	cout << "\n���������� ��� ����������: " << VAT;
	cout << "\n����� ��� ��� ����������: " << no_VAT << "\n" << endl;
}
void include(double no_TAX, double VAT, double wiz_VAT) //�����������
{
	VAT = no_TAX * 0.2;
	wiz_VAT = no_TAX * 1.2;

	cout << "\n����� ��� ����������: " << VAT;
	cout << "\n����� � ������ ��� ����������: " << wiz_VAT << "\n" << endl;
}
void clr() {
	system("pause");
	system("CLS");
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double no_TAX,
		TAX,
		VAT = NULL,
		no_VAT = NULL,
		wiz_VAT = NULL;
	int main_choose = NULL;
	while (1) {
		cout << "�������� �������� ��������:\n1. ������� ����������� ������\n2. ������� ������������ ������\n3. ����� �� ���������" << endl;
		cin >> main_choose;
		switch (main_choose)
		{
		case 1: {
			cout << "������� �����, ���������� �����: ";
			cin >> TAX;
			dedicated(TAX, VAT, no_VAT);
			clr();
			break;
		}
		case 2: {
			cout << "������� ����� ��� ������: ";
			cin >> no_TAX;
			include(no_TAX, VAT, wiz_VAT);
			clr();
			break;
		}
		case 3: {
			system("pause");
			return 0;
		}
		default:
			break;
		}
	}
}
