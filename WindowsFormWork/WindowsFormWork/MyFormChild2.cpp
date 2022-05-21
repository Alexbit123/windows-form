#include "MyFormParent.h"
#include "MyFormChild2.h"

#include <Windows.h>
#include <iostream>

System::Void WindowsFormWork::MyFormChild2::window_close()
{
	Close();
	delete this;
}

System::Void WindowsFormWork::MyFormChild2::button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	switch (number_figure) {
	case 3: { parentForm->set_position_polygon_angle(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text, this->textX3->Text, this->textY3->Text); break; }
	case 4: { parentForm->set_position_polygon_angle(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text, this->textX3->Text, this->textY3->Text, this->textX4->Text, this->textY4->Text); break; }
	case 5: { parentForm->set_position_polygon_angle(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text, this->textX3->Text, this->textY3->Text, this->textX4->Text, this->textY4->Text, this->textX5->Text, this->textY5->Text); break; }
	case 6: { parentForm->set_position_polygon_angle(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text, this->textX3->Text, this->textY3->Text, this->textX4->Text, this->textY4->Text, this->textX5->Text, this->textY5->Text, this->textX6->Text, this->textY6->Text); break; }
	case 7: { parentForm->set_position_polygon_angle(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text, this->textX3->Text, this->textY3->Text, this->textX4->Text, this->textY4->Text, this->textX5->Text, this->textY5->Text, this->textX6->Text, this->textY6->Text, this->textX7->Text, this->textY7->Text); break; }
	default:
		break;
	}
	window_close();
}

System::Void WindowsFormWork::MyFormChild2::comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->comboBox1->Text != "")
	{
		number_figure = Convert::ToInt32(this->comboBox1->Text);
		switch (number_figure) {
		case 3: { textX1->Enabled = true; textY1->Enabled = true; textX2->Enabled = true; textY2->Enabled = true; textX3->Enabled = true; textY3->Enabled = true; break; }
		case 4: { textX1->Enabled = true; textY1->Enabled = true; textX2->Enabled = true; textY2->Enabled = true; textX3->Enabled = true; textY3->Enabled = true; textX4->Enabled = true; textY4->Enabled = true; break; }
		case 5: { textX1->Enabled = true; textY1->Enabled = true; textX2->Enabled = true; textY2->Enabled = true; textX3->Enabled = true; textY3->Enabled = true; textX4->Enabled = true; textY4->Enabled = true; textX5->Enabled = true; textY5->Enabled = true; break; }
		case 6: { textX1->Enabled = true; textY1->Enabled = true; textX2->Enabled = true; textY2->Enabled = true; textX3->Enabled = true; textY3->Enabled = true; textX4->Enabled = true; textY4->Enabled = true; textX5->Enabled = true; textY5->Enabled = true; textX6->Enabled = true; textY6->Enabled = true; break; }
		case 7: { textX1->Enabled = true; textY1->Enabled = true; textX2->Enabled = true; textY2->Enabled = true; textX3->Enabled = true; textY3->Enabled = true; textX4->Enabled = true; textY4->Enabled = true; textX5->Enabled = true; textY5->Enabled = true; textX6->Enabled = true; textY6->Enabled = true; textX7->Enabled = true; textY7->Enabled = true; break; }
		default: break;
		}
	}
}
