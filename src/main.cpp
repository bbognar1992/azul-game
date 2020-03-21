//
//  main.cpp
//  azul-game
//
//  Created by Bognár Bence on 2020. 03. 19.
//  Copyright © 2020. Bognár Bence. All rights reserved.
//

#include <iostream>
#include <cstdlib>

#include "class/Game.h"

using namespace std;

int getNumberOfPlayers(){
  int players=0;
  cout <<"Add meg a jatekosok szamat!\n";
  cin>>players;
  return players;
}

int main() {
  int nPlayers = getNumberOfPlayers();

  Game gm(nPlayers);
  gm.play();
  gm.showStats();

  return 0;
}
