#include <iostream>
#include <string>
#include "Photographer.h"
#include "Designer.h"
#include <ctime>

int main() {
	/*
	������� 8
����� �������� + ������ ��������, ���������.
����������� ����� ������������ ������� � ��������� ������������ �� ������� ������:
���, �������, ���, ��� ��������, ��� ������ ������������, �������, �������,
���������� ���������� � ���������.
��������� ��������� ������������ ����������� IPictureProcessor � ������� void
process(const std::string& photo_path). ���������� ������ � ������ ���������:
����� �� ����� ��������� �Photo was processed by /���_���������/�, � �����
����������� ���������� ���������� � ���������. ���������� ������ � ������
���������: ����� �� ����� ��������� �Image was produced by /���_���������/�, � �����
��������� �������� �� ��������� ��������. � main() c������ 2 ���������� � 2
����������, ������������������ ����������� process().*/

	setlocale(0, "");
	srand(time(0));


	Photographer Alfred("Alfred", "Steiglitz ", "man", "19.06.1996", "2015", 13, 6);
	Alfred.print();
	Photographer Ansel("Ansel", "Adams ", "man", "13.05.2001", "2015", 6, 6);
	Ansel.print();

	Designer Raphael("Raphael", "Santi ", "man", "13.05.2001", "2015", 3, 7);
	Raphael.print();
	Designer Claude("Claude", "Monet ", "man", "13.05.2001", "2015", 5, 3);
	Claude.print();

	cout << "-------------------------------------" << endl;

	Alfred.process("photo_path");
	Ansel.process("photo_path");
	Raphael.process("photo_path");
	Claude.process("photo_path");


	Alfred.print();
	Ansel.print();

	Raphael.print();
	Claude.print();
	return 0;

}




