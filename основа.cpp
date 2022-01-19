# include "TXLib.h"

void tree1     (int x, int y, int size, int widthLine, int nLine, int roundSize1);
void tree2     (int x, int y, int size, int nLine, int place, int roundSize2);
void hedgerog  (int x, int y, double size, int widthLine, int nose, int back);
void hedgerog1 (int x, int y, double size, int widthLine, int nose, int back);
void apple     (int x, int y, int size, int lSize, int nLine, int shine);
void house     (int x, int y, int size) ;
void cone      (int x, int y, int size);

int xh = 675;
int yh = 400;
int kh = 7;

int main ()
    {
    txCreateWindow (1000, 600);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1000, 600);

//Сцена 1--------------------------------------------------------------------------------------------------------------
    for (int z = 1; z <= 16; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog (xh - kh, yh - kh, 1.5, 1, 0, 5 * (z % 2));
        xh = xh - kh;
        yh = yh - kh;

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    for (int z = 1; z <= 15; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog1 (xh + kh, yh, 1.5, 1, 0, 0);
        xh = xh + kh;

        apple (xh, yh - 23, 1, 0, 2, 5);

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    for (int z = 1; z <= 15; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog1 (xh, yh + kh, 1.5, 1, 0, 0);
        yh = yh + kh;

        apple (xh,      yh - 20, 1, 0, 2, 5);
        cone  (xh + 30, yh - 23, 8);

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }

//Сцена 2--------------------------------------------------------------------------------------------------------------

    for (int z = 1; z <= 15; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog (xh - kh, yh - kh, 1.5, 1, 0, 5 * (z % 2));
        xh = xh - kh;
        yh = yh - kh;

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "Но вдруг, в лесу стали пропадать яблоки.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    for (int z = 1; z <= 7; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog (xh , yh , 1.5, 1, 10 * (z % 2), 0);

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "Ежик закричал: 'Кто-то ворует мои яблоки! Надо его найти!'");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    for (int z = 1; z <= 12; z++)
        {
        tree1 (300, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100, 450, 1, 8, -5 * (z % 2), 10);

        house (750, 450, 3);

        hedgerog (xh - kh, yh, 1.5, 1, 10 * (z % 2), 5 * (z % 2));
        xh = xh - kh;

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "Но вдруг, в лесу стали пропадать яблоки.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        } 
    for (int z = 1; z <= 12; z++)
        {
        hedgerog (xh, yh, 1.5, 1, 10 * (z % 2), 5 * (z % 2));

        tree1 (300 - kh, 300, 2, 2, 10, 3 * (z % 2));
        tree1 (450 - kh, 100, 2, 2, 10, 3 * (z % 2));
        tree1 (750 - kh, 130, 2, 2, 10, 3 * (z % 2));

        tree2 (200 - kh, 150, 1, 8, -5 * (z % 2), 10);
        tree2 (600 - kh, 200, 1, 8, -5 * (z % 2), 10);
        tree2 (100 - kh, 450, 1, 8, -5 * (z % 2), 10);

        house (750 - kh, 450, 3);

        txSetTextAlign (TA_CENTER);
        txSetColor     (TX_BLACK);
        txTextOut      (500, 550, "Наш зверек унюхал след и пошел по нему");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
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
    txSetFillColor (RGB (90, 194, 65));
    txSetColor     (RGB (90, 194, 65), widthLine);
    POINT branches_1 [7] {{x - 30*size, y}, {x,           y - 40*size},
                          {x + 30*size, y}, {x + 15*size, y - 10*size},
                          {x,           y}, {x - 15*size, y - 10*size},
                          {x - 30*size, y}};
    txPolygon             (branches_1, 7);

    txSetFillColor (RGB(90, 194, 65));
    POINT branches_2[7] {{x - 30*size, y + 40*size}, {x,           y},
                         {x + 30*size, y + 40*size}, {x + 15*size, y + 30*size},
                         {x,           y + 40*size}, {x - 15*size, y + 30*size},
                         {x - 30*size, y + 40*size}};
    txPolygon            (branches_2, 7);


    txSetColor (RGB(155, 110, 65), nLine);
    txLine     (x, y + 40*size, x, y + 70*size);

    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x -  5*size, y -  5*size, 8 + roundSize1);
    txCircle (x +  5*size, y + 35*size, 8 + roundSize1);
    txCircle (x + 14*size, y - 20*size, 8 + roundSize1);
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
void hedgerog (int x, int y, double size, int widthLine, int nose, int back)
{
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */

    txSetFillColor (RGB(200, 100, 26));
    txSetColor     (RGB(200, 100, 26), 1);
    POINT body [6] {{x,           y + nose},    {x + 20*size, y - 10*size},
                    {x + 50*size, y - 10*size}, {x + 50*size, y + 10*size},
                    {x + 20*size, y + 10*size}, {x,           y + nose}};
    txPolygon       (body, 6);

    txSetColor (RGB(0, 0, 0), widthLine);
    txSetFillColor (RGB(0, 0, 0));
    POINT needle [8] {{x + 20*size, y - 10*size}, {x + 25*size + back, y - 17*size},
                      {x + 30*size, y - 10*size}, {x + 35*size + back, y - 17*size},
                      {x + 40*size, y - 10*size}, {x + 45*size + back, y - 17*size},
                      {x + 50*size, y - 10*size}, {x + 20*size,        y - 10*size}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 20*size, y - 3*size, 4*size);
    txCircle (x,           y + nose,   2*size);
}
//---------------------------------------------------------------
void hedgerog1 (int x, int y, double size, int widthLine, int nose, int back)
{
    /*
    Параметры:
    x, y - координаты
    size - размер фигуры
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */

    txSetFillColor (RGB(200, 100, 26));
    txSetColor     (RGB(200, 100, 26), 1);
    POINT body [7] {{x,           y},           {x,           y - 10*size},
                    {x + 30*size, y - 10*size}, {x + 50*size, y + nose},
                    {x + 30*size, y + 10*size}, {x,           y + 10*size},
                    {x, y}};
    txPolygon       (body, 7);

    txSetColor (RGB(0, 0, 0), widthLine);
    txSetFillColor (RGB(0, 0, 0));
    POINT needle [8] {{x,           y - 10*size}, {x + 5*size - back,  y - 17*size},
                      {x + 10*size, y - 10*size}, {x + 15*size - back, y - 17*size},
                      {x + 20*size, y - 10*size}, {x + 25*size - back, y - 17*size},
                      {x + 30*size, y - 10*size}, {x,                  y - 10*size}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 30*size, y - 3*size, 4*size);
    txCircle (x + 50*size,      y + nose,   2*size);
}
//-------------------------------------------------------------------------
void apple (int x, int y, int size, int lSize, int nLine, int shine)
{
    /*
    Параметры
    x, y - координаты
    size - размер фигуры
    lSize - размер листа
    widthLine - толщина линий
    shine - положение отблеска
    */

    txSetColor     (RGB(252, 14, 42));
    txSetFillColor (RGB(252, 14, 42));
    txCircle (x, y, 10*size);

    txSetColor (RGB(0, 0, 0), nLine);
    txLine (x, y - 10*size, x + 5*size, y - 17*size);

    txSetFillColor (RGB(30, 200, 37));
    txSetColor     (RGB(30, 200, 37), 1);
    POINT Leaf [5] {{x +  5*size, y - 17*size}, {x + 15*size, y - 22*size + lSize},
                    {x + 25*size, y - 17*size}, {x + 15*size, y - 12*size - lSize},
                    {x +  5*size, y - 17*size}};
    txPolygon (Leaf, 5);

    txSetFillColor (RGB(0, 0, 0));
    txSetColor     (RGB(0, 0, 0), 1);
    txCircle (x, y - 9*size, 1*size);
    txCircle (x, y + 8*size, 2*size);

    txSetColor     (RGB(237, 238, 200));
    txSetFillColor (RGB(237, 238, 200));
    txCircle (x + shine, y - 5*size, 3*size);
}
void house (int x, int y, int size)
{
    txSetColor     (RGB(140, 0, 0));
    txSetFillColor (RGB(140, 0, 0));
    POINT Box [5] {{x,           y},           {x,           y - 40*size},
                   {x + 40*size, y - 40*size}, {x + 40*size, y          },
                   {x,           y}};
    txPolygon (Box, 5);

    txSetColor     (RGB(192, 192, 192));
    txSetFillColor (RGB(192, 192, 192));
    POINT Window [5] {{x + 10*size, y - 15*size}, {x + 10*size, y - 30*size},
                      {x + 30*size, y - 30*size}, {x + 30*size, y - 15*size},
                      {x + 10*size, y - 15*size}};
    txPolygon (Window, 5);

    txSetColor     (RGB(147, 73, 0));
    txSetFillColor (RGB(147, 73, 0));
    POINT Roof [4] {{x,           y - 40*size}, {x + 40*size, y - 40*size},
                    {x + 20*size, y - 55*size}, {x,           y - 40*size}};
    txPolygon (Roof, 4);
}
void cone (int x, int y, int size)
{
    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x, y, size);
}
/*
tree1    (100, 500, 2, 2, 5, 15)
tree2    (200, 100, 1, 8, -5, 10)
hedgerog (5, 200, 2, 1, 0, 5)
apple    (100, 300, 2, 0, 2, 9)
*/
