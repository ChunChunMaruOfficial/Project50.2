#include <iostream>

using namespace std;

class Hero {
public:
	string race;
	string gender;
	int age;
	string character_trait;
	string hero_class;
};


int main() {
	Hero hero;

	cout << "Input race of your hero: ";
	cin >> hero.race;

	cout << "Input gender of your character: ";
	cin >> hero.gender;

	cout << "Input your character's age: ";
	cin >> hero.age;

	cout << "Input character trait of your hero (kindness, selfishness, loyalty...): ";
	cin >> hero.character_trait;

	cout << "Input hero's class (mage, paladin, thief, archer...): ";
	cin >> hero.hero_class;


	cout << "you have created a " << hero.age << " year old " << hero.gender << " hero who is an " << hero.race << " " << hero.hero_class << ", he is often observed trait such as " << hero.character_trait << endl
		<< "your character will be ready in -40- years :P" << endl;

	return 0;
}