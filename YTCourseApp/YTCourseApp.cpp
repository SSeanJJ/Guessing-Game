#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void print_vector(vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\t";
	}
	cout << "\n";
}

void play_game() {
	
	vector<int> guesses;
	

	int rNum = rand() % 251;
	cout << rNum << endl;
	
	while (true)
	{
	    int guess;
		cin >> guess;
		
		guesses.push_back(guess);
		
		if (guess == rNum) {
			cout << "\nCorrect!" << endl;
			break;
		} 
		else if (guess > rNum) {
			cout << "Lower\n" << endl;
		}
		else {
			cout << "Higher\n" << endl;
		}
	}
	print_vector(guesses);
}
 
int main() {
	srand(time(NULL));
	int choice;
	
	do 
	{

		cout << "1. Play Game" << endl << "0. Quit\n";
		cin >> choice;

		switch (choice)
		{

		case 1:
			play_game();
			//cout << "Let's Play" << endl;
			break;
		case 0:
			cout << "See You Space Cowboy..." << endl;
			return 0;
			break;
		}
	}
	 while (choice != 0);
}
