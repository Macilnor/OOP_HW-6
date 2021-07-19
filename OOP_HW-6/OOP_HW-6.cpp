#include <iostream>
#include <fstream>
#include "Player.h"
#include "House.h"

using namespace std;

int protectedInput()
{
	int n;
	while (true) {
		cout << "Enter integer value: ";
		cin >> n;
		if (cin.fail())
		{
			cout << "Wrong input!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (cin.gcount() > 1)
		{
			cout << "Wrong input!" << endl;
			continue;
		}
		break;
	}
	return n;
}

ostream& endll(ostream& os) {
	return os << '\n' << '\n' << flush;
}

int main()
{
	int x = protectedInput();
	cout << "Your value = " << x << endll;

	Player player("First player");
	House house;
	player.Add(new Card(Card::HEARTS, Card::ACE, true));
	player.Add(new Card(Card::CLUBS, Card::JACK, true));
	cout << player << endl;
	house.Add(new Card(Card::SPADES, Card::ACE, false));
	house.Add(new Card(Card::HEARTS, Card::FOUR, true));
	cout << house << endl;
	cout << boolalpha << "House is hitting: " << house.IsHitting() << endl;
	house.FlipFirstCard();
	cout << house << endl;
	cout << boolalpha << "House is hitting: " << house.IsHitting() << endl;

	ifstream file("Yandex.htm");
	if (!file)
	{
		cerr << "Error!" << endl;
		exit(1);
	}

	return 0;
}

