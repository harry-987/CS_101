#include<simplecpp>
main_program {
	turtleSim();

	int x =5;
	repeat(100) {
		forward(x); right (90);
		x = x-5;
	}
	getClick();
}
