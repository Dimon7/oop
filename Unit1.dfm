object Form1: TForm1
  Left = 0
  Top = 0
  Cursor = crArrow
  Caption = 'Shedule'
  ClientHeight = 600
  ClientWidth = 975
  Color = clBtnFace
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
  object Label1: TLabel
    Left = 24
    Top = 515
    Width = 37
    Height = 20
    Caption = #1055#1086#1083#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 339
    Top = 443
    Width = 118
    Height = 18
    Caption = #1044#1086#1076#1072#1090#1080' '#1085#1086#1074#1110' '#1087#1086#1083#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 488
    Top = 443
    Width = 102
    Height = 18
    Caption = #1042#1080#1076#1072#1083#1080#1090#1080' '#1087#1086#1083#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 632
    Top = 456
    Width = 89
    Height = 33
    Caption = 'Label4'
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 975
    Height = 433
    Align = alTop
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
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
    Left = 627
    Top = 519
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 1
    Visible = False
  end
  object Button1: TButton
    Left = 878
    Top = 569
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = 'Close'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 222
    Width = 283
    Height = 58
    Caption = 'Sort'
    TabOrder = 3
    Visible = False
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 698
    Top = 571
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object Edit2: TEdit
    Left = 184
    Top = 439
    Width = 90
    Height = 21
    TabOrder = 5
    OnChange = Edit2Change
  end
  object Button3: TButton
    Left = 50
    Top = 439
    Width = 25
    Height = 23
    Cursor = crHandPoint
    Caption = '+'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 136
    Top = 539
    Width = 75
    Height = 53
    Cursor = crHandPoint
    Caption = 'Clear'
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 339
    Top = 496
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = '+'
    TabOrder = 8
    OnClick = Button5Click
  end
  object ComboBox1: TComboBox
    Left = 81
    Top = 439
    Width = 97
    Height = 21
    Cursor = crHandPoint
    TabOrder = 9
    Text = #1042#1080#1073#1110#1088#1082#1072
    OnClick = ComboBox1Click
    Items.Strings = (
      #1043#1088#1091#1087#1072
      #1050#1072#1092#1077#1076#1088#1072
      #1060#1072#1082#1091#1083#1100#1090#1077#1090)
  end
  object Button6: TButton
    Left = 504
    Top = 496
    Width = 75
    Height = 25
    Cursor = crHandPoint
    Caption = '-'
    TabOrder = 10
    OnClick = Button6Click
  end
  object Edit3: TEdit
    Left = 536
    Top = 568
    Width = 121
    Height = 21
    TabOrder = 11
  end
  object Edit4: TEdit
    Left = 392
    Top = 568
    Width = 121
    Height = 21
    TabOrder = 12
  end
  object Edit5: TEdit
    Left = 136
    Top = 504
    Width = 121
    Height = 21
    TabOrder = 13
    Text = 'Edit5'
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
    Left = 840
    Top = 448
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 912
    Top = 448
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From Shedule'
      'Where Grup Like '#39'%242%'#39' AND Kathedra Like '#39'%KS%'#39
      'Order By Para ASC')
    Left = 912
    Top = 512
  end
end
