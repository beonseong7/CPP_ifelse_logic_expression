#include<iostream>
const int ArSize = 6;
int main() {
	using namespace std;
	float naaq[ArSize];
	cout << "������� �������� �ڰ� ����(NAAQ)�� �Է��Ͻÿ�.\n"
		<< ArSize << "���� �����͸� ��� �Է��߰ų�, ������ �Է��ϸ�\n"
		<< "while ������ Ż���մϴ�.\n";

	int i = 0;
	float temp;
	cout << "ù ��° ��: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)// i���� ArSize���� ũ�ų� temp�� ������ Ż��
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "�� ���� ��: ";
			cin >> temp;
		}
	}
	if (i == 0)//i���� 0 ��, �ƹ������Ͱ� �����Ƿ� �ٷ�����
		cout << "�Է��� �����Ͱ� �����Ƿ� ���α׷��� �����մϴ�.\n";
	else
	{
		cout << "����� NAAQ�� �Է��Ͻʽÿ�: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++) 
			if (naaq[j] > you)// you���� naaq�迭 ������ ���� ũ�� count�� 1�����Ѵ�.
				++count;
		cout << "����� �߿���" << count;
		cout << "���� ��ź��� NAAQ�� �����ϴ�.\n";
	}
	return 0;
}