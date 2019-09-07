#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *today)
{
    scanf("%d %d %d", &(*today).year, &(*today).month, &(*today).day);
}

void printDate(struct date today)
{
    printf("%02d/%02d/%4d\n", today.month, today.day, today.year);
}

struct date advanceDay(struct date today) {
    int d = today.day;
    int m = today.month;
    int y = today.year;
    int days;
    struct date tomorrow;
    
    if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) 
    {
        days = 31;
    } 
    else if (m==2) 
    {
        if (y%4==0)
        {
            if (y%100 == 0) 
            {
                if (y%400 ==0)
                {
                    days = 29;
                } 
                else 
                {
                    days = 28;
                }
            } 
            else 
            {
                days = 29;
            }
        } 
        else 
        {
            days = 28;
        }
    }
    else
    {
        days = 30;
    }
    if (d<days) 
    {
        d++;
    }
    else 
    {
            d = 1;
            if (m==12)
            {
                m = 1;
                y++;
            } 
            else 
            {
                m++;
            }
        }
    tomorrow.year = y;
    tomorrow.month = m;
    tomorrow.day = d;
    return(tomorrow);
    }
// Write your readDate(), printDate(), and advanceDate() functions here