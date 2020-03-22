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
  for (i = 0; i < 5; i++){
    vector<char> columns;
    this->wallTiles.push_back(columns);
  }
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      this->wallTiles[i].push_back('-');
    }
  }
  for (i = 0; i < 5; i++){
    vector<char> rows;
    this->sampleTiles.push_back(rows);
  }
}

Player::Player(){
  this->name = "";
  this->points = 0;

  int i,j;
  for (i = 0; i < 5; i++){
    vector<char> columns;
    this->wallTiles.push_back(columns);
  }
  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      this->wallTiles[i].push_back('-');
    }
  }
  for (i = 0; i < 5; i++){
    vector<char> rows;
    this->sampleTiles.push_back(rows);
  }
}

Player::Player(const Player &p){
  name=p.name;
  this->points = p.points;
  int i,j;
  for (i = 0; i < p.wallTiles.size(); i++){
    vector<char> columns;
    this->wallTiles.push_back(columns);
  }
  for (i = 0; i < p.wallTiles.size(); i++){
    for (j = 0; j < p.wallTiles[i].size(); j++){
      this->wallTiles[i].push_back(p.wallTiles[i][j]);
    }
  }

  for (i = 0; i < p.sampleTiles.size(); i++){
    vector<char> rows;
    this->sampleTiles.push_back(rows);
  }
  for (i = 0; i < p.sampleTiles.size(); i++){
    for (j = 0; j < p.sampleTiles[i].size(); j++){
      this->sampleTiles[i].push_back(p.sampleTiles[i][j]);
    }
  }
  for (i = 0; i < p.floorTiles.size(); i++)
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
