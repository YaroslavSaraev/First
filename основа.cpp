# include "TXLib.h"

void tree1 (int x, int y, int size, int widthLine, int nLine, int roundSize1);
void tree2 (int x, int y, int size, int nLine, int place, int roundSize2);
void hedgerog (int x, int y, int size, int widthLine, int nose, int back);
void apple (int x, int y, int size, int lSize, int widthLine, int shine);

int main ()
    {
    txCreateWindow (1000, 600);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1000, 600);

    
    for (int z = 1; z <= 10; z++)
        {
        if (z % 2 == 0)
            {
            hedgerog (5, 200, 1, 1, 10, 0);
            tree1    (100, 500, 2, 2, 10);
            apple    (100, 300, 2, 0, 2, 9);
            }
        else
            {
            hedgerog (5, 200, 1, 1, 0, 0);
            tree1    (100, 500, 2, 2, 15);
            apple    (100, 300, 2, 0, 2, -9);
            }
        txSleep (200);
        txSetFillColor (TX_WHITE);
        txClear;
        }
    return 0;
    }
//--------------------------------------------------------------------------
void tree1 (int x, int y, int size, int widthLine, int nLine, int roundSize1)
    {
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    widthLine - толщина линий
    nLine - толщина ножки
    roundSize - размер шишек
    */
    txSetFillColor (RGB(90, 194, 65), widthLine);
    POINT branches_1 [7] {{x - 30*size, y}, {x,           y - 40*size},
                          {x + 30*size, y}, {x + 15*size, y - 10*size},
                          {x,           y}, {x - 15*size, y - 10*size}
                          {x - 30*size, y}};
    txPolygon             (branches_1, 7);
    
    txSetFillColor (RGB(90, 194, 65), widthLine);
    POINT branches_2[7] {{x - 30*size, y + 40*size}, {x,           y},
                         {x + 30*size, y + 40*size}, {x + 15*size, y + 30*size},
                         {x,           y + 40*size}, {x - 15*size, y + 30*size}
                         {x - 30*size, y + 40*size}};
    txPolygon            (branches_2, 7);
    
    
    txSetColor (RGB(155, 110, 65), nLine);
    txLine     (x, y + 40*size, x, y + 70*size);
    
    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x -  5*size, y -  5*size, roundSize1);
    txCircle (x +  5*size, y + 35*size, roundSize1);
    txCircle (x + 14*size, y - 20*size, roundSize1);
    }
//--------------------------------------------------------------------------
void tree2 (int x, int y, int size, int nLine, int place, int roundSize2)
    {
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    nLine - толщина ножки
    place - положение верхнего яблока
    roundSize - размер яблок
    */

    txSetColor     (RGB(30, 200, 37), 0);
    txSetFillColor (RGB(30, 200, 37));
    txCircle (x,           y - 60*size, 30*size);
    txCircle (x,           y - 91*size,  9*size);
    txCircle (x + 25*size, y - 40*size, 10*size);
    txCircle (x - 15*size, y - 40*size, 10*size);
    txCircle (x,           y,           45*size);
    txCircle (x + 30*size, y - 60*size, 10*size);

    txSetFillColor (RGB(252, 14, 42));
    txCircle (x - 30*size,          y,           roundSize2);
    txCircle (x + 10*size + place , y - 60*size, roundSize2);
    txCircle (x + 10*size,          y + 10*size, roundSize2);

    txSetColor (RGB(155, 110, 65), nLine);
    txLine (x, y + 45*size, x, y + 75*size);
    }
//---------------------------------------------------------------
void hedgerog (int x, int y, int size, int widthLine, int nose, int back)
{
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */

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
    Параметры
    x, y - координаты
    size - размер фигуры
    lSize - размер листа
    widthLine - толщина линий
    shine - положение отблеска
    */

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
/*
tree1    (100, 500, 2, 2, 5, 15)
tree2    (200, 100, 1, 8, -5, 10)
hedgerog (5, 200, 2, 1, 0, 5)
apple    (100, 300, 2, 0, 2, 9)
*/
