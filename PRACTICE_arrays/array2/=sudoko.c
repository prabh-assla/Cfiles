#include <stdio.h>

void CHECK(int*grid, int i){
    int j, digit[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, k, *crosswrd = &digit[0], puzzle[9];
    for(j=0; j<=i; j++){
        for(k=0; k<=i; k++){
            if(*grid == *crosswrd){
    puzzle[*crosswrd-1] = *crosswrd;
            }
            else{}
        crosswrd++;
    crosswrd-=(*crosswrd);
    printf("%d %d %d", *crosswrd, *grid, puzzle[*crosswrd-1]);

        }
        }
}

int main(){
    int grid[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},{6, 7, 2, 1, 9, 5, 3, 4, 8},
    {1, 9, 8, 3, 4, 2, 5, 6, 7},{8, 5, 9, 7, 6, 1, 4, 2, 3},{4, 2, 6, 8, 5, 3, 7, 9, 1},
    {7, 1, 3, 9, 2, 4, 8, 5, 6},{9, 6, 1, 5, 3, 7, 2, 8, 4},{2, 8, 7, 4, 1, 9, 6, 3, 5},
    {3, 4, 5, 2, 8, 6, 1, 7, 9}};
CHECK(grid , 8);
    return 0;
}