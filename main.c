#include<stdio.h>
#include<string.h>
void correction(char arr[],int b);
int main(){

    char ai[100];
    printf("Enter the algebric expression : ");
    fgets(ai,100,stdin);


    ai[strcspn(ai,"\n")] = '\0';
    int b = strlen(ai);


    correction(ai,b);
    


    int start;
    int end;
    int temp;
    // for(int j = 0;j<b;j++){
    //     if(ai[j] == '+' || ai[j] == '-' || ai[j] == '*' || ai[j] == '/'){
    //         for(int k = j;ai[k-1] != '(';k--){
    //             printf("%c\n",ai[k-1]);
    //             temp = ai[k];
    //             ai[k] = ai[k-1];
    //             ai[k-1] = temp;
                
    //         }
    //     }
    // }


    puts(ai);

    return 0;
}
void correction(char arr[],int b){
    int brackets =0;
    for (int i =0;i<b;i++){
        if(arr[i] == '*' || arr[i] == '/'){
            brackets++;
        }
        
    }
    int x= b + brackets;
    char brr[x];
    
    for(int j = 0,i =0;i<b && j<x;i++,j++){

        if(arr[i] == '*'){
            int temp = brr[j-1];
            brr[j-1] = '(';
            brr[j] = temp;
            brr[j+1] = '*';
            j++;
        }
        else{

            brr[j] = arr[i];
        }

        

    }
    puts(brr);
}
