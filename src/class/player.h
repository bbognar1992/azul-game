class Player
{
  private:
  string name;
  int points;

  int[5][5] wallTiles;
  int[5][2] sampleTiles; //típus és darab
  int[7] floorTiles;

  void addPoints(int newPoints);

  public:
  void Player(string name);
  int getPoint();
  inputString getName();
  char chooseTile(Table* table);
  void show();
  void updateWall(Table* table);
  bool isWallFirstRowFilled();

};
