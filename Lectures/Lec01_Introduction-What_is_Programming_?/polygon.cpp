#include<simplecpp>

main_program {
	turtleSim();
	cout << "How many Sides ?" << endl;
	int n;
	cin >>  n;

	repeat(n) {
		forward(100);
		left(360.0/n);
	}
	hide(true);
	getClick();
}
