#pragma once

#include <math.h> 

namespace Converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	double Rate0 = 0.00;
	double Rate1 = 0.00;
	double Rate2 = 0.00;
	double Rate3 = 0.00;
	int OperType = 0;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  SumLabel;
	protected: 

	private: System::Windows::Forms::TextBox^  SumConvert;
	private: System::Windows::Forms::Label^  RateLabel;
	protected: 


	private: System::Windows::Forms::TextBox^  ExchRate;
	private: System::Windows::Forms::TextBox^  To;

	private: System::Windows::Forms::TextBox^  From;
	private: System::Windows::Forms::Label^  FromLabel;
	private: System::Windows::Forms::Label^  ToLabel;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  RubToDol;
	private: System::Windows::Forms::RadioButton^  DolToRub;
	private: System::Windows::Forms::RadioButton^  RubToEur;
	private: System::Windows::Forms::RadioButton^  EurToRub;










	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SumLabel = (gcnew System::Windows::Forms::Label());
			this->SumConvert = (gcnew System::Windows::Forms::TextBox());
			this->RateLabel = (gcnew System::Windows::Forms::Label());
			this->ExchRate = (gcnew System::Windows::Forms::TextBox());
			this->To = (gcnew System::Windows::Forms::TextBox());
			this->From = (gcnew System::Windows::Forms::TextBox());
			this->FromLabel = (gcnew System::Windows::Forms::Label());
			this->ToLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->RubToDol = (gcnew System::Windows::Forms::RadioButton());
			this->DolToRub = (gcnew System::Windows::Forms::RadioButton());
			this->RubToEur = (gcnew System::Windows::Forms::RadioButton());
			this->EurToRub = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// SumLabel
			// 
			this->SumLabel->AutoSize = true;
			this->SumLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->SumLabel->Location = System::Drawing::Point(36, 51);
			this->SumLabel->Name = L"SumLabel";
			this->SumLabel->Size = System::Drawing::Size(185, 20);
			this->SumLabel->TabIndex = 0;
			this->SumLabel->Text = L"Сумма для конвертации:";
			// 
			// SumConvert
			// 
			this->SumConvert->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SumConvert->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.5F, System::Drawing::FontStyle::Bold));
			this->SumConvert->Location = System::Drawing::Point(227, 51);
			this->SumConvert->Name = L"SumConvert";
			this->SumConvert->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SumConvert->Size = System::Drawing::Size(117, 22);
			this->SumConvert->TabIndex = 1;
			this->SumConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->SumConvert->TextChanged += gcnew System::EventHandler(this, &Form1::SumConvert_TextChanged);
			// 
			// RateLabel
			// 
			this->RateLabel->AutoSize = true;
			this->RateLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->RateLabel->Location = System::Drawing::Point(36, 86);
			this->RateLabel->Name = L"RateLabel";
			this->RateLabel->Size = System::Drawing::Size(182, 20);
			this->RateLabel->TabIndex = 2;
			this->RateLabel->Text = L"Курс обмена (RUB/USD):";
			// 
			// ExchRate
			// 
			this->ExchRate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ExchRate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.5F, System::Drawing::FontStyle::Bold));
			this->ExchRate->Location = System::Drawing::Point(227, 86);
			this->ExchRate->Name = L"ExchRate";
			this->ExchRate->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ExchRate->Size = System::Drawing::Size(117, 22);
			this->ExchRate->TabIndex = 3;
			this->ExchRate->Text = L"0";
			this->ExchRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->ExchRate->TextChanged += gcnew System::EventHandler(this, &Form1::ExchRate_TextChanged);
			// 
			// To
			// 
			this->To->BackColor = System::Drawing::Color::White;
			this->To->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->To->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.5F, System::Drawing::FontStyle::Bold));
			this->To->Location = System::Drawing::Point(227, 130);
			this->To->Name = L"To";
			this->To->ReadOnly = true;
			this->To->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->To->Size = System::Drawing::Size(117, 22);
			this->To->TabIndex = 4;
			this->To->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// From
			// 
			this->From->BackColor = System::Drawing::Color::White;
			this->From->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->From->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.5F, System::Drawing::FontStyle::Bold));
			this->From->Location = System::Drawing::Point(40, 130);
			this->From->Name = L"From";
			this->From->ReadOnly = true;
			this->From->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->From->Size = System::Drawing::Size(117, 22);
			this->From->TabIndex = 5;
			this->From->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// FromLabel
			// 
			this->FromLabel->AutoSize = true;
			this->FromLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->FromLabel->Location = System::Drawing::Point(163, 131);
			this->FromLabel->Name = L"FromLabel";
			this->FromLabel->Size = System::Drawing::Size(52, 20);
			this->FromLabel->TabIndex = 6;
			this->FromLabel->Text = L"RUB =";
			// 
			// ToLabel
			// 
			this->ToLabel->AutoSize = true;
			this->ToLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->ToLabel->Location = System::Drawing::Point(350, 131);
			this->ToLabel->Name = L"ToLabel";
			this->ToLabel->Size = System::Drawing::Size(39, 20);
			this->ToLabel->TabIndex = 7;
			this->ToLabel->Text = L"USD";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(71, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Конвертировать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(228, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// RubToDol
			// 
			this->RubToDol->AutoSize = true;
			this->RubToDol->Checked = true;
			this->RubToDol->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->RubToDol->FlatAppearance->BorderSize = 10000;
			this->RubToDol->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->RubToDol->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->RubToDol->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->RubToDol->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->RubToDol->Location = System::Drawing::Point(405, 44);
			this->RubToDol->Name = L"RubToDol";
			this->RubToDol->Size = System::Drawing::Size(153, 24);
			this->RubToDol->TabIndex = 10;
			this->RubToDol->TabStop = true;
			this->RubToDol->Text = L"Рубли в Доллары";
			this->RubToDol->UseVisualStyleBackColor = true;
			this->RubToDol->CheckedChanged += gcnew System::EventHandler(this, &Form1::RubToDol_CheckedChanged);
			// 
			// DolToRub
			// 
			this->DolToRub->AutoSize = true;
			this->DolToRub->FlatAppearance->BorderSize = 0;
			this->DolToRub->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->DolToRub->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->DolToRub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->DolToRub->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->DolToRub->Location = System::Drawing::Point(405, 74);
			this->DolToRub->Name = L"DolToRub";
			this->DolToRub->Size = System::Drawing::Size(153, 24);
			this->DolToRub->TabIndex = 11;
			this->DolToRub->Text = L"Доллары в Рубли";
			this->DolToRub->UseVisualStyleBackColor = true;
			this->DolToRub->CheckedChanged += gcnew System::EventHandler(this, &Form1::DolToRub_CheckedChanged);
			// 
			// RubToEur
			// 
			this->RubToEur->AutoSize = true;
			this->RubToEur->FlatAppearance->BorderSize = 0;
			this->RubToEur->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->RubToEur->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->RubToEur->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->RubToEur->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->RubToEur->Location = System::Drawing::Point(405, 104);
			this->RubToEur->Name = L"RubToEur";
			this->RubToEur->Size = System::Drawing::Size(123, 24);
			this->RubToEur->TabIndex = 12;
			this->RubToEur->Text = L"Рубли в Евро";
			this->RubToEur->UseVisualStyleBackColor = true;
			this->RubToEur->CheckedChanged += gcnew System::EventHandler(this, &Form1::RubToEur_CheckedChanged);
			// 
			// EurToRub
			// 
			this->EurToRub->AutoSize = true;
			this->EurToRub->FlatAppearance->BorderSize = 0;
			this->EurToRub->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->EurToRub->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->EurToRub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->EurToRub->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->EurToRub->Location = System::Drawing::Point(405, 134);
			this->EurToRub->Name = L"EurToRub";
			this->EurToRub->Size = System::Drawing::Size(123, 24);
			this->EurToRub->TabIndex = 13;
			this->EurToRub->Text = L"Евро в Рубли";
			this->EurToRub->UseVisualStyleBackColor = true;
			this->EurToRub->CheckedChanged += gcnew System::EventHandler(this, &Form1::EurToRub_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)), 
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(586, 233);
			this->Controls->Add(this->EurToRub);
			this->Controls->Add(this->RubToEur);
			this->Controls->Add(this->DolToRub);
			this->Controls->Add(this->RubToDol);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ToLabel);
			this->Controls->Add(this->From);
			this->Controls->Add(this->To);
			this->Controls->Add(this->ExchRate);
			this->Controls->Add(this->RateLabel);
			this->Controls->Add(this->SumConvert);
			this->Controls->Add(this->SumLabel);
			this->Controls->Add(this->FromLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"АРМ оператора обменного пункта";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void RubToDol_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 OperType = 0;
			 RateLabel->Text = Convert::ToString("Курс обмена (RUB/USD):");
			 FromLabel->Text = Convert::ToString("RUB =");
			 ToLabel->Text = Convert::ToString("USD");
			 ExchRate->Text = Convert::ToString(Rate0);
			 From->Text = "";
			 To->Text = "";
		 }
private: System::Void DolToRub_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 OperType = 1;
			 RateLabel->Text = Convert::ToString("Курс обмена (USD/RUB):");
			 FromLabel->Text = Convert::ToString("USD =");
			 ToLabel->Text = Convert::ToString("RUB");
			 ExchRate->Text = Convert::ToString(Rate1);
			 From->Text = "";
			 To->Text = "";
		 }
private: System::Void RubToEur_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 OperType = 2;
			 RateLabel->Text = Convert::ToString("Курс обмена (RUB/EUR):");
			 FromLabel->Text = Convert::ToString("RUB =");
			 ToLabel->Text = Convert::ToString("EUR");
			 ExchRate->Text = Convert::ToString(Rate2);
			 From->Text = "";
			 To->Text = "";
		 }
private: System::Void EurToRub_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 OperType = 3;
			 RateLabel->Text = Convert::ToString("Курс обмена (EUR/RUB):");
			 FromLabel->Text = Convert::ToString("EUR =");
			 ToLabel->Text = Convert::ToString("RUB");
			 ExchRate->Text = Convert::ToString(Rate3);
			 From->Text = "";
			 To->Text = "";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			// SumConvert->Text = Convert::ToString(OperType);
			 switch(OperType){
					case 0: 
						 try { From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)/Rate0*100)/100);}
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 1:
						 try { From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)*Rate1*100)/100); }
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 2:
						 try {From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)/Rate2*100)/100); }
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 3: 
						try { From->Text = SumConvert->Text;
						To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)*Rate3*100)/100); }
						catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						return;
				 }
		 }
private: System::Void SumConvert_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (SumConvert->Text->Length != 0){
				 switch(OperType){
					case 0: 
						 try { From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)/Rate0*100)/100);}
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 1:
						 try { From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)*Rate1*100)/100); }
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 2:
						 try {From->Text = SumConvert->Text;
						 To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)/Rate2*100)/100); }
						 catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						 return;
					case 3: 
						try { From->Text = SumConvert->Text;
						To->Text = Convert::ToString(floor(Convert::ToSingle(SumConvert->Text)*Rate3*100)/100); }
						catch(...){SumConvert->Text = SumConvert->Text->Remove(SumConvert->Text->Length-1,1); SumConvert->SelectionStart = SumConvert->Text->Length; return;}
						return;
				 }
			 } else {
				 From->Text = "";
				 To->Text = "";
			 }
		 }
private: System::Void ExchRate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch(OperType){
					case 0: 
						if (ExchRate->Text->Length > 1){
						 try {Rate0 = Convert::ToDouble(ExchRate->Text);}
						 catch(...){ExchRate->Text = ExchRate->Text->Remove(ExchRate->Text->Length-1,1); ExchRate->SelectionStart = ExchRate->Text->Length; return;}
						 return;
						}
					case 1:
						if (ExchRate->Text->Length > 1){
						 try {Rate1 = Convert::ToDouble(ExchRate->Text);}
						 catch(...){ExchRate->Text = ExchRate->Text->Remove(ExchRate->Text->Length-1,1); ExchRate->SelectionStart = ExchRate->Text->Length; return;}
						 return;
						}
					case 2:
						if (ExchRate->Text->Length > 1){
						 try {Rate2 = Convert::ToDouble(ExchRate->Text);}
						 catch(...){ExchRate->Text = ExchRate->Text->Remove(ExchRate->Text->Length-1,1); ExchRate->SelectionStart = ExchRate->Text->Length; return;}
						 return;
						}
					case 3: 
						if (ExchRate->Text->Length > 1){
						 try {Rate3 = Convert::ToDouble(ExchRate->Text);}
						 catch(...){ExchRate->Text = ExchRate->Text->Remove(ExchRate->Text->Length-1,1); ExchRate->SelectionStart = ExchRate->Text->Length; return;}
						 return;
						}
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}

