// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString Query;
int Count;
String and;
// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	Form1->Close();
}

// ---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1Click(TObject *Sender) {
/*
	if (ComboBox1->ItemIndex == 0) {
		Edit1->Text =  "Grup='" ;

	}
	if (ComboBox1->ItemIndex == 1) {
		Edit1->Text = "Kathedra='";
	}

	 if( ComboBox1->ItemIndex == 2){
		Edit1->Text = "Faculty='";
	 }
	// if( ListBox1->ItemIndex == 2)
	// Edit2->Text = Edit2->Text + "Names" + "='" + Edit1->Text + "'";
	// if( ListBox1->ItemIndex == 3)
	// Edit2->Text = Edit2->Text + "Struct" + "='" + Edit1->Text + "'";
	// if( ListBox1->ItemIndex == 4)
	// Edit2->Text = Edit2->Text + "amount" + "='" + Edit1->Text + "'";
	*/

}

			  //SORT
void __fastcall TForm1::Button2Click(TObject *Sender) {
/*
//  	Edit1->Text = Edit1->Text +Edit2->Text + "'";
Edit1->Text = Edit1->Text + "='" + Edit2->Text + "'";
//	Form1->ADOTable1->Filter = Edit1->Text;
//	Form1->ADOTable1->Filtered = true;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();

ADOQuery1->SQL->Add("Select * From Shedule Where " + Edit1->Text + " Order By Para ASC ");

ADOQuery1->Open();
*/

}
// ---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{

//	Edit1->Visible = false;
//DataSource1->DataSet = ADOQuery1;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
ADOQuery1->SQL->Add("Select * From Shedule");

ADOQuery1->Open();

Query = "Select * From Shedule WHERE ";



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{

     and +=  " AND ";
//	 Query += " AND ";
//	 Edit1->Clear();
//	 Label4->Caption = Query;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
	ADOQuery1->Open();

	Edit1->Clear();
	Edit2->Clear();

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
		Edit1->Text = Edit1->Text + "Grup" ;
		Label1->Caption = "�����";
	   //	Query += "Grup";

	}
	if (ComboBox1->ItemIndex == 1) {
		Edit3->Text = Edit3->Text + "Kathedra";
		Label1->Caption = "�������";
	   //	Query += "Kathedra";

	}

	 if( ComboBox1->ItemIndex == 2){
		Edit4->Text = Edit4->Text + "Faculty";
		Label1->Caption = "���������";
	   //	Query += "Faculty";
	 }

//	for(int i=0; i<Count; i++){
//	 ComboBox2->Items->Add(DBGrid1->DataSource->DataSet->Fields->Fields[2]->Value);
//	}

//	Edit1->Text = Edit1->Text + "='" ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{

	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
//	Query += " LIKE '%" + Edit2->Text + "%'";
//	 if (and.Length()>2)
//	 {
//		Query = "Select * From Shedule Where " + Edit1->Text +" LIKE '%" + Edit2->Text + "%'" + and + Edit3->Text + " LIKE '%" + Edit2->Text + "%'";
//	 }
//	else
	Query ="Select * From Shedule Where " + Edit1->Text +" LIKE '%" + Edit2->Text + "%'" ;

	ADOQuery1->SQL->Add(Query);
//	Query += " Order By Para ASC";
	Label4->Caption = Query;

//	ADOQuery1->SQL->Add(Query);
	ADOQuery1->Open();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
//	DBNavigator1->BtnClick(nbPrior);
    DBNavigator1->BtnClick(nbDelete);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == 13) {
        Button5->Click();
	}

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
//	DBGrid.DataSource.DataSet.RecordCount
}
//---------------------------------------------------------------------------


