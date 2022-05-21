#pragma once

namespace WindowsFormWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyFormChild1
	/// </summary>
	public ref class MyFormChild1 : public System::Windows::Forms::Form
	{
	public:
		MyFormChild1(MyFormParent^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyFormChild1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textX1;
	public: System::Windows::Forms::TextBox^ textY1;
	public: System::Windows::Forms::TextBox^ textX2;
	public: System::Windows::Forms::TextBox^ textY2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textX1 = (gcnew System::Windows::Forms::TextBox());
			this->textY1 = (gcnew System::Windows::Forms::TextBox());
			this->textX2 = (gcnew System::Windows::Forms::TextBox());
			this->textY2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Координата X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Координата Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Высота";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(183, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ширина";
			// 
			// textX1
			// 
			this->textX1->Location = System::Drawing::Point(23, 95);
			this->textX1->Name = L"textX1";
			this->textX1->Size = System::Drawing::Size(100, 20);
			this->textX1->TabIndex = 4;
			// 
			// textY1
			// 
			this->textY1->Location = System::Drawing::Point(159, 95);
			this->textY1->Name = L"textY1";
			this->textY1->Size = System::Drawing::Size(100, 20);
			this->textY1->TabIndex = 5;
			// 
			// textX2
			// 
			this->textX2->Location = System::Drawing::Point(23, 159);
			this->textX2->Name = L"textX2";
			this->textX2->Size = System::Drawing::Size(100, 20);
			this->textX2->TabIndex = 6;
			// 
			// textY2
			// 
			this->textY2->Location = System::Drawing::Point(159, 159);
			this->textY2->Name = L"textY2";
			this->textY2->Size = System::Drawing::Size(100, 20);
			this->textY2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyFormChild1::button1_MouseDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(53, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите данные";
			// 
			// MyFormChild1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textY2);
			this->Controls->Add(this->textX2);
			this->Controls->Add(this->textY1);
			this->Controls->Add(this->textX1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"MyFormChild1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ByAlex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: MyFormParent^ parentForm;
	private: System::Void window_close();
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	};
}
