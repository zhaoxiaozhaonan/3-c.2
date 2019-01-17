#include <stdio.h>

int main()
{

    printf("进入专车管理系统\n");

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
            /* code */
        }
        if (code == 2)
        {
            /* code */
        }
        if (code == 3)
        {
            /* code */
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