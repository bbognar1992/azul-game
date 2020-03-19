//
//  main.cpp
//  azul-game
//
//  Created by Bognár Bence on 2020. 03. 19.
//  Copyright © 2020. Bognár Bence. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#define n_tile 100
#define n_tile_type (n_tile/5)

int getNumberOfPlayers(){
  int players=0;
  cout <<"Add meg a jatekosok szamat!\n";
  cin>>players;
  return players;
}

int main() {
  int nPlayers = getNumberOfPlayers();

  Game g = new Game(nPlayers);
  g.play();
  g.pack();

  return 0;
}
