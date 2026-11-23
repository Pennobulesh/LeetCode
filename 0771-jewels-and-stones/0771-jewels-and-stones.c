int numJewelsInStones(char* jewels, char* stones) 
{
    int i;
    int j;
    int count = 0;

    // while(jewels[i] != '\0' && stones[j] != '\0')
    // {
    //     if(jewels[i] == stones[j])
    //     {
    //         count++;
    //     }
    //     i++;
    // }    

    for(i = 0;jewels[i] != '\0';i++)
    {
        for(j = 0; stones[j] != '\0';j++)
        {
            if(jewels[i] == stones[j])
            {
                count++;
            }
        }
    }
    return count;
}