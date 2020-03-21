using namespace std;

#include "Game.h"

void Game::setPlayers(int nPlayers){
  this->players.resize(nPlayers);

  string inputString;
  for(int i=0; i<nPlayers; i++){
    cout << "Mi a neved?\n";
    cin >> inputString;
    this->players.insert(i, Player(inputString));
  }
}

bool Game::hasAnyoneFilledFirstRow(){
  for(int i=0; i<this->players.size; i++){
    if(this->players[i].isWallFirstRowFilled()){
      return true;
    }
  }
  return false;
}

bool Game::nextRound(){
    this->table.prepare();
    int i=0
    do{
        int playerIndex = i%this->players.size;
        this->table.show();
        this->players[playerIndex].show();
        this->players[playerIndex].chooseTile(&(this->table));
        system("CLS");

        i++;
      }
    }
    while(this.table.isEmpty())
    //a játékosok minta csempéiket felrakják a fallra és új pontokat hozzáadják a pontjaikhoz
    for(int i=0; i<this->players.size; i++){
      this->players[i].updateWall(&(this->table));
    }
    //Vége van a játéknak?
    return hasAnyoneFilledFirstRow();
}

Game::Game(int nPlayers=2){
  setPlayers(nPlayers);
  this->table = Table(nPlayers);
}

void Game::play(){
  bool gameOver = false;
  int round=0;
  do{
    gameOver = nextRound();
    round++;
  }
  while(gameOver)
}

void Game::showStats(){
  for(int i=0; i<this->players.size; i++){
    cout << this->player[i].getName() << ": " << this->player[i].getPoint << "\n";
  }
}
