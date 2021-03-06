#include "Game.h"

#include <iostream>

using namespace std;

void Game::setPlayers(int nPlayers){
  this->players.resize(nPlayers);
  string inputString;
  for(int i=0; i<nPlayers; i++){
    cout << "Mi a neved?\n";
    cin >> inputString;
    this->players.push_back(Player(inputString));
  }
}

void Game::ClearScreen(){
  cout << string( 100, '\n' );
}

bool Game::hasAnyoneFilledFirstRow(){
  for(int i=0; i<this->players.size(); i++){
    if(this->players[i].isWallFirstRowFilled()){
      return true;
    }
  }
  return false;
}

bool Game::nextRound(){
    this->table->prepare();
    int i=0;
    do{
        this->ClearScreen();
        int playerIndex = i%this->players.size();
        this->table->show();
        this->players[playerIndex].show();
        this->players[playerIndex].chooseTile(this->table);

        i++;
    }
    while(this->table->isEmpty());

    for(int i=0; i<this->players.size(); i++){
      this->players[i].updateWall(this->table);
    };

    return hasAnyoneFilledFirstRow();
}

Game::Game(int nPlayers){
  setPlayers(nPlayers);
  this->table = new Table(nPlayers);
}

void Game::play(){
  bool gameOver = false;
  int round=0;
  do{
    gameOver = nextRound();
    round++;
  }
  while(gameOver);
}

void Game::showStats(){
  for(int i=0; i<this->players.size(); i++){
    cout << this->players[i].getName() << ": " << this->players[i].getPoint() << "\n";
  }
}
