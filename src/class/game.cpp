#include <iostream>
#include <string>

using namespace std;

class Game
{
  private:
  int nPlayers;
  int nDisks;

  Player* players;

  int* bag;
  int* restTiles;

  int** disks;
  int* freeTiles;

  int getNumberOfDisks(int n_players){
    int puks = 0;
    switch (n_players){
        case 1: disks=5;
        case 2: ; break;
        case 3: disks=7; break;
        default: disks=9;
    };
    return disks;
  }

  int fillBag();
  int fillPuks();

  int crateTable();

  public:
  void Game(int nPlayers=2){
    this.nPlayers = nPlayers;
    this.nDisks = getNumberOfDisks(nPlayers);
    this.players = (players*) malloc (this.nPlayers+1);

    //create disk, bags ..
  }

  int hasAnyoneFilledFirstRow();

  int isThereAnyTilesOnTheTable();

  int prepareRound();

  void showTheWinner();

  bool nextRound(){
      prepareRound();
      int i=0
      do{
          //játékos választ csempét.
          this->players[i%this.nPlayers].putTileToSampleTiles(this.disks, this.freeTiles);
          i++;
        }
      }
      while(isThereAnyTilesOnTheTable())
      //a játékosok minta csempéiket felrakják a fallra és új pontokat hozzáadják a pontjaikhoz
      for(int i=0; i<this.nPlayers; i++){
        this->players[i].putSamplesToWall(this.restTiles);
      }
      //Vége van a játéknak?
      return hasAnyoneFilledFirstRow();
  }

  int play(){
    bool gameOver = false;
    int round=0;
    do{
      gameOver = nextRound();
      round++;
    }
    while(gameOver)

    showTheWinner();

    return 0;
  }

  int pack(){
    free (players);
  }

};
