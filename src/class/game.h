class Game
{
  private:

  std::vector<Player> players
  Table table;

  void setPlayers(int nPlayers);
  bool hasAnyoneFilledFirstRow();
  bool nextRound();

  public:
    
  void Game(int nPlayers=2);
  void play();
  void showStats();

};
