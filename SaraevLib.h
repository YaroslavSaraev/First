#include "TXLib.h"

void tree1         (int x, int y, int size, int widthLine, int nLine, int roundSize1);
void tree1No       (int x, int y, int size, int widthLine, int nLine);
void tree2         (int x, int y, int size, int nLine, int place, int roundSize2);
void tree2No       (int x, int y, int size, int widthLine);
void forest        (int position);
void forestNo      ();
void Moving        (int position, int x11, int x21, int xHouse1);
void hedgerog      (int x, int y, double size, int widthLine, int nose, int back);
void hedgerog1     (int x, int y, double size, int widthLine, int nose, int back);
void hedgerogGirl  (int x, int y, double size, int widthLine, int nose, int back);
void hedgerog1Girl (int x, int y, double size, int widthLine, int nose, int back);
void house         (int x, int y, int size);
void house1        (int x, int y, int size);
void apple         (int x, int y, int size, int lSize, int nLine, int shine);
void cone          (int x, int y, int size);
void TextToScreen  (const char text[]);
void END           ();
void background    ();

//--------------------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер дерева
    widthLine - толщина линий
    nLine - толщина ножки
    roundSize1 - размер шишек
    */
void tree1 (int x, int y, int size, int widthLine, int nLine, int roundSize1)
{
    txSetFillColor (RGB (90, 194, 65));
    txSetColor     (RGB (90, 194, 65), widthLine);
    POINT branches_1 [7] {{ROUND (x - 30*size), ROUND (y)}, {ROUND (x),           ROUND (y - 40*size)},
                          {ROUND (x + 30*size), ROUND (y)}, {ROUND (x + 15*size), ROUND (y - 10*size)},
                          {ROUND (x),           ROUND (y)}, {ROUND (x - 15*size), ROUND (y - 10*size)},
                          {ROUND (x - 30*size), ROUND (y)}};
    txPolygon (branches_1, 7);

    txSetFillColor (RGB(90, 194, 65));
    POINT branches_2 [7] {{ROUND (x - 30*size), ROUND (y + 40*size)}, {ROUND (x),           ROUND (y)},
                          {ROUND (x + 30*size), ROUND (y + 40*size)}, {ROUND (x + 15*size), ROUND (y + 30*size)},
                          {ROUND (x),           ROUND (y + 40*size)}, {ROUND (x - 15*size), ROUND (y + 30*size)},
                          {ROUND (x - 30*size), ROUND (y + 40*size)}};
    txPolygon (branches_2, 7);


    txSetColor (RGB(155, 110, 65), nLine);
    txLine     (x, y + 40*size, x, y + 70*size);

    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x -  5*size, y -  5*size, 8 + roundSize1);
    txCircle (x +  5*size, y + 35*size, 8 + roundSize1);
    txCircle (x + 14*size, y - 20*size, 8 + roundSize1);
}
//-----------------------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер дерева
    widthLine - толщина линий
    nLine - толщина ножки
    roundSize1 - размер шишек
    */
void tree1No (int x, int y, int size, int widthLine, int nLine)
{
    txSetFillColor (RGB (90, 194, 65));
    txSetColor     (RGB (90, 194, 65), widthLine);
    POINT branches_1 [7] {{ROUND (x - 30*size), ROUND (y)}, {ROUND (x),           ROUND (y - 40*size)},
                          {ROUND (x + 30*size), ROUND (y)}, {ROUND (x + 15*size), ROUND (y - 10*size)},
                          {ROUND (x),           ROUND (y)}, {ROUND (x - 15*size), ROUND (y - 10*size)},
                          {ROUND (x - 30*size), ROUND (y)}};
    txPolygon (branches_1, 7);

    txSetFillColor (RGB(90, 194, 65));
    POINT branches_2 [7] {{ROUND (x - 30*size), ROUND (y + 40*size)}, {ROUND (x),           ROUND (y)},
                          {ROUND (x + 30*size), ROUND (y + 40*size)}, {ROUND (x + 15*size), ROUND (y + 30*size)},
                          {ROUND (x),           ROUND (y + 40*size)}, {ROUND (x - 15*size), ROUND (y + 30*size)},
                          {ROUND (x - 30*size), ROUND (y + 40*size)}};
    txPolygon (branches_2, 7);


    txSetColor (RGB(155, 110, 65), nLine);
    txLine (x, y + 40*size, x, y + 70*size);
}
//--------------------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер дерева
    nLine - толщина ножки
    place - положение верхнего €блока
    roundSize - размер €блок
    */
void tree2 (int x, int y, int size, int nLine, int place, int roundSize2)
{
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
    /*
    ѕараметры:
    x, y - координаты
    size - размер дерева
    nLine - толщина ножки
    place - положение верхнего €блока
    roundSize - размер €блок
    */
void tree2No (int x, int y, int size, int nLine)
{
    txSetColor     (RGB(30, 200, 37), 0);
    txSetFillColor (RGB(30, 200, 37));
    txCircle (x,           y - 60*size, 30*size);
    txCircle (x,           y - 91*size,  9*size);
    txCircle (x + 25*size, y - 40*size, 10*size);
    txCircle (x - 15*size, y - 40*size, 10*size);
    txCircle (x,           y,           45*size);
    txCircle (x + 30*size, y - 60*size, 10*size);

    txSetColor (RGB(155, 110, 65), nLine);
    txLine (x, y + 45*size, x, y + 75*size);
}
//--------------------------------------------------------------------------
void forest (int position)
{
    tree1 (300, 300, 2, 2, 10, 2 * (position % 2));
    tree1 (450, 100, 2, 2, 10, 2 * (position % 2));
    tree1 (750, 130, 2, 2, 10, 2 * (position % 2));

    tree2 (200, 150, 1, 8, -3 * (position % 2), 10);
    tree2 (600, 200, 1, 8, -3 * (position % 2), 10);
    tree2 (150, 450, 1, 8, -3 * (position % 2), 10);
}
//--------------------------------------------------------------------------
void forestNo ()
{
    tree1No (300, 300, 2, 2, 10);
    tree1No (450, 100, 2, 2, 10);
    tree1No (750, 130, 2, 2, 10);

    tree2No (200, 150, 1, 8);
    tree2No (600, 200, 1, 8);
    tree2No (150, 450, 1, 8);
}
//-----------------------------------------------------------------------------
void Moving (int position, int x11, int x21, int xHouse1)
{
    tree1No (x11     + 12, 300, 2, 2, 10);
    tree1No (x11+150 + 12, 100, 2, 2, 10);
    tree1No (x11+450 + 12, 130, 2, 2, 10);

    tree1   (x11-800 + 12, 300, 2, 2, 10, 2 * (position % 2));
    tree1   (x11-650 + 12, 100, 2, 2, 10, 2 * (position % 2));
    tree1   (x11-350 + 12, 115, 2, 2, 10, 2 * (position % 2));

    tree2No (x21     + 12, 150, 1, 8);
    tree2No (x21+400 + 12, 200, 1, 8);
    tree2No (x21- 50 + 12, 450, 1, 8);

    tree2   (x21-800 + 12, 145, 1, 8, -3 * (position % 2), 10);
    tree2   (x21-400 + 12, 190, 1, 8, -3 * (position % 2), 10);
    tree2   (x21-850 + 12, 450, 1, 8, -3 * (position % 2), 10);

    house   (xHouse1 + 12, 450, 3);
    house1  (xHouse1-820 + 12, 450, 3);
}
//-----------------------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер ежа
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */
void hedgerog (int x, int y, double size, int widthLine, int nose, int back)
{
    txSetFillColor (RGB(200, 100, 26));
    txSetColor     (RGB(200, 100, 26), 1);
    POINT body [6] {{ROUND (x),           ROUND (y + nose)},    {ROUND (x + 20*size), ROUND (y - 10*size)},
                    {ROUND (x + 50*size), ROUND (y - 10*size)}, {ROUND (x + 50*size), ROUND (y + 10*size)},
                    {ROUND (x + 20*size), ROUND (y + 10*size)}, {ROUND (x),           ROUND (y + nose)}};
    txPolygon (body, 6);

    txSetColor (RGB(0, 0, 0), widthLine);
    txSetFillColor (RGB(0, 0, 0));
    POINT needle [8] {{ROUND (x + 20*size), ROUND (y - 10*size)}, {ROUND (x + 25*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x + 35*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 40*size), ROUND (y - 10*size)}, {ROUND (x + 45*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 50*size), ROUND (y - 10*size)}, {ROUND (x + 20*size),        ROUND (y - 10*size)}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 20*size, y - 3*size, 4*size);
    txCircle (x,           y + nose,   2*size);
}
//---------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер ежа
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */
void hedgerog1 (int x, int y, double size, int widthLine, int nose, int back)
{
    txSetFillColor (RGB(200, 100, 26));
    txSetColor     (RGB(200, 100, 26), 1);
    POINT body [7] {{ROUND (x),           ROUND (y)},           {ROUND (x),           ROUND (y - 10*size)},
                    {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x + 50*size), ROUND (y + nose)},
                    {ROUND (x + 30*size), ROUND (y + 10*size)}, {ROUND (x),           ROUND (y + 10*size)},
                    {ROUND (x),           ROUND (y)}};
    txPolygon       (body, 7);

    txSetColor (RGB(0, 0, 0), widthLine);
    txSetFillColor (RGB(0, 0, 0));
    POINT needle [8] {{ROUND (x),           ROUND (y - 10*size)}, {ROUND (x + 5*size) - back,  ROUND (y - 17*size)},
                      {ROUND (x + 10*size), ROUND (y - 10*size)}, {ROUND (x + 15*size) - back, ROUND (y - 17*size)},
                      {ROUND (x + 20*size), ROUND (y - 10*size)}, {ROUND (x + 25*size) - back, ROUND (y - 17*size)},
                      {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x),                  ROUND (y - 10*size)}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 30*size, y - 3*size, 4*size);
    txCircle (x + 50*size,      y + nose,   2*size);
}
//-----------------------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер ежа
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */
void hedgerogGirl (int x, int y, double size, int widthLine, int nose, int back)
{
    txSetFillColor (RGB(200, 100, 90));
    txSetColor     (RGB(200, 100, 90), 1);
    POINT body [6] {{ROUND (x),           ROUND (y + nose)},    {ROUND (x + 20*size), ROUND (y - 10*size)},
                    {ROUND (x + 50*size), ROUND (y - 10*size)}, {ROUND (x + 50*size), ROUND (y + 10*size)},
                    {ROUND (x + 20*size), ROUND (y + 10*size)}, {ROUND (x),           ROUND (y + nose)}};
    txPolygon (body, 6);

    txSetColor (RGB(0, 0, 0), widthLine);
    txSetFillColor (RGB(0, 0, 0));
    POINT needle [8] {{ROUND (x + 20*size), ROUND (y - 10*size)}, {ROUND (x + 25*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x + 35*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 40*size), ROUND (y - 10*size)}, {ROUND (x + 45*size) + back, ROUND (y - 17*size)},
                      {ROUND (x + 50*size), ROUND (y - 10*size)}, {ROUND (x + 20*size),        ROUND (y - 10*size)}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 20*size, y - 3*size, 4*size);
    txCircle (x,           y + nose,   2*size);
}
//---------------------------------------------------------------
    /*
    ѕараметры:
    x, y - координаты
    size - размер ежа
    widthLine -толщина линий
    nose - наклон носа
    back - наклон иголок
    */
void hedgerog1Girl (int x, int y, double size, int widthLine, int nose, int back)
{
    txSetFillColor (RGB(200, 100, 90));
    txSetColor     (RGB(200, 100, 90), 1);
    POINT body [7] {{ROUND (x),           ROUND (y)},           {ROUND (x),           ROUND (y - 10*size)},
                    {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x + 50*size), ROUND (y + nose)},
                    {ROUND (x + 30*size), ROUND (y + 10*size)}, {ROUND (x),           ROUND (y + 10*size)},
                    {ROUND (x),           ROUND (y)}};
    txPolygon (body, 7);

    txSetFillColor (RGB(0, 0, 0));
    txSetColor     (RGB(0, 0, 0), widthLine);
    POINT needle [8] {{ROUND (x),           ROUND (y - 10*size)}, {ROUND (x + 5*size) - back,  ROUND (y - 17*size)},
                      {ROUND (x + 10*size), ROUND (y - 10*size)}, {ROUND (x + 15*size) - back, ROUND (y - 17*size)},
                      {ROUND (x + 20*size), ROUND (y - 10*size)}, {ROUND (x + 25*size) - back, ROUND (y - 17*size)},
                      {ROUND (x + 30*size), ROUND (y - 10*size)}, {ROUND (x),                  ROUND (y - 10*size)}};
    txPolygon (needle, 8);

    txSetColor     (RGB(0, 0, 0));
    txSetFillColor (RGB(0, 0, 0));
    txCircle (x + 30*size, y - 3*size, 4*size);
    txCircle (x + 50*size,      y + nose,   2*size);
}
//-------------------------------------------------------------------------
    /*
    ѕараметры
    x, y - координаты
    size - размер дома
    */
void house (int x, int y, int size)
{
    txSetColor     (RGB(140, 0, 0));
    txSetFillColor (RGB(140, 0, 0));
    POINT Box [5] {{ROUND (x),           ROUND (y)},           {ROUND (x),           ROUND (y - 40*size)},
                   {ROUND (x + 40*size), ROUND (y - 40*size)}, {ROUND (x + 40*size), ROUND (y)          },
                   {ROUND (x),           ROUND (y)}};
    txPolygon (Box, 5);

    txSetColor     (RGB(192, 192, 192));
    txSetFillColor (RGB(192, 192, 192));
    POINT Window [5] {{ROUND (x + 10*size), ROUND (y - 15*size)}, {ROUND (x + 10*size), ROUND (y - 30*size)},
                      {ROUND (x + 30*size), ROUND (y - 30*size)}, {ROUND (x + 30*size), ROUND (y - 15*size)},
                      {ROUND (x + 10*size), ROUND (y - 15*size)}};
    txPolygon (Window, 5);

    txSetColor     (RGB(147, 73, 0));
    txSetFillColor (RGB(147, 73, 0));
    POINT Roof [4] {{ROUND (x),           ROUND (y - 40*size)}, {ROUND (x + 40*size), ROUND (y - 40*size)},
                    {ROUND (x + 20*size), ROUND (y - 55*size)}, {ROUND (x),           ROUND (y - 40*size)}};
    txPolygon (Roof, 4);
}
//-------------------------------------------------------------------------
    /*
    ѕараметры
    x, y - координаты
    size - размер дома
    */
void house1 (int x, int y, int size)
{
    txSetColor     (RGB(255, 99, 71));
    txSetFillColor (RGB(255, 99, 71));
    POINT Box [5] {{ROUND (x),           ROUND (y)},           {ROUND (x),           ROUND (y - 40*size)},
                   {ROUND (x + 40*size), ROUND (y - 40*size)}, {ROUND (x + 40*size), ROUND (y)          },
                   {ROUND (x),           ROUND (y)}};
    txPolygon (Box, 5);

    txSetColor     (RGB(192, 192, 192));
    txSetFillColor (RGB(192, 192, 192));
    POINT Window [5] {{ROUND (x + 10*size), ROUND (y - 15*size)}, {ROUND (x + 10*size), ROUND (y - 30*size)},
                      {ROUND (x + 30*size), ROUND (y - 30*size)}, {ROUND (x + 30*size), ROUND (y - 15*size)},
                      {ROUND (x + 10*size), ROUND (y - 15*size)}};
    txPolygon (Window, 5);

    txSetColor     (RGB(130, 70, 70));
    txSetFillColor (RGB(130, 70, 70));
    POINT Roof [4] {{ROUND (x),           ROUND (y - 40*size)}, {ROUND (x + 40*size), ROUND (y - 40*size)},
                    {ROUND (x + 20*size), ROUND (y - 55*size)}, {ROUND (x),           ROUND (y - 40*size)}};
    txPolygon (Roof, 4);
}
//-------------------------------------------------------------------------
    /*
    ѕараметры
    x, y - координаты
    size - размер €блока
    lSize - размер листа
    widthLine - толщина линий
    shine - положение отблеска
    */
void apple (int x, int y, int size, int lSize, int nLine, int shine)
{
    txSetColor     (RGB(252, 14, 42));
    txSetFillColor (RGB(252, 14, 42));
    txCircle (x, y, 10*size);

    txSetColor (RGB(0, 0, 0), nLine);
    txLine (x, y - 10*size, x + 5*size, y - 17*size);

    txSetFillColor (RGB(30, 200, 37));
    txSetColor     (RGB(30, 200, 37), 1);
    POINT Leaf [5] {{ROUND (x +  5*size), ROUND (y - 17*size)}, {ROUND (x + 15*size), ROUND (y - 22*size + lSize)},
                    {ROUND (x + 25*size), ROUND (y - 17*size)}, {ROUND (x + 15*size), ROUND (y - 12*size - lSize)},
                    {ROUND (x +  5*size), ROUND (y - 17*size)}};
    txPolygon (Leaf, 5);

    txSetFillColor (RGB(0, 0, 0));
    txSetColor     (RGB(0, 0, 0), 1);
    txCircle (x, y - 9*size, 1*size);
    txCircle (x, y + 8*size, 2*size);

    txSetColor     (RGB(237, 238, 200));
    txSetFillColor (RGB(237, 238, 200));
    txCircle (x + shine, y - 5*size, 3*size);
}
//-------------------------------------------------------------------------
    /*
    ѕараметры
    x, y - координаты
    size - размер шишки
    */
void cone (int x, int y, int size)
{
    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x, y, size);
}
//-----------------------------------------------------------------------------
void TextToScreen (const char text[])
{
    txSetTextAlign (TA_CENTER);
    txSetColor     (TX_WHITE);
    txSelectFont   ("Comic Sans MS", 35, 10, FW_BOLD, false, false, false, 0);
    txTextOut      (500, 550, text);
}
//-----------------------------------------------------------------------------
void END ()
{
    txSetTextAlign (TA_CENTER);
    txSetColor     (TX_BLACK);
    txSelectFont   ("Comic Sans MS", 60, 20, FW_BOLD, false, false, false, 0);
    txTextOut      (500, 250, " ќЌ≈÷");
}
//-----------------------------------------------------------------------------
void background ()
{
    txSetColor     (TX_LIGHTCYAN);
    txSetFillColor (TX_LIGHTCYAN);
    txRectangle (0, 0, 1000, 180);
    txSetFillColor (RGB ( 0, 100, 0));
    txSetColor     (RGB ( 0, 100, 0));
    txRectangle (0, 180, 1000, 600);
}
