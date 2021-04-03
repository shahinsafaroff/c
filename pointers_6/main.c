#include <stdio.h>

void changeCounts(int *count1, int *count2){
    int temp = *count1;
    *count1 = *count2;
    *count2 = temp;
}

int main() {
    int count1, count2;

    printf("Please enter two different Counts to change their values...:\n");
    scanf("%d%d", &count1,&count2);

    printf("count1 = %d count2 = %d\n", count1,count2);
    changeCounts(&count1,&count2);
    printf("count1 = %d count2 = %d\n", count1,count2);
    return 0;
}
