//Write a program that stores the following data about a player in a structure: 
//?Player’s Name 
//?Player’s Number 
//?Scored by Player 
//The program should keep an array of 12 players. Each element is for a
//different player on a team. When the program runs, it should ask the user
//to enter the data for each player using a loop. It should then print the
//list of player’s number, name, and scores. The program should also calculate
//and display the total points earned by the team. The number and name of the 
//player who has earned the most points should also be displayed.
#include<iostream>
#include<string>
using namespace std;
struct player
{
	string playername;
	int playernumber;
	double scored;
};
int main ()
{
	player players[12];
	double totalscore=0;
	int maxindex= 0;
	cout << " Here you need to enter information " << endl;
	for (int i =0; i<12; i++)
	{
		cout << " Enter please player" << i+1 ;
		cin >> players[i].playername >> players[i].playernumber >> players[i].scored;
		if(players[i].scored > players[maxindex].scored)
		{
			maxindex =i;
		}
	}
	cout << " /n PLAYERS LIST             /n  " ;
	for(int i=0; i<12; i++)    
	{
		cout << "player name : " << players[i].playername << endl;
		cout <<  "player number : " << players[i].playernumber <<endl;
		cout << "player score is : " << players[i].scored << endl;
	}            
	return 0;
}
