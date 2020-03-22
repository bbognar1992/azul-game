#include "Table.h"

#include <iostream>

using namespace std;

#define n_tile 100
#define n_tile_type (n_tile/5)

int Table::getNumberOfDisks(int n_players){
  int disks = 0;
  switch (n_players){
      case 1: ;
      case 2: disks=5; break;
      case 3: disks=7; break;
      default: disks=9;
  };
  return disks;
}

void Table::initAndFillBag(){
  for(int i=0; i< n_tile; i++){
    char tile = 65+i%5;
    this->bag.push_back(tile);
  }
  char specialTile = 90;
  this->bag.push_back(specialTile);
}

Table::Table(int nPlayers){
  initAndFillBag();
  this->nDisks = getNumberOfDisks(nPlayers);
}

bool Table::isEmpty(){
  //are disks clear?
  for(int i=0; i<this->disks.size(); i++){
    if(!this->disks[i].empty()) return false;
  }
  //are centre clear?
  if(!this->freeTiles.empty()) return false;

  return true;
}

void Table::prepare(){

  int i;
  //fill bag
  for(i = 0 ; i < this->restTiles.size() ; ++i)
  {
      int lastElem = this->restTiles.back();
      this->restTiles.pop_back();
      this->bag.push_back(lastElem);
  }

  //find z and push to centre
  this->bag.erase(std::find(this->bag.begin(),this->bag.end(),'Z'));
  freeTiles.push_back('Z');
  //fill disks
  for(i = 0 ; i < this->nDisks; i++){
    vector<char> disk;
    for(int j = 0 ; j < 4 ; j++){
      char tile = this->bag.back();
      this->bag.pop_back();
      disk.push_back(tile);
    }
    this->disks.push_back(disk);
  }

}

std::vector<char> Table::getTiles(int diskNumber, char tile_type){
  std::vector<char> tiles;
  if(diskNumber==-1){
    if(std::find(this->freeTiles.begin(),this->freeTiles.end(),tile_type)!=this->freeTiles.end()){
      throw 1;
    }
    else{
      for(int i=0; i< this->freeTiles.size(); i++){
        vector<char>::iterator it = std::find(this->freeTiles.begin(),this->freeTiles.end(),tile_type);
        this->freeTiles.erase(it);
        tiles.push_back(tile_type);
      }
    }
  }
  else{
    for(int i=0; i< 4; i++){
      vector<char>::iterator it = std::find(this->freeTiles.begin(),this->freeTiles.end(),tile_type);
      this->disks[diskNumber].erase(it);
      tiles.push_back(tile_type);
    }
  }
  return tiles;
}

void Table::show(){
  for(int i = 0 ; i < this->disks.size() ; i++){
    std::cout << i << '.' << ' ';
  }
  std::cout << '\n';

  for(int i = 0 ; i < this->disks.size(); i++){
    std::cout << this->disks[i][0] << this->disks[i][0] << ' ';
  }
  std::cout << '\n';

  for(int i = 0 ; i < this->disks.size() ; i++){
    std::cout << this->disks[i][2] << this->disks[i][3] << ' ';
  }
  std::cout << "\n-------------------------------\n";

  for(int i = 0 ; i < this->freeTiles.size() ; i++){
    std::cout << this->freeTiles[i] << ' ';
  }
  std::cout << "\n-------------------------------\n\n";
}
