// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
//	Form1->ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
//	Form1->ADOQuery1->SQL->Add("INSERT INTO Shedule(Para, Monday, Thuesday, Wendsday, Thursday, Friday, Grup, Kathedra, Faculty) VALUES('1','Գ����','a','m','c','k','t','o','p');");
	AnsiString *S;
	S = new AnsiString[10];

//	String K = QuotedStr(Edit2->Text);
//	Form1->ADOQuery1->SQL->Add("INSERT INTO Shedule(Para, Monday) VALUES('1', " + K   + ");");

//	Form1->ADOQuery1->Parameters[0]->Value=10;
//	Form1->ADOQuery1->/Parameters->ParamByName();
//	Form1->ADOQuery1->Parameters->ParamByName("Para")->Value = Edit1->Text;

		S[0] = QuotedStr(Edit1->Text);
		S[1] = QuotedStr(Edit2->Text);
		S[2] = QuotedStr(Edit3->Text);
		S[3] = QuotedStr(Edit4->Text);
		S[4] = QuotedStr(Edit5->Text);
		S[5] = QuotedStr(Edit6->Text);
		S[6] = QuotedStr(Edit7->Text);
		S[7] = QuotedStr(Edit8->Text);
		S[8] = QuotedStr(Edit9->Text);


Form1->ADOQuery1->SQL->Add("INSERT INTO Shedule(Para, Monday, Thuesday, Wendsday, Thursday, Friday, Grup, Kathedra, Faculty) VALUES(" + S[0] + "," + S[1] + "," + S[2] +"," + S[3] + "," + S[4] + "," + S[5] + "," + S[6] + "," + S[7] + "," + S[8] + ");");
//	Form1->ADOQuery1->Parameters->ParamByName("Thuesday")->Value = Edit3->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Wendsday")->Value = Edit4->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Thursday")->Value = Edit5->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Friday")->Value = Edit6->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Grup")->Value = Edit7->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Kathedra")->Value = Edit8->Text;
//	Form1->ADOQuery1->Parameters->ParamByName("Faculty")->Value = Edit9->Text;
//	Form1->ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC;");
//	Form1->ADOQuery1->Open();
	Form1->ADOQuery1->ExecSQL();
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC;");
	Form1->ADOQuery1->Open();
//	Form1->ADOQuery1->SQL->Text="Select * from Shedule Where Grup='242'";
//	Form1->ADOQuery1->ExecSQL();
//	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form2->Close();
}
//---------------------------------------------------------------------------

