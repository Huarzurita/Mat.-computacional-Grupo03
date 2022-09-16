#pragma once

namespace Formulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lblVerticeInicio;
	private: System::Windows::Forms::Label^ lblVerticeFinal;
	private: System::Windows::Forms::ComboBox^ ComboBoxVerticeInicio;
	private: System::Windows::Forms::ComboBox^ comboBoxVerticeFinal;
	private: System::Windows::Forms::Label^ lblCaminoMinimo;
	private: System::Windows::Forms::Button^ btnCalcularCaminoMinimo;
	private: System::Windows::Forms::Label^ lblNumeroDeElementos;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnRandom;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblVerticeInicio = (gcnew System::Windows::Forms::Label());
			this->lblVerticeFinal = (gcnew System::Windows::Forms::Label());
			this->ComboBoxVerticeInicio = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxVerticeFinal = (gcnew System::Windows::Forms::ComboBox());
			this->lblCaminoMinimo = (gcnew System::Windows::Forms::Label());
			this->btnCalcularCaminoMinimo = (gcnew System::Windows::Forms::Button());
			this->lblNumeroDeElementos = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnRandom = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(593, 259);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(343, 312);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(262, 228);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// lblVerticeInicio
			// 
			this->lblVerticeInicio->AutoSize = true;
			this->lblVerticeInicio->Location = System::Drawing::Point(9, 312);
			this->lblVerticeInicio->Name = L"lblVerticeInicio";
			this->lblVerticeInicio->Size = System::Drawing::Size(71, 13);
			this->lblVerticeInicio->TabIndex = 2;
			this->lblVerticeInicio->Text = L"Vertice Inicio:";
			// 
			// lblVerticeFinal
			// 
			this->lblVerticeFinal->AutoSize = true;
			this->lblVerticeFinal->Location = System::Drawing::Point(9, 348);
			this->lblVerticeFinal->Name = L"lblVerticeFinal";
			this->lblVerticeFinal->Size = System::Drawing::Size(68, 13);
			this->lblVerticeFinal->TabIndex = 3;
			this->lblVerticeFinal->Text = L"Vertice Final:";
			// 
			// ComboBoxVerticeInicio
			// 
			this->ComboBoxVerticeInicio->FormattingEnabled = true;
			this->ComboBoxVerticeInicio->Location = System::Drawing::Point(86, 312);
			this->ComboBoxVerticeInicio->Name = L"ComboBoxVerticeInicio";
			this->ComboBoxVerticeInicio->Size = System::Drawing::Size(121, 21);
			this->ComboBoxVerticeInicio->TabIndex = 4;
			// 
			// comboBoxVerticeFinal
			// 
			this->comboBoxVerticeFinal->FormattingEnabled = true;
			this->comboBoxVerticeFinal->Location = System::Drawing::Point(86, 348);
			this->comboBoxVerticeFinal->Name = L"comboBoxVerticeFinal";
			this->comboBoxVerticeFinal->Size = System::Drawing::Size(121, 21);
			this->comboBoxVerticeFinal->TabIndex = 4;
			// 
			// lblCaminoMinimo
			// 
			this->lblCaminoMinimo->AutoSize = true;
			this->lblCaminoMinimo->Location = System::Drawing::Point(12, 421);
			this->lblCaminoMinimo->Name = L"lblCaminoMinimo";
			this->lblCaminoMinimo->Size = System::Drawing::Size(81, 13);
			this->lblCaminoMinimo->TabIndex = 5;
			this->lblCaminoMinimo->Text = L"Camino Minimo:";
			// 
			// btnCalcularCaminoMinimo
			// 
			this->btnCalcularCaminoMinimo->Location = System::Drawing::Point(15, 438);
			this->btnCalcularCaminoMinimo->Name = L"btnCalcularCaminoMinimo";
			this->btnCalcularCaminoMinimo->Size = System::Drawing::Size(120, 38);
			this->btnCalcularCaminoMinimo->TabIndex = 6;
			this->btnCalcularCaminoMinimo->Text = L"Calcular";
			this->btnCalcularCaminoMinimo->UseVisualStyleBackColor = true;
			// 
			// lblNumeroDeElementos
			// 
			this->lblNumeroDeElementos->AutoSize = true;
			this->lblNumeroDeElementos->Location = System::Drawing::Point(343, 547);
			this->lblNumeroDeElementos->Name = L"lblNumeroDeElementos";
			this->lblNumeroDeElementos->Size = System::Drawing::Size(114, 13);
			this->lblNumeroDeElementos->TabIndex = 7;
			this->lblNumeroDeElementos->Text = L"Numero de Elementos:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(463, 544);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 20);
			this->textBox1->TabIndex = 8;
			// 
			// btnRandom
			// 
			this->btnRandom->Location = System::Drawing::Point(343, 580);
			this->btnRandom->Name = L"btnRandom";
			this->btnRandom->Size = System::Drawing::Size(262, 39);
			this->btnRandom->TabIndex = 9;
			this->btnRandom->Text = L"Random";
			this->btnRandom->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 626);
			this->Controls->Add(this->btnRandom);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblNumeroDeElementos);
			this->Controls->Add(this->btnCalcularCaminoMinimo);
			this->Controls->Add(this->lblCaminoMinimo);
			this->Controls->Add(this->comboBoxVerticeFinal);
			this->Controls->Add(this->ComboBoxVerticeInicio);
			this->Controls->Add(this->lblVerticeFinal);
			this->Controls->Add(this->lblVerticeInicio);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
