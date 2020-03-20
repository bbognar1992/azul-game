#include <iostream>
#include <string>

#define n_tile 100
#define n_tile_type (n_tile/5)

using namespace std;

class Game
{
  private:
  std::vector<Player> players
  std::vector<int> bag;
  std::vector< std::vector<int> > disks;
  std::vector<int> freeTiles;
  std::vector<int> restTiles;

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
    players.resize(nPlayers);

    string inputString;
    for(int i=0; i<nPlayers; i++){
      cout << "Mi a neved?\n";
      cin >> inputString;
      player.insert(i, Player(inputString));
    }
    player.push_back()

    bag.resize(n_tile+1);
    freeTiles.resize(n_tile+1);
    restTiles.resize(n_tile+1);
    //init disks
    int nDisks = getNumberOfDisks(nPlayers), diskSize = 4;
    disks.resize(nDisks);
    for(int i = 0 ; i < nDisks ; ++i)
    {
        disks[i].resize(diskSize);
    }

  }

  int hasAnyoneFilledFirstRow(){
    for(int i=0; i<this.players.size; i++){
      if(this.players[i].isFirtRowFilled()){
        return true;
      }
    }
    return false;
  }

  int isThereAnyTilesOnTheTable();

  int prepareRound();

  void showTheWinner();

  bool nextRound(){
      prepareRound();
      int i=0
      do{
          //játékos választ csempét.
          this->players[i%this.players.size].putTileToSampleTiles(&this.disks, &this.freeTiles);
          i++;
        }
      }
      while(isThereAnyTilesOnTheTable())
      //a játékosok minta csempéiket felrakják a fallra és új pontokat hozzáadják a pontjaikhoz
      for(int i=0; i<this.players.size; i++){
        this.players[i].putSamplesToWall(&this.restTiles);
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
    delete [] players
  }

};
