#include <vector>

using namespace std;

class Table
{
  private:

  std::vector<char> bag;
  std::vector< std::vector<char> > disks;
  std::vector<char> freeTiles;
  std::vector<char> restTiles;

  int getNumberOfDisks(int n_players);
  void initAndFillBag();

  public:

  Table(int nPlayers);
  bool isEmpty();
  void prepare();
  void show();

};