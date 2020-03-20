#include <iostream>
#include <string>

using namespace std;

class Game
{
  private:
  std::vector<Player> players
  Table table;

  void setPlayers(int nPlayers){
    this->players.resize(nPlayers);

    string inputString;
    for(int i=0; i<nPlayers; i++){
      cout << "Mi a neved?\n";
      cin >> inputString;
      Player pl(inputString);
      this->players.insert(i, pl);
    }
  }

  int hasAnyoneFilledFirstRow(){
    for(int i=0; i<this->players.size; i++){
      if(this->players[i].isWallFirstRowFilled()){
        return true;
      }
    }
    return false;
  }

  bool nextRound(){
      this->table.prepare();
      int i=0
      do{
          int playerIndex = i%this.players.size;
          this->table.show();
          this->players[playerIndex].show();
          this->players[playerIndex].chooseTile(&(this->table));
          system("CLS");
          
          i++;
        }
      }
      while(this.table.isEmpty())
      //a játékosok minta csempéiket felrakják a fallra és új pontokat hozzáadják a pontjaikhoz
      for(int i=0; i<this.players.size; i++){
        this->players[i].updateWall(&(this->table));
      }
      //Vége van a játéknak?
      return hasAnyoneFilledFirstRow();
  }

  public:

  void Game(int nPlayers=2){
    setPlayers(nPlayers);
    this->table = Table(nPlayers);
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

  void showStats(){
    for(int i=0; i<this->players.size; i++){
      cout << this->player[i].getName() << ": " << this->player[i].getPoint << "\n";
    }
  }

};
