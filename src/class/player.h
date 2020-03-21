#ifndef TABLE_H
#define TABLE_H
#include "Table.h"
#endif

class Player
{
  private:
  string name;
  int points;

  int wallTiles[5][5];
  int sampleTiles[5][2]; //típus és darab
  int floorTiles[7];

  void addPoints(int newPoints);

  public:
  Player(string name);
  int getPoint();
  string getName();
  char chooseTile(Table* table);
  void show();
  void updateWall(Table* table);
  bool isWallFirstRowFilled();

};
