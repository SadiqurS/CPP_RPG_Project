#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void leviathan_fight();//protype funtion for the fight
int show_leviathan_Hp(int leviathan_hp, int attack);//protype function of the boses hp during the fight
int player_hp(int hp, int leviathan_attack);//protype function of the player hp during the fight
int show_mana(int mana,int remaining);//protype function of player mana

class character{//character class 
	public:
		string name;
		int HP;
		int strength;
		void printstats()
		
		{
			cout<<"Name: "<<name<<endl;
			cout<<"HP: "<<HP<<endl;
			cout<<"Attack Power: "<<strength<<endl;	
		}
};

class hero : public character{//hero class it inherits the character class
	public:
		int MP;
		hero(string n, int h,int m){//getter function from the character class into the inherited hero class
			name = n;//name of hero
			HP = h;//HP of hero
			MP = m;//Mana of hero
		}
		void printstats(){//mana of the hero is printed
			character::printstats();
			cout << "MP: "<<MP <<endl;
		}
};

class monster : public character{//the monster class
	public:
		monster(string N,int H, int O)//getter function from the character class
		{
			name = N;//name of monster
			HP = H;//HP of monster
			strength = O;//Attack power of monster
		}	
};
 
int main()
{
	srand(time(0));
    
	cout<<"---------welcome to SWORD ART ONLINE Kirito---------"<<endl;//story of the game 
     cout<<"press ---> ENTER to continue <---"<<endl;
	 cin.ignore();
    system("CLS");
    
	cout<<"This is floor 69"<<endl;
     cin.ignore();
    system("CLS");
    
	cout<<"All your team mates have died clearing the danger beasts in this floor"<<endl;
     cin.ignore();
    system("CLS");
    
	cout<<"you must continue and slay the final boss to gain control of this floor"<<endl;
    cin.ignore();
    system("CLS");
	
	cout<<"otherwise you will die!"<<endl;
     cin.ignore();
    system("CLS");
    
	cout<<"good Luck kirito"<<endl;
    cin.ignore();
    system("CLS");
    
    int fight;//battle variable
    cout<<"-----------------------floor 69-----------------------"<<endl;
    cin.ignore();
    system("CLS");
    hero kirito("Kirito", 200, 70);//stats for the hero
	kirito.strength = 10;//attack power of the hero
	cout<<"These are your stats"<<endl;
	cout<<"***********************************"<<endl;
	kirito.printstats();//prints out the stats for the hero
	cout<<"***********************************"<<endl;
    cin.ignore();
    system("CLS");
    cout<<"                            __"<<endl;//picture of the hero
    cout<<"                         ,''  ``."<<endl;
    cout<<"                       .' ,'. `. `."<<endl;
    cout<<"                     .',':,-|,_ \ .`,"<<endl;
    cout<<"                      `. |-  - ; ).'"<<endl;
    cout<<"                        \|`'-.',\)"<<endl;
    cout<<"                       _..`   x<._"<<endl;
    cout<<"                     ,'       x   `."<<endl;
    cout<<"                    |   _ -   x     |"<<endl;
    cout<<"                   :      _.-'/|`.  ("<<endl;
    cout<<"                  |__..-'    `|  `-.\" "<<endl;
    cout<<"                   /  |              |"<<endl;
    cout<<"                   :  |              |"<<endl;
    cout<<"                   ;   \    `         |"<<endl;
    cout<<"                  :     \         \   |"<<endl;
    cout<<"                  |  /   /\        |  |"<<endl;
    cout<<"                  | :   /__\       |  |"<<endl;
    cout<<"                  |    /   :: \       :"<<endl;
    cout<<"                  |   :|   |:          :"<<endl;
    cout<<"                  |   ||.-.| \     |   |"<<endl;
    cout<<"                  ;   |)   (  ).   |   |"<<endl;
    cout<<"                 :    ;\___/  \_\  ;   |"<<endl;
    cout<<"                 |   / |__[)  (]_\     |"<<endl;
    cout<<"                 |  :  |  :-  |  :)    |"<<endl;
    cout<<"                 |  |  |  |-  |  |`.   |"<<endl;
    cout<<"                 |  ;  |  |-  |  |  \  |"<<endl;
    cout<<"                 | /   |  ;\  |  |   `.|"<<endl;
    cout<<"                 |/    ;._\'`-;  (._   \" "<<endl;
    cout<<"                 |   ,/`-,(  / `,',_`._/"<<endl;
    cout<<"                 |/`'(__.'   `-'.:__)SSt"<<endl;
    cin.ignore();
    system("CLS");
      
    
    cout << "You see the leviathan Dragon swiftly flying towards you."<<endl;
    cin.ignore();
    system("CLS");
    
    cout<<"           ` "<<endl;
    cout<<"          `b "<<endl;
    cout<<"           Y.                                    oo8""      ooo "<<endl;//text art of the dragon boss
    cout<<"            8.                                 d88"         ":88 "" "<<endl;
    cout<<"             `8.                         ,o.  o88P          ,dP "<<endl;
    cout<<"              :8                      ,d888P,8888 ,od8ooood8"   <<endl;
    cout<<"   `.          Y8.                ,o88888888888P8P" " " " "<<endl;
    cout<<"    `b.         Y8.              Y88888888888888o.   o "<<endl;
    cout<<"     `Yb.        Y8.           .""88888888888888888P      , " ""<<endl;
    cout<<"       8bo       Y8o           o8888888888888           db   ,,o "<<endl;
    cout<<"         Y88o      Y8b.        ` 888888''8P'             888' :88; "<<endl;
    cout<<"          `'88o.   oY88o        :88888'                   Y8P ,d8'"<<endl;
    cout<<"             ''88b. `8d88b.      :88888                    :8 ,88;  , "<<endl;
    cout<<"`""ooo"          "888o'88888o     :8888b                    d8b88P,od88 "<<endl;
    cout<<"   ""888oo.      `Y888888888.    88888b                  ,888888888P' "<<endl;
    cout<<"       'Y88888boo'Y8888888888.   `888888bo              ,888888" ""<<endl;
    cout<<"          `''Y8888888888888888'    `88888888bo          d8888P' "<<endl;
    cout<<"              `''Y8888888888P'     ,d88o8888888.      o88888' "<<endl;
    cout<<"               ''Y888888888'      d888888888888Y;   ,888P':P "<<endl;
    cout<<"                 od8888888b.    d888888888888b   od88P'  8; "<<endl;
    cout<<"            ,ood888888888888o.,d8888888888888o od888"   ",""88" ""<<endl;
    cout<<"        `"""""" ,8888888888888888Y""8P8d888888 888""    Y8" ""<<endl;
    cout<<"                 o888888888888888P:d888888888888'P'      " ""<<endl;
    cout<<"               ,d888Y88888888888P :Y8888888888888. "<<endl;
    cout<<"             ,o88P""8"":P""8Y8P8P ,oY88888888888888b """<<endl;
    cout<<"            o88" "d"" `' ` :P  ,8P8888888888888888' "<<endl;
    cout<<"          ""    ''         d88Y8888888888888888888.     :8o. "<<endl;
    cout<<"                       ooo8P8d888888888888888888888.    88' ,o.. "<<endl;
    cout<<"                    ood8P88888888888888888888Y8888Y8b  d8'o888P "<<endl;
    cout<<"                   ,88Pb888888888888888888888d8;""8 Y88o88d88"" "<<endl;
    cout<<"                 od8P888888888888888888Y88888;8     `Y8888'  ,o. "<<endl;
    cout<<"                 88`8888888888888888o8bd8888P        ,88888888PY "<<endl;
    cout<<"               ,88`8888888888888888888888P"         "d8"     "" ""<<endl;
    cout<<"               Y8b88888888""88888888P""''         ood8P "<<endl;
    cout<<"               o8d888888Pb888""'                 Y888' "<<endl;
    cout<<"              `8;888888b88P"          "ooo88bo.  " ""<<endl;
    cout<<"               o888888b88'          o8888888888b. "<<endl;
    cout<<"              ''8d88888d8        'o888888''Y888""8b" ""<<endl;
    cout<<"               :88888b88       o'88888Pbd888888.8; "<<endl;
    cout<<"               8;88888'88oooo8''b8888o8P''''Y8888 "<<endl;
    cout<<"              `8'88888dP""Ybd8888P88"      "`888d  -hrr- "<<endl;
    cout<<"               `88'8888888888888Pb"        "88P "<<endl;
    cout<<"                `88dY888888888Pb'           d88d' "<<endl;
    cout<<"                   `88bd8""YoP"          "d888P" <<endl;
    cout<<"                   `""""""""'    ,oooo888888" ""<<endl;
    cout<<"                              ,o888888P""" ""<<endl;
    cout<<"                             d88P"" "<<endl;
    cout<<"                            :88' "<<endl;
    cout<<"                            88; "<<endl;
    cout<<"                            Y8b "<<endl;
    cout<<"                             ''88o"<<endl;
    cout<<"                               `Yb "<<endl;
    cin.ignore();
    system("CLS");

    
    cout<<" o==[]::::::::::::::::>    "<<endl;
	cout<<"Will you fight the leviathan? Yes = 1 No = 2 ";//ask user if he wants to fight or not
    cin >> fight;//always type 1 otherwise you basically lose the game
    
   	monster leviathan("leviathan Dragon",400,5);//stats for the boss 
   	leviathan.strength = 90;
   	cout<<"**************************************"<<endl;
    leviathan.printstats();//prints out the stats of the game
    cout<<"**************************************"<<endl;
    cout<<"----------------------------"<<endl;   
	
	if(fight==1)//if user chose fight option
    {
        leviathan_fight();//runs the void fight function

    }
    else if(fight==2)//if user choses to not fight
    {
        cout << "You chose to not attack the leviathan and it has devoured you."<<endl;//if user doesnt fight game is over
        cout <<"your HP: 0"<<endl;
		cout <<"game over"<<endl;

    }
    else
    {
        cout << "That is not an option."<<endl;//if user does not pick from given options
        return main();
    }
}

void leviathan_fight()//fighting function
{
 	int hp = 200;//variables used for the fight function
	int leviathan_hp = 400; //hp of boss
	int attack = 5;
	int mana = 70;
	int remaining;
	int super_attack = 15;
	int heavy_attack = 10; 
	int leviathan_attack;
	int leviathan_basic= 5;
	int leviathan_super = 9;
	int leviathan_heavy = 13;
  	int leviathan_hit;

   while(hp > 0 && leviathan_hp > 0 && mana >= 0)//continues fight if hp and mana is not 0
   {
    cout <<"Which ability do you want to use?"<<endl;//ask user which abilities they want to use
    cout<<"****************************************"<<endl;
	cout<<"sword bash = 1 "<<endl;//most basic attack
	cout<<"Dual blades = 2 "<<endl;//strong attack
	cout<<"lighting strike = 3 "<<endl;//another strong attack
	cout<<"don't attack = 4 "<<endl;//if user does not attack
	cout<<"****************************************"<<endl;
    cin >> leviathan_hit;//takes in what option the user chose
    
	if (leviathan_hit == 1)//if user chose sword bash
    {	
    leviathan_hp = show_leviathan_Hp(leviathan_hp, attack);//subtracts Hp of boss the damage is randomzied based on what option player chose
    leviathan_attack = leviathan_basic;//boss attacks player it is also randomized based on the options of the player
    hp = player_hp(hp, leviathan_attack);//player Hp is subtracted also randomized based on the options of the player
    remaining = attack;//mana used to attack
    mana = show_mana(mana,remaining);//show how much mana is left also randomized based on the options of the player
    cout << "You used sword bash on the leviathan."<<endl;
    cout << "The leviathan has " << leviathan_hp << "HP left."<<endl;
    cout<<"                                         "<<endl;
    cout <<"you have: "<<mana<<" mana left"<<endl;
    cout<<"                                         "<<endl;
   
	 if(leviathan_hp <= 0)//if user kills the beast
     {
        cout << "you have slain the dragon!"<<endl;
        cout<<"congralutions you now have access to floor 69"<<endl;
     }
     
     if(mana<=0)//if the mana hits 0 game is over
	 {
    	cout<<"you wasted all your mana, you lose!"<<endl;
    	cout<<"you are unable to fight"<<endl;
    	cout<<"game over"<<endl;
     }
     
     else if(leviathan_hp > 0)//prints out the attack of the boss
     {
       cout << "The leviathan hit you with wings of fury."<<endl;
       cout<<"                                         "<<endl;
       cout << "You now have " << hp << "HP left."<<endl;
     }
    
    }
    
    else if(leviathan_hit == 4)//if user does not attack 
    {
        cout << "You chose to not to hit leviathan"<<endl;
		cout<<"so he struck you with his claws"<<endl;
		cout<<"                                         "<<endl;
        cout << "You now have " << player_hp(hp, leviathan_attack) << "HP left."<<endl;//prints out Hp of player 
        cout<<"                                         "<<endl;
    }
    
	else if(leviathan_hit == 2)//if user choses dual blades 
	{
		leviathan_hp = show_leviathan_Hp(leviathan_hp,super_attack);//subtracts Hp of boss the damage is randomzied based on what option player chose
		leviathan_attack = leviathan_super;//boss attacks player it is also randomized based on the options of the player
    	hp = player_hp(hp, leviathan_attack);//player Hp is subtracted also randomized based on the options of the player
    	remaining = super_attack;//mana used to attack
    	mana = show_mana(mana,remaining);//show how much mana is left also randomized based on the options of the player
		cout<<"you used dual blades on leviathan"<<endl;
		cout << "The leviathan now has " << leviathan_hp << "HP left."<<endl;
		cout<<"                                         "<<endl;
		cout <<"you have: "<<mana<<" mana left"<<endl;
		cout<<"                                         "<<endl;
	
	if(leviathan_hp <= 0)//if user kills the beast
     {
        cout << "you have slain the dragon!"<<endl;
        cout<<"congralutions you now have access to floor 69"<<endl;
        
     }
     
	 if(mana<=0)//if the mana hits 0 game is over
	 {
    	cout<<"you wasted all your mana, you lose!"<<endl;
    	cout<<"you are unable to fight"<<endl;
    	cout<<"game over"<<endl;
     }
     
	 else if(leviathan_hp > 0)//prints out the attack of the boss
     {
       cout <<"The leviathan used heat wave on you."<<endl;
       cout<<"                                         "<<endl;
       cout <<"You now have " << hp << "HP left."<<endl;
       cout <<"you feel the hot scorch on your armor"<<endl;
       cout<<"                                         "<<endl;
     }
			
	}
	
	else if(leviathan_hit == 3)//if user chose lighting strike
	{
		leviathan_hp = show_leviathan_Hp(leviathan_hp,heavy_attack);//subtracts Hp of boss the damage is randomzied based on what option player chose
		leviathan_attack = leviathan_heavy;//boss attacks player it is also randomized based on the options of the player
    	hp = player_hp(hp, leviathan_attack);//player Hp is subtracted also randomized based on the options of the player
    	remaining = heavy_attack;//mana used to attack 
    	mana = show_mana(mana,remaining);//show how much mana is left also randomized based on the options of the player
		cout<<"you used lighting strike on leviathan"<<endl;
		cout <<"The leviathan now has " << leviathan_hp << "HP left."<<endl;
		cout<<"                                         "<<endl;
		cout <<"you have: "<<mana<<" mana left"<<endl;
		cout<<"                                         "<<endl;
		
	if(leviathan_hp <= 0)//if user kills the beast
     {
        cout << "you have slain the dragon"<<endl;
        cout<<"congralutions you now have access to floor 69"<<endl;
     }
     
     if(mana<=0)//if the mana hits 0 game is over
	 {
    	cout<<"you wasted all your mana, you lose!"<<endl;
    	cout<<"you are unable to fight"<<endl;
    	cout<<"game over"<<endl;
     }
     
     else if(leviathan_hp > 0)//prints out the attack of the boss
     {
       cout << "The leviathan used acid breath."<<endl;
       cout<<"                                         "<<endl;
       cout << "You now have " << hp << "HP left."<<endl;
       cout<<"becareful of the acid it can break through your armor"<<endl;
       cout<<"                                         "<<endl;
     }
	 		
	}
	
    else//if user does not pick an option given
    {
        cout << "That is not an option."<<endl;
        return leviathan_fight();
    }
    
   }
}


int show_leviathan_Hp(int leviathan_hp, int attack)//the function of the hp of boss
{
    leviathan_hp = leviathan_hp - attack+rand()%10;//amount of damage boss takes is random based on which ability player used
    return leviathan_hp;//returns the HP of the boss
}

int show_mana(int mana,int remaining)//function to show how much mana is left of the player
{
    mana = mana - (rand()%10+15-remaining);//the amount of mana used is randomized based on which attack the player chose and how much damage it does
    return mana;//return the Mana of player
}

int player_hp(int hp, int leviathan_attack)//the function for amount of damage player took
{
    hp = hp - leviathan_attack+rand()%10;//the amount of damge player took is randomized as well and is based on how much damage they did 
    return hp;//returns Hp of player
}








