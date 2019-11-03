//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

  char p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25;
  char kto;
  void Sprawdz()
  {
        if((p1==p2 && p2==p3 && p3==p4 && p4==p5 && p1!='n') ||
           (p6==p7 && p7==p8 && p8==p9 && p9==p10 && p6!='n') ||
           (p11==p12 && p12==p13 && p13==p14 && p14==p15 && p11!='n') ||
           (p16==p17 && p17==p18 && p18==p19 && p19==p10 && p16!='n') ||
           (p21==p22 && p22==p23 && p23==p24 && p24==p25 && p21!='n') ||
           (p1==p7 && p7==p13 && p13==p19 && p19==p25 && p19!='n') ||
           (p5==p9 && p9==p13 && p13==p17 && p17==p21 && p5!='n') ||
           (p1==p6 && p6==p11 && p11==p16 && p16==p21 && p21!='n') ||
           (p2==p7 && p7==p12 && p12==p17 && p17==p22 && p22!='n') ||
           (p3==p2 && p8==p13 && p13==p18 && p18==p23 && p23!='n') ||
           (p4==p9 && p9==p14 && p14==p19 && p19==p24 && p4!='n') ||
           (p5==p10 && p10==p15 && p15==p20 && p20==p25 && p5!='n'))
           {
             char * w;
             if (kto=='x') w="Wygrywa kó³ko, gratulacje!";
             else w="Wygrywa krzy¿yk, gratulacje!";
             Application->MessageBox(w, "koniec gry", MB_OK);
           }


  }




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        pole1->Picture->LoadFromFile("img/nic.bmp");
        pole2->Picture->LoadFromFile("img/nic.bmp");
        pole3->Picture->LoadFromFile("img/nic.bmp");
        pole4->Picture->LoadFromFile("img/nic.bmp");
        pole5->Picture->LoadFromFile("img/nic.bmp");
        pole6->Picture->LoadFromFile("img/nic.bmp");
        pole7->Picture->LoadFromFile("img/nic.bmp");
        pole8->Picture->LoadFromFile("img/nic.bmp");
        pole9->Picture->LoadFromFile("img/nic.bmp");
        pole10->Picture->LoadFromFile("img/nic.bmp");
        pole11->Picture->LoadFromFile("img/nic.bmp");
        pole12->Picture->LoadFromFile("img/nic.bmp");
        pole13->Picture->LoadFromFile("img/nic.bmp");
        pole14->Picture->LoadFromFile("img/nic.bmp");
        pole15->Picture->LoadFromFile("img/nic.bmp");
        pole16->Picture->LoadFromFile("img/nic.bmp");
        pole17->Picture->LoadFromFile("img/nic.bmp");
        pole18->Picture->LoadFromFile("img/nic.bmp");
        pole19->Picture->LoadFromFile("img/nic.bmp");
        pole20->Picture->LoadFromFile("img/nic.bmp");
        pole21->Picture->LoadFromFile("img/nic.bmp");
        pole22->Picture->LoadFromFile("img/nic.bmp");
        pole23->Picture->LoadFromFile("img/nic.bmp");
        pole24->Picture->LoadFromFile("img/nic.bmp");
        pole25->Picture->LoadFromFile("img/nic.bmp");
        tura->Picture->LoadFromFile("img/osmall.bmp");


        p1='n'; p2='n'; p3='n'; p4='n'; p5='n';
        p6='n'; p7='n'; p8='n'; p9='n'; p10='n';
        p11='n'; p12='n'; p13='n'; p14='n'; p15='n';
        p16='n'; p17='n'; p18='n'; p19='n'; p20='n';
        p21='n'; p22='n'; p23='n'; p24='n'; p25='n';

        kto='o';

        pole1->Enabled = true;
        pole2->Enabled = true;
        pole3->Enabled = true;
        pole4->Enabled = true;
        pole5->Enabled = true;
        pole6->Enabled = true;
        pole7->Enabled = true;
        pole8->Enabled = true;
        pole9->Enabled = true;
        pole10->Enabled = true;
        pole11->Enabled = true;
        pole12->Enabled = true;
        pole13->Enabled = true;
        pole14->Enabled = true;
        pole15->Enabled = true;
        pole16->Enabled = true;
        pole17->Enabled = true;
        pole18->Enabled = true;
        pole19->Enabled = true;
        pole20->Enabled = true;
        pole21->Enabled = true;
        pole22->Enabled = true;
        pole23->Enabled = true;
        pole24->Enabled = true;
        pole25->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole1Click(TObject *Sender)
{
        if(p1=='n')
        {
                if(kto=='o')
                {
                 pole1->Picture->LoadFromFile("img/o.bmp");
                 p1='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole1->Picture->LoadFromFile("img/x.bmp");
                 p1='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole1->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole2Click(TObject *Sender)
{
if(p2=='n')
        {
                if(kto=='o')
                {
                 pole2->Picture->LoadFromFile("img/o.bmp");
                 p2='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole2->Picture->LoadFromFile("img/x.bmp");
                 p2='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole2->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole3Click(TObject *Sender)
{
if(p3=='n')
        {
                if(kto=='o')
                {
                 pole3->Picture->LoadFromFile("img/o.bmp");
                 p3='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole3->Picture->LoadFromFile("img/x.bmp");
                 p3='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole3->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole4Click(TObject *Sender)
{
if(p4=='n')
        {
                if(kto=='o')
                {
                 pole4->Picture->LoadFromFile("img/o.bmp");
                 p4='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole4->Picture->LoadFromFile("img/x.bmp");
                 p4='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole4->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole5Click(TObject *Sender)
{
if(p5=='n')
        {
                if(kto=='o')
                {
                 pole5->Picture->LoadFromFile("img/o.bmp");
                 p5='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole5->Picture->LoadFromFile("img/x.bmp");
                 p5='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole5->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole6Click(TObject *Sender)
{
if(p6=='n')
        {
                if(kto=='o')
                {
                 pole6->Picture->LoadFromFile("img/o.bmp");
                 p6='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole6->Picture->LoadFromFile("img/x.bmp");
                 p6='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole6->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole7Click(TObject *Sender)
{
if(p7=='n')
        {
                if(kto=='o')
                {
                 pole7->Picture->LoadFromFile("img/o.bmp");
                 p7='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole7->Picture->LoadFromFile("img/x.bmp");
                 p7='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole7->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole8Click(TObject *Sender)
{
if(p8=='n')
        {
                if(kto=='o')
                {
                 pole8->Picture->LoadFromFile("img/o.bmp");
                 p8='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole8->Picture->LoadFromFile("img/x.bmp");
                 p8='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole8->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole9Click(TObject *Sender)
{
     if(p9=='n')
        {
                if(kto=='o')
                {
                 pole9->Picture->LoadFromFile("img/o.bmp");
                 p9='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole9->Picture->LoadFromFile("img/x.bmp");
                 p9='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole9->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole10Click(TObject *Sender)
{
if(p10=='n')
        {
                if(kto=='o')
                {
                 pole10->Picture->LoadFromFile("img/o.bmp");
                 p10='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole10->Picture->LoadFromFile("img/x.bmp");
                 p10='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole10->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole11Click(TObject *Sender)
{
if(p11=='n')
        {
                if(kto=='o')
                {
                 pole11->Picture->LoadFromFile("img/o.bmp");
                 p11='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole11->Picture->LoadFromFile("img/x.bmp");
                 p11='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole11->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole12Click(TObject *Sender)
{
if(p12=='n')
        {
                if(kto=='o')
                {
                 pole12->Picture->LoadFromFile("img/o.bmp");
                 p12='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole12->Picture->LoadFromFile("img/x.bmp");
                 p12='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole12->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole13Click(TObject *Sender)
{
if(p13=='n')
        {
                if(kto=='o')
                {
                 pole13->Picture->LoadFromFile("img/o.bmp");
                 p13='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole13->Picture->LoadFromFile("img/x.bmp");
                 p13='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole13->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole14Click(TObject *Sender)
{
if(p14=='n')
        {
                if(kto=='o')
                {
                 pole14->Picture->LoadFromFile("img/o.bmp");
                 p14='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole14->Picture->LoadFromFile("img/x.bmp");
                 p14='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole14->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole15Click(TObject *Sender)
{
if(p15=='n')
        {
                if(kto=='o')
                {
                 pole15->Picture->LoadFromFile("img/o.bmp");
                 p15='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole15->Picture->LoadFromFile("img/x.bmp");
                 p15='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole15->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole16Click(TObject *Sender)
{
if(p16=='n')
        {
                if(kto=='o')
                {
                 pole16->Picture->LoadFromFile("img/o.bmp");
                 p16='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole16->Picture->LoadFromFile("img/x.bmp");
                 p16='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole16->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole17Click(TObject *Sender)
{
if(p17=='n')
        {
                if(kto=='o')
                {
                 pole17->Picture->LoadFromFile("img/o.bmp");
                 p17='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole17->Picture->LoadFromFile("img/x.bmp");
                 p17='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole17->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole18Click(TObject *Sender)
{
if(p18=='n')
        {
                if(kto=='o')
                {
                 pole18->Picture->LoadFromFile("img/o.bmp");
                 p18='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole18->Picture->LoadFromFile("img/x.bmp");
                 p18='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole18->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole19Click(TObject *Sender)
{
if(p19=='n')
        {
                if(kto=='o')
                {
                 pole19->Picture->LoadFromFile("img/o.bmp");
                 p19='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole19->Picture->LoadFromFile("img/x.bmp");
                 p19='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole19->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole20Click(TObject *Sender)
{
if(p20=='n')
        {
                if(kto=='o')
                {
                 pole20->Picture->LoadFromFile("img/o.bmp");
                 p20='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole20->Picture->LoadFromFile("img/x.bmp");
                 p20='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole20->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole21Click(TObject *Sender)
{
if(p21=='n')
        {
                if(kto=='o')
                {
                 pole21->Picture->LoadFromFile("img/o.bmp");
                 p21='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole21->Picture->LoadFromFile("img/x.bmp");
                 p21='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole21->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole23Click(TObject *Sender)
{
     if(p23=='n')
        {
                if(kto=='o')
                {
                 pole23->Picture->LoadFromFile("img/o.bmp");
                 p23='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole23->Picture->LoadFromFile("img/x.bmp");
                 p23='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole23->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole22Click(TObject *Sender)
{
if(p22=='n')
        {
                if(kto=='o')
                {
                 pole22->Picture->LoadFromFile("img/o.bmp");
                 p22='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole22->Picture->LoadFromFile("img/x.bmp");
                 p22='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole22->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole24Click(TObject *Sender)
{
if(p24=='n')
        {
                if(kto=='o')
                {
                 pole24->Picture->LoadFromFile("img/o.bmp");
                 p24='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole24->Picture->LoadFromFile("img/x.bmp");
                 p24='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole24->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole25Click(TObject *Sender)
{
if(p25=='n')
        {
                if(kto=='o')
                {
                 pole25->Picture->LoadFromFile("img/o.bmp");
                 p25='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.bmp");
                }
                else
                {
                  pole25->Picture->LoadFromFile("img/x.bmp");
                 p25='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.bmp");
                }
                pole25->Enabled=false;
                Sprawdz();
        }
}
//---------------------------------------------------------------------------
