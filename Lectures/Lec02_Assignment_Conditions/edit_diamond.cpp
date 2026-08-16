#include<simplecpp>
main_program {
	turtleSim();
	cout << " Enter s for square, d for diamond: ";
	char input; cin >> input;
	if( input == 'd') {
		right (45);
	}
	if ( input == 'd' || input == 's') {
		repeat(4) {
			forward (100); right(90);
		}
	getClick();
	}
	if ( input != 'd' &&  input != 's') {
		cout << "Invalid input" << endl;
	}
}
