int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("\tWelcome to the game\n");
    printf("\t----------------------------------\n\n");
    for (int i = 0; i < 3; i++)
    {
    
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        printf("\tPlayer's turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf(" -----------------\n");
        printf("| You choose: %c   |\n", playerChar);
        printf(" -----------------\n\n");
     
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        printf("\tComputer's turn\n");
        temp = RandomNumbergenerator(3) + 1;
        compChar = dict[temp - 1];
        printf(" --------------------\n");
        printf("| Computer choose: %c |\n", compChar);
        printf(" --------------------\n\n");
     
        if (greaternumber(compChar, playerChar) == 1)
        {
            compScore++;
            printf("\t\tComputer Got It!\n\n");
        }
        else if (greaternumber(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("\t\tIt's a draw. Both got 1 point!\n\n");
        }
        else
        {
            playerScore++;
            printf("\t\tYou Got It!\n\n");
        }
      
        printf("| You: %d      |\n", playerScore);
        printf("| Computer: %d |\n", compScore);
   
        printf("===========================================================\n\n");
    }
    printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|   %d  |    %d     |\n", playerScore, compScore);
   
    if (playerScore > compScore)
    {
       
        printf("\t| You Win the match |\n");
        
    }
    else if (playerScore < compScore)
    {
      
        printf("\t| Computer Win the match |\n");
      
    }
    else
    {
       
        printf("\t| It's a draw |\n");
       
    }
    return 0;
}