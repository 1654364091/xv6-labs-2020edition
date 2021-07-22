#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc,char *argv[]){
    //argc：记录传入的参数个数
    //argv：存储参数的数组的指针
    //错误输入预测：参数传入不足两个

    if(argc!=2){
        //非法输入提示
        fprintf(2,"error:you should input \"sleep\" and a non-negative integer,like \"sleep 10\".\n");
        //异常 exit
        exit(1);
    }
    //调用user/ulib.h中的atoi()将string转换成数字
    int time=atoi(argv[1]);
    //调用user/user.h中的sleep()
    sleep(time);
    //正常 exit
    exit(0);
}
