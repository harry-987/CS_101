#include<simplecpp>

main_program {
	turtleSim();

	repeat (5) {
	right(90);
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	left(90);
	forward(5);
	
	repeat(9){
		left(90);
		forward(5);
		penUp();
		right(180);
		forward(5);
		penDown();
		forward(5);
		penUp();
		left(180);
		forward(5);
		penDown();
		right(90);
		forward(5);
	}

	}
	
	penDown();
	forward(-250);
	left(180);

	repeat (5) {
	right(90);
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	left(90);
	forward(5);
	
	repeat(9){
		left(90);
		forward(5);
		penUp();
		right(180);
		forward(5);
		penDown();
		forward(5);
		penUp();
		left(180);
		forward(5);
		penDown();
		right(90);
		forward(5);
	}

	}

	penDown();
	forward(-250);
	right(90); 

	repeat (5) {
	right(90);
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	left(90);
	forward(5);
	
	repeat(9){
		left(90);
		forward(5);
		penUp();
		right(180);
		forward(5);
		penDown();
		forward(5);
		penUp();
		left(180);
		forward(5);
		penDown();
		right(90);
		forward(5);
	}

	}

	penDown();
	forward(-250);
	left(180);

        repeat (5) {
	right(90);
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	forward(10);
	penUp();
	right(180);
	forward(10);
	penDown();
	left(90);
	forward(5);
	
	repeat(9){
		left(90);
		forward(5);
		penUp();
		right(180);
		forward(5);
		penDown();
		forward(5);
		penUp();
		left(180);
		forward(5);
		penDown();
		right(90);
		forward(5);
	}

	}


	// hide(true);	

	getClick();
}

