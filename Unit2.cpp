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
	AnsiString *S;
	S = new AnsiString[10];


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


	Form1->ADOQuery1->ExecSQL();
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC;");
	Form1->ADOQuery1->Open();
}
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form2->Close();
}
void __fastcall TForm2::FormKeyPress(TObject *Sender, System::WideChar &Key)
{

	if (Key == 13) {    //enter
        Button1->Click();
	}
}
void __fastcall TForm2::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	const int SC_DRAGMOVE = 0xF012;
	ReleaseCapture();
	Perform(WM_SYSCOMMAND, SC_DRAGMOVE, 0);
}

