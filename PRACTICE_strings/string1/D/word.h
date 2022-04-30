void WORD(char*point, int i){
    char array[100];
    int j, k=0;
    for(j=i-1; j>=0; j--){
        array[j] = *point;
        point++;
    }
    array[i]='\0';
    point -= 1;
    int q = i-1;
for(q; q>=0; q--){
    if(array[q]==*point)
    { if(q!=0)      
    {
        point--;
        continue;   }
    else{
                printf("palindrome\n");
                exit(0);
              }
    }
    else{
                printf("not a palindrome\n");
                exit(0);
            };
                }
}