#include <iostream>
#include <string>

using namespace std;

int main() {
	constexpr int WORLD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?" << endl;

	string Guess = "";

	cout << "Your guess: ";
	cin >> Guess;
	cout << Guess;

	return 0;
}