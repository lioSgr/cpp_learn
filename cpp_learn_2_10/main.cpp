#include <iostream>
#include <string.h>


// 设计立方体类 求面积和体积
//              全局函数 成员函数判断两个立方体是否相等

class Cube{
public:
    void setCubeL(float l){
        m_l = l;
    }

    void setCubeW(float w){
        m_w = w;
    }

    void setCubeH(float h){
        m_h = h;
    }

    float getCubeL(void){
        return m_l;
    }

    float getCubeW(void){
        return m_w;
    }

    float getCubeH(void){
        return m_h;
    }

    float getCubeV(void){
        return m_l * m_w * m_h;
    }

    float getCubeS(void){
        return 2.0 * m_l * m_w + 2.0 * m_l * m_h + 2.0 * m_w * m_h;
    }

    bool isSameByClass(Cube &c){
        if(m_l == c.getCubeL() && m_w == c.getCubeW() && m_h == c.getCubeH()){
            return true;
        }
        else{
            return false;
        }
    }

private:
    float m_l;
    float m_w;
    float m_h;
};

// 全局函数判断是否相等
bool isSame(Cube &c1, Cube &c2){
    if(c1.getCubeL() == c2.getCubeL() && c1.getCubeH() == c2.getCubeH() && c1.getCubeW() == c2.getCubeW()){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    Cube c1;
    c1.setCubeL(10);
    c1.setCubeW(10);        
    c1.setCubeH(10);
    std::cout << "s = " << c1.getCubeS() << "\t" << "v = " << c1.getCubeV() << std::endl;

    Cube c2;
    c2.setCubeL(10);
    c2.setCubeW(10);
    c2.setCubeH(10);
    std::cout << "s = " << c2.getCubeS() << "\t" << "v = " << c2.getCubeV() << std::endl;

    bool ret = isSame(c1, c2);
    if(ret){
        std::cout << "全局函数判断结果 is same" << std::endl;
    }
    else{
        std::cout << "全局函数判断结果 is not same" << std::endl;
    }

    ret = c1.isSameByClass(c2);
    if(ret){
        std::cout << "成员函数判断结果  is same" << std::endl;
    }
    else{
        std::cout << "成员函数判断结果 is not same" << std::endl;
    }

    return 0;
}