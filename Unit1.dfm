object Form1: TForm1
  Left = 0
  Top = 0
  Cursor = crArrow
  BorderStyle = bsSingle
  Caption = 'Shedule'
  ClientHeight = 610
  ClientWidth = 1001
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  OnActivate = FormActivate
  OnCreate = FormCreate
  OnKeyPress = FormKeyPress
  OnMouseMove = FormMouseMove
  PixelsPerInch = 96
  TextHeight = 13
  object Label4: TLabel
    Left = 27
    Top = 589
    Width = 31
    Height = 13
    Caption = 'Label4'
  end
  object Bevel1: TBevel
    Left = 8
    Top = 521
    Width = 537
    Height = 62
  end
  object Bevel2: TBevel
    Left = 551
    Top = 521
    Width = 259
    Height = 62
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 1001
    Height = 484
    Align = alTop
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnTitleClick = DBGrid1TitleClick
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Para'
        Width = 30
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Code'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'Monday'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Thuesday'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Wendsday'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Thursday'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Friday'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1055#1086#1083#1077'1'
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'Grup'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Kathedra'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Faculty'
        Width = 114
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Teacher'
        Visible = False
      end>
  end
  object DBNavigator1: TDBNavigator
    Left = 51
    Top = 490
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 1
    Visible = False
  end
  object Button1: TButton
    Left = 825
    Top = 533
    Width = 145
    Height = 38
    Cursor = crHandPoint
    Caption = #1047#1072#1082#1088#1080#1090#1080' '#1087#1088#1086#1075#1088#1072#1084#1091
    Font.Charset = JOHAB_CHARSET
    Font.Color = clRed
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 391
    Top = 535
    Width = 142
    Height = 38
    Cursor = crHandPoint
    Caption = #1054#1095#1080#1089#1090#1080#1090#1080'/'#1054#1085#1086#1074#1080#1090#1080
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 571
    Top = 535
    Width = 110
    Height = 38
    Cursor = crHandPoint
    Caption = #1044#1086#1076#1072#1090#1080' '#1088#1086#1079#1082#1083#1072#1076
    TabOrder = 4
    OnClick = Button5Click
  end
  object ComboBox1: TComboBox
    Left = 27
    Top = 535
    Width = 168
    Height = 38
    Cursor = crHandPoint
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 30
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Text = #1042#1080#1073#1110#1088#1082#1072
    OnClick = ComboBox1Click
    Items.Strings = (
      #1043#1088#1091#1087#1072
      #1050#1072#1092#1077#1076#1088#1072
      #1060#1072#1082#1091#1083#1100#1090#1077#1090)
  end
  object Button6: TButton
    Left = 687
    Top = 535
    Width = 113
    Height = 38
    Cursor = crHandPoint
    Caption = #1042#1080#1076#1072#1083#1080#1090#1080' '#1088#1086#1079#1082#1083#1072#1076
    TabOrder = 6
    OnClick = Button6Click
  end
  object ComboBox2: TComboBox
    Left = 201
    Top = 535
    Width = 184
    Height = 38
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 30
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = ComboBox2Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=C:\Us' +
      'ers\dimon\Documents\Shedule_be.mdb;Mode=Share Deny None;Persist ' +
      'Security Info=False;Jet OLEDB:System database="";Jet OLEDB:Regis' +
      'try Path="";Jet OLEDB:Database Password="";Jet OLEDB:Engine Type' +
      '=5;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Global Partial Bu' +
      'lk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OLEDB:New Data' +
      'base Password="";Jet OLEDB:Create System Database=False;Jet OLED' +
      'B:Encrypt Database=False;Jet OLEDB:Don'#39't Copy Locale on Compact=' +
      'False;Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:S' +
      'FP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 760
    Top = 408
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 848
    Top = 408
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From Shedule'
      ''
      'Order By Para ASC')
    Left = 672
    Top = 408
  end
end
