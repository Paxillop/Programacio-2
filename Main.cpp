#include <stdio.h>

int main() {


	struct Bruto
	{
		char name;
		int num_of_disciples;
		char clan_name;
		struct capabilites {
			int level;
			int life_units;
			int strenght_units;
			int agility_units;
			int speed_units;
		};
		int weapons;
		int animals;
		char registration_to_the_next_torunament;
	};


	return 0;
}