#pragma once

namespace WindowsFormWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyFormChild2
	/// </summary>
	public ref class MyFormChild2 : public System::Windows::Forms::Form
	{
	public:
		MyFormChild2(MyFormParent^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyFormChild2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::TextBox^ textX1;
	public: System::Windows::Forms::TextBox^ textY1;
	protected:


	public: System::Windows::Forms::TextBox^ textX2;
	public: System::Windows::Forms::TextBox^ textY2;


	public: System::Windows::Forms::TextBox^ textX3;
	public: System::Windows::Forms::TextBox^ textY3;


	public: System::Windows::Forms::TextBox^ textX4;
	public: System::Windows::Forms::TextBox^ textY4;


	public: System::Windows::Forms::TextBox^ textX5;
	public: System::Windows::Forms::TextBox^ textY5;


	public: System::Windows::Forms::TextBox^ textX6;
	public: System::Windows::Forms::TextBox^ textY6;


	public: System::Windows::Forms::TextBox^ textX7;
	public: System::Windows::Forms::TextBox^ textY7;


	private: System::Windows::Forms::Button^ button1;
	public:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textX1 = (gcnew System::Windows::Forms::TextBox());
			this->textY1 = (gcnew System::Windows::Forms::TextBox());
			this->textX2 = (gcnew System::Windows::Forms::TextBox());
			this->textY2 = (gcnew System::Windows::Forms::TextBox());
			this->textX3 = (gcnew System::Windows::Forms::TextBox());
			this->textY3 = (gcnew System::Windows::Forms::TextBox());
			this->textX4 = (gcnew System::Windows::Forms::TextBox());
			this->textY4 = (gcnew System::Windows::Forms::TextBox());
			this->textX5 = (gcnew System::Windows::Forms::TextBox());
			this->textY5 = (gcnew System::Windows::Forms::TextBox());
			this->textX6 = (gcnew System::Windows::Forms::TextBox());
			this->textY6 = (gcnew System::Windows::Forms::TextBox());
			this->textX7 = (gcnew System::Windows::Forms::TextBox());
			this->textY7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"3", L"4", L"5", L"6", L"7" });
			this->comboBox1->Location = System::Drawing::Point(86, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyFormChild2::comboBox1_TextChanged);
			// 
			// textX1
			// 
			this->textX1->Enabled = false;
			this->textX1->Location = System::Drawing::Point(33, 39);
			this->textX1->Name = L"textX1";
			this->textX1->Size = System::Drawing::Size(100, 20);
			this->textX1->TabIndex = 1;
			// 
			// textY1
			// 
			this->textY1->Enabled = false;
			this->textY1->Location = System::Drawing::Point(172, 39);
			this->textY1->Name = L"textY1";
			this->textY1->Size = System::Drawing::Size(100, 20);
			this->textY1->TabIndex = 2;
			// 
			// textX2
			// 
			this->textX2->Enabled = false;
			this->textX2->Location = System::Drawing::Point(33, 65);
			this->textX2->Name = L"textX2";
			this->textX2->Size = System::Drawing::Size(100, 20);
			this->textX2->TabIndex = 3;
			// 
			// textY2
			// 
			this->textY2->Enabled = false;
			this->textY2->Location = System::Drawing::Point(172, 65);
			this->textY2->Name = L"textY2";
			this->textY2->Size = System::Drawing::Size(100, 20);
			this->textY2->TabIndex = 4;
			// 
			// textX3
			// 
			this->textX3->Enabled = false;
			this->textX3->Location = System::Drawing::Point(33, 91);
			this->textX3->Name = L"textX3";
			this->textX3->Size = System::Drawing::Size(100, 20);
			this->textX3->TabIndex = 5;
			// 
			// textY3
			// 
			this->textY3->Enabled = false;
			this->textY3->Location = System::Drawing::Point(172, 91);
			this->textY3->Name = L"textY3";
			this->textY3->Size = System::Drawing::Size(100, 20);
			this->textY3->TabIndex = 6;
			// 
			// textX4
			// 
			this->textX4->Enabled = false;
			this->textX4->Location = System::Drawing::Point(33, 117);
			this->textX4->Name = L"textX4";
			this->textX4->Size = System::Drawing::Size(100, 20);
			this->textX4->TabIndex = 7;
			// 
			// textY4
			// 
			this->textY4->Enabled = false;
			this->textY4->Location = System::Drawing::Point(172, 117);
			this->textY4->Name = L"textY4";
			this->textY4->Size = System::Drawing::Size(100, 20);
			this->textY4->TabIndex = 8;
			// 
			// textX5
			// 
			this->textX5->Enabled = false;
			this->textX5->Location = System::Drawing::Point(33, 143);
			this->textX5->Name = L"textX5";
			this->textX5->Size = System::Drawing::Size(100, 20);
			this->textX5->TabIndex = 9;
			// 
			// textY5
			// 
			this->textY5->Enabled = false;
			this->textY5->Location = System::Drawing::Point(172, 143);
			this->textY5->Name = L"textY5";
			this->textY5->Size = System::Drawing::Size(100, 20);
			this->textY5->TabIndex = 10;
			// 
			// textX6
			// 
			this->textX6->Enabled = false;
			this->textX6->Location = System::Drawing::Point(33, 169);
			this->textX6->Name = L"textX6";
			this->textX6->Size = System::Drawing::Size(100, 20);
			this->textX6->TabIndex = 11;
			// 
			// textY6
			// 
			this->textY6->Enabled = false;
			this->textY6->Location = System::Drawing::Point(172, 169);
			this->textY6->Name = L"textY6";
			this->textY6->Size = System::Drawing::Size(100, 20);
			this->textY6->TabIndex = 12;
			// 
			// textX7
			// 
			this->textX7->Enabled = false;
			this->textX7->Location = System::Drawing::Point(33, 195);
			this->textX7->Name = L"textX7";
			this->textX7->Size = System::Drawing::Size(100, 20);
			this->textX7->TabIndex = 13;
			// 
			// textY7
			// 
			this->textY7->Enabled = false;
			this->textY7->Location = System::Drawing::Point(172, 195);
			this->textY7->Name = L"textY7";
			this->textY7->Size = System::Drawing::Size(100, 20);
			this->textY7->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(106, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyFormChild2::button1_MouseDown);
			// 
			// MyFormChild2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textY7);
			this->Controls->Add(this->textX7);
			this->Controls->Add(this->textY6);
			this->Controls->Add(this->textX6);
			this->Controls->Add(this->textY5);
			this->Controls->Add(this->textX5);
			this->Controls->Add(this->textY4);
			this->Controls->Add(this->textX4);
			this->Controls->Add(this->textY3);
			this->Controls->Add(this->textX3);
			this->Controls->Add(this->textY2);
			this->Controls->Add(this->textX2);
			this->Controls->Add(this->textY1);
			this->Controls->Add(this->textX1);
			this->Controls->Add(this->comboBox1);
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"MyFormChild2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ByAlex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: MyFormParent^ parentForm;
	private: int number_figure;
	private: System::Void window_close();
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	};
}
