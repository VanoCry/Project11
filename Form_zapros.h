#pragma once

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form_zapros
	/// </summary>
	public ref class Form_zapros : public System::Windows::Forms::Form
	{
	public:
		Form_zapros()
		{
			InitializeComponent();
		}
		property DataGridView^ DataGridView1
		{
			DataGridView^ get()
			{
				return dataGridView1;
			}
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form_zapros()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cond;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_valut;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_passport;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_days;
	public: System::Windows::Forms::DataGridView^ dataGridView2;
	private:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ новыйЗапросToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сменитьФонToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton_srok;
	private: System::Windows::Forms::RadioButton^ radioButton_passport;
	private: System::Windows::Forms::RadioButton^ radioButton_date;
	private: System::Windows::Forms::RadioButton^ radioButton_valuta;
	private: System::Windows::Forms::RadioButton^ radioButton_cena;
	private: System::Windows::Forms::RadioButton^ radioButton_cond;
	private: System::Windows::Forms::RadioButton^ radioButton_name;
	private: System::Windows::Forms::RadioButton^ radioButton_number;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_zapros::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cond = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_valut = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_passport = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_days = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->новыйЗапросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сменитьФонToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown3 = (gcnew System::Windows::Forms::DomainUpDown());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton_srok = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_passport = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_date = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_valuta = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cena = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cond = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_name = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_number = (gcnew System::Windows::Forms::RadioButton());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->dataGridView1->Location = System::Drawing::Point(49, 52);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1498, 340);
			this->dataGridView1->TabIndex = 1;
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
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Location = System::Drawing::Point(49, 568);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1498, 363);
			this->dataGridView2->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->HeaderText = L" №";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->FillWeight = 55.89743F;
			this->dataGridViewTextBoxColumn2->HeaderText = L" Наименование товара";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->FillWeight = 20;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Состояние товара";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->FillWeight = 35.89743F;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Оценочная стоимость";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->FillWeight = 15.89743F;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Валюта";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->FillWeight = 20.89743F;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Дата сдачи";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->FillWeight = 25.89743F;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Паспортные данные";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 15.89743F;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Срок хранения";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(45, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Основной список";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(45, 546);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Запрашиваемый список";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Honeydew;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->новыйЗапросToolStripMenuItem,
					this->сменитьФонToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1579, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// новыйЗапросToolStripMenuItem
			// 
			this->новыйЗапросToolStripMenuItem->Name = L"новыйЗапросToolStripMenuItem";
			this->новыйЗапросToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->новыйЗапросToolStripMenuItem->Text = L"Новый запрос";
			// 
			// сменитьФонToolStripMenuItem
			// 
			this->сменитьФонToolStripMenuItem->Name = L"сменитьФонToolStripMenuItem";
			this->сменитьФонToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			this->сменитьФонToolStripMenuItem->Text = L"Сменить фон";
			this->сменитьФонToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_zapros::сменитьФонToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->panel7);
			this->groupBox1->Controls->Add(this->panel6);
			this->groupBox1->Controls->Add(this->panel9);
			this->groupBox1->Controls->Add(this->panel8);
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->domainUpDown3);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->domainUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->domainUpDown1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->radioButton_srok);
			this->groupBox1->Controls->Add(this->radioButton_passport);
			this->groupBox1->Controls->Add(this->radioButton_date);
			this->groupBox1->Controls->Add(this->radioButton_valuta);
			this->groupBox1->Controls->Add(this->radioButton_cena);
			this->groupBox1->Controls->Add(this->radioButton_cond);
			this->groupBox1->Controls->Add(this->radioButton_name);
			this->groupBox1->Controls->Add(this->radioButton_number);
			this->groupBox1->Location = System::Drawing::Point(49, 398);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1498, 145);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Меню фильтров";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(147, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(2, 120);
			this->panel3->TabIndex = 32;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_zapros::panel3_Paint);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(387, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 120);
			this->panel2->TabIndex = 32;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_zapros::panel2_Paint);
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(1239, 22);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(2, 120);
			this->panel7->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(1104, 22);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(2, 120);
			this->panel6->TabIndex = 32;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(757, 22);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(2, 120);
			this->panel4->TabIndex = 32;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(556, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2, 120);
			this->panel1->TabIndex = 32;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown6->Location = System::Drawing::Point(1277, 108);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 22);
			this->numericUpDown6->TabIndex = 31;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown5->Location = System::Drawing::Point(1277, 64);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 22);
			this->numericUpDown5->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1274, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 16);
			this->label11->TabIndex = 29;
			this->label11->Text = L"До";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1274, 45);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"От";
			// 
			// domainUpDown3
			// 
			this->domainUpDown3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->domainUpDown3->Location = System::Drawing::Point(1356, 15);
			this->domainUpDown3->Name = L"domainUpDown3";
			this->domainUpDown3->Size = System::Drawing::Size(83, 22);
			this->domainUpDown3->TabIndex = 27;
			this->domainUpDown3->Text = L"domainUpDown3";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox1->Location = System::Drawing::Point(1124, 57);
			this->maskedTextBox1->Mask = L"000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(109, 22);
			this->maskedTextBox1->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(883, 90);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"До";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(883, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 16);
			this->label7->TabIndex = 24;
			this->label7->Text = L"От";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker2->Location = System::Drawing::Point(886, 109);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 23;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->Location = System::Drawing::Point(886, 62);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 22;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->domainUpDown2->Location = System::Drawing::Point(1003, 20);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(83, 22);
			this->domainUpDown2->TabIndex = 20;
			this->domainUpDown2->Text = L"domainUpDown2";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(575, 86);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(170, 22);
			this->numericUpDown4->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(572, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Сумма ";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(682, 21);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(63, 22);
			this->domainUpDown1->TabIndex = 16;
			this->domainUpDown1->Text = L"domainUpDown1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(399, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Состояние";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(402, 86);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(163, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Наименование";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 22);
			this->textBox1->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"До";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"От";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(16, 108);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 9;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(16, 64);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 8;
			// 
			// radioButton_srok
			// 
			this->radioButton_srok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton_srok->AutoSize = true;
			this->radioButton_srok->Location = System::Drawing::Point(1261, 12);
			this->radioButton_srok->Name = L"radioButton_srok";
			this->radioButton_srok->Size = System::Drawing::Size(89, 36);
			this->radioButton_srok->TabIndex = 7;
			this->radioButton_srok->TabStop = true;
			this->radioButton_srok->Text = L"Срок\nхранения";
			this->radioButton_srok->UseVisualStyleBackColor = true;
			// 
			// radioButton_passport
			// 
			this->radioButton_passport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton_passport->AutoSize = true;
			this->radioButton_passport->Location = System::Drawing::Point(1124, 15);
			this->radioButton_passport->Name = L"radioButton_passport";
			this->radioButton_passport->Size = System::Drawing::Size(109, 36);
			this->radioButton_passport->TabIndex = 6;
			this->radioButton_passport->TabStop = true;
			this->radioButton_passport->Text = L"Паспортные\nданные";
			this->radioButton_passport->UseVisualStyleBackColor = true;
			// 
			// radioButton_date
			// 
			this->radioButton_date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton_date->AutoSize = true;
			this->radioButton_date->Location = System::Drawing::Point(886, 22);
			this->radioButton_date->Name = L"radioButton_date";
			this->radioButton_date->Size = System::Drawing::Size(102, 20);
			this->radioButton_date->TabIndex = 5;
			this->radioButton_date->TabStop = true;
			this->radioButton_date->Text = L"Дата сдачи";
			this->radioButton_date->UseVisualStyleBackColor = true;
			// 
			// radioButton_valuta
			// 
			this->radioButton_valuta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton_valuta->AutoSize = true;
			this->radioButton_valuta->Location = System::Drawing::Point(778, 22);
			this->radioButton_valuta->Name = L"radioButton_valuta";
			this->radioButton_valuta->Size = System::Drawing::Size(78, 20);
			this->radioButton_valuta->TabIndex = 4;
			this->radioButton_valuta->TabStop = true;
			this->radioButton_valuta->Text = L"Валюта";
			this->radioButton_valuta->UseVisualStyleBackColor = true;
			// 
			// radioButton_cena
			// 
			this->radioButton_cena->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton_cena->AutoSize = true;
			this->radioButton_cena->Location = System::Drawing::Point(575, 14);
			this->radioButton_cena->Name = L"radioButton_cena";
			this->radioButton_cena->Size = System::Drawing::Size(101, 36);
			this->radioButton_cena->TabIndex = 3;
			this->radioButton_cena->TabStop = true;
			this->radioButton_cena->Text = L"Оценочная\nстоимость";
			this->radioButton_cena->UseVisualStyleBackColor = true;
			// 
			// radioButton_cond
			// 
			this->radioButton_cond->AutoSize = true;
			this->radioButton_cond->Location = System::Drawing::Point(402, 22);
			this->radioButton_cond->Name = L"radioButton_cond";
			this->radioButton_cond->Size = System::Drawing::Size(148, 20);
			this->radioButton_cond->TabIndex = 2;
			this->radioButton_cond->TabStop = true;
			this->radioButton_cond->Text = L"Состояние товара";
			this->radioButton_cond->UseVisualStyleBackColor = true;
			// 
			// radioButton_name
			// 
			this->radioButton_name->AutoSize = true;
			this->radioButton_name->Location = System::Drawing::Point(166, 21);
			this->radioButton_name->Name = L"radioButton_name";
			this->radioButton_name->Size = System::Drawing::Size(127, 20);
			this->radioButton_name->TabIndex = 1;
			this->radioButton_name->TabStop = true;
			this->radioButton_name->Text = L"Наименование";
			this->radioButton_name->UseVisualStyleBackColor = true;
			// 
			// radioButton_number
			// 
			this->radioButton_number->AutoSize = true;
			this->radioButton_number->Location = System::Drawing::Point(16, 22);
			this->radioButton_number->Name = L"radioButton_number";
			this->radioButton_number->Size = System::Drawing::Size(71, 20);
			this->radioButton_number->TabIndex = 0;
			this->radioButton_number->TabStop = true;
			this->radioButton_number->Text = L"Номер";
			this->radioButton_number->UseVisualStyleBackColor = true;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Location = System::Drawing::Point(757, 22);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(2, 120);
			this->panel8->TabIndex = 32;
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(870, 22);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(2, 120);
			this->panel9->TabIndex = 32;
			// 
			// Form_zapros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1579, 953);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form_zapros";
			this->Text = L"Form_zapros";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form_zapros::Form_zapros_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_zapros_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void сменитьФонToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF"; // Фильтр только для изображений
	openFileDialog1->Title = "Выберите изображение";
	openFileDialog1->ShowDialog();
	System::String^ filePath = openFileDialog1->FileName;
	this->BackgroundImage = Image::FromFile(filePath);
}



private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

};
}
