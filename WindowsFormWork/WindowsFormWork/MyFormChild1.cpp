#include "MyFormParent.h"
#include "MyFormChild1.h"

#include <Windows.h>
#include <iostream>

System::Void WindowsFormWork::MyFormChild1::window_close()
{
	Close();
	delete this;
}

System::Void WindowsFormWork::MyFormChild1::button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	parentForm->set_position(this->textX1->Text, this->textY1->Text, this->textX2->Text, this->textY2->Text);
	window_close();

}
