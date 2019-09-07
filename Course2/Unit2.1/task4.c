#include <stdio.h>


int main(void)
{
    int players, team1=0, team2=0, weight;

    scanf("%d", &players);
    
    for(int i=0; i<players*2; i++)
    {
        scanf("%d\n", &weight);
        if(i%2==0)
        {
            team1 = team1 + weight;
        }
        else
        {
            team2 = team2 + weight;
        }
    }
    if(team1 > team2)
    {
        printf("Team 1 has an advantage\n");
    }
    else
    {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\nTotal weight for team 2: %d", team1, team2);
    return 0;
}