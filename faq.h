#pragma once

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� faq
	/// </summary>
	public ref class faq : public System::Windows::Forms::Form
	{
	public:
		faq(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~faq()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox_game;
	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox_main;
	private: System::Windows::Forms::RichTextBox^ richTextBox_zapros;
	private: System::Windows::Forms::RichTextBox^ richTextBox_rezhim;
	private: System::Windows::Forms::RichTextBox^ richTextBox_file;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(faq::typeid));
			this->richTextBox_game = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox_main = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_zapros = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_rezhim = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox_file = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox_game
			// 
			this->richTextBox_game->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_game->Location = System::Drawing::Point(12, 33);
			this->richTextBox_game->Name = L"richTextBox_game";
			this->richTextBox_game->Size = System::Drawing::Size(1077, 521);
			this->richTextBox_game->TabIndex = 0;
			this->richTextBox_game->Text = resources->GetString(L"richTextBox_game.Text");
			this->richTextBox_game->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�����������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������������������ToolStripMenuItem, this->��������������ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1101, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->�����������ToolStripMenuItem->Text = L"������� ����";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &faq::�����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &faq::������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(193, 24);
			this->�������������������ToolStripMenuItem->Text = L"������ �������������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &faq::�������������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->��������������ToolStripMenuItem->Text = L"������ � �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &faq::��������������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &faq::����ToolStripMenuItem_Click);
			// 
			// richTextBox_main
			// 
			this->richTextBox_main->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_main->Location = System::Drawing::Point(12, 33);
			this->richTextBox_main->Name = L"richTextBox_main";
			this->richTextBox_main->Size = System::Drawing::Size(1077, 521);
			this->richTextBox_main->TabIndex = 2;
			this->richTextBox_main->Text = resources->GetString(L"richTextBox_main.Text");
			// 
			// richTextBox_zapros
			// 
			this->richTextBox_zapros->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox_zapros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_zapros->Location = System::Drawing::Point(12, 33);
			this->richTextBox_zapros->Name = L"richTextBox_zapros";
			this->richTextBox_zapros->Size = System::Drawing::Size(1077, 521);
			this->richTextBox_zapros->TabIndex = 3;
			this->richTextBox_zapros->Text = resources->GetString(L"richTextBox_zapros.Text");
			this->richTextBox_zapros->Visible = false;
			// 
			// richTextBox_rezhim
			// 
			this->richTextBox_rezhim->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox_rezhim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_rezhim->Location = System::Drawing::Point(12, 33);
			this->richTextBox_rezhim->Name = L"richTextBox_rezhim";
			this->richTextBox_rezhim->Size = System::Drawing::Size(1077, 521);
			this->richTextBox_rezhim->TabIndex = 4;
			this->richTextBox_rezhim->Text = resources->GetString(L"richTextBox_rezhim.Text");
			this->richTextBox_rezhim->Visible = false;
			// 
			// richTextBox_file
			// 
			this->richTextBox_file->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox_file->Location = System::Drawing::Point(12, 31);
			this->richTextBox_file->Name = L"richTextBox_file";
			this->richTextBox_file->ReadOnly = true;
			this->richTextBox_file->Size = System::Drawing::Size(1077, 521);
			this->richTextBox_file->TabIndex = 5;
			this->richTextBox_file->Text = resources->GetString(L"richTextBox_file.Text");
			this->richTextBox_file->Visible = false;
			// 
			// faq
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1101, 566);
			this->Controls->Add(this->richTextBox_file);
			this->Controls->Add(this->richTextBox_rezhim);
			this->Controls->Add(this->richTextBox_zapros);
			this->Controls->Add(this->richTextBox_main);
			this->Controls->Add(this->richTextBox_game);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"faq";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// ������� ������ ����� ��������� �������
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox_main->Visible = true;
		richTextBox_zapros->Visible = false;
		richTextBox_rezhim->Visible = false;
		richTextBox_file->Visible = false;
		richTextBox_game->Visible = false;
	}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_main->Visible = false;
	richTextBox_zapros->Visible = true;
	richTextBox_rezhim->Visible = false;
	richTextBox_file->Visible = false;
	richTextBox_game->Visible = false;
}
private: System::Void �������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_main->Visible = false;
	richTextBox_zapros->Visible = false;
	richTextBox_rezhim->Visible = true;
	richTextBox_file->Visible = false;
	richTextBox_game->Visible = false;
}
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_main->Visible = false;
	richTextBox_zapros->Visible = false;
	richTextBox_rezhim->Visible = false;
	richTextBox_file->Visible = true;
	richTextBox_game->Visible = false;
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox_main->Visible = false;
	richTextBox_zapros->Visible = false;
	richTextBox_rezhim->Visible = false;
	richTextBox_file->Visible = false;
	richTextBox_game->Visible = true;
}
};
}
