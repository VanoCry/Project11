#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Счёт : 0";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label8, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label9, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label12, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label13, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label14, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label15, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label16, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label17, 3, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 68);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(462, 402);
			this->tableLayoutPanel1->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(28);
			this->label2->Size = System::Drawing::Size(115, 100);
			this->label2->TabIndex = 0;
			this->label2->Text = L"1234";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &game::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(115, 0);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(28);
			this->label3->Size = System::Drawing::Size(115, 100);
			this->label3->TabIndex = 1;
			this->label3->Text = L"1234";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &game::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(230, 0);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(28);
			this->label4->Size = System::Drawing::Size(115, 100);
			this->label4->TabIndex = 2;
			this->label4->Text = L"1234";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &game::label4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(345, 0);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(28);
			this->label5->Size = System::Drawing::Size(117, 100);
			this->label5->TabIndex = 3;
			this->label5->Text = L"1234";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &game::label5_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(0, 100);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(28);
			this->label6->Size = System::Drawing::Size(115, 100);
			this->label6->TabIndex = 4;
			this->label6->Text = L"1234";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &game::label6_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(115, 100);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(28);
			this->label7->Size = System::Drawing::Size(115, 100);
			this->label7->TabIndex = 5;
			this->label7->Text = L"1234";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &game::label7_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(230, 100);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(28);
			this->label8->Size = System::Drawing::Size(115, 100);
			this->label8->TabIndex = 6;
			this->label8->Text = L"1234";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &game::label8_Click);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(345, 100);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(28);
			this->label9->Size = System::Drawing::Size(117, 100);
			this->label9->TabIndex = 7;
			this->label9->Text = L"1234";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &game::label9_Click);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(0, 200);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(28);
			this->label10->Size = System::Drawing::Size(115, 100);
			this->label10->TabIndex = 8;
			this->label10->Text = L"1234";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &game::label10_Click);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(115, 200);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(28);
			this->label11->Size = System::Drawing::Size(115, 100);
			this->label11->TabIndex = 9;
			this->label11->Text = L"1234";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &game::label11_Click);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(230, 200);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(28);
			this->label12->Size = System::Drawing::Size(115, 100);
			this->label12->TabIndex = 10;
			this->label12->Text = L"1234";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label12->Click += gcnew System::EventHandler(this, &game::label12_Click);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(345, 200);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(28);
			this->label13->Size = System::Drawing::Size(117, 100);
			this->label13->TabIndex = 11;
			this->label13->Text = L"1234";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label13->Click += gcnew System::EventHandler(this, &game::label13_Click);
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(0, 300);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(28);
			this->label14->Size = System::Drawing::Size(115, 102);
			this->label14->TabIndex = 12;
			this->label14->Text = L"1234";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label14->Click += gcnew System::EventHandler(this, &game::label14_Click);
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(115, 300);
			this->label15->Margin = System::Windows::Forms::Padding(0);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(28);
			this->label15->Size = System::Drawing::Size(115, 102);
			this->label15->TabIndex = 13;
			this->label15->Text = L"1234";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label15->Click += gcnew System::EventHandler(this, &game::label15_Click);
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label16->Location = System::Drawing::Point(230, 300);
			this->label16->Margin = System::Windows::Forms::Padding(0);
			this->label16->Name = L"label16";
			this->label16->Padding = System::Windows::Forms::Padding(28);
			this->label16->Size = System::Drawing::Size(115, 102);
			this->label16->TabIndex = 14;
			this->label16->Text = L"1234";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label16->Click += gcnew System::EventHandler(this, &game::label16_Click);
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(345, 300);
			this->label17->Margin = System::Windows::Forms::Padding(0);
			this->label17->Name = L"label17";
			this->label17->Padding = System::Windows::Forms::Padding(28);
			this->label17->Size = System::Drawing::Size(117, 102);
			this->label17->TabIndex = 15;
			this->label17->Text = L"1234";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label17->Click += gcnew System::EventHandler(this, &game::label17_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(486, 492);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"2048";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &game::game_KeyDown);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool p = false;
		const int N = 4;
		int score = 0;
		static array<int, 2>^ matrix = gcnew array<int, 2>(4, 4);
		int upKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all colums
			{
				for (int j = 0; j < N; j++) // go through all rows
				{
					if (matrix[j, i] == 0) // found first free cell
					{
						for (int k = j + 1; k < N; k++) // take a look for not free cells down
						{
							if (matrix[k, i] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[j, i] = matrix[k, i];
									matrix[k, i] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = 0; j < N - 1; j++)
				{
					if (matrix[j, i] == matrix[j + 1, i] && matrix[j, i] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[j, i] *= 2;
							score += matrix[j, i];
							matrix[j + 1, i] = 0;
							for (int k = j + 2; k < N; k++) // take up elements in down
							{
								matrix[k - 1, i] = matrix[k, i];
								matrix[k, i] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}

		int downKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all colums
			{
				for (int j = N - 1; j >= 0; j--) // go through all rows from down to up
				{
					if (matrix[j, i] == 0) // found first free cell
					{
						for (int k = j - 1; k >= 0; k--) // take a look for not free cells up
						{
							if (matrix[k, i] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[j, i] = matrix[k, i];
									matrix[k, i] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = N - 1; j >= 1; j--)
				{
					if (matrix[j, i] == matrix[j - 1, i] && matrix[j, i] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[j, i] *= 2;
							score += matrix[j, i];
							matrix[j - 1, i] = 0;
							for (int k = j - 2; k >= 0; k--) // take up elements in down
							{
								matrix[k + 1, i] = matrix[k, i];
								matrix[k, i] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}

		int leftKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all rows
			{
				for (int j = 0; j < N; j++) // go through all columns
				{
					if (matrix[i, j] == 0) // found first free cell
					{
						for (int k = j + 1; k < N; k++) // take a look for not free cells on the right
						{
							if (matrix[i, k] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[i, j] = matrix[i, k];
									matrix[i, k] = 0;
								}
								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = 0; j < N - 1; j++)
				{
					if (matrix[i, j] == matrix[i, j + 1] && matrix[i, j] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[i, j] *= 2;
							score += matrix[i, j];
							matrix[i, j + 1] = 0;
							for (int k = j + 2; k < N; k++) // take up elements in down
							{
								matrix[i, k - 1] = matrix[i, k];
								matrix[i, k] = 0;
							}
						}
					}
				}
			}
			return didAction;
		}


		int rightKeyPressed(cli::array<int, 2>^, int onlyCheck)
		{
			int didAction = 0;
			for (int i = 0; i < N; i++) //do algorythm for all row
			{
				for (int j = N - 1; j >= 0; j--) // go through all colums from right to left
				{
					if (matrix[i, j] == 0) // found first free cell
					{
						for (int k = j - 1; k >= 0; k--) // take a look for not free cells left
						{
							if (matrix[i, k] != 0) // found not free cell
							{
								// swap it with free
								if (!onlyCheck)
								{
									matrix[i, j] = matrix[i, k];
									matrix[i, k] = 0;
								}

								didAction = 1;
								break;
							}
						}
					}
				}
				// sum same neibour elements
				for (int j = N - 1; j >= 1; j--)
				{
					if (matrix[i, j] == matrix[i, j - 1] && matrix[i, j] != 0)
					{
						didAction = 1;
						if (!onlyCheck)
						{
							matrix[i, j] *= 2;
							score += matrix[i, j];
							matrix[i, j - 1] = 0;
							for (int k = j - 2; k >= 0; k--) // take up elements in down
							{
								matrix[i, k + 1] = matrix[i, k];
								matrix[i, k] = 0;
							}
						}

					}
				}
			}
			return didAction;
		}

		void printMatix(cli::array<int, 2>^)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					Control^ c = tableLayoutPanel1->GetControlFromPosition(j, i);
					if (matrix[i, j] != 0)
					{
						c->Text = matrix[i, j].ToString();
						if (matrix[i, j] <= 4)
							c->ForeColor = ColorTranslator::FromHtml("#776e65");
						else c->ForeColor = ColorTranslator::FromHtml("#f9f6f2");
						if (matrix[i, j] == 2)
							c->BackColor = ColorTranslator::FromHtml("#eee4da");
						if (matrix[i, j] == 4)
							c->BackColor = ColorTranslator::FromHtml("#ede0c8");
						if (matrix[i, j] == 8)
							c->BackColor = ColorTranslator::FromHtml("#f2b179");
						if (matrix[i, j] == 16)
							c->BackColor = ColorTranslator::FromHtml("#f59563");
						if (matrix[i, j] == 32)
							c->BackColor = ColorTranslator::FromHtml("#f67c5f");
						if (matrix[i, j] == 64)
							c->BackColor = ColorTranslator::FromHtml("#f65e3b");
						if (matrix[i, j] >= 128)
							c->BackColor = ColorTranslator::FromHtml("#edcf72");
					}

					else
					{
						c->Text = "";
						c->BackColor = ColorTranslator::FromHtml("#ffda8a");
					}

					label1->Text = "Счёт : " + score.ToString();
				}
			}

		}
		void spawnNewItem(cli::array<int, 2>^)
		{
			int r1, r2;
			do {
				r1 = rand() % N;
				r2 = rand() % N;
			} while (matrix[r1, r2] != 0);

			matrix[r1, r2] = 2;
		}

		int userLost(cli::array<int, 2>^)
		{
			if (!upKeyPressed(matrix, 1) && !downKeyPressed(matrix, 1) && !leftKeyPressed(matrix, 1) && !rightKeyPressed(matrix, 1))
				return 1;
			else return 0;
		}

		void startNewGame(cli::array<int, 2>^)
		{
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
					matrix[i, j] = 0;
			spawnNewItem(matrix);
			printMatix(matrix);
			score = 0;
		}

	private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {

		srand(time(NULL));
		startNewGame(matrix);
		this->BackColor = ColorTranslator::FromHtml("#ffda8a");

	}
	private: System::Void game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (userLost(matrix))
		{
			String^ message = "Хотите сыграть снова?";
			String^ caption = "Вы проиграли :(";
			MessageBoxButtons buttons = MessageBoxButtons::YesNo;
			System::Windows::Forms::DialogResult result = MessageBox::Show(message, caption, buttons);

			if (result == System::Windows::Forms::DialogResult::Yes)
				startNewGame(matrix);
			if (result == System::Windows::Forms::DialogResult::No)
				this->Hide();
		}

		int didAction = 0;
		switch (e->KeyCode)
		{
		case Keys::Up: didAction = upKeyPressed(matrix, 0); break;
		case Keys::Down: didAction = downKeyPressed(matrix, 0); break;
		case Keys::Left: didAction = leftKeyPressed(matrix, 0); break;
		case Keys::Right: didAction = rightKeyPressed(matrix, 0); break;
		};
		if (didAction)
			spawnNewItem(matrix);


		printMatix(matrix);
	}

	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}