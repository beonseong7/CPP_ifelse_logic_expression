#include<iostream>
int main() {
	using std::cin;
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') { // ch���� �޴� ���� .�϶����� �ݺ��Ѵ�.
		if (ch == ' ') // ch���� �޴� ���� ���鰪�̸� spaces�� 1�� �����Ѵ�.
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "�� ������ �ѹ��� ���� " << total << "�̰�, ";
	cout << "�� �߿��� ��ĭ��" << spaces << "���Դϴ�.\n";
	return 0;
}