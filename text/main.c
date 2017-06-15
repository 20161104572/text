#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int arr[10];//={1,2,3,5,7,8,9,4,2,1};
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104572//Desktop//text//text//5.txt");
    fp2=fopen("//Users//a20161104572//Desktop//text//text//6.txt");
    if(fp2==NULL)
      {
          printf("打开文件错误，要打开的文件可能不存在“)；
      }
    else
    {
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
        fclose(fp1);
        fclose(fp2);
    }
    system("pause");
    return 0;
}
