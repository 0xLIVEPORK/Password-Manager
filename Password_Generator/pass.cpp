#include <iostream>

/*🧪 YOUR TASK
gffgf
Make a simple class called Enemy with the following:

    Variables:

        string type

        int strength

    Function:

        void describe() — should output:
        "Enemy Type: <type>, Strength: <strength>"

    In main(), create 2 different enemies and call describe() on both.*/

class Enemy{

  public:

  std::string type;
  int strength;

  void describe()
  {
    std::cout << "Enemy Type: " << type << ", Strength: " << strength << "\n";
  }
};

int main() {

  Enemy Vampire;
  Vampire.type = "Undead";
  Vampire.strength = 20;

  Enemy Zombie;
  Zombie.type = "Undead";
  Zombie.strength = 5;

  Vampire.describe();

  Zombie.describe();


}
