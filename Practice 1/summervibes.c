/*enum Alpha{
    A,B,C,D,E,F,G,H,I,J
};
*/

int main()
{
    char meterReading[100][7],currentMeter[7];
    int T,currentNumber=0,sumTotal=0,centralReading;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%s",meterReading[i]);
        sscanf(meterReading[i],"%s",currentMeter);
        currentNumber=0;
        for(int i=0;i<6;i++)
        {
            if(currentMeter[i]=='J')
            {
                if(currentMeter[i+1]=='A' && i+1<6)
                {
                    currentNumber=currentNumber*10+0;
                }
                else{
                    currentNumber=currentNumber*10+9;
                }
            }
            else if(currentMeter[i]=='I')
            {
                if(currentMeter[i+1]=='B' && i+1<6)
                {
                    currentNumber=currentNumber*10+1;
                }
                else{
                    currentNumber=currentNumber*10+8;
                }
            }
            else if(currentMeter[i]=='H')
            {
                if(currentMeter[i+1]=='C' && i+1<6)
                {
                    currentNumber=currentNumber*10+2;
                }
                else{
                    currentNumber=currentNumber*10+7;
                }
            }
             else if(currentMeter[i]=='G')
            {
                if(currentMeter[i+1]=='D' && i+1<6)
                {
                    currentNumber=currentNumber*10+3;
                }
                else{
                    currentNumber=currentNumber*10+6;
                }
            }
            else if(currentMeter[i]=='F')
            {
                if(currentMeter[i+1]=='E' && i+1<6)
                {
                    currentNumber=currentNumber*10+4;
                }
                else{
                    currentNumber=currentNumber*10+5;
                }
            }
            else if(currentMeter[i]=='A')
            currentNumber=currentNumber*10+0;
                else if(currentMeter[i]=='B')
            currentNumber=currentNumber*10+1;
                else if(currentMeter[i]=='C')
            currentNumber=currentNumber*10+2;
                else if(currentMeter[i]=='D')
            currentNumber=currentNumber*10+3;
            else if(currentMeter[i]=='E')
            currentNumber=currentNumber*10+4;
            
        }
        sumTotal+=currentNumber;
        
        
    }
    scanf("%d",&centralReading);
    if(centralReading<sumTotal)
    {
        printf("GREEDY\n");
        printf("%d",sumTotal-centralReading);
    }
    else
    printf("INNOCENT");
   
   
    
    return 0;
    
}