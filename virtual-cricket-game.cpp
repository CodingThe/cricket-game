#include<bits/stdc++.h>
#include"game.h"
using namespace std;
int main(){
	std::cout<<"                     Hello Player"<<std::endl;
	Game game;
	game.welcome();
	
	cout<<"\nPress Enter to Continue:";
	getchar();
	
    game.showAllPlayers();
    
    cout<<"\nPress Enter to Continue:";
	getchar();
	
	game.selectPlayers();
	game.showTeamPlayers();
	

	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	
	cout<<"\nPress Enter to Toss:";
	getchar();
	
	
	game.toss();
//	game.tossChoice(india);
    game.startFirstInnings();
	return 0;
}
