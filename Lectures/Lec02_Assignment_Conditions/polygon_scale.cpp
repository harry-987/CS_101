#include<simplecpp>
main_program {
	turtleSim();
	cout << "How many Sides ?";
	int nsides;
	cin >> nsides;
	repeat(nsides) {
		forward(400.0/nsides);
		right(360.0/nsides);
	}
	getClick();
}

// if forward(400/nsides) is written and if we feed values of nsides greater than 400, then nsides would be 0 as it is int in value, to solve this issue we can simply put 400.0 .
