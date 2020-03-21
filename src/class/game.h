using namespace std;

#include "Player.h"
#include "Table.h"

#ifndef GAME_H
#define GAME_H

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

#endif
