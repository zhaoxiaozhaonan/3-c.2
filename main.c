#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{

    printf("欢迎进入专车管理系统\n");
    struct point arr[100];
    int index = 0;

    while (1)
    {
        printf("1--添加一个车辆位置信息\n");
        printf("2--删除最后一个车辆位置信息\n");
        printf("3--显示所有车辆位置信息\n");
        printf("4--查找距离最近的车辆\n");
        printf("5--退出\n");
        printf("请输入所需项目数字\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入车辆的位置x坐标y坐标\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("添加成功，点击回车继续\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
        if (code == 2)
        {

            if (index > 0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
                char a;
                scanf("%c", &a);
                scanf("%c", &a);
            }
            else
            {
                printf("删除失败，点击回车继续\n");
                char a;
                scanf("%c", &a);
                scanf("%c", &a);
            }
        }
        if (code == 3)
        {
            
            for(int i = 0; i < index; i++)
            {
                printf("第%d辆车的坐标位置为(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }
             printf("点击回车继续\n");
            char a;
            scanf("%c", &a);
            scanf("%c", &a);
        }
            
        
        if (code == 4)
        {
            /* code */
        }
        if (code == 5)
        {
            printf("点击回车，退出系统\n");
            break;
        }
    }

    return 0;
}