#include<simplecpp>
main_program {
	turtleSim();
	repeat(4) {
		repeat(5) {
			right(90);forward(4);forward(-8);forward(4);right(-90);
			repeat(9) {
				forward(5);
				right(90);forward(2);forward(-4);forward(2);right(-90);
			}
			forward(5);
		}
		forward(-250);
		right(90);
	}
	getClick();
}
