#include <iostream>
#include <string>

using namespace std;

class Game
{
  private:
  int number_of_players;
  int current_round;
  int* puks;
  int* bag;
  int* rest_of_tiles;

  int fillBag();
  int fillPuks();

  int crateTable();

  public:
  int Game(int n_players);
  int play();
};
