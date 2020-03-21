using namespace std;

#ifndef PLAYER_H
#define PLAYER_H
#include "Player.h"
#endif

#ifndef TABLE_H
#define TABLE_H
#include "Table.h"
#endif

class Game
{
  private:

  std::vector<Player> players;
  Table table;

  void setPlayers(int nPlayers);
  bool hasAnyoneFilledFirstRow();
  bool nextRound();

  public:

  Game(int nPlayers=2);
  void play();
  void showStats();

};
