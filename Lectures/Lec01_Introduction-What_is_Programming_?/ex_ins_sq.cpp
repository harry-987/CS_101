#include<simplecpp>
main_program {
	turtleSim();
	repeat(4) {
		repeat(50) {
			forward(1); penUp(); forward(1); penDown();
		}
		right(90);
	}
	penUp(); forward(50); penDown();
	right(45);
       repeat(4) {
       repeat(sqrt(2)*50/2) {	       
	forward(1); penUp(); forward(1); penDown();
       }
       	right(90);
       }
       hide(true);
       getClick();
}
