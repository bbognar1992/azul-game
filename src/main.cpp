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

#ifndef GAME_H
#define GAME_H
#include "class/Game.h"
#endif

#ifndef PLAYER_H
#define PLAYER_H
#include "class/Player.h"
#endif

#ifndef TABLE_H
#define TABLE_H
#include "class/Table.h"
#endif

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
