#include <stdio.h>
#include <math.h>

int main() {
    int counter=0, digits, firstDigit;
    int figures[] = {0,0,0,0,0,0,0,0,0};
    printf("\nBenford's Law in C");
    printf("\nhttps://github.com/EnesBuyuk/benfords-law\n");
    printf("\n!-----> Note: If you want to show the graph and exit data entry, enter a value other than an integer.\n\n");
    while(1==1){
        int input;
        printf("Please enter the data (Example -> 1): ");
        if(scanf("%d",&input) == 1){
            counter++;
            digits = (int)log10(input);
            firstDigit = (int)(input / pow(10, digits));
            switch (firstDigit) {
                case 1:
                    figures[0]++;
                    break;
                case 2:
                    figures[1]++;
                    break;
                case 3:
                    figures[2]++;
                    break;
                case 4:
                    figures[3]++;
                    break;
                case 5:
                    figures[4]++;
                    break;
                case 6:
                    figures[5]++;
                    break;
                case 7:
                    figures[6]++;
                    break;
                case 8:
                    figures[7]++;
                    break;
                case 9:
                    figures[8]++;
                    break;
            }
            printf("\n");
        }else{
            break;
        }

    }
    printf("\n\nGraph:\n");
    for(int j=10;j>0;j--){
        for(int i=0;i<9;i++) {
            if ((int)( (float) figures[i] /  (float) counter * 20) >= j) printf("*****");
            printf("\t\t");
        }
        printf("\n");
    }
    for(int i=0;i<9;i++) {
        printf("-----\t\t");
    }
    printf("\n");
    for(int k=1;k<10;k++) printf("[ %d ]\t\t",k);
    printf("\n");
    for(int i=0;i<9;i++){
        float value = (float) figures[i]/ (float) counter*100;
        if((int) value == 0) {
            printf("(%.2f %%)\t", value);
        }else{
            printf("(%.2f%%)\t",value);
        }
    }
    printf("\n\n\n");
    return 0;
}
