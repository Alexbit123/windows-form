#pragma once

namespace WindowsFormWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyFormParent
	/// </summary>
	public ref class MyFormParent : public System::Windows::Forms::Form
	{
	public:
		MyFormParent()
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyFormParent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Location = System::Drawing::Point(12, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyFormParent::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L" вадрат, пр€моугольник";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyFormParent::button1_MouseDown);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(371, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L" руг, эллипс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyFormParent::button2_MouseDown);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(282, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"‘игура по 3, 4, 5, 6, 7 координатам";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyFormParent::button3_MouseDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(258, 162);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(46, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Red";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(258, 185);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(47, 17);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Blue";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(258, 208);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(55, 17);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Green";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(371, 162);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(57, 17);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"Yellow";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(371, 185);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(53, 17);
			this->checkBox5->TabIndex = 8;
			this->checkBox5->Text = L"Black";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(371, 208);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(56, 17);
			this->checkBox6->TabIndex = 9;
			this->checkBox6->Text = L"Purple";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckStateChanged += gcnew System::EventHandler(this, &MyFormParent::checkBox1_CheckStateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(301, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"÷вет заливки";
			// 
			// MyFormParent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(500, 300);
			this->MinimumSize = System::Drawing::Size(500, 300);
			this->Name = L"MyFormParent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ByAlex";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int number_child, x1, x2, x3, x4, x5, x6, x7, y1, y2, y3, y4, y5, y6, y7;
	public: String^ color_figure = "";
	public: array<Point>^ curvePoints = gcnew array<Point>(8);
	public: System::Void set_position(String^ a, String^ b, String^ c, String^ d);
	public: System::Void set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3);
	public: System::Void set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4);
	public: System::Void set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5);
	public: System::Void set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5, String^ X6, String^ Y6);
	public: System::Void set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5, String^ X6, String^ Y6, String^ X7, String^ Y7);
	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e);
};
}
