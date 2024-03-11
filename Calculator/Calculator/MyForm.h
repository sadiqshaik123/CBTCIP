#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Control^ control1;
	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::Button^ btnSpace;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnPM;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnP;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnMI;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnMUL;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDOT;
	private: System::Windows::Forms::Button^ btnEQL;
	private: System::Windows::Forms::Button^ btnBY;
























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->control1 = (gcnew System::Windows::Forms::Control());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnP = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMI = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMUL = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDOT = (gcnew System::Windows::Forms::Button());
			this->btnEQL = (gcnew System::Windows::Forms::Button());
			this->btnBY = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// control1
			// 
			this->control1->Location = System::Drawing::Point(735, 615);
			this->control1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->control1->Name = L"control1";
			this->control1->Size = System::Drawing::Size(75, 23);
			this->control1->TabIndex = 0;
			this->control1->Text = L"control1";
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(16, 28);
			this->textBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(423, 64);
			this->textBox->TabIndex = 1;
			this->textBox->Text = L"0";
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->Location = System::Drawing::Point(16, 112);
			this->btnSpace->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(100, 75);
			this->btnSpace->TabIndex = 2;
			this->btnSpace->Text = L"⌫";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(124, 112);
			this->btnC->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(100, 75);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(232, 112);
			this->btnCE->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(100, 75);
			this->btnCE->TabIndex = 2;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
			// 
			// btnPM
			// 
			this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPM->Location = System::Drawing::Point(340, 112);
			this->btnPM->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(100, 75);
			this->btnPM->TabIndex = 2;
			this->btnPM->Text = L"±";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(16, 194);
			this->btn7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(100, 75);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(124, 194);
			this->btn8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(100, 75);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(232, 194);
			this->btn9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(100, 75);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnP
			// 
			this->btnP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnP->Location = System::Drawing::Point(340, 194);
			this->btnP->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnP->Name = L"btnP";
			this->btnP->Size = System::Drawing::Size(100, 75);
			this->btnP->TabIndex = 2;
			this->btnP->Text = L"+";
			this->btnP->UseVisualStyleBackColor = true;
			this->btnP->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(16, 277);
			this->btn4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(100, 75);
			this->btn4->TabIndex = 2;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(124, 277);
			this->btn5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(100, 75);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(232, 277);
			this->btn6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(100, 75);
			this->btn6->TabIndex = 2;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMI
			// 
			this->btnMI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMI->Location = System::Drawing::Point(340, 277);
			this->btnMI->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnMI->Name = L"btnMI";
			this->btnMI->Size = System::Drawing::Size(100, 75);
			this->btnMI->TabIndex = 2;
			this->btnMI->Text = L"-";
			this->btnMI->UseVisualStyleBackColor = true;
			this->btnMI->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(16, 359);
			this->btn1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(100, 75);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(124, 359);
			this->btn2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(100, 75);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(232, 359);
			this->btn3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(100, 75);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMUL
			// 
			this->btnMUL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMUL->Location = System::Drawing::Point(340, 359);
			this->btnMUL->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnMUL->Name = L"btnMUL";
			this->btnMUL->Size = System::Drawing::Size(100, 75);
			this->btnMUL->TabIndex = 2;
			this->btnMUL->Text = L"*";
			this->btnMUL->UseVisualStyleBackColor = true;
			this->btnMUL->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(16, 442);
			this->btn0->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(100, 75);
			this->btn0->TabIndex = 2;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDOT
			// 
			this->btnDOT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDOT->Location = System::Drawing::Point(124, 442);
			this->btnDOT->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDOT->Name = L"btnDOT";
			this->btnDOT->Size = System::Drawing::Size(100, 75);
			this->btnDOT->TabIndex = 2;
			this->btnDOT->Text = L".";
			this->btnDOT->UseVisualStyleBackColor = true;
			this->btnDOT->Click += gcnew System::EventHandler(this, &MyForm::BtnDOT);
			// 
			// btnEQL
			// 
			this->btnEQL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEQL->Location = System::Drawing::Point(232, 442);
			this->btnEQL->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnEQL->Name = L"btnEQL";
			this->btnEQL->Size = System::Drawing::Size(100, 75);
			this->btnEQL->TabIndex = 2;
			this->btnEQL->Text = L"=";
			this->btnEQL->UseVisualStyleBackColor = true;
			this->btnEQL->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnBY
			// 
			this->btnBY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBY->Location = System::Drawing::Point(340, 442);
			this->btnBY->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBY->Name = L"btnBY";
			this->btnBY->Size = System::Drawing::Size(100, 75);
			this->btnBY->TabIndex = 2;
			this->btnBY->Text = L"/";
			this->btnBY->UseVisualStyleBackColor = true;
			this->btnBY->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 529);
			this->Controls->Add(this->btnBY);
			this->Controls->Add(this->btnMUL);
			this->Controls->Add(this->btnMI);
			this->Controls->Add(this->btnP);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->btnEQL);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDOT);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->control1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Text = "0";
	}

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (textBox->Text == "0")
		{
			textBox->Text = Numbers->Text;
		}
		else
		{
			textBox->Text = textBox->Text + Numbers->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textBox->Text);
	textBox->Text = "";
	operators = NumbersOp->Text;

}

private: System::Void BtnDOT(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox->Text->Contains("."))
	{
		textBox->Text = textBox->Text + ".";
	}
}
	   
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox->Text);
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
}
private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox->Text = "0";
}
private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox->Text->Length > 0) {
		textBox->Text = textBox->Text->Remove(textBox->Text->Length - 1, 1);
	}
	if (textBox->Text =="") {
		textBox->Text = "0";
	}
}
};
}