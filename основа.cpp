# include "TXLib.h"

void tree1 (int x, int y, int size, int widthLine, int nLine, int roundSize);
//void tree2 (int x, int y, int size, int nLine, int place, int roundSize);

int main ()
    {
    txCreateWindow (1000, 600);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1000, 600);

    //tree1 (100, 500, 1, 2, 5, 15)

    return 0;
    }
//--------------------------------------------------------------------------
void tree1 (int x, int y, int size, int widthLine, int nLine, int roundSize)
    {
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    widthLine - толщина линий
    nLine - толщина ножки
    roundSize - размер шишек
    */
    txSetColor (RGB(155, 110, 65), nLine);
    txLine     (x, y + 40*size, x, y + 70*size);

    needle (x, y      , 3, 150, 25, 200, RGB(25, 35, 120), RGB(0,  80, 0));
    needle (x, y -  90, 3, 150, 25, 200, RGB(25, 35, 120), RGB(0, 156, 0));
    needle (x, y - 180, 3, 100, 25, 150, RGB(25, 35, 120), RGB(0, 255, 0));

    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x -  5*size, y -  5*size, roundSize);
    txCircle (x +  5*size, y + 35*size, roundSize);
    txCircle (x + 14*size, y - 20*size, roundSize);
    }
/*/--------------------------------------------------------------------------
void tree2 (int x, int y, int size, int nLine, int place, int roundSize)
    {
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    nLine - толщина ножки
    place - положение верхнего яблока
    roundSize - размер яблок

    txSetColor     (RGB(30, 200, 37), 0);
    txSetFillColor (RGB(30, 200, 37));
    txCircle (x,           y - 60*size, 30*size);
    txCircle (x,           y - 91*size,  9*size);
    txCircle (x + 25*size, y - 40*size, 10*size);
    txCircle (x - 15*size, y - 40*size, 10*size);
    txCircle (x,           y,           45*size);
    txCircle (x + 30*size, y - 60*size, 10*size);

    txSetFillColor (RGB(252, 14, 42));
    txCircle (x - 30*size,          y,           roundSize);
    txCircle (x + 10*size + place , y - 60*size, roundSize);
    txCircle (x + 10*size,          y + 10*size, roundSize);

    txSetColor (RGB(155, 110, 65), nLine);
    txLine (x, y + 45*size, x, y + 75*size);
    }
//---------------------------------------------------------------
void hedgerog (int x, int y, int size, int widthLine, int nose, int back)
{
    /*
    Параметры:
    x, y - ęîîđäčíŕňű
    size - đŕçěĺđ ôčăóđű
    widthLine - ňîëůčíŕ ëčíčé
    nose - íŕęëîí íîńŕ
    back - íŕęëîí čăîëîę

    txSetFillColor (RGB(200, 100, 26), widthLine);
    POINT body [6] {{x,           y + nose},    {x + 20*size, y - 10*size},
                    {x + 50*size, y - 10*size}, {x + 50*size, y + 10*size},
                    {x + 20*size, y + 10*size}, {x,           y + nose}};
    txPolygon       (body, 6);

    txSetColor (RGB(0, 0, 0));
    POINT needle [8] {{x + 20*size, y - 10*size}, {x + 25*size + back, y - 17*size},
                      {x + 30*size, y - 10*size}, {x + 35*size + back, y - 17*size},
                      {x + 40*size, y - 10*size}, {x + 45*size + back, y - 17*size},
                      {x + 50*size, y - 10*size}, {x + 20*size,        y - 10*size}};
    txPolygon (needle, 8);

    txSetColor (RGB(0, 0, 0));
    txCircle (x + 18*size, y - 3*size, 4*size);
    txCircle (x,           y + nose,   2*size);
}
//-------------------------------------------------------------------------
void apple (int x, int y, int size, int lSize, int widthLine, int shine)
{
    /*
    Ďŕđŕěĺňđű:
    x, y - ęîîđäčíŕňű
    size - đŕçěĺđ ôčăóđű
    lSize - đŕçěĺđ ëčńňŕ
    widthLine - ňîëůčíŕ ëčíčé
    shine - ďîëîćĺíčĺ îáëĺńęŕ

    txSetColor     (RGB(252, 14, 42), widthLine);
    txSetFillColor (252, 14, 42);
    txCircle (x, y, 10*size);

    txSetColor (RGB(0, 0, 0);
    txline (x, y - 10*size, x + 5*size, y - 17*size);

    txSetFillColor (30, 200, 37);
    POINT Leaf [5] {{x +  5*size, y - 17*size}, (x + 15*size, y - 22*size + lSize),
                    {x + 25*size, y - 17*size}, (x + 15*size, y - 12*size - lSize),
                    {x +  5*size, y - 17*size};
    txPolygon (Leaf, 5);

    txSetFillColor (RGB(0, 0, 0));
    txCircle (x, y - 9*size, 1*size);
    txCircle (x, y + 8*size, 2*size);

    txSetColor     (RGB(237, 238, 200));
    txSetFillColor (RGB(237, 238, 200));
    txCircle (x + shine, y - 5*size, 3*size);
}
