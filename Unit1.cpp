// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

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
ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
//ADOQuery1->Active = true;
ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	 Edit1->Text = Edit1->Text + " AND ";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
	ADOQuery1->Open();

	Edit1->Clear();
}
//---------------------------------------------------------------------------

//������ ����� �����
void __fastcall TForm1::Button5Click(TObject *Sender)
{

	Form2->Show();
	Form2->Edit1->Text;
   /*
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
//	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
	ADOQuery1->SQL->Add("INSERT INTO Shedule(Para, Monday, Thuesday, Wendsday, Thursday, Friday, Grup, Kathedra, Faculty) VALUES('1','d','a','m','c','k','t','o','p');");
//	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC;");
//	ADOQuery1->Open();
	ADOQuery1->ExecSQL();
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC;");
	ADOQuery1->Open();
//	ADOQuery1->SQL->Text="Select * from Shedule Where Grup='242'";
//	ADOQuery1->ExecSQL();
//	ADOQuery1->Active = true;
*/
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Click(TObject *Sender)
{
   if (ComboBox1->ItemIndex == 0) {
		Edit1->Text =  "Grup" ;
		Label1->Caption = "�����";

	}
	if (ComboBox1->ItemIndex == 1) {
		Edit1->Text = "Kathedra";
		Label1->Caption = "�������";
	}

	 if( ComboBox1->ItemIndex == 2){
		Edit1->Text = "Faculty";
		Label1->Caption = "���������";
	 }

//	Edit1->Text = Edit1->Text + "='" ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
   //  	Edit1->Text = Edit1->Text +Edit2->Text + "'";
//Edit1->Text = Edit1->Text + "='" + Edit2->Text + "'";
//	Form1->ADOTable1->Filter = Edit1->Text;
//	Form1->ADOTable1->Filtered = true;
//Edit1->Text = Edit1->Text + Edit2->Text;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();

ADOQuery1->SQL->Add("Select * From Shedule Where " + Edit1->Text +" LIKE '%" + Edit2->Text + "%' Order By Para ASC");

ADOQuery1->Open();

//	ADOQuery1->Close();
//	ADOQuery1->SQL->Clear();
//	ADOQuery1->SQL->Add("Select * From Shedule Order By Para ASC ");
//	ADOQuery1->Open();

	//Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
//	DBNavigator1->BtnClick(nbPrior);
    DBNavigator1->BtnClick(nbDelete);
}
//---------------------------------------------------------------------------

