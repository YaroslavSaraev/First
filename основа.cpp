#include "TXLib.h"

void tree1      (int x, int y, int size, int widthLine, int nLine, int roundSize1);
void tree1No    (int x, int y, int size, int widthLine, int nLine);
void tree2      (int x, int y, int size, int nLine, int place, int roundSize2);
void tree2No    (int x, int y, int size, int widthLine);
void hedgerog   (int x, int y, double size, int widthLine, int nose, int back);
void hedgerog1  (int x, int y, double size, int widthLine, int nose, int back);
void apple      (int x, int y, int size, int lSize, int nLine, int shine);
void house      (int x, int y, int size) ;
void cone       (int x, int y, int size);
void Text       (string text);
void forest     (i);
void forestNo   (i)
void SceneOne   ();
void SceneTwo   ();
void SceneThree ();

int kh = 7;
int k = 12;

int x11 = 300;
int x12 = 450;
int x13 = 750;
int x14 = -500;
int x15 = -350;
int x16 = -50;

int x21 = 200;
int x22 = 600;
int x23 = 100;
int x24 = -600;
int x25 = -200;
int x26 = -700;

int xHouse1 = 750;
int xHouse2 = -350;

int main ()
    {
    txCreateWindow (1000, 600);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1000, 600);

    SceneOne ();
    SceneTwo ();
    SceneThree ();

    return 0;
    }
//--------------------------------------------------------------------------
void SceneOne ()
    {
    int xh = 675;
    int yh = 400;
    
    for (int i = 1; i <= 16; i++)
        {
        forest (i);

        house (750, 450, 3);

        hedgerog (xh - kh, yh - kh, 1.5, 1, 0, 5 * (i % 2));
        xh = xh - kh;
        yh = yh - kh;

        Text ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    for (int i = 1; i <= 15; i++)
        {
        forest (i);

        house (750, 450, 3);

        hedgerog1 (xh + kh, yh, 1.5, 1, 0, 0);
        xh = xh + kh;

        apple (xh, yh - 23, 1, 0, 2, 5);

        Text ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    for (int i = 1; i <= 15; i++)
        {
        forest (i);
        
        house (750, 450, 3);

        hedgerog1 (xh, yh + kh, 1.5, 1, 0, 0);
        yh = yh + kh;

        apple (xh,      yh - 20, 1, 0, 2, 5);
        cone  (xh + 30, yh - 23, 8);

        Text ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    }
//--------------------------------------------------------------------------
void SceneTwo ()
    {
        
        
        for (int i = 1; i <= 15; i++)
        {
        tree1No (300, 300, 2, 2, 10);
        tree1No (450, 100, 2, 2, 10);
        tree1No (750, 130, 2, 2, 10);

        tree2No (200, 150, 1, 8);
        tree2No (600, 200, 1, 8);
        tree2No (100, 450, 1, 8);

        house (750, 450, 3);

        hedgerog (xh - kh, yh - kh, 1.5, 1, 0, 5 * (i % 2));
        xh = xh - kh;
        yh = yh - kh;

        Text("Но вдруг, в лесу стали пропадать яблоки.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    for (int i = 1; i <= 7; i++)
        {
        tree1No (300, 300, 2, 2, 10);
        tree1No (450, 100, 2, 2, 10);
        tree1No (750, 130, 2, 2, 10);

        tree2No (200, 150, 1, 8);
        tree2No (600, 200, 1, 8);
        tree2No (100, 450, 1, 8);

        house (750, 450, 3);

        hedgerog (xh , yh , 1.5, 1, 10 * (i % 2), 0);

        Text ("Ежик закричал: 'Кто-то ворует мои яблоки! Надо его найти!'");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    for (int i = 1; i <= 12; i++)
        {
        tree1No (300, 300, 2, 2, 10);
        tree1No (450, 100, 2, 2, 10);
        tree1No (750, 130, 2, 2, 10);

        tree2No (200, 150, 1, 8);
        tree2No (600, 200, 1, 8);
        tree2No (100, 450, 1, 8);

        house (750, 450, 3);

        hedgerog (xh - kh, yh, 1.5, 1, 10 * (i % 2), 5 * (i % 2));
        xh = xh - kh;

        Text ("Наш зверек унюхал след и пошел по нему.");

        txSleep (300);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    for (int i = 1; i <= 72; i++)
        {
        hedgerog (xh, yh, 1.5, 1, 10 * (i % 2), 5 * (i % 2));

        tree1No (x11 + k, 300, 2, 2, 10);
        tree1No (x12 + k, 100, 2, 2, 10);
        tree1No (x13 + k, 130, 2, 2, 10);

        tree1 (x14 + k, 300, 2, 2, 10, 2 * (i % 2));
        tree1 (x15 + k, 100, 2, 2, 10, 2 * (i % 2));
        tree1 (x16 + k, 130, 2, 2, 10, 2 * (i % 2));

        tree2No (x21 + k, 150, 1, 8);
        tree2No (x22 + k, 200, 1, 8);
        tree2No (x23 + k, 450, 1, 8);

        tree2 (x24 + k, 150, 1, 8, -3 * (i % 2), 10);
        tree2 (x25 + k, 200, 1, 8, -3 * (i % 2), 10);
        tree2 (x26 + k, 450, 1, 8, -3 * (i % 2), 10);

        house (xHouse1 + k, 450, 3);
        house (xHouse2 + k, 450, 3);

        x11 = x11 + k;
        x12 = x12 + k;
        x13 = x13 + k;
        x14 = x14 + k;
        x15 = x15 + k;
        x16 = x16 + k;

        x21 = x21 + k;
        x22 = x22 + k;
        x23 = x23 + k;
        x24 = x24 + k;
        x25 = x25 + k;
        x26 = x26 + k;

        xHouse1 = xHouse1 + k;
        xHouse2 = xHouse2 + k;

        Text ("Наш зверек унюхал след и пошел по нему.");

        txSleep (300);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    }
//--------------------------------------------------------------------------
void SceneThree ()
    {
    for (int i = 1; i <= 16; i++)
        {
        forest (i);
        
        house (450, 450, 3);

        hedgerog1 (xh, yh, 1.5, 1, 0, 5 * (i % 2));

        Text (""));

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    }
//--------------------------------------------------------------------------
void Text (string text)
    {
    txSetTextAlign (TA_CENTER);
    txSetColor     (TX_BLACK);
    txTextOut      (500, 550, text);
    }
//--------------------------------------------------------------------------
void forest (i)
    {
    tree1 (300, 300, 2, 2, 10, 2 * (i % 2));
    tree1 (450, 100, 2, 2, 10, 2 * (i % 2));
    tree1 (750, 130, 2, 2, 10, 2 * (i % 2));

    tree2 (200, 150, 1, 8, -3 * (i % 2), 10);
    tree2 (600, 200, 1, 8, -3 * (i % 2), 10);
    tree2 (100, 450, 1, 8, -3 * (i % 2), 10);
    }
//--------------------------------------------------------------------------
void forestNo (i)
    {
    tree1No (300, 300, 2, 2, 10);
    tree1No (450, 100, 2, 2, 10);
    tree1No (750, 130, 2, 2, 10);

    tree2No (200, 150, 1, 8);
    tree2No (600, 200, 1, 8);
    tree2No (100, 450, 1, 8);
    }
//--------------------------------------------------------------------------
    /*
    Параметры:
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
    txPolygon             (branches_1, 7);

    txSetFillColor (RGB(90, 194, 65));
    POINT branches_2[7] {{ROUND (x - 30*size), ROUND (y + 40*size)}, {ROUND (x),           ROUND (y)},
                         {ROUND (x + 30*size), ROUND (y + 40*size)}, {ROUND (x + 15*size), ROUND (y + 30*size)},
                         {ROUND (x),           ROUND (y + 40*size)}, {ROUND (x - 15*size), ROUND (y + 30*size)},
                         {ROUND (x - 30*size), ROUND (y + 40*size)}};
    txPolygon            (branches_2, 7);


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
    Параметры:
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
    txPolygon             (branches_1, 7);

    txSetFillColor (RGB(90, 194, 65));
    POINT branches_2[7] {{ROUND (x - 30*size), ROUND (y + 40*size)}, {ROUND (x),           ROUND (y)},
                         {ROUND (x + 30*size), ROUND (y + 40*size)}, {ROUND (x + 15*size), ROUND (y + 30*size)},
                         {ROUND (x),           ROUND (y + 40*size)}, {ROUND (x - 15*size), ROUND (y + 30*size)},
                         {ROUND (x - 30*size), ROUND (y + 40*size)}};
    txPolygon            (branches_2, 7);


    txSetColor (RGB(155, 110, 65), nLine);
    txLine     (x, y + 40*size, x, y + 70*size);
    }
//--------------------------------------------------------------------------
    /*
    Параметры:
    x, y - координаты
    size - размер дерева
    nLine - толщина ножки
    place - положение верхнего яблока
    roundSize - размер яблок
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
    Параметры:
    x, y - координаты
    size - размер дерева
    nLine - толщина ножки
    place - положение верхнего яблока
    roundSize - размер яблок
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
//-----------------------------------------------------------------------------
    /*
    Параметры:
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
    txPolygon       (body, 6);

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
    Параметры:
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
//-------------------------------------------------------------------------
    /*
    Параметры
    x, y - координаты
    size - размер яблока
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
    POINT Leaf [5] {{ROUND (x +  5*size), ROUND (y - 17*size)}, {ROUND (x + 15*size), ROUND (y - 22*size + lsize)},
                    {ROUND (x + 25*size), ROUND (y - 17*size)}, {ROUND (x + 15*size), ROUND (y - 12*size - lsize)},
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
    Параметры
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
    Параметры
    x, y - координаты
    size - размер дома
    */
void house1 (int x, int y, int size)
    {
    txSetColor     (RGB(200, 100, 0));
    txSetFillColor (RGB(200, 100, 0));
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
    Параметры
    x, y - координаты
    size - размер шишки
    */
void cone (int x, int y, int size)
    {
    txSetFillColor (RGB(98, 0, 0));
    txSetColor     (RGB(98, 0, 0));
    txCircle (x, y, size);
    }
