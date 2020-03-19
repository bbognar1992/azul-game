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
  int putTileToSampleTiles(int** disks, int* freeTiles);
  int putSamplesToWall(int* rest_of_tiles);
};
