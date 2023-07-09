#pragma once

namespace Project11 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Form_admin : public System::Windows::Forms::Form {
	public: Form_admin(void){InitializeComponent();}
	protected: ~Form_admin(){if (components){delete components;}}
	private: System::Windows::Forms::Button^ button_admin;
	private: System::Windows::Forms::Button^ button_player;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_enter;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_enter_player;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_admin::typeid));
			this->button_admin = (gcnew System::Windows::Forms::Button());
			this->button_player = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button_enter_player = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// button_admin
			this->button_admin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button_admin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_admin->Location = System::Drawing::Point(114, 114);
			this->button_admin->Name = L"button_admin";
			this->button_admin->Size = System::Drawing::Size(240, 70);
			this->button_admin->TabIndex = 0;
			this->button_admin->Text = L"Администратор";
			this->button_admin->UseVisualStyleBackColor = true;
			this->button_admin->Click += gcnew System::EventHandler(this, &Form_admin::button_admin_Click);
			// button_player
			this->button_player->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button_player->BackColor = System::Drawing::SystemColors::Control;
			this->button_player->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_player->Location = System::Drawing::Point(114, 38);
			this->button_player->Name = L"button_player";
			this->button_player->Size = System::Drawing::Size(240, 70);
			this->button_player->TabIndex = 1;
			this->button_player->Text = L"Пользователь";
			this->button_player->UseVisualStyleBackColor = false;
			this->button_player->Click += gcnew System::EventHandler(this, &Form_admin::button_player_Click);
			// label1 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(437, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Выберите режим использования программы";
			// textBox1
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(87, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(297, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Visible = false;
			// label2
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(88, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите пароль администратора";
			this->label2->Visible = false;
			// button_enter
			this->button_enter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_enter->Location = System::Drawing::Point(177, 242);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(120, 34);
			this->button_enter->TabIndex = 5;
			this->button_enter->Text = L"Войти";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Visible = false;
			this->button_enter->Click += gcnew System::EventHandler(this, &Form_admin::button_enter_Click);
			// button_enter_player
			this->button_enter_player->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button_enter_player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_enter_player->Location = System::Drawing::Point(177, 190);
			this->button_enter_player->Name = L"button_enter_player";
			this->button_enter_player->Size = System::Drawing::Size(120, 34);
			this->button_enter_player->TabIndex = 6;
			this->button_enter_player->Text = L"Войти";
			this->button_enter_player->UseVisualStyleBackColor = true;
			this->button_enter_player->Visible = false;
			this->button_enter_player->Click += gcnew System::EventHandler(this, &Form_admin::button_enter_player_Click);
			// label3
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(303, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Демо пароль: 1234";
			// 
			// Form_admin
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(473, 299);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_enter_player);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_player);
			this->Controls->Add(this->button_admin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form_admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_admin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button_player->BackColor = System::Drawing::SystemColors::Control;
		this->button_admin->BackColor = System::Drawing::Color::LightBlue;
		button_enter->Visible = true;
		textBox1->Visible = true;
		label2->Visible = true;
		button_enter_player->Visible = false;
	}
private: System::Void button_player_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button_admin->BackColor = System::Drawing::SystemColors::Control;
	this->button_player->BackColor = System::Drawing::Color::LightBlue;
	button_enter->Visible = false;
	textBox1->Visible = false;
	label2->Visible = false;
	button_enter_player->Visible = true;
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ password = "1234";
	if (textBox1->Text == password) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		textBox1->Text = "";
		this->Close();
	}
	else {
		if (textBox1->Text != "") { 
			MessageBox::Show("Неверный пароль!"); 
			textBox1->Text = "";
		}
		else MessageBox::Show("Введите пароль!");
	} }
private: System::Void button_enter_player_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
}
};
}
