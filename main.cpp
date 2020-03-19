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

int getNumberOfPuks(int n_players){
  int puks = 0;
  switch (n_players){
      case 1: puks=5;
      case 2: ; break;
      case 3: puks=7; break;
      default: puks=9;
  };
  return puks;
}

int init(int* n_players, int* n_puks){
  *n_players = getNumberOfPlayers();
  *n_puks = getNumberOfPuks(*n_players);
  cout << "---------------------------------------\n";
  cout << "Number of Players: " << *n_players << "\n";
  cout << "Number of Puks: " << *n_puks << "\n";
  cout << "---------------------------------------\n";
  return 0;
}

int main() {
  int n_players = 0;
  int n_puks = 0;

  init(&n_players, &n_puks);

  return 0;
}
