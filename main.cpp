#include <iostream>
#include <cstdlib>
using namespace std;
char Game_Board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int spot_counter[3][3]={6,6,6,6,6,6,6,6,6},no_of_turn=1;
class base{
 public:
    void Display(){

        cout<< " Tic Tac Toe" << endl;
        cout<< "-------------"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<"  ";
            for (int j = 0; j < 3; j++)
            {
                cout << Game_Board[i][j] << "   ";
            }
            cout << endl;
        }
        cout<< "-------------"<<endl;
    }


    void Input(){
        int a;

        cout << "Player "<< player<<" : ";
        cin >> a;

        if (a == 1){
            if(spot_counter[0][0] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[0][0] = player;
                   spot_counter[0][0] = 1;
            }
        }
        else if (a == 2){
            if(spot_counter[0][1] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[0][1] = player;
                    spot_counter[0][1] = 1;
            }
        }
        else if (a == 3){
            if(spot_counter[0][2] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[0][2] = player;
                    spot_counter[0][2] = 1;
            }
        }
        else if (a == 4){
            if(spot_counter[1][0] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[1][0] = player;
                    spot_counter[1][0] = 1;
            }
        }
        else if (a == 5){
            if(spot_counter[1][1] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[1][1] = player;
                    spot_counter[1][1] = 1;
            }
        }
        else if (a == 6){
            if(spot_counter[1][2] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[1][2] = player;
                    spot_counter[1][2] = 1;
            }
        }
        else if (a == 7){
            if(spot_counter[2][0] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[2][0] = player;
                    spot_counter[2][0] = 1;
            }
        }
        else if (a == 8){
            if(spot_counter[2][1] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[2][1] = player;
                    spot_counter[2][1] = 1;
            }
        }
        else if (a == 9){
            if(spot_counter[2][2] == 1){
                    changePlayer();
                    cout<<"Spot Already Taken by "<<player<<" , Please select another one"<<endl;
                    no_of_turn--;
                    system("pause");
            }
            else{
                    Game_Board[2][2] = player;
                    spot_counter[2][2] = 1;
            }
        }
    }
void changePlayer(){
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}


    char Win(){
        if (Game_Board[1][1] == 'X'){
            if((Game_Board[0][0] == 'X' && Game_Board[2][2] == 'X' )|| (Game_Board[0][2] == 'X' && Game_Board[2][0] == 'X' )|| (Game_Board[0][1] == 'X' && Game_Board[2][1] == 'X' )|| (Game_Board[1][0] == 'X' && Game_Board[1][2] == 'X'))
              return 'X';
        }
        else if(Game_Board[0][0]=='X'){
            if( (Game_Board[0][1] == 'X' && Game_Board[0][2] == 'X' )|| ( Game_Board[1][0] == 'X' && Game_Board[2][0] == 'X'))
                return 'X';
        }
         else if(Game_Board[2][2]=='X'){
            if( (Game_Board[2][0] == 'X' && Game_Board[2][1] == 'X' ) || ( Game_Board[1][2] == 'X' && Game_Board[0][2] == 'X'))
                return 'X';
        }
        else if (Game_Board[1][1] == 'O'){
            if((Game_Board[0][0] == 'O' && Game_Board[2][2] == 'O') || (Game_Board[0][2] == 'O' && Game_Board[2][0] == 'O' )|| (Game_Board[0][1] == 'O' && Game_Board[2][1] == 'O') || (Game_Board[1][0] == 'O' && Game_Board[1][2] == 'O'))
              return 'O';
        }
        else if(Game_Board[0][0]=='O'){
            if(( Game_Board[0][1] == 'O' && Game_Board[0][2] == 'O' )|| ( Game_Board[1][0] == 'O' && Game_Board[2][0] == 'O'))
                return 'O';
        }
         else if(Game_Board[2][2]=='O'){
            if( (Game_Board[2][0] == 'O' && Game_Board[2][1] == 'O') ||  (Game_Board[1][2] == 'O' && Game_Board[0][2] == 'O'))
                return 'O';
        }
        return '/';
    }

};
int main()
{
    base obj;
    obj.Display();
    for(no_of_turn=1;no_of_turn<=9;no_of_turn++)
    {
        obj.Input();
        system("cls");
        obj.Display();
        if (obj.Win() == 'X')
        {
            cout << "Player X wins!" << endl;
            no_of_turn=11;
            break;
        }
        else if (obj.Win() == 'O')
        {
            cout << "Player O wins!" << endl;
            no_of_turn=11;
            break;
        }

        obj.changePlayer();
    }
    if (no_of_turn<11)
        {
           cout << "Draw!" << endl;

        }
    system("pause");
    return 0;
}
