#include<iostream>
#include<climits>
bool is_int(double);
int main() {
	using namespace std;
	double num;
	cout << "���� ���� �ϳ� �Է��Ͻÿ�:";
	cin >> num;
	while (!is_int(num)) { //is_int�Լ��� ���ϰ���  true�϶����� �ݺ�
		cout << "int���� ������ �� ���� ���Դϴ�. �ٽ��Է��Ͻʽÿ�:";
		cin >> num;
	}
	int val = int(num);//double ������ ���� �Է°��� int�� ��ȯ�Ѵ�.
	cout << "����� �Է��� ������ " << val << "�Դϴ�.\n";
	return 0;
}
bool is_int(double x) {
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}