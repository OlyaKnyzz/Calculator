#pragma once
#include <cmath>
namespace Кальк {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		char k;
		double a, b, s;
	private: System::Windows::Forms::Button^ button18;
	public:


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button16;
	protected:
	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(183, 383);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(61, 41);
			this->button16->TabIndex = 35;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(36, 383);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(61, 41);
			this->button17->TabIndex = 34;
			this->button17->Text = L"C";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(182, 327);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 41);
			this->button14->TabIndex = 32;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(36, 328);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 41);
			this->button15->TabIndex = 31;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(183, 267);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 41);
			this->button10->TabIndex = 30;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(110, 267);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(61, 41);
			this->button11->TabIndex = 29;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(36, 267);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(61, 41);
			this->button12->TabIndex = 28;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(183, 209);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 41);
			this->button7->TabIndex = 27;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(110, 209);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 41);
			this->button8->TabIndex = 26;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(36, 209);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 41);
			this->button9->TabIndex = 25;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(183, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 41);
			this->button4->TabIndex = 24;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(110, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 41);
			this->button5->TabIndex = 23;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(36, 149);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 41);
			this->button6->TabIndex = 22;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 41);
			this->button3->TabIndex = 21;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 41);
			this->button2->TabIndex = 20;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 41);
			this->button1->TabIndex = 19;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 18);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 49);
			this->textBox1->TabIndex = 18;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(98, 328);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(84, 41);
			this->button18->TabIndex = 36;
			this->button18->Text = L"pow(x,2)";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 443);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {




	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "1")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(1));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(1));
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "2")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(2));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(2));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "3")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(3));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(3));
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "4")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(4));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(4));
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "5")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(5));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(5));
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "6")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(6));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(6));
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "7")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(7));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(7));
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "8")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(8));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(8));
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "9")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(9));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(9));
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "0")
	{
		textBox1->Clear();
		textBox1->AppendText(Convert::ToString(0));
	}
	else
	{
		textBox1->AppendText(Convert::ToString(0));
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (k)
	{
	case'+': b = Convert::ToDouble(textBox1->Text);
		s = a + b;
		textBox1->Text = Convert::ToString(s);
		break;
	case'-':
		b = Convert::ToDouble(textBox1->Text);
		s = a - b;
		textBox1->Text = Convert::ToString(s);
		break;
	case'*': b = Convert::ToDouble(textBox1->Text);
		s = a * b;
		textBox1->Text = Convert::ToString(s);
		break;

	case'/': b = Convert::ToDouble(textBox1->Text);
		if (b == 0)
		{
			textBox1->Text = "Деление на 0!";
		}
		else
		{
			textBox1->Clear();
			s = a / b;
			textBox1->Text = Convert::ToString(s);
		}
		break;
	}
}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e){

		k = '+';
		button16->Enabled = true;
		a = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	k = '-';
	button16->Enabled = true;
	a = Convert::ToDouble(textBox1->Text);
	textBox1->Clear();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	k = '*';
	button16->Enabled = true;
	a = Convert::ToDouble(textBox1->Text);
	textBox1->Clear();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	k = '/';
	button16->Enabled = true;
	a = Convert::ToDouble(textBox1->Text);
	textBox1->Clear();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear(); 

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	a = Convert::ToDouble(textBox1->Text);
	s = pow(a,2);
	textBox1->Text = Convert::ToString(s);

}
};

}


