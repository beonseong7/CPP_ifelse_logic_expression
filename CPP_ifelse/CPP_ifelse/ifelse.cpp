#include<iostream>
int main() {
	char ch;
	std::cout << "Ÿ�����Ͻø�, �ݺ� �����ϰڽ��ϴ�.\n";
	std::cin.get(ch);
		while (ch != '.') {
			if (ch == '\n')
				std::cout << ch;
			else
				std::cout << ++ch;//�ƽ�Ű �ڵ�� ���� ������ �������ڸ� ����Ѵ�.
			std::cin.get(ch);
	}
	std::cout << "\nȥ���������ؼ� �˼��մϴ�.\n";
	return 0;
}