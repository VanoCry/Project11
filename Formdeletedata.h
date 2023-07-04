#pragma once

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Formdeletedata
	/// </summary>
	public ref class Formdeletedata : public System::Windows::Forms::Form
	{
	public:
		Formdeletedata(void)
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
		~Formdeletedata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_yes;
	private: System::Windows::Forms::Button^ button_no;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	protected:

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
			this->button_yes = (gcnew System::Windows::Forms::Button());
			this->button_no = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_yes
			// 
			this->button_yes->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_yes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_yes->Location = System::Drawing::Point(14, 194);
			this->button_yes->Name = L"button_yes";
			this->button_yes->Size = System::Drawing::Size(131, 50);
			this->button_yes->TabIndex = 0;
			this->button_yes->Text = L"Да";
			this->button_yes->UseVisualStyleBackColor = true;
			this->button_yes->Click += gcnew System::EventHandler(this, &Formdeletedata::button_yes_Click);
			// 
			// button_no
			// 
			this->button_no->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_no->Location = System::Drawing::Point(302, 194);
			this->button_no->Name = L"button_no";
			this->button_no->Size = System::Drawing::Size(131, 50);
			this->button_no->TabIndex = 1;
			this->button_no->Text = L"Нет";
			this->button_no->UseVisualStyleBackColor = true;
			this->button_no->Click += gcnew System::EventHandler(this, &Formdeletedata::button_no_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(14, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(419, 176);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Данное действие приведёт к удалению всех данных из списка.Вы уверены\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Formdeletedata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 256);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button_no);
			this->Controls->Add(this->button_yes);
			this->Name = L"Formdeletedata";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Удаление списка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_yes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}

	private: System::Void button_no_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();
	}
	};
}
