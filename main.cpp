#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "������ ��� �����: ";
    cin >> a >> b >> c;

    int sum;

    if (a >= b && a >= c) {
        sum = b + ((b >= c) ? b : c);
    }
    else if (b >= a && b >= c) {
        sum = a + ((a >= c) ? a : c);
    }
    else {
        sum = a + ((a >= b) ? a : b);
    }

    cout << "���� ���� ��������� �����: " << sum << endl;

    // ���� ����� ���� r � ������� �������� �������� a.
      // ������ ����� �����, ��������� � �������.

    double r, a;
    cout << "������ ����� ����: ";
    cin >> r;
    cout << "������ ������� ��������: ";
    cin >> a;

    // ��������� ����� ��������� ����
    double S = std::pi * (r * r - (a / 2) * (a / 2));

    // �������� ���������
    scout << "����� ��������� ����: " << S << std::endl;

    return 0;
}