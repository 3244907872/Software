#ifndef CTETRIMINO_H
#define CTETRIMINO_H

//枚举基础方块类型
enum TetrisShape { NoneShape, ZShape, SShape, IShape, TShape, OShape,
                   LShape, JShape}; //每个常量隐式赋予整数值，从0开始

//方块类
class CTetrimino
{
private:
    //将方块的属性定义为私有成员变量
    TetrisShape pieceShape;//方块的形状
    int coords[4][2];//每个大方块由4个小方块组成，每块的坐标为二维平面内点

public:
    CTetrimino();//无参构造函数

    void setShape(TetrisShape shape);//根据给出形状建立方块
    void setRandomShape();//根据随机数种子建立下一个方块形状

    //获取一个方块的边界（边界值不需要修改，加const后可以被常量对象和const引用调用）
    int minX() const;//方块的横坐标的最小值
    int maxX() const;//方块的横坐标的最大值
    int minY() const; //方块的纵坐标的最小值
    int maxY() const; //方块的纵坐标的最大值

    //对方块进行旋转处理（加const后可以被常量对象和const引用调用）
    CTetrimino rotatedLeft() const;//逆时针旋转90度
    CTetrimino rotatedRight() const;//顺时针旋转90度

    //给出一个方块的第index块的坐标
    int x(int index) const
    {
        return coords[index][0];//二维数组第一列为表示该块的横坐标
    }
    int y(int index) const
    {
        return coords[index][1]; //二维数组第二列为表示该块的纵坐标
    }

    //获取私有成员形状信息的函数
    TetrisShape shape()
    {
        return pieceShape;
    }

    //设置第index块的横纵坐标
    void setX(int index, int value)
    {
        coords[index][0] = value;//设置横坐标为value
    }
    void setY(int index,int value)
    {
        coords[index][1] = value; //设置纵坐标为value
    }

};

#endif // CTETRIMINO_H

