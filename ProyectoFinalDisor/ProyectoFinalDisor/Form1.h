#pragma once
#include "NumeroFibonacci.h"
#include "NumerodelaSuerte.h"
#include "NumeroPadovan.h"
#include "NumeroUlam.h"


namespace ProyectoFinalDisor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	NumeroFibonacci nf;
	NumeroPadovan np;
	/// <summary>
	/// Resumen de Form1
	/// </summary>


	public ref class Form1 : public System::Windows::Forms::Form
	{
		
		
	public:

		Form1(void)
		{
			nf = NumeroFibonacci();
			np = NumeroPadovan();

			InitializeComponent();
			
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  numeroFeliz;
	private: System::Windows::Forms::Label^  capicua;
	private: System::Windows::Forms::Label^  decimalLabel;
	private: System::Windows::Forms::Label^  binarioLabel;
	private: System::Windows::Forms::Label^  hexadecimalLabel;
	private: System::Windows::Forms::Label^  nombreLabel;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->numeroFeliz = (gcnew System::Windows::Forms::Label());
			this->capicua = (gcnew System::Windows::Forms::Label());
			this->decimalLabel = (gcnew System::Windows::Forms::Label());
			this->binarioLabel = (gcnew System::Windows::Forms::Label());
			this->hexadecimalLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"siguiente";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"siguiente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Numero fibonacci";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Numero de la suerte";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Numero de padovan";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(157, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Numero de Ulam";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(289, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"siguiente";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(289, 184);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"siguiente";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(168, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"anterior";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// numeroFeliz
			// 
			this->numeroFeliz->AutoSize = true;
			this->numeroFeliz->Location = System::Drawing::Point(155, 284);
			this->numeroFeliz->Name = L"numeroFeliz";
			this->numeroFeliz->Size = System::Drawing::Size(93, 13);
			this->numeroFeliz->TabIndex = 14;
			this->numeroFeliz->Text = L"Es un numero feliz";
			// 
			// capicua
			// 
			this->capicua->AutoSize = true;
			this->capicua->Location = System::Drawing::Point(145, 316);
			this->capicua->Name = L"capicua";
			this->capicua->Size = System::Drawing::Size(113, 13);
			this->capicua->TabIndex = 15;
			this->capicua->Text = L"Es un numero capicua";
			// 
			// decimalLabel
			// 
			this->decimalLabel->AutoSize = true;
			this->decimalLabel->Location = System::Drawing::Point(68, 364);
			this->decimalLabel->Name = L"decimalLabel";
			this->decimalLabel->Size = System::Drawing::Size(48, 13);
			this->decimalLabel->TabIndex = 16;
			this->decimalLabel->Text = L"Decimal:";
			// 
			// binarioLabel
			// 
			this->binarioLabel->AutoSize = true;
			this->binarioLabel->Location = System::Drawing::Point(68, 393);
			this->binarioLabel->Name = L"binarioLabel";
			this->binarioLabel->Size = System::Drawing::Size(45, 13);
			this->binarioLabel->TabIndex = 17;
			this->binarioLabel->Text = L"Binario: ";
			// 
			// hexadecimalLabel
			// 
			this->hexadecimalLabel->AutoSize = true;
			this->hexadecimalLabel->Location = System::Drawing::Point(68, 420);
			this->hexadecimalLabel->Name = L"hexadecimalLabel";
			this->hexadecimalLabel->Size = System::Drawing::Size(71, 13);
			this->hexadecimalLabel->TabIndex = 18;
			this->hexadecimalLabel->Text = L"Hexadecimal:";
			// 
			// nombreLabel
			// 
			this->nombreLabel->AutoSize = true;
			this->nombreLabel->Location = System::Drawing::Point(71, 448);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(50, 13);
			this->nombreLabel->TabIndex = 19;
			this->nombreLabel->Text = L"Nombre: ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 365);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(206, 20);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(157, 391);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(207, 20);
			this->textBox6->TabIndex = 21;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(157, 417);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(207, 20);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 448);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(206, 20);
			this->textBox8->TabIndex = 23;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 551);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->nombreLabel);
			this->Controls->Add(this->hexadecimalLabel);
			this->Controls->Add(this->binarioLabel);
			this->Controls->Add(this->decimalLabel);
			this->Controls->Add(this->capicua);
			this->Controls->Add(this->numeroFeliz);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				if(nf.getValor() < 0){
					 this->button1->Enabled = false;
				}
				nf.siguiente();
				this->textBox1->Text = "" + nf.getValor();
				this->textBox5->Text = "" + nf.getValor();
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(nf.getValor() < 0){
					 this->button3->Enabled = false;
				}
				np.siguiente();
				this->textBox3->Text = "" + np.getValor();
				this->textBox5->Text = "" + np.getValor();

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {	
			 if(np.getValor() < 0 && nf.getValor() < 0){
					 this->button5->Enabled = false;
				}
				np.anterior();
				nf.anterior();
				this->textBox3->Text = "" + np.getValor();
				this->textBox1->Text = "" + nf.getValor();
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {




		 }
};
}

