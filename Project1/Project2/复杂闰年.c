int main(){
	int y,m,d;
	scanf_s("%d%d%d", &y, &m, &d);
	if (y % 400 == 0 ||
		y % 100 != 0 && y & 4 == 0) {
		printf("������\n");
	}
	if (m > 12 || m < 1 || d > 31 || d < 1 || (m == 4 || m == 6 || m == 9 || m == 11) && d > 30 ||
		m == 2 && d > 28 + (y % 400 == 0 ||
		y % 100 != 0 && y & 4 == 0)) {
		printf("���Ϸ�\n");
	}
	else {
		printf("�Ϸ�\n");
	}
	system("pause");
	return 0;
}