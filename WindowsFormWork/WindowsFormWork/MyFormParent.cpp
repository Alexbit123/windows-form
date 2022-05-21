#include "MyFormParent.h"
#include "MyFormChild1.h"
#include "MyFormChild2.h"

#include <Windows.h>
#include <iostream>

using namespace WindowsFormWork;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormParent);
	return 0;
}

System::Void WindowsFormWork::MyFormParent::set_position(String^ a, String^ b, String^ c, String^ d)
{
	if (a != "" && b != "" && c != "" && d != "") {
		x1 = Convert::ToInt32(a);
		x2 = Convert::ToInt32(c);
		y1 = Convert::ToInt32(b);
		y2 = Convert::ToInt32(d);
	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3)
{
	if (X1 != "" && Y1 != "" && X2 != "" && Y2 != "" && X3 != "" && Y3 != "") {
		x1 = Convert::ToInt32(X1);
		y1 = Convert::ToInt32(Y1);
		x2 = Convert::ToInt32(X2);
		y2 = Convert::ToInt32(Y2);
		x3 = Convert::ToInt32(X3);
		y3 = Convert::ToInt32(Y3);

		Point point1 = Point(x1, y1);
		Point point2 = Point(x2, y2);
		Point point3 = Point(x3, y3);
		curvePoints[0] = point1;
		curvePoints[1] = point2;
		curvePoints[2] = point3;

	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4)
{
	if (X1 != "" && Y1 != "" && X2 != "" && Y2 != "" && X3 != "" && Y3 != "" && X4 != "" && Y4 != "") {
		x1 = Convert::ToInt32(X1);
		y1 = Convert::ToInt32(Y1);
		x2 = Convert::ToInt32(X2);
		y2 = Convert::ToInt32(Y2);
		x3 = Convert::ToInt32(X3);
		y3 = Convert::ToInt32(Y3);
		x4 = Convert::ToInt32(X4);
		y4 = Convert::ToInt32(Y4);

		Point point1 = Point(x1, y1);
		Point point2 = Point(x2, y2);
		Point point3 = Point(x3, y3);
		Point point4 = Point(x4, y4);
		curvePoints[0] = point1;
		curvePoints[1] = point2;
		curvePoints[2] = point3;
		curvePoints[3] = point4;

	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5)
{
	if (X1 != "" && Y1 != "" && X2 != "" && Y2 != "" && X3 != "" && Y3 != "" && X4 != "" && Y4 != "" && X5 != "" && Y5 != "") {
		x1 = Convert::ToInt32(X1);
		y1 = Convert::ToInt32(Y1);
		x2 = Convert::ToInt32(X2);
		y2 = Convert::ToInt32(Y2);
		x3 = Convert::ToInt32(X3);
		y3 = Convert::ToInt32(Y3);
		x4 = Convert::ToInt32(X4);
		y4 = Convert::ToInt32(Y4);
		x5 = Convert::ToInt32(X5);
		y5 = Convert::ToInt32(Y5);

		Point point1 = Point(x1, y1);
		Point point2 = Point(x2, y2);
		Point point3 = Point(x3, y3);
		Point point4 = Point(x4, y4);
		Point point5 = Point(x5, y5);
		curvePoints[0] = point1;
		curvePoints[1] = point2;
		curvePoints[2] = point3;
		curvePoints[3] = point4;
		curvePoints[4] = point5;

	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5, String^ X6, String^ Y6)
{
	if (X1 != "" && Y1 != "" && X2 != "" && Y2 != "" && X3 != "" && Y3 != "" && X4 != "" && Y4 != "" && X5 != "" && Y5 != "" && X6 != "" && Y6 != "") {
		x1 = Convert::ToInt32(X1);
		y1 = Convert::ToInt32(Y1);
		x2 = Convert::ToInt32(X2);
		y2 = Convert::ToInt32(Y2);
		x3 = Convert::ToInt32(X3);
		y3 = Convert::ToInt32(Y3);
		x4 = Convert::ToInt32(X4);
		y4 = Convert::ToInt32(Y4);
		x5 = Convert::ToInt32(X5);
		y5 = Convert::ToInt32(Y5);
		x6 = Convert::ToInt32(X6);
		y6 = Convert::ToInt32(Y6);

		Point point1 = Point(x1, y1);
		Point point2 = Point(x2, y2);
		Point point3 = Point(x3, y3);
		Point point4 = Point(x4, y4);
		Point point5 = Point(x5, y5);
		Point point6 = Point(x6, y6);

		curvePoints[0] = point1;
		curvePoints[1] = point2;
		curvePoints[2] = point3;
		curvePoints[3] = point4;
		curvePoints[4] = point5;
		curvePoints[5] = point6;

	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::set_position_polygon_angle(String^ X1, String^ Y1, String^ X2, String^ Y2, String^ X3, String^ Y3, String^ X4, String^ Y4, String^ X5, String^ Y5, String^ X6, String^ Y6, String^ X7, String^ Y7)
{
	if (X1 != "" && Y1 != "" && X2 != "" && Y2 != "" && X3 != "" && Y3 != "" && X4 != "" && Y4 != "" && X5 != "" && Y5 != "" && X6 != "" && Y6 != "" && X7 != "" && Y7 != "") {
		x1 = Convert::ToInt32(X1);
		y1 = Convert::ToInt32(Y1);
		x2 = Convert::ToInt32(X2);
		y2 = Convert::ToInt32(Y2);
		x3 = Convert::ToInt32(X3);
		y3 = Convert::ToInt32(Y3);
		x4 = Convert::ToInt32(X4);
		y4 = Convert::ToInt32(Y4);
		x5 = Convert::ToInt32(X5);
		y5 = Convert::ToInt32(Y5);
		x6 = Convert::ToInt32(X6);
		y6 = Convert::ToInt32(Y6);
		x7 = Convert::ToInt32(X7);
		y7 = Convert::ToInt32(Y7);

		Point point1 = Point(x1, y1);
		Point point2 = Point(x2, y2);
		Point point3 = Point(x3, y3);
		Point point4 = Point(x4, y4);
		Point point5 = Point(x5, y5);
		Point point6 = Point(x6, y6);
		Point point7 = Point(x7, y7);

		curvePoints[0] = point1;
		curvePoints[1] = point2;
		curvePoints[2] = point3;
		curvePoints[3] = point4;
		curvePoints[4] = point5;
		curvePoints[5] = point6;
		curvePoints[6] = point7;

	}
	else {
		MessageBox::Show("¬ведите числовые значени€");
	}
}

System::Void WindowsFormWork::MyFormParent::button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	number_child = 1;
	MyFormChild1^ newFormChild = gcnew MyFormChild1(this);
	newFormChild->ShowDialog();
	pictureBox1->Refresh();
}

System::Void WindowsFormWork::MyFormParent::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	switch (number_child)
	{
	case 1: {
		if (color_figure == "")
		{
			e->Graphics->DrawRectangle(System::Drawing::Pens::Black, x1, y1, x2, y2); break;
		}
		else 
		{
			Brush^ fill = gcnew SolidBrush(Color::FromName(color_figure));
			e->Graphics->FillRectangle(fill, x1, y1, x2, y2);  break;
		}
	}
	case 2: {
		if (color_figure == "")
		{
			e->Graphics->DrawEllipse(System::Drawing::Pens::Black, x1, y1, x2, y2);  break;
		}
		else
		{
			Brush^ fill = gcnew SolidBrush(Color::FromName(color_figure));
			e->Graphics->FillEllipse(fill, x1, y1, x2, y2);  break;
		}
	}
	case 3: {
		if (color_figure == "")
		{
			e->Graphics->DrawPolygon(System::Drawing::Pens::Black, curvePoints);  break;
		}
		else
		{
			Brush^ fill = gcnew SolidBrush(Color::FromName(color_figure));
			e->Graphics->FillPolygon(fill, curvePoints);  break;
		}
	}
	default:
		break;
	}
}

System::Void WindowsFormWork::MyFormParent::button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	number_child = 2;
	MyFormChild1^ newFormChild = gcnew MyFormChild1(this);
	newFormChild->ShowDialog();
	pictureBox1->Refresh();
}

System::Void WindowsFormWork::MyFormParent::button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	number_child = 3;
	Point point1 = Point(0, 0);
	for (int i = 0; i < 8; ++i)
	{
		curvePoints[i] = point1;
	}
	MyFormChild2^ newFormChild = gcnew MyFormChild2(this);
	newFormChild->ShowDialog();
	pictureBox1->Refresh();
}

System::Void WindowsFormWork::MyFormParent::checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked)
	{
		color_figure = checkBox1->Text;
		checkBox2->Enabled = false;
		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;
		checkBox6->Enabled = false;
		pictureBox1->Refresh();
	}
	else if (checkBox2->Checked)
	{
		color_figure = checkBox2->Text;
		checkBox1->Enabled = false;
		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;
		checkBox6->Enabled = false;
		pictureBox1->Refresh();
	}
	else if (checkBox3->Checked)
	{
		color_figure = checkBox3->Text;
		checkBox1->Enabled = false;
		checkBox2->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;
		checkBox6->Enabled = false;
		pictureBox1->Refresh();
	}
	else if (checkBox4->Checked)
	{
		color_figure = checkBox4->Text;
		checkBox1->Enabled = false;
		checkBox2->Enabled = false;
		checkBox3->Enabled = false;
		checkBox5->Enabled = false;
		checkBox6->Enabled = false;
		pictureBox1->Refresh();
	}
	else if (checkBox5->Checked)
	{
		color_figure = checkBox3->Text;
		checkBox1->Enabled = false;
		checkBox2->Enabled = false;
		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox6->Enabled = false;
		pictureBox1->Refresh();
	}
	else if (checkBox6->Checked)
	{
		color_figure = checkBox3->Text;
		checkBox1->Enabled = false;
		checkBox2->Enabled = false;
		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;
		pictureBox1->Refresh();
	}
	if (!checkBox1->Checked && !checkBox2->Checked && !checkBox3->Checked && !checkBox4->Checked && !checkBox5->Checked && !checkBox6->Checked)
	{
		color_figure = "";
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		pictureBox1->Refresh();
	}
}
