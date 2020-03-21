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
  for (i = 0; i < 5; i++)
       for (j = 0; j < 5; j++)
          this->wallTiles[i][j] = 0;

  for (i = 0; i < 5; i++)
      for (j = 0; j < 2; j++)
          this->sampleTiles[i][j] = 0;

  for (i = 0; i < 5; i++)
      this->floorTiles[i] = 0;
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
