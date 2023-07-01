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
	private: System::Windows::Forms::Label^ label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_yes
			// 
			this->button_yes->Location = System::Drawing::Point(12, 125);
			this->button_yes->Name = L"button_yes";
			this->button_yes->Size = System::Drawing::Size(75, 23);
			this->button_yes->TabIndex = 0;
			this->button_yes->Text = L"Да";
			this->button_yes->UseVisualStyleBackColor = true;
			this->button_yes->Click += gcnew System::EventHandler(this, &Formdeletedata::button_yes_Click);
			// 
			// button_no
			// 
			this->button_no->Location = System::Drawing::Point(195, 124);
			this->button_no->Name = L"button_no";
			this->button_no->Size = System::Drawing::Size(75, 23);
			this->button_no->TabIndex = 1;
			this->button_no->Text = L"Нет";
			this->button_no->UseVisualStyleBackColor = true;
			this->button_no->Click += gcnew System::EventHandler(this, &Formdeletedata::button_no_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// Formdeletedata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 159);
			this->Controls->Add(this->label1);
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
