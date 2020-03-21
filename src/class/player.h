#include "Table.h"

#include <string>
#include <vector>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  private:
  std::string name;
  int points;
  std::vector< std::vector<int> > wallTiles;
  std::vector< std::vector<int> > sampleTiles; //típus és darab
  std::vector<int> floorTiles;

  void addPoints(int newPoints);

  public:
  Player();
  Player(std::string name);
  Player(const Player &p);
  int getPoint();
  std::string getName();
  char chooseTile(Table* table);
  void show();
  void updateWall(Table* table);
  bool isWallFirstRowFilled();

};

#endif
