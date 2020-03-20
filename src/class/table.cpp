#include <iostream>
#include <string>

#define n_tile 100
#define n_tile_type (n_tile/5)

using namespace std;

class Table
{
  private:
    std::vector<char> bag;
    std::vector< std::vector<char> > disks;
    std::vector<char> freeTiles;
    std::vector<char> restTiles;

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

    void initAndFillBag(){
      this.bag.resize(n_tile+1);
      for(int i=0; i< n_tile; i++){
        char letter = 65+i%5;
        this.bag.push_back(letter);
      }
      char specialTile = 90;
      this.bag.push_back(specialTile);
    }

  public:
    void Table(int nPlayers){
      initAndFillBag();
      this.freeTiles.resize(n_tile+1);
      this.restTiles.resize(n_tile+1);
      //init disks
      int nDisks = getNumberOfDisks(nPlayers), diskSize = 4;
      this.disks.resize(nDisks);
      for(int i = 0 ; i < nDisks ; i++){
          this.disks[i].resize(diskSize);
      }
    }

    int isEmpty(){
      //are disks clear?
      for(int i=0; i<this.disks.size; i++){
        if(!disks[i].empty) return false;
      }
      //are centre clear?
      if(!this.freeTiles.empty) return false;

      return true;
    }

    int prepare(){

      //fill bag
      for(int i = 0 ; i < this.restTiles.size ; ++i)
      {
          this.bag.push_back(this.restTiles.pop_back())
      }

      //fill disks
      for(int i = 0 ; i < this.disks.size ; i++){
        for(int j = 0 ; j < 4 ; j++){
            this.disks[i].push_back(this.bag.pop_back())
        }
      }

      //find z and push to centre

    }


}
