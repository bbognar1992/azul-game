#include <iostream>
#include <string>

using namespace std;

class Game
{
  private:
  std::vector<Player> players
  Table table;

  void setPlayers(int nPlayers){
    this.players.resize(nPlayers);

    string inputString;
    for(int i=0; i<nPlayers; i++){
      cout << "Mi a neved?\n";
      cin >> inputString;
      this.player.insert(i, Player(inputString));
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

  bool nextRound(){
      this.table.prepare();
      int i=0
      do{
          //játékos választ csempét.
          this->players[i%this.players.size].chooseTile(&this.table);
          i++;
        }
      }
      while(this.table.isEmpty())
      //a játékosok minta csempéiket felrakják a fallra és új pontokat hozzáadják a pontjaikhoz
      for(int i=0; i<this.players.size; i++){
        this.players[i].putSamplesToWall(&this.restTiles);
      }
      //Vége van a játéknak?
      return hasAnyoneFilledFirstRow();
  }

  public:

  void Game(int nPlayers=2){
    setPlayers(nPlayers);
    this.talbe = Table(nPlayers);
  }

  int play(){
    bool gameOver = false;
    int round=0;
    do{
      gameOver = nextRound();
      round++;
    }
    while(gameOver)

    return 0;
  }

  void showStat(){
    for(int i=0; i<this.players.size; i++){
      cout << this.player[i].getName() << ": " << this.player[i].getPoint << "\n";
    }
  }

  int pack(){
    delete [] players
  }

};
