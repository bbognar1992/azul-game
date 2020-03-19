#include <iostream>
#include <string>

using namespace std;

class Player
{
  private:
  int points;

  int** wallTiles;
  int** sampleTiles;
  int* floorTiles;

  void addPoint(int newPoint);

  public:
  int getPoint();
  int addTileToSampleTiles(int tile_type, int row);
  int fillWallFromSamples(int* rest_of_tiles);
};
