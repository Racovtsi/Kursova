//----------------------------------------------------------------------------
#include <vcl.h>
#include <System.IOUtils.hpp> //�������� ��� ������� ������ � ������� � �����������
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
int imgUp,imgDown;
String form2open;


void __fastcall TForm1::Forma2(wchar_t efa[255])
{
 Form1->Visible = false;
 Form2->Show();
 Form2->Label1->Caption = "";
 Form2->Label1->Caption = Form2->Label1->Caption+efa;
}
 //������� ������ ���������� ������� ����� �� Form2

void __fastcall TForm1::AnimationUp(int i)
{
TImage *Image[5];
Image[0] = Image1;
Image[1] = Image2;
Image[2] = Image3;
Image[3] = Image4;
Image[4] = Image5;

 if(Image[i-1]->Height > 120)
   Timer1->Enabled = false;
 else{
  Image[i-1]->Width = Image[i-1]->Width+2;
  Image[i-1]->Height = Image[i-1]->Height+2;
	 }
}
 //������� �������� ���������

void __fastcall TForm1::AnimationDown(int i)
{
TImage *Image[5];
Image[0] = Image1;
Image[1] = Image2;
Image[2] = Image3;
Image[3] = Image4;
Image[4] = Image5;

 if(Image[i-1]->Height < 105)
   Timer1->Enabled = false;
 else{
  Image[i-1]->Width = Image[i-1]->Width-10;
  Image[i-1]->Height = Image[i-1]->Height-10;
	 }
}
 //������� �������� ���������

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
form2open = TFile::ReadAllText("form2open.txt");   //������ � ����� "form2open.txt" � ����� form2open
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
Forma2(L"1s\u00b9");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//AnimationUp(imgUp);  //�������� ���������
//AnimationDown(imgDown); //�������� ���������

if(form2open == "1"){      //
Form1->Visible = false;    //
Form2->Show();             //
}                          //  ��� ������, ��������� �������� ������
else                       //
Enabled = false;           //
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
Forma2(L"1s\u00b2");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b9");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u00b9");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u00b2");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u00b3");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u2074");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image9MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u2075");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
Forma2(L"1s\u00b2 2s\u00b2 2p\u2076");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


