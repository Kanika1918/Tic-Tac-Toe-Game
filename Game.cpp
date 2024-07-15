#include<iostream>
using namespace std;
char table[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void box()
{
    cout<<"Welcome to tic tac toe game!!!"<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<table[i][j]<<"|";
        }
        cout<<endl;
        cout<<"-----";
        cout<<endl;
    }
}
void play()
{
    int n;
    cout<<"enter your choice"<<endl;
    cin>>n;
    if(n==1)
        table[0][0]=player;
    if(n==2)
        table[0][1]=player;
    if(n==3)
        table[0][2]=player;
    if(n==4)
        table[1][0]=player;
    if(n==5)
        table[1][1]=player;
    if(n==6)
        table[1][2]=player;
    if(n==7)
        table[2][0]=player;
    if(n==8)
        table[2][1]=player;
    if(n==9)
        table[2][2]=player;
    box();
}
void toggle()
{
    if(player=='X')
        player='O';
    else
        player='X';
}
char result()
{
    //player 1=='X'
    if(table[0][0]=='X' && table[0][1]=='X' && table[0][2]=='X')
        return 'X';
    if(table[1][0]=='X' && table[1][1]=='X' && table[1][2]=='X')
        return 'X';
    if(table[2][0]=='X' && table[2][1]=='X' && table[2][2]=='X')
        return 'X';

    if(table[0][0]=='X' && table[1][0]=='X' && table[2][0]=='X')
        return 'X';
    if(table[0][1]=='X' && table[1][1]=='X' && table[2][1]=='X')
        return 'X';
    if(table[0][2]=='X' && table[1][2]=='X' && table[2][2]=='X')
        return 'X';

    if(table[0][0]=='X' && table[1][1]=='X' && table[2][2]=='X')
        return 'X';
    if(table[0][2]=='X' && table[1][1]=='X' && table[2][0]=='X')
        return 'X';

    //player 2=='0'
    if(table[0][0]=='O' && table[0][1]=='O' && table[0][2]=='O')
        return 'O';
    if(table[1][0]=='O' && table[1][1]=='O' && table[1][2]=='O')
        return 'O';
    if(table[2][0]=='O' && table[2][1]=='O' && table[2][2]=='O')
        return 'O';

    if(table[0][0]=='O' && table[1][0]=='O' && table[2][0]=='O')
        return 'O';
    if(table[0][1]=='O' && table[1][1]=='O' && table[2][1]=='O')
        return 'O';
    if(table[0][2]=='O' && table[1][2]=='O' && table[2][2]=='O')
        return 'O';

    if(table[0][0]=='O' && table[1][1]=='O' && table[2][2]=='O')
        return 'O';
    if(table[0][2]=='O' && table[1][1]=='O' && table[2][0]=='O')
        return 'O';

    return '/';
}
int main()
{
    box();
    while(1)
    {
        play();
        if(result()=='X')
        {
            cout<<"player1 i.e 'X' wins!!!"<<endl;
            break;
        }
        else if(result()=='O')
        {
            cout<<"player2 i.e 'O'wins!!!"<<endl;
        }
        toggle();
    }
    return 0;
}