// 读文本文件

/*
读文本文件步骤
1、包含头文件
    #include <fstream>
2、创建流对象
    ifstream ifs
3、打开文件，并判断文件是否打开成功
    ifs.open("文件路径"， 打开方式)
4、读取数据
    四种方式
5、关闭文件
    ofs.close()
*/

#include <iostream>
#include <fstream>
#include <string>

void read_file(void){
    std::ifstream ifs;
    ifs.open("test.txt", std::ios::in);
    if(!ifs.is_open()){
        std::cout << "file open fail" << std::endl;
        return;
    }
    // 读取数据
    // 读取方式1
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     std::cout << buf << std::endl;
    // }

    // // 读取方式2
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     std::cout << buf << std::endl;
    // }

    // 读取方式3
    // std::string buf;
    // while (std::getline(ifs, buf))
    // {
    //     std::cout << buf << std::endl;
    // }

    // 读取方式4    不推荐    
    char c;
    while ((c = ifs.get()) != EOF)  // EOF == end of file
    {
        std::cout << c;
    }
}

int main(void){
    read_file();
    return 0;
}