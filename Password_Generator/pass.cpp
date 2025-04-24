
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
