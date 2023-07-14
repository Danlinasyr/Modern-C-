#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Player {
public:
  //attributes
  string name;
  int health;
  int xp;

  // methods
  void talk(string);
  bool is_dead();
};

int main() {
    Player frank;
    Player hero;

    Player players[] {frank, hero};
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    frank.name = "Frank";
    cout << frank.name << endl;
    cout << players[0].name << endl;
    cout << player_vec[0].name << endl;
    return 0;
}

