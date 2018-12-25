//---------------------------------------------------------------------------
#include <System.IOUtils.hpp>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
  int i = 0;
  int left = 0;
  int top = 144;
void __fastcall TForm2::Spin(int spin)
{
 if(i == 1 || i == 4)
 top -=25;
 left +=35;

 TImage* Image[255];
switch(spin){
 case 1 :
 Image[i] = new TImage (Form2);
 Image[i]->Parent = Form2;
 Image[i]->Left = left;
 Image[i]->Top = top;
 Image[i]->Width = Form2->ClientWidth - 10 - 20;
 Image[i]->Visible = true;
 Image[i]->Picture->LoadFromFile("Picture/spin/updown.bmp");
 break;

 case 2 :
 Image[i] = new TImage (Form2);
 Image[i]->Parent = Form2;
 Image[i]->Left = left;
 Image[i]->Top = top;
 Image[i]->Width = Form2->ClientWidth - 10 - 20;
 Image[i]->Visible = true;
 Image[i]->Picture->LoadFromFile("Picture/spin/up.bmp");
 break;

 case 3 :
 Image[i] = new TImage (Form2);
 Image[i]->Parent = Form2;
 Image[i]->Left = left;
 Image[i]->Top = top;
 Image[i]->Width = Form2->ClientWidth - 10 - 20;
 Image[i]->Visible = true;
 Image[i]->Picture->LoadFromFile("Picture/spin/down.bmp");
 break;
 }
 i++;
}

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
TFile::WriteAllText("form2open.txt","0");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
Form2->Close();
Form1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
Spin(1);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
Spin(2);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
Spin(3);
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
TFile::WriteAllText("form2open.txt","1");
ShellExecute(0,0,Application->ExeName.c_str(),0,0,SW_SHOW); //��������� ����� �����
Form1->Close();
}
//---------------------------------------------------------------------------

