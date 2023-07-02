#pragma once

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form_zapros
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
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;








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

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button_zapros;
	private: System::Windows::Forms::CheckBox^ checkBox_������;
	private: System::Windows::Forms::CheckBox^ checkBox_srok;
private: System::Windows::Forms::CheckBox^ checkBox_passport;



	private: System::Windows::Forms::CheckBox^ checkBox_date;
	private: System::Windows::Forms::CheckBox^ checkBox_cena;
	private: System::Windows::Forms::CheckBox^ checkBox_cond;
	private: System::Windows::Forms::CheckBox^ checkBox_valuta;
	private: System::Windows::Forms::CheckBox^ checkBox_name;
private: System::Windows::Forms::CheckBox^ checkBox_con;

private: System::Windows::Forms::CheckBox^ checkBox_number;

private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
private: System::Windows::Forms::Label^ label12;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox_srok = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_passport = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_date = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cena = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_con = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cond = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_valuta = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_number = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_name = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_������ = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button_zapros = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
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
			this->dataGridView1->Size = System::Drawing::Size(1498, 329);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column_number
			// 
			this->Column_number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column_number->HeaderText = L" �";
			this->Column_number->MinimumWidth = 6;
			this->Column_number->Name = L"Column_number";
			this->Column_number->ReadOnly = true;
			this->Column_number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_number->Width = 70;
			// 
			// Column_name
			// 
			this->Column_name->FillWeight = 55.89743F;
			this->Column_name->HeaderText = L" ������������ ������";
			this->Column_name->MinimumWidth = 6;
			this->Column_name->Name = L"Column_name";
			this->Column_name->ReadOnly = true;
			// 
			// Column_cond
			// 
			this->Column_cond->FillWeight = 20;
			this->Column_cond->HeaderText = L"��������� ������";
			this->Column_cond->MinimumWidth = 6;
			this->Column_cond->Name = L"Column_cond";
			this->Column_cond->ReadOnly = true;
			// 
			// Column_cost
			// 
			this->Column_cost->FillWeight = 35.89743F;
			this->Column_cost->HeaderText = L"��������� ���������";
			this->Column_cost->MinimumWidth = 6;
			this->Column_cost->Name = L"Column_cost";
			this->Column_cost->ReadOnly = true;
			// 
			// Column_valut
			// 
			this->Column_valut->FillWeight = 15.89743F;
			this->Column_valut->HeaderText = L"������";
			this->Column_valut->MinimumWidth = 6;
			this->Column_valut->Name = L"Column_valut";
			this->Column_valut->ReadOnly = true;
			// 
			// Column_date
			// 
			this->Column_date->FillWeight = 20.89743F;
			this->Column_date->HeaderText = L"���� �����";
			this->Column_date->MinimumWidth = 6;
			this->Column_date->Name = L"Column_date";
			this->Column_date->ReadOnly = true;
			// 
			// Column_passport
			// 
			this->Column_passport->FillWeight = 25.89743F;
			this->Column_passport->HeaderText = L"���������� ������";
			this->Column_passport->MinimumWidth = 6;
			this->Column_passport->Name = L"Column_passport";
			this->Column_passport->ReadOnly = true;
			// 
			// Column_days
			// 
			this->Column_days->FillWeight = 15.89743F;
			this->Column_days->HeaderText = L"���� ��������";
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
			this->dataGridView2->Location = System::Drawing::Point(49, 580);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1498, 351);
			this->dataGridView2->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->HeaderText = L" �";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewTextBoxColumn1->Width = 70;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->FillWeight = 55.89743F;
			this->dataGridViewTextBoxColumn2->HeaderText = L" ������������ ������";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->FillWeight = 20;
			this->dataGridViewTextBoxColumn3->HeaderText = L"��������� ������";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->FillWeight = 35.89743F;
			this->dataGridViewTextBoxColumn4->HeaderText = L"��������� ���������";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->FillWeight = 15.89743F;
			this->dataGridViewTextBoxColumn5->HeaderText = L"������";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->FillWeight = 20.89743F;
			this->dataGridViewTextBoxColumn6->HeaderText = L"���� �����";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->FillWeight = 25.89743F;
			this->dataGridViewTextBoxColumn7->HeaderText = L"���������� ������";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 15.89743F;
			this->dataGridViewTextBoxColumn8->HeaderText = L"���� ��������";
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
			this->label1->Text = L"�������� ������";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"������������� ������";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Honeydew;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1579, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->�����������ToolStripMenuItem->Text = L"����� ������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			this->����������ToolStripMenuItem->Text = L"������� ���";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_zapros::����������ToolStripMenuItem_Click);
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
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->checkBox_srok);
			this->groupBox1->Controls->Add(this->checkBox_passport);
			this->groupBox1->Controls->Add(this->checkBox_date);
			this->groupBox1->Controls->Add(this->checkBox_cena);
			this->groupBox1->Controls->Add(this->checkBox_con);
			this->groupBox1->Controls->Add(this->checkBox_cond);
			this->groupBox1->Controls->Add(this->checkBox_valuta);
			this->groupBox1->Controls->Add(this->checkBox_number);
			this->groupBox1->Controls->Add(this->checkBox_name);
			this->groupBox1->Controls->Add(this->checkBox_������);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button_zapros);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->label2);
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
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->domainUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->domainUpDown1);
			this->groupBox1->Controls->Add(this->numericUpDown7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(49, 386);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1498, 189);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"���� ��������";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1117, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 32);
			this->label12->TabIndex = 45;
			this->label12->Text = L"�����\n��������";
			this->label12->Visible = false;
			// 
			// checkBox_srok
			// 
			this->checkBox_srok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox_srok->AutoSize = true;
			this->checkBox_srok->Location = System::Drawing::Point(1289, 14);
			this->checkBox_srok->Name = L"checkBox_srok";
			this->checkBox_srok->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_srok->Size = System::Drawing::Size(90, 36);
			this->checkBox_srok->TabIndex = 44;
			this->checkBox_srok->Text = L"����\n��������";
			this->checkBox_srok->UseVisualStyleBackColor = true;
			this->checkBox_srok->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_srok_CheckedChanged);
			// 
			// checkBox_passport
			// 
			this->checkBox_passport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox_passport->AutoSize = true;
			this->checkBox_passport->Location = System::Drawing::Point(1120, 14);
			this->checkBox_passport->Name = L"checkBox_passport";
			this->checkBox_passport->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_passport->Size = System::Drawing::Size(110, 36);
			this->checkBox_passport->TabIndex = 42;
			this->checkBox_passport->Text = L"����������\n������";
			this->checkBox_passport->UseVisualStyleBackColor = true;
			this->checkBox_passport->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_passport_CheckedChanged);
			// 
			// checkBox_date
			// 
			this->checkBox_date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox_date->AutoSize = true;
			this->checkBox_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_date->Location = System::Drawing::Point(874, 14);
			this->checkBox_date->Name = L"checkBox_date";
			this->checkBox_date->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_date->Size = System::Drawing::Size(68, 36);
			this->checkBox_date->TabIndex = 41;
			this->checkBox_date->Text = L"����\n�����";
			this->checkBox_date->UseVisualStyleBackColor = true;
			this->checkBox_date->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_date_CheckedChanged);
			// 
			// checkBox_cena
			// 
			this->checkBox_cena->AutoSize = true;
			this->checkBox_cena->Location = System::Drawing::Point(575, 14);
			this->checkBox_cena->Name = L"checkBox_cena";
			this->checkBox_cena->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_cena->Size = System::Drawing::Size(102, 36);
			this->checkBox_cena->TabIndex = 40;
			this->checkBox_cena->Text = L"���������\n���������";
			this->checkBox_cena->UseVisualStyleBackColor = true;
			this->checkBox_cena->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_cena_CheckedChanged);
			// 
			// checkBox_con
			// 
			this->checkBox_con->AutoSize = true;
			this->checkBox_con->Location = System::Drawing::Point(395, 22);
			this->checkBox_con->Name = L"checkBox_con";
			this->checkBox_con->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_con->Size = System::Drawing::Size(149, 20);
			this->checkBox_con->TabIndex = 39;
			this->checkBox_con->Text = L"��������� ������";
			this->checkBox_con->UseVisualStyleBackColor = true;
			this->checkBox_con->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_con_CheckedChanged);
			// 
			// checkBox_cond
			// 
			this->checkBox_cond->AutoSize = true;
			this->checkBox_cond->Location = System::Drawing::Point(402, 22);
			this->checkBox_cond->Name = L"checkBox_cond";
			this->checkBox_cond->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_cond->Size = System::Drawing::Size(149, 20);
			this->checkBox_cond->TabIndex = 39;
			this->checkBox_cond->Text = L"��������� ������";
			this->checkBox_cond->UseVisualStyleBackColor = true;
			// 
			// checkBox_valuta
			// 
			this->checkBox_valuta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox_valuta->AutoSize = true;
			this->checkBox_valuta->Location = System::Drawing::Point(768, 22);
			this->checkBox_valuta->Name = L"checkBox_valuta";
			this->checkBox_valuta->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_valuta->Size = System::Drawing::Size(79, 20);
			this->checkBox_valuta->TabIndex = 38;
			this->checkBox_valuta->Text = L"������";
			this->checkBox_valuta->UseVisualStyleBackColor = true;
			// 
			// checkBox_number
			// 
			this->checkBox_number->AutoSize = true;
			this->checkBox_number->Location = System::Drawing::Point(9, 22);
			this->checkBox_number->Name = L"checkBox_number";
			this->checkBox_number->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_number->Size = System::Drawing::Size(72, 20);
			this->checkBox_number->TabIndex = 36;
			this->checkBox_number->Text = L"�����";
			this->checkBox_number->UseVisualStyleBackColor = true;
			this->checkBox_number->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_number_CheckedChanged);
			// 
			// checkBox_name
			// 
			this->checkBox_name->AutoSize = true;
			this->checkBox_name->Location = System::Drawing::Point(166, 22);
			this->checkBox_name->Name = L"checkBox_name";
			this->checkBox_name->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_name->Size = System::Drawing::Size(128, 20);
			this->checkBox_name->TabIndex = 37;
			this->checkBox_name->Text = L"������������";
			this->checkBox_name->UseVisualStyleBackColor = true;
			this->checkBox_name->CheckedChanged += gcnew System::EventHandler(this, &Form_zapros::checkBox_name_CheckedChanged);
			// 
			// checkBox_������
			// 
			this->checkBox_������->AutoSize = true;
			this->checkBox_������->Location = System::Drawing::Point(16, 22);
			this->checkBox_������->Name = L"checkBox_������";
			this->checkBox_������->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox_������->Size = System::Drawing::Size(72, 20);
			this->checkBox_������->TabIndex = 36;
			this->checkBox_������->Text = L"�����";
			this->checkBox_������->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::LightGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1381, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 37);
			this->button3->TabIndex = 35;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::LightGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1268, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 37);
			this->button2->TabIndex = 34;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button_zapros
			// 
			this->button_zapros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_zapros->BackColor = System::Drawing::Color::LightGreen;
			this->button_zapros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zapros->Location = System::Drawing::Point(1155, 146);
			this->button_zapros->Name = L"button_zapros";
			this->button_zapros->Size = System::Drawing::Size(107, 37);
			this->button_zapros->TabIndex = 33;
			this->button_zapros->Text = L"������";
			this->button_zapros->UseVisualStyleBackColor = false;
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
			this->panel7->Location = System::Drawing::Point(1268, 22);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(2, 120);
			this->panel7->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(1100, 21);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(2, 120);
			this->panel6->TabIndex = 32;
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(858, 22);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(2, 120);
			this->panel9->TabIndex = 32;
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
			this->numericUpDown6->Location = System::Drawing::Point(1289, 117);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 390, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 22);
			this->numericUpDown6->TabIndex = 31;
			this->numericUpDown6->Visible = false;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown5->Location = System::Drawing::Point(1289, 71);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 390, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 22);
			this->numericUpDown5->TabIndex = 30;
			this->numericUpDown5->Visible = false;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1286, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 16);
			this->label11->TabIndex = 29;
			this->label11->Text = L"��";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1286, 52);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"��";
			this->label10->Visible = false;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox1->Location = System::Drawing::Point(1120, 117);
			this->maskedTextBox1->Mask = L"000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(109, 22);
			this->maskedTextBox1->TabIndex = 26;
			this->maskedTextBox1->Visible = false;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(866, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"��";
			this->label9->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(866, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 16);
			this->label7->TabIndex = 24;
			this->label7->Text = L"��";
			this->label7->Visible = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker2->Location = System::Drawing::Point(869, 117);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 23;
			this->dateTimePicker2->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->Location = System::Drawing::Point(869, 70);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 22;
			this->dateTimePicker1->Visible = false;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->domainUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->domainUpDown2->Items->Add(L"����������");
			this->domainUpDown2->Items->Add(L"=");
			this->domainUpDown2->Items->Add(L">=");
			this->domainUpDown2->Items->Add(L"<=");
			this->domainUpDown2->Location = System::Drawing::Point(960, 19);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(125, 23);
			this->domainUpDown2->TabIndex = 20;
			this->domainUpDown2->Text = L"����������";
			this->domainUpDown2->Visible = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown4->Location = System::Drawing::Point(575, 86);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250000, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(170, 22);
			this->numericUpDown4->TabIndex = 19;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Visible = false;
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
			this->label8->Text = L"����� ";
			this->label8->Visible = false;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->domainUpDown1->Items->Add(L"=");
			this->domainUpDown1->Items->Add(L">=");
			this->domainUpDown1->Items->Add(L"<=");
			this->domainUpDown1->Location = System::Drawing::Point(682, 21);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(63, 23);
			this->domainUpDown1->TabIndex = 16;
			this->domainUpDown1->Text = L"=";
			this->domainUpDown1->Visible = false;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(395, 86);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 22);
			this->numericUpDown7->TabIndex = 14;
			this->numericUpDown7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(392, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"���������";
			this->label6->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(402, 86);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 14;
			this->numericUpDown3->Visible = false;
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
			this->label5->Text = L"������������";
			this->label5->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->Visible = false;
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
			this->label4->Text = L"��";
			this->label4->Visible = false;
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
			this->label3->Text = L"��";
			this->label3->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(16, 108);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 9;
			this->numericUpDown2->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(16, 64);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Visible = false;
			// 
			// Form_zapros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1579, 953);
			this->Controls->Add(this->groupBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_zapros_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF"; // ������ ������ ��� �����������
	openFileDialog1->Title = "�������� �����������";
	openFileDialog1->ShowDialog();
	System::String^ filePath = openFileDialog1->FileName;
	this->BackgroundImage = Image::FromFile(filePath);
}



private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void checkBox_number_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	numericUpDown1->Maximum = dataGridView1->Rows->Count;
	numericUpDown2->Maximum = dataGridView1->Rows->Count;
	if (checkBox_number->Checked) {
		label3->Visible = true;
		label4->Visible = true;
		numericUpDown1->Visible = true;
		numericUpDown2->Visible = true;
	}
	else {
		label3->Visible = false;
		label4->Visible = false;
		numericUpDown1->Visible = false;
		numericUpDown2->Visible = false;
	}
}
private: System::Void checkBox_name_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_name->Checked) {
		label5->Visible = true;
		textBox1->Visible = true;
	}
	else {
		label5->Visible = false;
		textBox1->Visible = false;
	}
}
private: System::Void checkBox_con_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_con->Checked) {
		label6->Visible = true;
		numericUpDown7->Visible = true;
	}
	else {
		label6->Visible = false;
		numericUpDown7->Visible = false;
	}
}
private: System::Void checkBox_cena_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_cena->Checked) {
		label8->Visible = true;
		numericUpDown4->Visible = true;
		domainUpDown1->Visible = true;
	}
	else {
		label8->Visible = false;
		numericUpDown4->Visible = false;
		domainUpDown1->Visible = false;
	}
}
private: System::Void checkBox_date_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_date->Checked) {
		label7->Visible = true;
		label9->Visible = true;
		dateTimePicker1->Visible = true;
		dateTimePicker2->Visible = true;
		domainUpDown2->Visible = true;
	}
	else {
		label7->Visible = false;
		label9->Visible = false;
		dateTimePicker1->Visible = false;
		dateTimePicker2->Visible = false;
		domainUpDown2->Visible = false;
	}
}
private: System::Void checkBox_passport_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_passport->Checked) {
		maskedTextBox1->Visible = true;
		label12->Visible = true;
	}
	else {
		maskedTextBox1->Visible = false;
		label12->Visible = false;
	}
}
private: System::Void checkBox_srok_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_srok->Checked) {
		label10->Visible = true;
		label11->Visible = true;
		numericUpDown5->Visible = true;
		numericUpDown6->Visible = true;
	}
	else {
		label10->Visible = false;
		label11->Visible = false;
		numericUpDown5->Visible = false;
		numericUpDown6->Visible = false;
	}
}
};
}
