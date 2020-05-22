#include "cocker_in.h"

static void usage()
{
    printf("USAGE : cocker -v\n");
    printf();

    return;
}

// 解析命令行参数
static int ParseCommandParameters(int argc, char* argv[])
{
    int i;
    char cmd[4096];
    int nret = 0;

    for(i = 1; i < argc; i++){

    }
}

// 执行命令行
static int ExecuteCommandParameters()
{
    int nret = 0;


    return -nret;
}

int main(int argc, char *argv[])
{
    // 创建cocker环境
    nret = CreateCockerEnvironment();
    if(nret){
        return -nret;
    }

    if(argc == 1){
        usage();
        return 0;
    }

    // 解析命令行参数
    nret = ParseCommandParameters();
    if(nret){
        return -nret;
    }

    // 执行命令
    nret = ExecuteCommandParameters();
    // 销毁cocker环境
    DestroyCockerEnvironment();
    if(nret){
        return -nret;
    }

    return 0;
}
