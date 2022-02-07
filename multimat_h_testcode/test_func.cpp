#include "test_func.h"
#include <iostream>


void info() {
	cout << "理論値(Theo.out_value)と出力が、" << "\n" << "一致すれば「1」を、" << "\n" << "一致しなければ「0」を返します。"
		<< "\n" << "----------" << "\n\n";
}
void title(string t) {
	cout <<"【" << t << "】" << "\n";
}

bool compare(int a, int b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}

void value_disp(string in, string theo) {
	cout << "in_value(" << in << ") ｜ theo.out_value(" <<theo<<")\n";
}

void res(int out) {
	cout << out << "\n\n";
}