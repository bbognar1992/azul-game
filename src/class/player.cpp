#include <iostream>
#include <string>

using namespace std;

class Player
{
  private:
  string name;
  int points;

  int[5][5] wallTiles;
  int[5][2] sampleTiles; //típus és darab
  int[7] floorTiles;

  void addPoints(int newPoints){
    this.points+=newPoints;
  }

  public:
  void Player(string name){
    this.name = name;
    this.points = 0;
    int i,j;
    for (i = 0; i <= 5; i++)
         for (j = 0; j < = 5; j++)
            this.wallTiles[i][j] = 0;

    for (i = 0; i <= 5; i++)
        for (j = 0; j < = 2; j++)
            this.sampleTiles[i][j] = 0;

    for (i = 0; i <= 5; i++)
        this.floorTiles[i] = 0;
  }
  int getPoint(){
    return this.points;
  }
  int putTileToSampleTiles(int** disks, int* freeTiles){
    int input;
    firstQuestion:
    cout << this.name << ": Do you want to choose from disk[0] or centre[1]?\n"
    cin>>input;

    if(input==0){
      cout << this.name << ": Which disk?\n"
      cin>>input;
      cout << this.name << ": Which tiles?\n"
      cin>>input;
    }
    else if(input==1){

    }
    else{
      goto firstQuestion;
    }


  }
  int putSamplesToWall(int* freeTiles){

  }
};
