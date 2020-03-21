#include "Player.h"
#include "Table.h"

#include <iostream>

using namespace std;

void Player::addPoints(int newPoints){
  this->points+=newPoints;
}

Player::Player(string name){
  this->name = name;
  this->points = 0;

  int i,j;
  this->wallTiles.resize(5);
  for(int i = 0 ; i < this->wallTiles.size() ; i++){
      this->wallTiles[i].resize(5);
  }
  this->sampleTiles.resize(5);
  for(int i = 0 ; i < this->sampleTiles.size() ; i++){
      this->sampleTiles[i].resize(2);
  }
  this->floorTiles.resize(7);

  for (i = 0; i < this->wallTiles.size(); i++)
       for (j = 0; j < this->wallTiles[i].size(); j++)
          this->wallTiles[i][j] = '-';
  for (i = 0; i < this->sampleTiles.size(); i++){
    this->sampleTiles[i][0] = '-';
    this->sampleTiles[i][1] = 0;
  }
  for (i = 0; i < this->floorTiles.size(); i++)
      this->floorTiles[i] = '-';
}

Player::Player(){
  this->name = "";
  this->points = 0;

  int i,j;
  this->wallTiles.resize(5);
  for(int i = 0 ; i < this->wallTiles.size() ; i++){
      this->wallTiles[i].resize(5);
  }
  this->sampleTiles.resize(5);
  for(int i = 0 ; i < this->sampleTiles.size() ; i++){
      this->sampleTiles[i].resize(2);
  }
  this->floorTiles.resize(7);

  for (i = 0; i < this->wallTiles.size(); i++)
       for (j = 0; j < this->wallTiles[i].size(); j++)
          this->wallTiles[i][j] = '-';
  for (i = 0; i < this->sampleTiles.size(); i++){
    this->sampleTiles[i][0] = '-';
    this->sampleTiles[i][1] = 0;
  }
  for (i = 0; i < this->floorTiles.size(); i++)
      this->floorTiles[i] = '-';
}

Player::Player(const Player &p){
  name=p.name;
  this->points = 0;
  int i,j;

  this->wallTiles.resize(5);
  for(int i = 0 ; i < this->wallTiles.size() ; i++){
      this->wallTiles[i].resize(5);
  }
  this->sampleTiles.resize(5);
  for(int i = 0 ; i < this->sampleTiles.size() ; i++){
      this->sampleTiles[i].resize(2);
  }
  this->floorTiles.resize(7);

  for (i = 0; i < this->wallTiles.size(); i++)
       for (j = 0; j < this->wallTiles[i].size(); j++)
          this->wallTiles[i][j] = p.wallTiles[i][j];
  for (i = 0; i < this->sampleTiles.size(); i++){
    this->sampleTiles[i][0] = p.sampleTiles[i][0];
    this->sampleTiles[i][1] = p.sampleTiles[i][1];
  }
  for (i = 0; i < this->floorTiles.size(); i++)
      this->floorTiles[i] = p.floorTiles[i];
}

int Player::getPoint(){
  return this->points;
}

string Player::getName(){
  return this->name;
}

char Player::chooseTile(Table* table){
  int input;
  firstQuestion:
  std::cout << this->name << ": Do you want to choose from disk[0] or centre[1]?\n";
  std::cin>>input;

  if(input==0){
    std::cout << this->name << ": Which disk?\n";
    std::cin>>input;
    std::cout << this->name << ": Which tiles?\n";
    std::cin>>input;
  }
  else if(input==1){

  }
  else{
    goto firstQuestion;
  };
  return 'A';
}

void Player::show(){
  std::cout << "TO DO \n";
}

void Player::updateWall(Table* table){
  std::cout << "Player.updateWall\n";
}

bool Player::isWallFirstRowFilled(){
  return true;
}
