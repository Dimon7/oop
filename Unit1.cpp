// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include <stdio.h>
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString Query="";
AnsiString Query_Grup="";
AnsiString Query_Kathedra = "";
AnsiString Query_Faculty = "";
int Count;
String and;
String C;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {

	Form1->Close();
}

// ---------------------------------------------------------------------------
//SORT
void __fastcall TForm1::FormCreate(TObject *Sender)
{
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
Query = "Select * From Shedule WHERE ";
ADOQuery1->SQL->Add( "Select * From Shedule Order By Para ASC" );

ADOQuery1->Open();


Label4->Caption = Query;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

	Query += " AND ";
	Label4->Caption = Query;
}

//---------------------------------------------------------------------------

//clear
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
	ADOQuery1->Open();


	ComboBox2->Clear();
	Query = "Select * From Shedule WHERE ";
    Label4->Caption = Query;

}
//---------------------------------------------------------------------------

//������ ����� �����
void __fastcall TForm1::Button5Click(TObject *Sender)
{

	Form2->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Click(TObject *Sender)
{

   if (ComboBox1->ItemIndex == 0) {
		C = "Grup";
		Query_Grup =  C  + " LIKE '%";

	}
	if (ComboBox1->ItemIndex == 1) {
		C = "Kathedra";
		Query_Kathedra =  C + " LIKE '%" ;

	}

	 if( ComboBox1->ItemIndex == 2){
		C = "Faculty";
		Query_Faculty =  C + " LIKE '%";
	 }

		ComboBox2->Clear();

		ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("Select Distinct " + C + " From Shedule Order By "+ C +" ASC");
		ADOQuery1->Open();

		ADOQuery1->First();
		while (!ADOQuery1->Eof){
		  ComboBox2->Items->Add(ADOQuery1->FieldByName(C)->Value);

		  ADOQuery1->Next();
		}

		ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC");
		ADOQuery1->Open();

}
//---------------------------------------------------------------------------

//Sort

void __fastcall TForm1::Button6Click(TObject *Sender)
{

    DBNavigator1->BtnClick(nbDelete);
}


void __fastcall TForm1::FormKeyPress(TObject *Sender, System::WideChar &Key)
{

//   ESC
	if(Key == 27){
		Button1->Click();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	const int SC_DRAGMOVE = 0xF012;
	ReleaseCapture();
	Perform(WM_SYSCOMMAND, SC_DRAGMOVE, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
	Count = DBGrid1->DataSource->DataSet->RecordCount;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox2Click(TObject *Sender)
{



	if (C == "Faculty") {
		Query_Faculty += ComboBox2->Text +  "%'";
    	Query += Query_Faculty ;
	}

	if (C == "Grup") {
		Query_Grup += ComboBox2->Text +  "%'";
		Query += Query_Grup ;
	}

	 if (C == "Kathedra") {
		Query_Kathedra += ComboBox2->Text +  "%'";
		Query += Query_Kathedra ;
	}

	Label4->Caption = Query;


	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add(Query);
	ADOQuery1->Open();

}
//---------------------------------------------------------------------------




void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{
		String S = Column->Field->FullName;
		ADOQuery1->Close();
		ADOQuery1->SQL->Clear();
		ADOQuery1->SQL->Add("Select * From Shedule Order By "+ S +" ASC");
		ADOQuery1->Open();


}
//---------------------------------------------------------------------------


