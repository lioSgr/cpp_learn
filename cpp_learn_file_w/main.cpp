// 写文本文件

/*
写文本文件步骤
1、包含头文件
    #include <fstream>
2、创建流对象
    ofstream ofs
3、打开文件
    ofs.open("文件路径"， 打开方式)
4、写数据
    ofs << "写入的内容"
5、关闭文件
    ofs.close()
*/

/*
打开方式
ios::in     为读文件而打开文件
ios::out    为写文件而打开文件
ios::ate    初始位置：文件末尾
ios::app    追加方式写文件
ios::trunc  如果文件存在先删除再创创建
ios::binary 二进制方式

可以配合使用
ios::binary | ios::out
*/

#include <iostream>
#include <fstream>

void write_file(void){
    std::ofstream ofs;
    ofs.open("test.txt", std::ios::out);
    ofs << "姓名：张三" << std::endl;
    ofs << "性别：男" << std::endl;
    ofs << "年龄：18" << std::endl;
    ofs.close();
}

int main(void){
    write_file();
    return 0;
}