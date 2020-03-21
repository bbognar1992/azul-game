#include <vector>

#ifndef TABLE_H
#define TABLE_H

class Table
{
  private:

  std::vector<int> bag;
  std::vector< std::vector<int> > disks;
  std::vector<int> freeTiles;
  std::vector<int> restTiles;

  int getNumberOfDisks(int n_players);
  void initAndFillBag();

  public:

  Table(int nPlayers);
  bool isEmpty();
  void prepare();
  void show();

};

#endif
