#include "Player.h"
#include "Table.h"

#include <vector>

#ifndef GAME_H
#define GAME_H

class Game
{
  private:

  std::vector<Player> players;
  Table* table;

  void setPlayers(int nPlayers);
  bool hasAnyoneFilledFirstRow();
  bool nextRound();
  void ClearScreen();

  public:

  Game(int nPlayers = 2);
  void play();
  void showStats();

};

#endif
