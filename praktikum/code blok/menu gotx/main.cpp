#include "basic.h"
#include "menu.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
    int cash = 2500, int minBet = 50;
    int bet = int betMenu (cash,minBet);
    clear();
    cout<<"You chose to bet $"<<bet<<" from your $"<<cash<<".";

}
