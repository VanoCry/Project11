#pragma once
#include <string.h>
namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;










	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_add;

	private: System::Windows::Forms::TextBox^ textBox_add_name;















	private: System::Windows::Forms::ToolStripMenuItem^ открытьФайлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ запросToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ сменитьЗадниToolStripMenuItem;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox_add;


	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сменитьФонToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_add_cond;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_add_cena;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button1;






















private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_add_passport;
private: System::Windows::Forms::NumericUpDown^ numericUpDown_add_srok;





















private: System::Windows::Forms::Label^ label_podskazka_text;

private: System::Windows::Forms::Label^ label_podskazka;
private: System::Windows::Forms::Button^ button_redact;
private: System::Windows::Forms::Label^ label_numstrok;

private: System::Windows::Forms::NumericUpDown^ numericUpDown_numstrok;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cond;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cost;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_valut;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_date;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_passport;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_days;















































































































































	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cond = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_valut = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_passport = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_days = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->открытьФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сменитьФонToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker_add = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_add_name = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->сменитьЗадниToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox_add = (gcnew System::Windows::Forms::GroupBox());
			this->label_numstrok = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_numstrok = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_redact = (gcnew System::Windows::Forms::Button());
			this->label_podskazka_text = (gcnew System::Windows::Forms::Label());
			this->label_podskazka = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_add_srok = (gcnew System::Windows::Forms::NumericUpDown());
			this->maskedTextBox_add_passport = (gcnew System::Windows::Forms::MaskedTextBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->numericUpDown_add_cena = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_add_cond = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->groupBox_add->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_numstrok))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_srok))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_cena))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_cond))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column_number,
					this->Column_name, this->Column_cond, this->Column_cost, this->Column_valut, this->Column_date, this->Column_passport, this->Column_days
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(92, 43);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1397, 495);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// Column_number
			// 
			this->Column_number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_number->HeaderText = L" №";
			this->Column_number->MinimumWidth = 6;
			this->Column_number->Name = L"Column_number";
			this->Column_number->ReadOnly = true;
			this->Column_number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_number->Width = 70;
			// 
			// Column_name
			// 
			this->Column_name->FillWeight = 55.89743F;
			this->Column_name->HeaderText = L" Наименование товара";
			this->Column_name->MinimumWidth = 6;
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_cond
			// 
			this->Column_cond->FillWeight = 20;
			this->Column_cond->HeaderText = L"Состояние товара";
			this->Column_cond->MinimumWidth = 6;
			this->Column_cond->Name = L"Column_cond";
			this->Column_cond->ReadOnly = true;
			// 
			// Column_cost
			// 
			this->Column_cost->FillWeight = 35.89743F;
			this->Column_cost->HeaderText = L"Оценочная стоимость";
			this->Column_cost->MinimumWidth = 6;
			this->Column_cost->Name = L"Column_cost";
			this->Column_cost->ReadOnly = true;
			// 
			// Column_valut
			// 
			this->Column_valut->FillWeight = 15.89743F;
			this->Column_valut->HeaderText = L"Валюта";
			this->Column_valut->MinimumWidth = 6;
			this->Column_valut->Name = L"Column_valut";
			this->Column_valut->ReadOnly = true;
			// 
			// Column_date
			// 
			this->Column_date->FillWeight = 20.89743F;
			this->Column_date->HeaderText = L"Дата сдачи";
			this->Column_date->MinimumWidth = 6;
			this->Column_date->Name = L"Column_date";
			this->Column_date->ReadOnly = true;
			// 
			// Column_passport
			// 
			this->Column_passport->FillWeight = 25.89743F;
			this->Column_passport->HeaderText = L"Паспортные данные";
			this->Column_passport->MinimumWidth = 6;
			this->Column_passport->Name = L"Column_passport";
			this->Column_passport->ReadOnly = true;
			// 
			// Column_days
			// 
			this->Column_days->FillWeight = 15.89743F;
			this->Column_days->HeaderText = L"Срок хранения";
			this->Column_days->MinimumWidth = 6;
			this->Column_days->Name = L"Column_days";
			this->Column_days->ReadOnly = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьФайлToolStripMenuItem,
					this->запросToolStripMenuItem, this->сменитьФонToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1579, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// открытьФайлToolStripMenuItem
			// 
			this->открытьФайлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьToolStripMenuItem,
					this->открытьToolStripMenuItem
			});
			this->открытьФайлToolStripMenuItem->Name = L"открытьФайлToolStripMenuItem";
			this->открытьФайлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->открытьФайлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// запросToolStripMenuItem
			// 
			this->запросToolStripMenuItem->Name = L"запросToolStripMenuItem";
			this->запросToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->запросToolStripMenuItem->Text = L"Запрос";
			// 
			// сменитьФонToolStripMenuItem
			// 
			this->сменитьФонToolStripMenuItem->Name = L"сменитьФонToolStripMenuItem";
			this->сменитьФонToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			this->сменитьФонToolStripMenuItem->Text = L"Сменить фон";
			this->сменитьФонToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сменитьФонToolStripMenuItem_Click);
			// 
			// button_add
			// 
			this->button_add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_add.BackgroundImage")));
			this->button_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_add->Location = System::Drawing::Point(916, 144);
			this->button_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(75, 69);
			this->button_add->TabIndex = 2;
			this->toolTip1->SetToolTip(this->button_add, L"Добавить товар");
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// dateTimePicker_add
			// 
			this->dateTimePicker_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker_add->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker_add->Location = System::Drawing::Point(329, 52);
			this->dateTimePicker_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker_add->Name = L"dateTimePicker_add";
			this->dateTimePicker_add->Size = System::Drawing::Size(213, 30);
			this->dateTimePicker_add->TabIndex = 13;
			this->dateTimePicker_add->Enter += gcnew System::EventHandler(this, &MyForm::dateTimePicker_add_MouseEnter);
			// 
			// textBox_add_name
			// 
			this->textBox_add_name->BackColor = System::Drawing::Color::White;
			this->textBox_add_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_add_name->Location = System::Drawing::Point(21, 53);
			this->textBox_add_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_add_name->Name = L"textBox_add_name";
			this->textBox_add_name->Size = System::Drawing::Size(290, 30);
			this->textBox_add_name->TabIndex = 7;
			this->textBox_add_name->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->сменитьЗадниToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(229, 28);
			// 
			// сменитьЗадниToolStripMenuItem
			// 
			this->сменитьЗадниToolStripMenuItem->Name = L"сменитьЗадниToolStripMenuItem";
			this->сменитьЗадниToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->сменитьЗадниToolStripMenuItem->Text = L" Сменить задний фон";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1347, 567);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 60);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Добавить строку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox_add
			// 
			this->groupBox_add->BackColor = System::Drawing::Color::PaleTurquoise;
			this->groupBox_add->Controls->Add(this->label_numstrok);
			this->groupBox_add->Controls->Add(this->numericUpDown_numstrok);
			this->groupBox_add->Controls->Add(this->button_redact);
			this->groupBox_add->Controls->Add(this->label_podskazka_text);
			this->groupBox_add->Controls->Add(this->label_podskazka);
			this->groupBox_add->Controls->Add(this->numericUpDown_add_srok);
			this->groupBox_add->Controls->Add(this->maskedTextBox_add_passport);
			this->groupBox_add->Controls->Add(this->domainUpDown1);
			this->groupBox_add->Controls->Add(this->numericUpDown_add_cena);
			this->groupBox_add->Controls->Add(this->label11);
			this->groupBox_add->Controls->Add(this->label10);
			this->groupBox_add->Controls->Add(this->label4);
			this->groupBox_add->Controls->Add(this->label9);
			this->groupBox_add->Controls->Add(this->label2);
			this->groupBox_add->Controls->Add(this->label1);
			this->groupBox_add->Controls->Add(this->numericUpDown_add_cond);
			this->groupBox_add->Controls->Add(this->textBox_add_name);
			this->groupBox_add->Controls->Add(this->button_add);
			this->groupBox_add->Controls->Add(this->dateTimePicker_add);
			this->groupBox_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_add->Location = System::Drawing::Point(92, 557);
			this->groupBox_add->Margin = System::Windows::Forms::Padding(4);
			this->groupBox_add->Name = L"groupBox_add";
			this->groupBox_add->Padding = System::Windows::Forms::Padding(4);
			this->groupBox_add->Size = System::Drawing::Size(1008, 239);
			this->groupBox_add->TabIndex = 18;
			this->groupBox_add->TabStop = false;
			this->groupBox_add->Text = L"Добавить товар";
			// 
			// label_numstrok
			// 
			this->label_numstrok->AutoSize = true;
			this->label_numstrok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_numstrok->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_numstrok->ImageKey = L"(отсутствует)";
			this->label_numstrok->Location = System::Drawing::Point(560, 154);
			this->label_numstrok->Name = L"label_numstrok";
			this->label_numstrok->Size = System::Drawing::Size(157, 25);
			this->label_numstrok->TabIndex = 30;
			this->label_numstrok->Text = L"Номер строки";
			this->label_numstrok->Visible = false;
			// 
			// numericUpDown_numstrok
			// 
			this->numericUpDown_numstrok->BackColor = System::Drawing::Color::SkyBlue;
			this->numericUpDown_numstrok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_numstrok->Location = System::Drawing::Point(565, 183);
			this->numericUpDown_numstrok->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 390, 0, 0, 0 });
			this->numericUpDown_numstrok->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_numstrok->Name = L"numericUpDown_numstrok";
			this->numericUpDown_numstrok->Size = System::Drawing::Size(213, 30);
			this->numericUpDown_numstrok->TabIndex = 29;
			this->numericUpDown_numstrok->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_numstrok->Visible = false;
			this->numericUpDown_numstrok->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_numstrok_ValueChanged);
			this->numericUpDown_numstrok->Enter += gcnew System::EventHandler(this, &MyForm::numericUpDown_numstrok_Enter);
			// 
			// button_redact
			// 
			this->button_redact->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_redact.BackgroundImage")));
			this->button_redact->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_redact->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_redact->Location = System::Drawing::Point(916, 144);
			this->button_redact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button_redact->Name = L"button_redact";
			this->button_redact->Size = System::Drawing::Size(75, 69);
			this->button_redact->TabIndex = 28;
			this->toolTip1->SetToolTip(this->button_redact, L"Редактировать товар");
			this->button_redact->UseVisualStyleBackColor = true;
			this->button_redact->Visible = false;
			this->button_redact->Click += gcnew System::EventHandler(this, &MyForm::button_redact_Click);
			// 
			// label_podskazka_text
			// 
			this->label_podskazka_text->AutoSize = true;
			this->label_podskazka_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_podskazka_text->Location = System::Drawing::Point(561, 78);
			this->label_podskazka_text->Name = L"label_podskazka_text";
			this->label_podskazka_text->Size = System::Drawing::Size(332, 20);
			this->label_podskazka_text->TabIndex = 27;
			this->label_podskazka_text->Text = L"Вы попали в поле добавления строки.";
			// 
			// label_podskazka
			// 
			this->label_podskazka->AutoSize = true;
			this->label_podskazka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_podskazka->Location = System::Drawing::Point(561, 53);
			this->label_podskazka->Name = L"label_podskazka";
			this->label_podskazka->Size = System::Drawing::Size(109, 20);
			this->label_podskazka->TabIndex = 26;
			this->label_podskazka->Text = L"Подсказка";
			// 
			// numericUpDown_add_srok
			// 
			this->numericUpDown_add_srok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_add_srok->Location = System::Drawing::Point(329, 182);
			this->numericUpDown_add_srok->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 390, 0, 0, 0 });
			this->numericUpDown_add_srok->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_add_srok->Name = L"numericUpDown_add_srok";
			this->numericUpDown_add_srok->Size = System::Drawing::Size(213, 30);
			this->numericUpDown_add_srok->TabIndex = 25;
			this->numericUpDown_add_srok->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_add_srok->Enter += gcnew System::EventHandler(this, &MyForm::numericUpDown_add_srok_ValueChanged);
			// 
			// maskedTextBox_add_passport
			// 
			this->maskedTextBox_add_passport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_add_passport->Location = System::Drawing::Point(329, 116);
			this->maskedTextBox_add_passport->Mask = L"000000";
			this->maskedTextBox_add_passport->Name = L"maskedTextBox_add_passport";
			this->maskedTextBox_add_passport->Size = System::Drawing::Size(213, 30);
			this->maskedTextBox_add_passport->TabIndex = 24;
			this->maskedTextBox_add_passport->ValidatingType = System::Int32::typeid;
			this->maskedTextBox_add_passport->Enter += gcnew System::EventHandler(this, &MyForm::maskedTextBox_add_passport_MaskInputRejected);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->domainUpDown1->Items->Add(L"₽");
			this->domainUpDown1->Items->Add(L"$");
			this->domainUpDown1->Items->Add(L"£");
			this->domainUpDown1->Items->Add(L"€");
			this->domainUpDown1->Location = System::Drawing::Point(254, 183);
			this->domainUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(58, 30);
			this->domainUpDown1->TabIndex = 23;
			this->domainUpDown1->Text = L"₽";
			this->domainUpDown1->Enter += gcnew System::EventHandler(this, &MyForm::numericUpDown_add_cena_ValueChanged);
			// 
			// numericUpDown_add_cena
			// 
			this->numericUpDown_add_cena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_add_cena->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_add_cena->Location = System::Drawing::Point(20, 183);
			this->numericUpDown_add_cena->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown_add_cena->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250000, 0, 0, 0 });
			this->numericUpDown_add_cena->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown_add_cena->Name = L"numericUpDown_add_cena";
			this->numericUpDown_add_cena->Size = System::Drawing::Size(226, 30);
			this->numericUpDown_add_cena->TabIndex = 22;
			this->numericUpDown_add_cena->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_add_cena->Enter += gcnew System::EventHandler(this, &MyForm::numericUpDown_add_cena_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(325, 158);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Срок хранения";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(325, 92);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Номер паспорта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 159);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Оценочная стоимость";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(17, 93);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Состояние товара";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(325, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Дата сдачи";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Наименование товара";
			// 
			// numericUpDown_add_cond
			// 
			this->numericUpDown_add_cond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_add_cond->Location = System::Drawing::Point(21, 117);
			this->numericUpDown_add_cond->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown_add_cond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown_add_cond->Name = L"numericUpDown_add_cond";
			this->numericUpDown_add_cond->Size = System::Drawing::Size(292, 30);
			this->numericUpDown_add_cond->TabIndex = 15;
			this->numericUpDown_add_cond->Enter += gcnew System::EventHandler(this, &MyForm::numericUpDown_add_cond_ValueChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1347, 635);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 60);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Редактировать строку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1579, 823);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox_add);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->groupBox_add->ResumeLayout(false);
			this->groupBox_add->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_numstrok))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_srok))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_cena))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_add_cond))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = dataGridView1->Rows->Count;
	dataGridView1->Rows->Add(Convert::ToString(++i), textBox_add_name->Text, numericUpDown_add_cond->Text, numericUpDown_add_cena->Text, domainUpDown1->Text, dateTimePicker_add->Text, maskedTextBox_add_passport->Text, numericUpDown_add_srok->Text);
	label_podskazka->Text = "Подсказка";
	label_podskazka_text->Text = "Строка товара успешно добавлена!";
}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox_add->Text = "Добавить товар";
	button_add->Visible = true;
	button_redact->Visible = false;
	label_podskazka->Text = "Подсказка";
	label_podskazka_text->Text = "Вы попали в поле добавления строки.";
	numericUpDown_numstrok->Visible = false;
	label_numstrok->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->Rows->Count != 0) {
		groupBox_add->Text = "Редактировать товар";
		button_add->Visible = false;
		button_redact->Visible = true;
		label_podskazka->Text = "Подсказка";
		label_podskazka_text->Text = "Вы попали в поле редактирования строки.\nCначала выберите номер строки!";
		numericUpDown_numstrok->Visible = true;
		label_numstrok->Visible = true;
		numericUpDown_numstrok->Maximum = dataGridView1->Rows->Count;
		numericUpDown_numstrok->Value = dataGridView1->Rows->Count;
	}
	else label_podskazka_text->Text = "Таблица пуста.\nРедактировать нечего.";
}

private: System::Void сменитьФонToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF"; // Фильтр только для изображений
	openFileDialog1->Title = "Выберите изображение";
	openFileDialog1->ShowDialog();
	System::String^ filePath = openFileDialog1->FileName;
	this->BackgroundImage = Image::FromFile(filePath);
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*"; // Фильтр только для .txt
	saveFileDialog1->Title = "Сохранить как";
	
	
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::String^ filePath = saveFileDialog1->FileName;
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath);
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				sw->Write(dataGridView1->Rows[i]->Cells[j]->Value->ToString() + "\t");
			}
			sw->WriteLine("");
		}
		sw->Close();
		MessageBox::Show("Файл успешно сохранен");
	}
}
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::String^ filePath = openFileDialog1->FileName;
		dataGridView1->Rows->Clear();
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filePath);
		while (!sr->EndOfStream) {
			String^ line = sr->ReadLine();
			array<String^>^ values = line->Split('\t');
			dataGridView1->Rows->Add(values);
		}
		sr->Close();
		MessageBox::Show("Файл успешно загружен");
	}
}

private: System::Void numericUpDown_add_cond_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Состояние товара";
	label_podskazka_text->Text = "0 - Плохое\n1 - Среднее\n2 - Отличное";
}
private: System::Void numericUpDown_add_cena_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Оценочная стоимость";
	label_podskazka_text->Text = "от 0 до 250000 единиц\nТакже нужно выбрать\nнужную валюту";
}
private: System::Void numericUpDown_add_srok_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Срок хранения";
	label_podskazka_text->Text = "от 1 до 390 дней";
}

private: System::Void dateTimePicker_add_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Дата сдачи ";
	label_podskazka_text->Text = "Здесь должна быть\nуказана дата сдачи товара";
}

private: System::Void maskedTextBox_add_passport_MaskInputRejected(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Номер паспорта";
	label_podskazka_text->Text = "Поддерживает введение\nтолько цифр \n(до шестизначного значения)";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Наименование товара";
	label_podskazka_text->Text = "";
}

private: System::Void numericUpDown_numstrok_Enter(System::Object^ sender, System::EventArgs^ e) {
	label_podskazka->Text = "Подсказка";
	label_podskazka_text->Text = "Сначала выберите номер строки!";
}

private: System::Void numericUpDown_numstrok_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numericUpDown_numstrok->Value != 0) {
		textBox_add_name->Text = System::Convert::ToString(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[1]->Value);
		numericUpDown_add_cond->Value = System::Convert::ToInt32(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[2]->Value);
		dateTimePicker_add->Text = System::Convert::ToString(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[5]->Value);
		maskedTextBox_add_passport->Text = System::Convert::ToString(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[6]->Value);
		numericUpDown_add_srok->Value = System::Convert::ToInt32(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[7]->Value);
		domainUpDown1->Text = System::Convert::ToString(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[4]->Value);
		numericUpDown_add_cena->Value = System::Convert::ToInt32(dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[3]->Value);
	}
}
private: System::Void button_redact_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[1]->Value = textBox_add_name->Text;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[2]->Value = numericUpDown_add_cond->Value;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[3]->Value = numericUpDown_add_cena->Value;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[4]->Value = domainUpDown1->Text;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[5]->Value = dateTimePicker_add->Text;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[6]->Value = maskedTextBox_add_passport->Text;
	dataGridView1->Rows[System::Convert::ToInt32(numericUpDown_numstrok->Value) - 1]->Cells[7]->Value = numericUpDown_add_srok->Value;
	label_podskazka->Text = "Подсказка";
	label_podskazka_text->Text = "Данные строки успешно изменены!";
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Получаем индекс выбранной строки
	int rowIndex = e->RowIndex;

	// Получаем значение необходимой ячейки
	String^ cellValue = dataGridView1->Rows[rowIndex]->Cells[0]->Value->ToString();

	// Передаём значение в TextBox
	numericUpDown_numstrok->Value = System::Convert::ToInt32(cellValue);
}
};
}
