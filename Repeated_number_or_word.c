#include <stdio.h>
#include <string.h>

int main(){

    int x,i,j,k,count=0, high=1, flag=0;
    char data[100][20], maxData[100][20]={{0}};

        printf("Enter number of Data to enter in an array: ");
        scanf("%d",&x);

        for(i=0;i<x;i++){
            fflush(stdin);
            printf("%d. ",i+1);gets(data[i]);fflush(stdin);
        }

        for(i=0;i<x-1;i++){
            count=0;
            for(j=i+1;j<x;j++){
                if(strcmp(data[i],data[j])==0){
                    count++;
                }
            }
            if(high<count){
                high=count;
                strcpy(maxData[0],data[i]);
                strcpy(maxData[1],"");
            }
            else if(high == count){
                flag=0;
                for(k=0;strcmp(maxData[k],"")!=0;k++){
                    if(strcmp(data[i],maxData[k])==0){
                        flag=1;
                    }
                }
                if(flag==0){
                    for(k=0;strcmp(maxData[k],"")!=0;k++);
                    strcpy(maxData[k],data[i]);
                    strcpy(maxData[++k],"");
                }
            }
        }
        for(k=0;strcmp(maxData[k],"")!=0;k++){
            printf("Most Frequent Number Or words Is:");
            puts(maxData[k]);
        }
        if(strcmp(maxData[0],"")==0){
                printf("There is No Frequent Number Or word \n");
        }

    return 0;
}
