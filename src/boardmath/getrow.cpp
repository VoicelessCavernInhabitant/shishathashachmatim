#include <cmath>

/*
zjistí, na které řadě se políčko nachází (pro případ že po včerejšku odmítáš mluvit anglicky)
*/

int getRow(int pos){
    int row = 0;
    while(pos > 0){
        pos -= (17 - abs(row - 8));
        row ++;
    }
    return row;

}