#include "Table.h"

#include <string>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  private:
  std::string name;
  int points;
  int wallTiles[5][5];
  int sampleTiles[5][2]; //típus és darab
  int floorTiles[7];

  void addPoints(int newPoints);

  public:
  Player(std::string name);
  int getPoint();
  std::string getName();
  char chooseTile(Table* table);
  void show();
  void updateWall(Table* table);
  bool isWallFirstRowFilled();

};

#endif
