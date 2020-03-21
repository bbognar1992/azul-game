#include <iostream>
#include <string>

#ifndef TABLE_H
#define TABLE_H
#include "Table.h"
#endif

#define n_tile 100
#define n_tile_type (n_tile/5)

using namespace std;

int Table::getNumberOfDisks(int n_players){
  int puks = 0;
  switch (n_players){
      case 1: disks=5;
      case 2: ; break;
      case 3: disks=7; break;
      default: disks=9;
  };
  return disks;
}

void Table::initAndFillBag(){
  this->bag.resize(n_tile+1);
  for(int i=0; i< n_tile; i++){
    char letter = 65+i%5;
    this->bag.push_back(letter);
  }
  char specialTile = 90;
  this->bag.push_back(specialTile);
}

Table::Table(int nPlayers){
  initAndFillBag();
  this->freeTiles.resize(n_tile+1);
  this->restTiles.resize(n_tile+1);
  //init disks
  int nDisks = getNumberOfDisks(nPlayers), diskSize = 4;
  this->disks.resize(nDisks);
  for(int i = 0 ; i < nDisks ; i++){
      this->disks[i].resize(diskSize);
  }
}

bool Table::isEmpty(){
  //are disks clear?
  for(int i=0; i<this->disks.size; i++){
    if(!this->disks[i].empty) return false;
  }
  //are centre clear?
  if(!this->freeTiles.empty) return false;

  return true;
}

void Table::prepare(){
  //fill bag
  for(int i = 0 ; i < this->restTiles.size ; ++i)
  {
      this->bag.push_back(this->restTiles.pop_back());
  }

  //find z and push to centre
  this->bag.erase(std::find(this->bag.begin(),this->bag.end(),'Z'));
  freeTiles.push_back('Z');

  //fill disks
  for(int i = 0 ; i < this->disks.size ; i++){
    for(int j = 0 ; j < 4 ; j++){
      char tile = this->bag.pop_back();
      this->disks[i].push_back();
    }
  }

}

void Table::show(){
  for(int i = 0 ; i < this->disks.size ; i++){
    std::cout << i << '.' << ' ';
  }
  std::cout << '\n'

  for(int i = 0 ; i < this->disks.size ; i++){
    std::cout << this->disks[i][0] << this->disks[i][0] << ' ';
  }
  std::cout << '\n'

  for(int i = 0 ; i < this->disks.size ; i++){
    std::cout << this->disks[i][2] << this->disks[i][3] << ' ';
  }
  std::cout << '\n\n'

  for(int i = 0 ; i < this->freeTiles.size ; i++){
    std::cout << this->freeTiles[i] << ' ';
  }
  std::cout << '\n\n'

}
