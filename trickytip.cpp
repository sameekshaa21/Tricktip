#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
above:
    int num, n = 2;
    int marks;
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\t|\t  You want to have fun?        |\n";
    cout << "\t\t\t|   Or want to brush up your mind?     |\n";
    cout << "\t\t\t| Well guys, you are at a right place! |\n";
    cout << "\t\t\t----------------------------------------\n";

    cout << "\n\n\n\t\tPress 1 to play for fun.\n";
    cout << "\t\tPress 2 to test your smarts with riddles.\n";
    cout << "\t\t";
    cin >> num;

    system("cls");
    switch (num)
    {
    case 1:
    fungame:
        int x, y, z;
        cout << "\n\n\n\t\t\t\tTIC-TAC-TOE,\n";
        cout << "\t\t\t  WHOSE DIALOGUES YOU KNOW?\n";
        cout << "\n\n\t\t-----------------------------------------\n";
        cout << "\t\t|                            \t\t|";
        cout << "\n\t\t| 1.Carry Minati?       \t\t|\n";
        cout << "\t\t| 2.Dr. Gulati?           \t\t|\n";
        cout << "\t\t| 3.Harsh Beniwal?        \t\t|\n";
        cout << "\t\t| 4.Anubhav Bassi?         \t\t|\n";
        cout << "\t\t|                             \t\t|";
        cout << "\n\t\t-----------------------------------------\n";
        cin >> x;
        system("cls");
        switch (x)
        {
        q:
        case 1:
            cout << "\n\n\n\n\n\n\t\t\t1.So, how are you people?\n";
            cout << "\t\t\t2.This is what happens here!\n";
            cout << "\n\n\t\t\tWhich dialogue you think is his?\n";
            cin >> y;
            system("cls");
            if (y == 1)
            {
            r:
                cout << "\n\n\n\t\t\t\tRIGHT!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***** ************ ****\n";
                cout << "\t\t\t****** ......... ******        \n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else if (y == 2)
            {
                cout << "\n\n\n\t\t\t\tWRONG!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t****** ````````` ******\n";
                cout << "\t\t\t***** *********** *****\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else
            {
                cout << "\n\n\n\t\t\tChoose the correct option.\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t*******         *******\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                goto q;
            }
            break;
        case 2:
        q1:
            cout << "\n\n\n\t\t\t1. Hey, how awesome is she, buddy!\n";
            cout << "\t\t\t2.So, how to do you think my joke was?\n";
            cout << "\n\n\t\t\tWhich dialogue you think is his?\n";
            cin >> y;
            system("cls");
            if (y == 1)
            {
                Beep(750, 900);
                Beep(750, 900);
                cout << "\n\n\n\t\t\t\tWRONG!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t****** ````````` ******\n";
                cout << "\t\t\t***** *********** *****\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else if (y == 2)
            {
                goto r;
                cout << "\n\n\n\t\t\t\tRIGHT!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***** ************ ****\n";
                cout << "\t\t\t****** ......... ******        \n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t\tPress 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else
            {
                cout << "";
                cout << "\n\n\n\t\t\tWrong option!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t*******         *******\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                goto q1;
            }
            break;
        case 3:
        q2:
            cout << "\n\n\n\t\t\t1.Okay, Think it's done!\n";
            cout << "\t\t\t2.Getting??Getting??\n";
            cout << "\n\n\t\t\tWhich dialogue you think is his?\n";
            cin >> y;
            system("cls");
            if (y == 1)
            {
                cout << "\n\n\n\t\t\t\tWRONG!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t****** ````````` ******\n";
                cout << "\t\t\t***** *********** *****\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else if (y == 2)
            {
                cout << "\n\n\n\t\t\t\tRIGHT!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***** ************ ****\n";
                cout << "\t\t\t****** ......... ******        \n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else
            {
                cout << "\n\n\n\t\t\tWrong option!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t*******         *******\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                goto q2;
            }
        case 4:
        q3:
            cout << "\n\n\n\t\t\t1.Is there any sense of this?\n";
            cout << "\t\t\t2.Bother!Brother,here!\n";
            cout << "\n\n\t\t\tWhich dialogue you think is his?\n";
            cin >> y;
            system("cls");
            if (y == 1)
            {
                cout << "\n\n\n\t\t\t\tRIGHT!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***** ************ ****\n";
                cout << "\t\t\t****** ......... ******        \n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else if (y == 2)
            {
                cout << "\n\n\n\t\t\t\tWRONG!\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t**** . ********* . ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t*********     *********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t****** ````````` ******\n";
                cout << "\t\t\t***** *********** *****\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\n\t\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    goto fungame;
                    break;
                case 2:
                    goto above;
                    break;
                default:
                    cout << "\n\n\n\n\n\t\t\tHope you enjoyed.Visit again!\n";
                }
            }
            else
            {
                cout << "\n\n\n\t\t\tChoose the correct option.\n";
                cout << "\t\t\t    ***************    \n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t****   *********   ****\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t*******         *******\n";
                cout << "\t\t\t********       ********\n";
                cout << "\t\t\t***********************\n";
                cout << "\t\t\t ********************* \n";
                cout << "\t\t\t     *************     \n";
                goto q3;
            }
            break;
        }
        break;
    case 2:
        system("cls");
        cout << "\n\t\t\tHERE'S THE RULE BOOK FOR QUIZ!\n";
        cout << "\n\t\t1.There are 5 questions in total.\n";
        cout << "\t\t2. It is necessary to attempt all the 5 Questions.\n";
        cout << "\t\t3.Right answer add 2 marks to your score.\n";
        cout << "\t\t4.Wrong answer will give you 0.\n";
        cout << "\t\t5.There are no marks if you choose wrong option so be a bit attentive.\n";
        cout << "\n\t\t---------------------------------------\n";
        cout << "\t\t|OKAY, SO NOW YOU ARE READY TO GOOO!! |\n";
        cout << "\t\t---------------------------------------\n";
        getch();
    abc:
        system("cls");
        char ch;
        marks = 0;
        system("cls");
        cout << "\t\t\t\t LET'S RIDDLE!\n";
        cout << "\nQuestion1: The more you take, the more you leave behind. What am I?\n";
        cout << "a.Footstep\nb.Time\nc.Beach Sand\n";
        cout << "\nMy option is : ";
        cin >> ch;
        switch (ch)
        {
        case 'a':
        case 'A':
            cout << "Yeah!You got it right!";
            marks = marks + 2;
            break;
        case 'b':
        case 'B':
        case 'c':
        case 'C':
            cout << "OOPS,you are still at 0. The correct option was a.Footstep";
            break;
        default:
            cout << "Oh no!! You lost marks because you chose the wrong option!";
            break;
        }
        cout << "\t  YOUR SCORE:" << marks << "/10";
        cout << "\n\n-----------------------------------------------\n";
        cout << "\n\nQuestion2: Five's father has three sons: One, Two, and ___?\n";
        cout << "a.Three\nb.Four\nc.Five\n";
        cout << "\nMy option is : ";
        cin >> ch;
        switch (ch)
        {
        case 'c':
        case 'C':
            cout << "Yo! You got it right!";
            marks = marks + 2;
            break;
        case 'b':
        case 'B':
        case 'a':
        case 'A':
            cout << "Come on!Gear Up!. The correct option was c.Five.";
            break;
        default:
            cout << "Oh no!! You lost marks because you chose the wrong option!";
            break;
        }
        cout << "\t  YOUR SCORE:" << marks << "/10";
        cout << "\n\n-----------------------------------------------\n";
        getch();
        system("cls");
        cout << "\n\nQuestion3:What is always in front of you but cannot be seen? \n";
        cout << "a.Air\nb.Future\nc.Darkness\n";
        cout << "\nMy option is : ";
        cin >> ch;
        switch (ch)
        {
        case 'b':
        case 'B':
            cout << "Yeah!That's the spirit!";
            marks = marks + 2;
            break;
        case 'c':
        case 'C':
        case 'a':
        case 'A':
            cout << "OOPS,better luck next time. The correct option was b.Future.";
            break;
        default:
            cout << "Oh no!! You lost marks because you chose the wrong option!";
            break;
        }
        cout << "\t  YOUR SCORE:" << marks << "/10";
        cout << "\n\n-----------------------------------------------\n";
        cout << "\n\nQuestion4: What goes up but never comes down? \n";
        cout << "a.Balloon\nb.Hot air\nc.Age\n";
        cout << "\nMy option is : ";
        cin >> ch;
        switch (ch)
        {
        case 'c':
        case 'C':
            cout << "Hurray,you were right!";
            marks = marks + 2;
            break;
        case 'b':
        case 'B':
        case 'a':
        case 'A':
            cout << "OOPS,you lost marks. The correct option was c.Age.";
            break;
        default:
            cout << "Oh no!! You lost marks because you chose the wrong option!";
        }
        cout << "\t  YOUR SCORE:" << marks << "/10";
        cout << "\n\n-----------------------------------------------\n";
        getch();
        system("cls");
        cout << "\n\nQuestion5: What goes up and down but does not move? \n";
        cout << "a.Staircase\nb.Eyes\nc.Pendulum\n";
        cout << "\nMy option is : ";
        cin >> ch;
        switch (ch)
        {
        case 'a':
        case 'A':
            cout << "Good,you got the last answer right!";
            marks = marks + 2;
            break;
        case 'b':
        case 'B':
        case 'c':
        case 'C':
            cout << "OOPS, your answer is not right. The correct option was a.";
            break;
        default:
            cout << "Oh no!! You lost marks because you chose the wrong option!";
            break;
        }
        cout << "\n\n-----------------------------------------------\n";
        system("cls");
        if (marks == 10)
        {
            cout << "\n\t\tYour final score is:" << endl;
            for (int i = 0; i <= n; i++)
            {
                cout << "\t\t\t";
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << " *";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++)
                {
                    cout << "* ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 1 * n - i; j++)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            for (int i = 0; i < n; i++)
            {
                cout << "\t\t\t";

                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << "* ";
                }
                for (int a = 1; a <= i; a++)
                {
                    cout << "  ";
                }
                for (int m = 1; m <= i; m++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int l = 0; l < n * 2; l++)
            {
                cout << " ";
            }
            cout << "                        * ";
            for (int t = 0; t < 4 * n + 1; t++)
            {
                if (t > (4 * n - 11) / 2 && t <= ((4 * n + 1) / 2))
                {
                    cout << "   " << marks << "    ";
                    t += 10;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "*\n";
            for (int i = 2; i <= n + 1; i++)
            {
                cout << "\t\t\t";

                for (int j = i; j <= n; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                for (int j = 1; j < i; j++)
                {
                    cout << "* ";
                }
                for (int j = i; j <= 2 * n - i + 1; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int i = n; i >= 1; i--)
            {
                cout << "\t\t\t";

                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << " *";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int k = i; k >= 1; k--)
                {
                    cout << "* ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int j = n - i; j >= i; j--)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            cout << "\n\t\tWow, you were just perfect!\n";
            getch();
            system("cls");
            cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
            cout << "\n\n\n\t\t   Press 2 to go to the main menu.\n";
            cout << "\n\n\n\t\t\tPress any key to exit.\n";
            cin >> z;
            switch (z)
            {
            case 1:
                system("cls");
                goto abc;
                break;
            case 2:
                goto above;
                break;
                system("cls");
            default:
                system("cls");
                cout << "\t\t\t*                       *\n";
                cout << "\t\t\t***                   ***\n";
                cout << "\t\t\t*************************\n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t **** O ********* O ****\n";
                cout << "\t\t\t ****   *********   ****\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t ********* . . *********\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t ***** ************ ****\n";
                cout << "\t\t\t ****** +++++++++ ******\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t      *************     \n";
                cout << "\n\n\t\t      Hope you enjoyed.Visit again!\n";
                getch();
            }
        }
        else if (marks == 8 || marks == 6)
        {
            system("cls");
            cout << "\n\tYour final score is:" << endl;
            for (int i = 0; i <= n; i++)
            {
                cout << "\t\t\t";
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << " *";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++)
                {
                    cout << "* ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 1 * n - i; j++)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            for (int i = 0; i < n; i++)
            {
                cout << "\t\t\t";

                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << "* ";
                }
                for (int a = 1; a <= i; a++)
                {
                    cout << "  ";
                }
                for (int m = 1; m <= i; m++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int l = 0; l < n * 2; l++)
            {
                cout << " ";
            }
            cout << "                        * ";
            for (int t = 0; t < 4 * n + 1; t++)
            {
                if (t > (4 * n - 11) / 2 && t <= ((4 * n + 1) / 2))
                {
                    cout << "   0" << marks << "    ";
                    t += 10;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "*\n";
            for (int i = 2; i <= n + 1; i++)
            {
                cout << "\t\t\t";
                for (int j = i; j <= n; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                for (int j = 1; j < i; j++)
                {
                    cout << "* ";
                }
                for (int j = i; j <= 2 * n - i + 1; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int i = n; i >= 1; i--)
            {
                cout << "\t\t\t";

                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << " *";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int k = i; k >= 1; k--)
                {
                    cout << "* ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int j = n - i; j >= i; j--)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            cout << "\n\tIt was okay but you could have done better.\n";
            cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
            cout << "\n\n\n\t\t  Press 2 to go to the main menu.\n";
            cout << "\n\n\n\t\t\tPress any key to exit.\n";
            cin >> z;
            switch (z)
            {
            case 1:
                system("cls");
                goto abc;
                break;
            case 2:
                goto above;
                break;
            default:
                system("cls");
                cout << "\t\t\t*                       *\n";
                cout << "\t\t\t***                   ***\n";
                cout << "\t\t\t*************************\n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t **** O ********* O ****\n";
                cout << "\t\t\t ****   *********   ****\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t ********* . . *********\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t ***** ************ ****\n";
                cout << "\t\t\t ****** +++++++++ ******\n";
                cout << "\t\t\t ***********************\n";
                cout << "\t\t\t  ********************* \n";
                cout << "\t\t\t      *************     \n";
                cout << "\n\n\t\t      Hope you enjoyed.Visit again!\n";
            }
        }
        else
        {
            system("cls");
            cout << "\n\tYour final score is:" << marks << endl;
            for (int i = 0; i <= n; i++)
            {
                cout << "\t\t\t";
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << " *";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++)
                {
                    cout << "* ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 1 * n - i; j++)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            for (int i = 0; i < n; i++)
            {
                cout << "\t\t\t";
                for (int j = 1; j <= i; j++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << "* ";
                }
                for (int a = 1; a <= i; a++)
                {
                    cout << "  ";
                }
                for (int m = 1; m <= i; m++)
                {
                    cout << "  ";
                }
                for (int a = i; a <= 2 * n - i; a++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int l = 0; l < n * 2; l++)
            {
                cout << " ";
            }
            cout << "                        * ";
            for (int t = 0; t < 4 * n + 1; t++)
            {
                if (t > (4 * n - 11) / 2 && t <= ((4 * n + 1) / 2))
                {
                    cout << "   0" << marks << "    ";
                    t += 10;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "*\n";
            for (int i = 2; i <= n + 1; i++)
            {
                cout << "\t\t\t";
                for (int j = i; j <= n; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }
                for (int j = 1; j < i; j++)
                {
                    cout << "* ";
                }
                for (int j = i; j <= 2 * n - i + 1; j++)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << " *";
                }
                cout << "\n";
            }
            for (int i = n; i >= 1; i--)
            {
                cout << "\t\t\t";
                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << " *";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int a = 2 * n - i; a >= i; a--)
                {
                    cout << " ";
                }
                for (int k = i; k >= 1; k--)
                {
                    cout << "* ";
                }
                for (int j = i; j >= 1; j--)
                {
                    cout << "  ";
                }
                for (int j = n - i; j >= i; j--)
                {
                    cout << "  ";
                }
                cout << "\n";
            }
            cout << "\n\tYou were really bad!\n";
            cout << "\n\n\tWant to try again?\n\t\t Press 1 to continue\n";
            int q;
            cin >> q;
            system("cls");
            if (q == 1)
            {
                goto abc;
            }
            else
            {
                cout << "\n\n\n\n\t\t\tPress 1 to continue.\n";
                cout << "\n\n\n\t   Press 2 to go to the main menu.\n";
                cout << "\n\n\n\t\t\tPress any key to exit.\n";
                cin >> z;
                system("cls");
                switch (z)
                {
                case 1:
                    system("cls");
                    goto abc;
                    break;
                case 2:
                    goto above;
                    break;
                    system("cls");
                default:
                    cout << "\t\t\t*                       *\n";
                    cout << "\t\t\t***                   ***\n";
                    cout << "\t\t\t*************************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t **** O ********* O ****\n";
                    cout << "\t\t\t ****   *********   ****\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ********* . . *********\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t ***** ************ ****\n";
                    cout << "\t\t\t ****** +++++++++ ******\n";
                    cout << "\t\t\t ***********************\n";
                    cout << "\t\t\t  ********************* \n";
                    cout << "\t\t\t      *************     \n";
                    cout << "\n\n\t\t      Hope you enjoyed.Visit again!\n";
                }
            }
        }
        break;
    default:
        system("cls");
        cout << "You did't choose a right option.";
        goto above;
    }
    return 0;
}