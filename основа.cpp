#include "TXLib.h"
#include "SDK\SaraevLib.h"

void SceneOne      ();
void SceneTwo      ();
void SceneThree    ();

int main ()
{
    txCreateWindow (1000, 600);

    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1000, 600);

    SceneOne    ();
    SceneTwo    ();
    SceneThree  ();
    END         ();

    return 0;
}
//--------------------------------------------------------------------------
void SceneOne ()
{
    int xh = 675;
    int yh = 400;

    for (int position = 1; position <= 16; position++)
    {
        background ();

        forest (position);

        house (750, 450, 3);

        hedgerog (xh - 7, yh - 7, 1.5, 1, 0, 5 * (position % 2));
        xh = xh - 7;
        yh = yh - 7;

        TextToScreen ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("Padenie.wav");
    for (int position = 1; position <= 15; position++)
    {
        background ();

        forest (position);

        house (750, 450, 3);

        hedgerog1 (xh + 7, yh, 1.5, 1, 0, 0);
        xh = xh + 7;

        apple (xh, yh - 23, 1, 0, 2, 5);

        TextToScreen ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("Padenie.wav");
    for (int position = 1; position <= 15; position++)
    {
        background ();

        forest (position);

        house (750, 450, 3);

        hedgerog1 (xh, yh + 7, 1.5, 1, 0, 0);
        yh = yh + 7;

        apple (xh,      yh - 20, 1, 0, 2, 5);
        cone  (xh + 36, yh - 22, 10);

        TextToScreen ("В лесу живет ежик. Он обитает в своем домике и ходит в лес за шишками и яблоками.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }

}
//--------------------------------------------------------------------------
void SceneTwo ()
{
    int xh = 675;
    int yh = 400;
    int x11 = 300;
    int x21 = 200;
    int xHouse1 = 750;

    txPlaySound ("shum_lesa.wav");
    for (int position = 1; position <= 15; position++)
    {
        background ();

        forestNo ();

        house (750, 450, 3);

        hedgerog (xh - 7, yh - 7, 1.5, 1, 0, 5 * (position % 2));
        xh = xh - 7;
        yh = yh - 7;

        TextToScreen ("Но вдруг, в лесу стали пропадать яблоки.");

        txSleep (450);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("udivlenie.wav");
    for (int position = 1; position <= 7; position++)
    {
        background ();

        forestNo ();

        house (750, 450, 3);

        hedgerog (xh , yh , 1.5, 1, 10 * (position % 2), 0);

        TextToScreen ("Ежик закричал: 'Кто-то ворует мои яблоки! Надо его найти!'");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("shagi.wav");
    for (int position = 1; position <= 12; position++)
    {
        background ();

        forestNo ();

        house (750, 450, 3);

        hedgerog (xh - 7, yh, 1.5, 1, 10 * (position % 2), 5 * (position % 2));
        xh = xh - 7;

        TextToScreen ("Наш зверек унюхал след и пошел по нему.");

        txSleep (300);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    for (int position = 1; position <= 67; position++)
    {
        background ();

        hedgerog (xh, yh, 1.5, 1, 10 * (position % 2), 5 * (position % 2));

        Moving (position, x11, x21, xHouse1);
        x11 = x11 + 12;
        x21 = x21 + 12;
        xHouse1 = xHouse1 + 12;

        TextToScreen ("Наш зверек унюхал след и пошел по нему.");

        txSleep (300);
        txSetFillColor (TX_WHITE);
        txClear();
    }

}
//--------------------------------------------------------------------------
void SceneThree ()
{
    int xh = 486;
    int yh = 280;
    int xgh = 665;
    int ygh = 430;

    txPlaySound ("wow.wav");
    for (int position = 1; position <= 10; position++)
    {
        background ();

        forest (position);

        house1 (750, 450, 3);

        hedgerog1    ( xh,  yh, 1.5, 1, 10 * (position % 2), 0);
        hedgerogGirl (xgh, ygh, 1.5, 1,                   0, 0);

        TextToScreen ("Но вдруг наш ежик натыкается на ежиху, которая живет в своем домике.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("shum_lesa.wav");
    for (int position = 1; position <= 14; position++)
    {
        background ();

        forest (position);

        hedgerog1    (xh + 7, yh + 7, 1.5, 1, 10 * (position % 2), 5 * (position % 2));
        hedgerogGirl (    xgh,     ygh, 1.5, 1,                   0,                  0);
        xh = xh + 7;
        yh = yh + 7;

        house1 (750, 450, 3);

        TextToScreen ("Это она воровала яблоки. Но ежата не поругались, а стали дружно жить вместе.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    for (int position = 1; position <= 7; position++)
    {
        background ();

        forest (position);

        house1 (750, 450, 3);

        hedgerog1    ( xh,  yh + 7, 1.5, 1, 10 * (position % 2), 5 * (position % 2));
        hedgerogGirl (xgh, ygh     , 1.5, 1,                   0,                  0);
        yh = yh + 7;

        TextToScreen ("Это она воровала яблоки. Но ежата не поругались, а стали дружно жить вместе.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("girl_wow.wav");
    for (int position = 1; position <= 10; position++)
    {
        background ();

        forest (position);

        house1 (750, 450, 3);

        hedgerog1    ( xh,  yh, 1.5, 1, 10 * (position % 2), 0);
        hedgerogGirl (xgh, ygh, 1.5, 1, 10 * (position % 2), 0);

        TextToScreen ("Это она воровала яблоки. Но ежата не поругались, а стали дружно жить вместе.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("shum_lesa.wav");
    for (int position = 1; position <= 11; position++)
    {
        background ();

        forest (position);

        hedgerog1     ( xh + 7,  yh, 1.5, 1, 10 * (position % 2), 5 * (position % 2));
        hedgerog1Girl (xgh + 7, ygh, 1.5, 1, 10 * (position % 2), 5 * (position % 2));

         xh =  xh + 7;
        xgh = xgh + 7;

        house1 (750, 450, 3);

        TextToScreen ("Это она воровала яблоки. Но ежата не поругались, а стали дружно жить вместе.");

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    for (int position = 1; position <= 14; position++)
    {
        background ();

        forest (position);

        hedgerog1 (xh + 7, yh, 1.5, 1, 10 * (position % 2), 5 * (position % 2));

        xh  =  xh + 7;

        TextToScreen ("Это она воровала яблоки. Но ежата не поругались, а стали дружно жить вместе.");

        house1 (750, 450, 3);

        txSleep (350);
        txSetFillColor (TX_WHITE);
        txClear();
    }
    txPlaySound ("end.wav");
}
