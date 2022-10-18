#pragma once
#include <iostream>
#include "Vertices.h"

namespace MateComputacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MatrizVisual
	/// </summary>
	public ref class MatrizVisual : public System::Windows::Forms::Form
	{
	public:
		MatrizVisual(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MatrizVisual()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Label^ lblVerticeInicio;
	private: System::Windows::Forms::Label^ lblVerticeFinal;
	private: System::Windows::Forms::ComboBox^ ComboBoxVerticeInicio;
	private: System::Windows::Forms::ComboBox^ comboBoxVerticeFinal;
	private: System::Windows::Forms::Label^ lblCaminoMinimo;
	private: System::Windows::Forms::Button^ btnCalcularCaminoMinimo;

	private: System::Windows::Forms::Label^ lbAfila;
	private: System::Windows::Forms::Label^ lbBfila;
	private: System::Windows::Forms::Label^ lbCfila;
	private: System::Windows::Forms::Label^ lbDfila;
	private: System::Windows::Forms::Label^ lbEfila;
	private: System::Windows::Forms::Label^ lbAcolumna;
	private: System::Windows::Forms::Label^ lbBcolumna;
	private: System::Windows::Forms::Label^ lbCcolumna;
	private: System::Windows::Forms::Label^ lbDcolumna;
	private: System::Windows::Forms::Label^ lbEcolumna;
	private: System::Windows::Forms::TextBox^ tb00;

	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ tb02;
	private: System::Windows::Forms::TextBox^ tb03;
	private: System::Windows::Forms::TextBox^ tb13;
	private: System::Windows::Forms::TextBox^ tb14;
	private: System::Windows::Forms::TextBox^ tb04;
	private: System::Windows::Forms::TextBox^ tb12;
	private: System::Windows::Forms::TextBox^ tb10;
	private: System::Windows::Forms::TextBox^ tb24;
	private: System::Windows::Forms::TextBox^ tb23;
	private: System::Windows::Forms::TextBox^ tb22;
	private: System::Windows::Forms::TextBox^ tb21;
	private: System::Windows::Forms::TextBox^ tb20;
	private: System::Windows::Forms::TextBox^ tb34;
	private: System::Windows::Forms::TextBox^ tb33;
	private: System::Windows::Forms::TextBox^ tb32;
	private: System::Windows::Forms::TextBox^ tb31;
	private: System::Windows::Forms::TextBox^ tb30;
	private: System::Windows::Forms::TextBox^ tb44;
	private: System::Windows::Forms::TextBox^ tb43;
	private: System::Windows::Forms::TextBox^ tb42;
	private: System::Windows::Forms::TextBox^ tb41;
	private: System::Windows::Forms::TextBox^ tb40;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbEntrada;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbFfila;
	private: System::Windows::Forms::Label^ lbFcolumna;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ tb11;
	private: System::Windows::Forms::TextBox^ tb01;
	private: System::Windows::Forms::Label^ lbLfila;
	private: System::Windows::Forms::Label^ lbKfila;
	private: System::Windows::Forms::Label^ lbJfila;
	private: System::Windows::Forms::Label^ lbIfila;
	private: System::Windows::Forms::Label^ lbHfila;
	private: System::Windows::Forms::Label^ lbGfila;
	private: System::Windows::Forms::Label^ lbOfila;
	private: System::Windows::Forms::Label^ lbNfila;
	private: System::Windows::Forms::Label^ lbMfila;
	private: System::Windows::Forms::Label^ lbOcolumna;
	private: System::Windows::Forms::Label^ lbNcolumna;
	private: System::Windows::Forms::Label^ lbMcolumna;
	private: System::Windows::Forms::Label^ lbLcolumna;
	private: System::Windows::Forms::Label^ lbKcolumna;
	private: System::Windows::Forms::Label^ lbJcolumna;
	private: System::Windows::Forms::Label^ lbIcolumna;
	private: System::Windows::Forms::Label^ lbHcolumna;
	private: System::Windows::Forms::Label^ lbGcolumna;
	private: System::Windows::Forms::TextBox^ tb94;

	private: System::Windows::Forms::TextBox^ tb93;

	private: System::Windows::Forms::TextBox^ tb92;

	private: System::Windows::Forms::TextBox^ tb91;

	private: System::Windows::Forms::TextBox^ tb90;
	private: System::Windows::Forms::TextBox^ tb84;


	private: System::Windows::Forms::TextBox^ tb83;

	private: System::Windows::Forms::TextBox^ tb82;

	private: System::Windows::Forms::TextBox^ tb81;

	private: System::Windows::Forms::TextBox^ tb80;
	private: System::Windows::Forms::TextBox^ tb74;


	private: System::Windows::Forms::TextBox^ tb73;

	private: System::Windows::Forms::TextBox^ tb72;

	private: System::Windows::Forms::TextBox^ tb71;

	private: System::Windows::Forms::TextBox^ tb70;
	private: System::Windows::Forms::TextBox^ tb64;


	private: System::Windows::Forms::TextBox^ tb54;
	private: System::Windows::Forms::TextBox^ tb62;


	private: System::Windows::Forms::TextBox^ tb61;

	private: System::Windows::Forms::TextBox^ tb60;
	private: System::Windows::Forms::TextBox^ tb63;


	private: System::Windows::Forms::TextBox^ tb53;

	private: System::Windows::Forms::TextBox^ tb52;

	private: System::Windows::Forms::TextBox^ tb51;

	private: System::Windows::Forms::TextBox^ tb50;
	private: System::Windows::Forms::TextBox^ tb144;


	private: System::Windows::Forms::TextBox^ tb143;

	private: System::Windows::Forms::TextBox^ tb142;

	private: System::Windows::Forms::TextBox^ tb141;

	private: System::Windows::Forms::TextBox^ tb140;
	private: System::Windows::Forms::TextBox^ tb134;


	private: System::Windows::Forms::TextBox^ tb133;

	private: System::Windows::Forms::TextBox^ tb132;

	private: System::Windows::Forms::TextBox^ tb131;

	private: System::Windows::Forms::TextBox^ tb130;
	private: System::Windows::Forms::TextBox^ tb124;


	private: System::Windows::Forms::TextBox^ tb123;

	private: System::Windows::Forms::TextBox^ tb122;

	private: System::Windows::Forms::TextBox^ tb121;

	private: System::Windows::Forms::TextBox^ tb120;
	private: System::Windows::Forms::TextBox^ tb114;


	private: System::Windows::Forms::TextBox^ tb104;


	private: System::Windows::Forms::TextBox^ tb112;

	private: System::Windows::Forms::TextBox^ tb111;

	private: System::Windows::Forms::TextBox^ tb110;
	private: System::Windows::Forms::TextBox^ tb113;


	private: System::Windows::Forms::TextBox^ tb103;

	private: System::Windows::Forms::TextBox^ tb102;

	private: System::Windows::Forms::TextBox^ tb101;

	private: System::Windows::Forms::TextBox^ tb100;
	private: System::Windows::Forms::TextBox^ tb149;


	private: System::Windows::Forms::TextBox^ tb148;

	private: System::Windows::Forms::TextBox^ tb147;

	private: System::Windows::Forms::TextBox^ tb146;

	private: System::Windows::Forms::TextBox^ tb145;
	private: System::Windows::Forms::TextBox^ tb139;


	private: System::Windows::Forms::TextBox^ tb138;

	private: System::Windows::Forms::TextBox^ tb137;

	private: System::Windows::Forms::TextBox^ tb136;

	private: System::Windows::Forms::TextBox^ tb135;
	private: System::Windows::Forms::TextBox^ tb129;


	private: System::Windows::Forms::TextBox^ tb128;

	private: System::Windows::Forms::TextBox^ tb127;

	private: System::Windows::Forms::TextBox^ tb126;

	private: System::Windows::Forms::TextBox^ tb125;
	private: System::Windows::Forms::TextBox^ tb119;



	private: System::Windows::Forms::TextBox^ tb117;

	private: System::Windows::Forms::TextBox^ tb116;

	private: System::Windows::Forms::TextBox^ tb115;
	private: System::Windows::Forms::TextBox^ tb108;




	private: System::Windows::Forms::TextBox^ tb107;

	private: System::Windows::Forms::TextBox^ tb106;

	private: System::Windows::Forms::TextBox^ tb105;
	private: System::Windows::Forms::TextBox^ tb99;


	private: System::Windows::Forms::TextBox^ tb98;

	private: System::Windows::Forms::TextBox^ tb97;

	private: System::Windows::Forms::TextBox^ tb96;

	private: System::Windows::Forms::TextBox^ tb95;
	private: System::Windows::Forms::TextBox^ tb89;


	private: System::Windows::Forms::TextBox^ tb88;

	private: System::Windows::Forms::TextBox^ tb87;

	private: System::Windows::Forms::TextBox^ tb86;

	private: System::Windows::Forms::TextBox^ tb85;
	private: System::Windows::Forms::TextBox^ tb79;


	private: System::Windows::Forms::TextBox^ tb78;

	private: System::Windows::Forms::TextBox^ tb77;

	private: System::Windows::Forms::TextBox^ tb76;

	private: System::Windows::Forms::TextBox^ tb75;
	private: System::Windows::Forms::TextBox^ tb69;


	private: System::Windows::Forms::TextBox^ tb59;
	private: System::Windows::Forms::TextBox^ tb67;


	private: System::Windows::Forms::TextBox^ tb66;

	private: System::Windows::Forms::TextBox^ tb65;
	private: System::Windows::Forms::TextBox^ tb68;


	private: System::Windows::Forms::TextBox^ tb58;

	private: System::Windows::Forms::TextBox^ tb57;

	private: System::Windows::Forms::TextBox^ tb56;

	private: System::Windows::Forms::TextBox^ tb55;
	private: System::Windows::Forms::TextBox^ tb49;



	private: System::Windows::Forms::TextBox^ tb48;

	private: System::Windows::Forms::TextBox^ tb47;

	private: System::Windows::Forms::TextBox^ tb46;

	private: System::Windows::Forms::TextBox^ tb45;
	private: System::Windows::Forms::TextBox^ tb39;


	private: System::Windows::Forms::TextBox^ tb38;

	private: System::Windows::Forms::TextBox^ tb37;

	private: System::Windows::Forms::TextBox^ tb36;

	private: System::Windows::Forms::TextBox^ tb35;
	private: System::Windows::Forms::TextBox^ tb29;


	private: System::Windows::Forms::TextBox^ tb28;

	private: System::Windows::Forms::TextBox^ tb27;

	private: System::Windows::Forms::TextBox^ tb26;

	private: System::Windows::Forms::TextBox^ tb25;
	private: System::Windows::Forms::TextBox^ tb19;


	private: System::Windows::Forms::TextBox^ tb09;
	private: System::Windows::Forms::TextBox^ tb17;


	private: System::Windows::Forms::TextBox^ tb16;

	private: System::Windows::Forms::TextBox^ tb15;
	private: System::Windows::Forms::TextBox^ tb18;


	private: System::Windows::Forms::TextBox^ tb08;

	private: System::Windows::Forms::TextBox^ tb07;

	private: System::Windows::Forms::TextBox^ tb06;

	private: System::Windows::Forms::TextBox^ tb05;
	private: System::Windows::Forms::TextBox^ tb414;


	private: System::Windows::Forms::TextBox^ tb413;

	private: System::Windows::Forms::TextBox^ tb412;

	private: System::Windows::Forms::TextBox^ tb411;

	private: System::Windows::Forms::TextBox^ tb410;

	private: System::Windows::Forms::TextBox^ tb314;

	private: System::Windows::Forms::TextBox^ tb313;

	private: System::Windows::Forms::TextBox^ tb312;

	private: System::Windows::Forms::TextBox^ tb311;

	private: System::Windows::Forms::TextBox^ tb310;

	private: System::Windows::Forms::TextBox^ tb214;

	private: System::Windows::Forms::TextBox^ tb213;

	private: System::Windows::Forms::TextBox^ tb212;

	private: System::Windows::Forms::TextBox^ tb211;

	private: System::Windows::Forms::TextBox^ tb210;
	private: System::Windows::Forms::TextBox^ tb0114;



	private: System::Windows::Forms::TextBox^ tb014;
	private: System::Windows::Forms::TextBox^ tb0112;

	private: System::Windows::Forms::TextBox^ tb0111;



	private: System::Windows::Forms::TextBox^ tb0110;
	private: System::Windows::Forms::TextBox^ tb0113;





	private: System::Windows::Forms::TextBox^ tb013;

	private: System::Windows::Forms::TextBox^ tb012;

	private: System::Windows::Forms::TextBox^ tb011;

	private: System::Windows::Forms::TextBox^ tb010;
	private: System::Windows::Forms::TextBox^ tb914;


	private: System::Windows::Forms::TextBox^ tb913;

	private: System::Windows::Forms::TextBox^ tb912;

	private: System::Windows::Forms::TextBox^ tb911;

	private: System::Windows::Forms::TextBox^ tb910;
	private: System::Windows::Forms::TextBox^ tb814;


	private: System::Windows::Forms::TextBox^ tb813;

	private: System::Windows::Forms::TextBox^ tb812;

	private: System::Windows::Forms::TextBox^ tb811;

	private: System::Windows::Forms::TextBox^ tb810;
	private: System::Windows::Forms::TextBox^ tb714;


	private: System::Windows::Forms::TextBox^ tb713;

	private: System::Windows::Forms::TextBox^ tb712;

	private: System::Windows::Forms::TextBox^ tb711;

	private: System::Windows::Forms::TextBox^ tb710;
	private: System::Windows::Forms::TextBox^ tb614;


	private: System::Windows::Forms::TextBox^ tb514;
	private: System::Windows::Forms::TextBox^ tb612;


	private: System::Windows::Forms::TextBox^ tb611;

	private: System::Windows::Forms::TextBox^ tb610;
	private: System::Windows::Forms::TextBox^ tb613;


	private: System::Windows::Forms::TextBox^ tb513;

	private: System::Windows::Forms::TextBox^ tb512;

	private: System::Windows::Forms::TextBox^ tb511;

	private: System::Windows::Forms::TextBox^ tb510;
	private: System::Windows::Forms::TextBox^ tb1414;


	private: System::Windows::Forms::TextBox^ tb1413;

	private: System::Windows::Forms::TextBox^ tb1412;

	private: System::Windows::Forms::TextBox^ tb1411;

	private: System::Windows::Forms::TextBox^ tb1410;
	private: System::Windows::Forms::TextBox^ tb1314;


	private: System::Windows::Forms::TextBox^ tb1313;

	private: System::Windows::Forms::TextBox^ tb1312;

	private: System::Windows::Forms::TextBox^ tb1311;

	private: System::Windows::Forms::TextBox^ tb1310;
	private: System::Windows::Forms::TextBox^ tb1214;


	private: System::Windows::Forms::TextBox^ tb1213;

	private: System::Windows::Forms::TextBox^ tb1212;

	private: System::Windows::Forms::TextBox^ tb1211;

	private: System::Windows::Forms::TextBox^ tb1210;
	private: System::Windows::Forms::TextBox^ tb1114;


	private: System::Windows::Forms::TextBox^ tb1014;


	private: System::Windows::Forms::TextBox^ tb1112;

	private: System::Windows::Forms::TextBox^ tb1111;

	private: System::Windows::Forms::TextBox^ tb1110;
	private: System::Windows::Forms::TextBox^ tb1113;


	private: System::Windows::Forms::TextBox^ tb1013;

	private: System::Windows::Forms::TextBox^ tb1012;

	private: System::Windows::Forms::TextBox^ tb1011;

	private: System::Windows::Forms::TextBox^ tb1010;

	private: System::Windows::Forms::TextBox^ tb118;
	private: System::Windows::Forms::TextBox^ tb109;
	private: System::Windows::Forms::Button^ btnConfirmar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ button1;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>

		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
	private: System::Windows::Forms::Label^ lbGrafoA;
	private: System::Windows::Forms::Label^ lbGrafoB;
	private: System::Windows::Forms::Label^ lbGrafoC;
	private: System::Windows::Forms::Label^ lbGrafoD;
	private: System::Windows::Forms::Label^ lbGrafoE;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbPesoMinimo;
	private: System::Windows::Forms::Label^ lbCaminoMinimo;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lbGrafoF;
	private: System::Windows::Forms::Label^ lbGrafoO;
	private: System::Windows::Forms::Label^ lbGrafoN;
	private: System::Windows::Forms::Label^ lbGrafoM;
	private: System::Windows::Forms::Label^ lbGrafoL;
	private: System::Windows::Forms::Label^ lbGrafoK;
	private: System::Windows::Forms::Label^ lbGrafoJ;
	private: System::Windows::Forms::Label^ lbGrafoI;
	private: System::Windows::Forms::Label^ lbGrafoH;
	private: System::Windows::Forms::Label^ lbGrafoG;
	private: System::ComponentModel::IContainer^ components;



#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�todo necesario para admitir el Dise�ador. No se puede modificar
		   /// el contenido de este m�todo con el editor de c�digo.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatrizVisual::typeid));
			   this->lblVerticeInicio = (gcnew System::Windows::Forms::Label());
			   this->lblVerticeFinal = (gcnew System::Windows::Forms::Label());
			   this->ComboBoxVerticeInicio = (gcnew System::Windows::Forms::ComboBox());
			   this->comboBoxVerticeFinal = (gcnew System::Windows::Forms::ComboBox());
			   this->lblCaminoMinimo = (gcnew System::Windows::Forms::Label());
			   this->btnCalcularCaminoMinimo = (gcnew System::Windows::Forms::Button());
			   this->lbAfila = (gcnew System::Windows::Forms::Label());
			   this->lbBfila = (gcnew System::Windows::Forms::Label());
			   this->lbCfila = (gcnew System::Windows::Forms::Label());
			   this->lbDfila = (gcnew System::Windows::Forms::Label());
			   this->lbEfila = (gcnew System::Windows::Forms::Label());
			   this->lbAcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbBcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbCcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbDcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbEcolumna = (gcnew System::Windows::Forms::Label());
			   this->tb00 = (gcnew System::Windows::Forms::TextBox());
			   this->tb02 = (gcnew System::Windows::Forms::TextBox());
			   this->tb03 = (gcnew System::Windows::Forms::TextBox());
			   this->tb13 = (gcnew System::Windows::Forms::TextBox());
			   this->tb14 = (gcnew System::Windows::Forms::TextBox());
			   this->tb04 = (gcnew System::Windows::Forms::TextBox());
			   this->tb12 = (gcnew System::Windows::Forms::TextBox());
			   this->tb10 = (gcnew System::Windows::Forms::TextBox());
			   this->tb24 = (gcnew System::Windows::Forms::TextBox());
			   this->tb23 = (gcnew System::Windows::Forms::TextBox());
			   this->tb22 = (gcnew System::Windows::Forms::TextBox());
			   this->tb21 = (gcnew System::Windows::Forms::TextBox());
			   this->tb20 = (gcnew System::Windows::Forms::TextBox());
			   this->tb34 = (gcnew System::Windows::Forms::TextBox());
			   this->tb33 = (gcnew System::Windows::Forms::TextBox());
			   this->tb32 = (gcnew System::Windows::Forms::TextBox());
			   this->tb31 = (gcnew System::Windows::Forms::TextBox());
			   this->tb30 = (gcnew System::Windows::Forms::TextBox());
			   this->tb44 = (gcnew System::Windows::Forms::TextBox());
			   this->tb43 = (gcnew System::Windows::Forms::TextBox());
			   this->tb42 = (gcnew System::Windows::Forms::TextBox());
			   this->tb41 = (gcnew System::Windows::Forms::TextBox());
			   this->tb40 = (gcnew System::Windows::Forms::TextBox());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->tbEntrada = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->lbFfila = (gcnew System::Windows::Forms::Label());
			   this->lbFcolumna = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->tb11 = (gcnew System::Windows::Forms::TextBox());
			   this->tb01 = (gcnew System::Windows::Forms::TextBox());
			   this->lbLfila = (gcnew System::Windows::Forms::Label());
			   this->lbKfila = (gcnew System::Windows::Forms::Label());
			   this->lbJfila = (gcnew System::Windows::Forms::Label());
			   this->lbIfila = (gcnew System::Windows::Forms::Label());
			   this->lbHfila = (gcnew System::Windows::Forms::Label());
			   this->lbGfila = (gcnew System::Windows::Forms::Label());
			   this->lbOfila = (gcnew System::Windows::Forms::Label());
			   this->lbNfila = (gcnew System::Windows::Forms::Label());
			   this->lbMfila = (gcnew System::Windows::Forms::Label());
			   this->lbOcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbNcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbMcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbLcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbKcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbJcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbIcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbHcolumna = (gcnew System::Windows::Forms::Label());
			   this->lbGcolumna = (gcnew System::Windows::Forms::Label());
			   this->tb94 = (gcnew System::Windows::Forms::TextBox());
			   this->tb93 = (gcnew System::Windows::Forms::TextBox());
			   this->tb92 = (gcnew System::Windows::Forms::TextBox());
			   this->tb91 = (gcnew System::Windows::Forms::TextBox());
			   this->tb90 = (gcnew System::Windows::Forms::TextBox());
			   this->tb84 = (gcnew System::Windows::Forms::TextBox());
			   this->tb83 = (gcnew System::Windows::Forms::TextBox());
			   this->tb82 = (gcnew System::Windows::Forms::TextBox());
			   this->tb81 = (gcnew System::Windows::Forms::TextBox());
			   this->tb80 = (gcnew System::Windows::Forms::TextBox());
			   this->tb74 = (gcnew System::Windows::Forms::TextBox());
			   this->tb73 = (gcnew System::Windows::Forms::TextBox());
			   this->tb72 = (gcnew System::Windows::Forms::TextBox());
			   this->tb71 = (gcnew System::Windows::Forms::TextBox());
			   this->tb70 = (gcnew System::Windows::Forms::TextBox());
			   this->tb64 = (gcnew System::Windows::Forms::TextBox());
			   this->tb54 = (gcnew System::Windows::Forms::TextBox());
			   this->tb62 = (gcnew System::Windows::Forms::TextBox());
			   this->tb61 = (gcnew System::Windows::Forms::TextBox());
			   this->tb60 = (gcnew System::Windows::Forms::TextBox());
			   this->tb63 = (gcnew System::Windows::Forms::TextBox());
			   this->tb53 = (gcnew System::Windows::Forms::TextBox());
			   this->tb52 = (gcnew System::Windows::Forms::TextBox());
			   this->tb51 = (gcnew System::Windows::Forms::TextBox());
			   this->tb50 = (gcnew System::Windows::Forms::TextBox());
			   this->tb144 = (gcnew System::Windows::Forms::TextBox());
			   this->tb143 = (gcnew System::Windows::Forms::TextBox());
			   this->tb142 = (gcnew System::Windows::Forms::TextBox());
			   this->tb141 = (gcnew System::Windows::Forms::TextBox());
			   this->tb140 = (gcnew System::Windows::Forms::TextBox());
			   this->tb134 = (gcnew System::Windows::Forms::TextBox());
			   this->tb133 = (gcnew System::Windows::Forms::TextBox());
			   this->tb132 = (gcnew System::Windows::Forms::TextBox());
			   this->tb131 = (gcnew System::Windows::Forms::TextBox());
			   this->tb130 = (gcnew System::Windows::Forms::TextBox());
			   this->tb124 = (gcnew System::Windows::Forms::TextBox());
			   this->tb123 = (gcnew System::Windows::Forms::TextBox());
			   this->tb122 = (gcnew System::Windows::Forms::TextBox());
			   this->tb121 = (gcnew System::Windows::Forms::TextBox());
			   this->tb120 = (gcnew System::Windows::Forms::TextBox());
			   this->tb114 = (gcnew System::Windows::Forms::TextBox());
			   this->tb104 = (gcnew System::Windows::Forms::TextBox());
			   this->tb112 = (gcnew System::Windows::Forms::TextBox());
			   this->tb111 = (gcnew System::Windows::Forms::TextBox());
			   this->tb110 = (gcnew System::Windows::Forms::TextBox());
			   this->tb113 = (gcnew System::Windows::Forms::TextBox());
			   this->tb103 = (gcnew System::Windows::Forms::TextBox());
			   this->tb102 = (gcnew System::Windows::Forms::TextBox());
			   this->tb101 = (gcnew System::Windows::Forms::TextBox());
			   this->tb100 = (gcnew System::Windows::Forms::TextBox());
			   this->tb149 = (gcnew System::Windows::Forms::TextBox());
			   this->tb148 = (gcnew System::Windows::Forms::TextBox());
			   this->tb147 = (gcnew System::Windows::Forms::TextBox());
			   this->tb146 = (gcnew System::Windows::Forms::TextBox());
			   this->tb145 = (gcnew System::Windows::Forms::TextBox());
			   this->tb139 = (gcnew System::Windows::Forms::TextBox());
			   this->tb138 = (gcnew System::Windows::Forms::TextBox());
			   this->tb137 = (gcnew System::Windows::Forms::TextBox());
			   this->tb136 = (gcnew System::Windows::Forms::TextBox());
			   this->tb135 = (gcnew System::Windows::Forms::TextBox());
			   this->tb129 = (gcnew System::Windows::Forms::TextBox());
			   this->tb128 = (gcnew System::Windows::Forms::TextBox());
			   this->tb127 = (gcnew System::Windows::Forms::TextBox());
			   this->tb126 = (gcnew System::Windows::Forms::TextBox());
			   this->tb125 = (gcnew System::Windows::Forms::TextBox());
			   this->tb119 = (gcnew System::Windows::Forms::TextBox());
			   this->tb117 = (gcnew System::Windows::Forms::TextBox());
			   this->tb116 = (gcnew System::Windows::Forms::TextBox());
			   this->tb115 = (gcnew System::Windows::Forms::TextBox());
			   this->tb108 = (gcnew System::Windows::Forms::TextBox());
			   this->tb107 = (gcnew System::Windows::Forms::TextBox());
			   this->tb106 = (gcnew System::Windows::Forms::TextBox());
			   this->tb105 = (gcnew System::Windows::Forms::TextBox());
			   this->tb99 = (gcnew System::Windows::Forms::TextBox());
			   this->tb98 = (gcnew System::Windows::Forms::TextBox());
			   this->tb97 = (gcnew System::Windows::Forms::TextBox());
			   this->tb96 = (gcnew System::Windows::Forms::TextBox());
			   this->tb95 = (gcnew System::Windows::Forms::TextBox());
			   this->tb89 = (gcnew System::Windows::Forms::TextBox());
			   this->tb88 = (gcnew System::Windows::Forms::TextBox());
			   this->tb87 = (gcnew System::Windows::Forms::TextBox());
			   this->tb86 = (gcnew System::Windows::Forms::TextBox());
			   this->tb85 = (gcnew System::Windows::Forms::TextBox());
			   this->tb79 = (gcnew System::Windows::Forms::TextBox());
			   this->tb78 = (gcnew System::Windows::Forms::TextBox());
			   this->tb77 = (gcnew System::Windows::Forms::TextBox());
			   this->tb76 = (gcnew System::Windows::Forms::TextBox());
			   this->tb75 = (gcnew System::Windows::Forms::TextBox());
			   this->tb69 = (gcnew System::Windows::Forms::TextBox());
			   this->tb59 = (gcnew System::Windows::Forms::TextBox());
			   this->tb67 = (gcnew System::Windows::Forms::TextBox());
			   this->tb66 = (gcnew System::Windows::Forms::TextBox());
			   this->tb65 = (gcnew System::Windows::Forms::TextBox());
			   this->tb68 = (gcnew System::Windows::Forms::TextBox());
			   this->tb58 = (gcnew System::Windows::Forms::TextBox());
			   this->tb57 = (gcnew System::Windows::Forms::TextBox());
			   this->tb56 = (gcnew System::Windows::Forms::TextBox());
			   this->tb55 = (gcnew System::Windows::Forms::TextBox());
			   this->tb49 = (gcnew System::Windows::Forms::TextBox());
			   this->tb48 = (gcnew System::Windows::Forms::TextBox());
			   this->tb47 = (gcnew System::Windows::Forms::TextBox());
			   this->tb46 = (gcnew System::Windows::Forms::TextBox());
			   this->tb45 = (gcnew System::Windows::Forms::TextBox());
			   this->tb39 = (gcnew System::Windows::Forms::TextBox());
			   this->tb38 = (gcnew System::Windows::Forms::TextBox());
			   this->tb37 = (gcnew System::Windows::Forms::TextBox());
			   this->tb36 = (gcnew System::Windows::Forms::TextBox());
			   this->tb35 = (gcnew System::Windows::Forms::TextBox());
			   this->tb29 = (gcnew System::Windows::Forms::TextBox());
			   this->tb28 = (gcnew System::Windows::Forms::TextBox());
			   this->tb27 = (gcnew System::Windows::Forms::TextBox());
			   this->tb26 = (gcnew System::Windows::Forms::TextBox());
			   this->tb25 = (gcnew System::Windows::Forms::TextBox());
			   this->tb19 = (gcnew System::Windows::Forms::TextBox());
			   this->tb09 = (gcnew System::Windows::Forms::TextBox());
			   this->tb17 = (gcnew System::Windows::Forms::TextBox());
			   this->tb16 = (gcnew System::Windows::Forms::TextBox());
			   this->tb15 = (gcnew System::Windows::Forms::TextBox());
			   this->tb18 = (gcnew System::Windows::Forms::TextBox());
			   this->tb08 = (gcnew System::Windows::Forms::TextBox());
			   this->tb07 = (gcnew System::Windows::Forms::TextBox());
			   this->tb06 = (gcnew System::Windows::Forms::TextBox());
			   this->tb05 = (gcnew System::Windows::Forms::TextBox());
			   this->tb414 = (gcnew System::Windows::Forms::TextBox());
			   this->tb413 = (gcnew System::Windows::Forms::TextBox());
			   this->tb412 = (gcnew System::Windows::Forms::TextBox());
			   this->tb411 = (gcnew System::Windows::Forms::TextBox());
			   this->tb410 = (gcnew System::Windows::Forms::TextBox());
			   this->tb314 = (gcnew System::Windows::Forms::TextBox());
			   this->tb313 = (gcnew System::Windows::Forms::TextBox());
			   this->tb312 = (gcnew System::Windows::Forms::TextBox());
			   this->tb311 = (gcnew System::Windows::Forms::TextBox());
			   this->tb310 = (gcnew System::Windows::Forms::TextBox());
			   this->tb214 = (gcnew System::Windows::Forms::TextBox());
			   this->tb213 = (gcnew System::Windows::Forms::TextBox());
			   this->tb212 = (gcnew System::Windows::Forms::TextBox());
			   this->tb211 = (gcnew System::Windows::Forms::TextBox());
			   this->tb210 = (gcnew System::Windows::Forms::TextBox());
			   this->tb0114 = (gcnew System::Windows::Forms::TextBox());
			   this->tb014 = (gcnew System::Windows::Forms::TextBox());
			   this->tb0112 = (gcnew System::Windows::Forms::TextBox());
			   this->tb0111 = (gcnew System::Windows::Forms::TextBox());
			   this->tb0110 = (gcnew System::Windows::Forms::TextBox());
			   this->tb0113 = (gcnew System::Windows::Forms::TextBox());
			   this->tb013 = (gcnew System::Windows::Forms::TextBox());
			   this->tb012 = (gcnew System::Windows::Forms::TextBox());
			   this->tb011 = (gcnew System::Windows::Forms::TextBox());
			   this->tb010 = (gcnew System::Windows::Forms::TextBox());
			   this->tb914 = (gcnew System::Windows::Forms::TextBox());
			   this->tb913 = (gcnew System::Windows::Forms::TextBox());
			   this->tb912 = (gcnew System::Windows::Forms::TextBox());
			   this->tb911 = (gcnew System::Windows::Forms::TextBox());
			   this->tb910 = (gcnew System::Windows::Forms::TextBox());
			   this->tb814 = (gcnew System::Windows::Forms::TextBox());
			   this->tb813 = (gcnew System::Windows::Forms::TextBox());
			   this->tb812 = (gcnew System::Windows::Forms::TextBox());
			   this->tb811 = (gcnew System::Windows::Forms::TextBox());
			   this->tb810 = (gcnew System::Windows::Forms::TextBox());
			   this->tb714 = (gcnew System::Windows::Forms::TextBox());
			   this->tb713 = (gcnew System::Windows::Forms::TextBox());
			   this->tb712 = (gcnew System::Windows::Forms::TextBox());
			   this->tb711 = (gcnew System::Windows::Forms::TextBox());
			   this->tb710 = (gcnew System::Windows::Forms::TextBox());
			   this->tb614 = (gcnew System::Windows::Forms::TextBox());
			   this->tb514 = (gcnew System::Windows::Forms::TextBox());
			   this->tb612 = (gcnew System::Windows::Forms::TextBox());
			   this->tb611 = (gcnew System::Windows::Forms::TextBox());
			   this->tb610 = (gcnew System::Windows::Forms::TextBox());
			   this->tb613 = (gcnew System::Windows::Forms::TextBox());
			   this->tb513 = (gcnew System::Windows::Forms::TextBox());
			   this->tb512 = (gcnew System::Windows::Forms::TextBox());
			   this->tb511 = (gcnew System::Windows::Forms::TextBox());
			   this->tb510 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1414 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1413 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1412 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1411 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1410 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1314 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1313 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1312 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1311 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1310 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1214 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1213 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1212 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1211 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1210 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1114 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1014 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1112 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1111 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1110 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1113 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1013 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1012 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1011 = (gcnew System::Windows::Forms::TextBox());
			   this->tb1010 = (gcnew System::Windows::Forms::TextBox());
			   this->tb118 = (gcnew System::Windows::Forms::TextBox());
			   this->tb109 = (gcnew System::Windows::Forms::TextBox());
			   this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			   this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->lbGrafoA = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoB = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoC = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoD = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoE = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->lbGrafoO = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoN = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoM = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoL = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoK = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoJ = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoI = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoH = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoG = (gcnew System::Windows::Forms::Label());
			   this->lbGrafoF = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->lbPesoMinimo = (gcnew System::Windows::Forms::Label());
			   this->lbCaminoMinimo = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // lblVerticeInicio
			   // 
			   this->lblVerticeInicio->AutoSize = true;
			   this->lblVerticeInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblVerticeInicio->ForeColor = System::Drawing::Color::White;
			   this->lblVerticeInicio->Location = System::Drawing::Point(63, 591);
			   this->lblVerticeInicio->Name = L"lblVerticeInicio";
			   this->lblVerticeInicio->Size = System::Drawing::Size(86, 13);
			   this->lblVerticeInicio->TabIndex = 2;
			   this->lblVerticeInicio->Text = L"Vertice Inicio:";
			   // 
			   // lblVerticeFinal
			   // 
			   this->lblVerticeFinal->AutoSize = true;
			   this->lblVerticeFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblVerticeFinal->ForeColor = System::Drawing::Color::White;
			   this->lblVerticeFinal->Location = System::Drawing::Point(66, 633);
			   this->lblVerticeFinal->Name = L"lblVerticeFinal";
			   this->lblVerticeFinal->Size = System::Drawing::Size(82, 13);
			   this->lblVerticeFinal->TabIndex = 3;
			   this->lblVerticeFinal->Text = L"Vertice Final:";
			   // 
			   // ComboBoxVerticeInicio
			   // 
			   this->ComboBoxVerticeInicio->FormattingEnabled = true;
			   this->ComboBoxVerticeInicio->Location = System::Drawing::Point(160, 588);
			   this->ComboBoxVerticeInicio->Name = L"ComboBoxVerticeInicio";
			   this->ComboBoxVerticeInicio->Size = System::Drawing::Size(66, 21);
			   this->ComboBoxVerticeInicio->TabIndex = 4;
			   // 
			   // comboBoxVerticeFinal
			   // 
			   this->comboBoxVerticeFinal->FormattingEnabled = true;
			   this->comboBoxVerticeFinal->Location = System::Drawing::Point(160, 635);
			   this->comboBoxVerticeFinal->Name = L"comboBoxVerticeFinal";
			   this->comboBoxVerticeFinal->Size = System::Drawing::Size(66, 21);
			   this->comboBoxVerticeFinal->TabIndex = 4;
			   // 
			   // lblCaminoMinimo
			   // 
			   this->lblCaminoMinimo->AutoSize = true;
			   this->lblCaminoMinimo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCaminoMinimo->ForeColor = System::Drawing::Color::White;
			   this->lblCaminoMinimo->Location = System::Drawing::Point(53, 676);
			   this->lblCaminoMinimo->Name = L"lblCaminoMinimo";
			   this->lblCaminoMinimo->Size = System::Drawing::Size(95, 13);
			   this->lblCaminoMinimo->TabIndex = 5;
			   this->lblCaminoMinimo->Text = L"Camino Minimo:";
			   // 
			   // btnCalcularCaminoMinimo
			   // 
			   this->btnCalcularCaminoMinimo->BackColor = System::Drawing::Color::Gray;
			   this->btnCalcularCaminoMinimo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->btnCalcularCaminoMinimo->ForeColor = System::Drawing::Color::White;
			   this->btnCalcularCaminoMinimo->Location = System::Drawing::Point(158, 668);
			   this->btnCalcularCaminoMinimo->Name = L"btnCalcularCaminoMinimo";
			   this->btnCalcularCaminoMinimo->Size = System::Drawing::Size(120, 38);
			   this->btnCalcularCaminoMinimo->TabIndex = 6;
			   this->btnCalcularCaminoMinimo->Text = L"Calcular";
			   this->btnCalcularCaminoMinimo->UseVisualStyleBackColor = false;
			   this->btnCalcularCaminoMinimo->Click += gcnew System::EventHandler(this, &MatrizVisual::btnCalcularCaminoMinimo_Click);
			   // 
			   // lbAfila
			   // 
			   this->lbAfila->AutoSize = true;
			   this->lbAfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbAfila->ForeColor = System::Drawing::Color::White;
			   this->lbAfila->Location = System::Drawing::Point(406, 84);
			   this->lbAfila->Name = L"lbAfila";
			   this->lbAfila->Size = System::Drawing::Size(15, 17);
			   this->lbAfila->TabIndex = 0;
			   this->lbAfila->Text = L"A";
			   this->lbAfila->Visible = false;
			   // 
			   // lbBfila
			   // 
			   this->lbBfila->AutoSize = true;
			   this->lbBfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbBfila->ForeColor = System::Drawing::Color::White;
			   this->lbBfila->Location = System::Drawing::Point(407, 110);
			   this->lbBfila->Name = L"lbBfila";
			   this->lbBfila->Size = System::Drawing::Size(14, 17);
			   this->lbBfila->TabIndex = 1;
			   this->lbBfila->Text = L"B";
			   this->lbBfila->Visible = false;
			   // 
			   // lbCfila
			   // 
			   this->lbCfila->AutoSize = true;
			   this->lbCfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbCfila->ForeColor = System::Drawing::Color::White;
			   this->lbCfila->Location = System::Drawing::Point(407, 135);
			   this->lbCfila->Name = L"lbCfila";
			   this->lbCfila->Size = System::Drawing::Size(14, 17);
			   this->lbCfila->TabIndex = 2;
			   this->lbCfila->Text = L"C";
			   this->lbCfila->Visible = false;
			   // 
			   // lbDfila
			   // 
			   this->lbDfila->AutoSize = true;
			   this->lbDfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbDfila->ForeColor = System::Drawing::Color::White;
			   this->lbDfila->Location = System::Drawing::Point(407, 161);
			   this->lbDfila->Name = L"lbDfila";
			   this->lbDfila->Size = System::Drawing::Size(14, 17);
			   this->lbDfila->TabIndex = 3;
			   this->lbDfila->Text = L"D";
			   this->lbDfila->Visible = false;
			   // 
			   // lbEfila
			   // 
			   this->lbEfila->AutoSize = true;
			   this->lbEfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbEfila->ForeColor = System::Drawing::Color::White;
			   this->lbEfila->Location = System::Drawing::Point(407, 188);
			   this->lbEfila->Name = L"lbEfila";
			   this->lbEfila->Size = System::Drawing::Size(13, 17);
			   this->lbEfila->TabIndex = 4;
			   this->lbEfila->Text = L"E";
			   this->lbEfila->Visible = false;
			   // 
			   // lbAcolumna
			   // 
			   this->lbAcolumna->AutoSize = true;
			   this->lbAcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbAcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbAcolumna->Location = System::Drawing::Point(445, 50);
			   this->lbAcolumna->Name = L"lbAcolumna";
			   this->lbAcolumna->Size = System::Drawing::Size(15, 17);
			   this->lbAcolumna->TabIndex = 5;
			   this->lbAcolumna->Text = L"A";
			   this->lbAcolumna->Visible = false;
			   // 
			   // lbBcolumna
			   // 
			   this->lbBcolumna->AutoSize = true;
			   this->lbBcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbBcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbBcolumna->Location = System::Drawing::Point(484, 50);
			   this->lbBcolumna->Name = L"lbBcolumna";
			   this->lbBcolumna->Size = System::Drawing::Size(14, 17);
			   this->lbBcolumna->TabIndex = 6;
			   this->lbBcolumna->Text = L"B";
			   this->lbBcolumna->Visible = false;
			   // 
			   // lbCcolumna
			   // 
			   this->lbCcolumna->AutoSize = true;
			   this->lbCcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbCcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbCcolumna->Location = System::Drawing::Point(522, 50);
			   this->lbCcolumna->Name = L"lbCcolumna";
			   this->lbCcolumna->Size = System::Drawing::Size(14, 17);
			   this->lbCcolumna->TabIndex = 7;
			   this->lbCcolumna->Text = L"C";
			   this->lbCcolumna->Visible = false;
			   // 
			   // lbDcolumna
			   // 
			   this->lbDcolumna->AutoSize = true;
			   this->lbDcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbDcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbDcolumna->Location = System::Drawing::Point(559, 50);
			   this->lbDcolumna->Name = L"lbDcolumna";
			   this->lbDcolumna->Size = System::Drawing::Size(14, 17);
			   this->lbDcolumna->TabIndex = 8;
			   this->lbDcolumna->Text = L"D";
			   this->lbDcolumna->Visible = false;
			   // 
			   // lbEcolumna
			   // 
			   this->lbEcolumna->AutoSize = true;
			   this->lbEcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbEcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbEcolumna->Location = System::Drawing::Point(597, 50);
			   this->lbEcolumna->Name = L"lbEcolumna";
			   this->lbEcolumna->Size = System::Drawing::Size(13, 17);
			   this->lbEcolumna->TabIndex = 9;
			   this->lbEcolumna->Text = L"E";
			   this->lbEcolumna->Visible = false;
			   // 
			   // tb00
			   // 
			   this->tb00->Enabled = false;
			   this->tb00->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tb00->ForeColor = System::Drawing::Color::White;
			   this->tb00->Location = System::Drawing::Point(437, 81);
			   this->tb00->Name = L"tb00";
			   this->tb00->Size = System::Drawing::Size(32, 20);
			   this->tb00->TabIndex = 10;
			   this->tb00->Visible = false;
			   // 
			   // tb02
			   // 
			   this->tb02->Enabled = false;
			   this->tb02->Location = System::Drawing::Point(513, 81);
			   this->tb02->Name = L"tb02";
			   this->tb02->Size = System::Drawing::Size(32, 20);
			   this->tb02->TabIndex = 12;
			   this->tb02->Visible = false;
			   // 
			   // tb03
			   // 
			   this->tb03->Enabled = false;
			   this->tb03->Location = System::Drawing::Point(551, 81);
			   this->tb03->Name = L"tb03";
			   this->tb03->Size = System::Drawing::Size(32, 20);
			   this->tb03->TabIndex = 13;
			   this->tb03->Visible = false;
			   // 
			   // tb13
			   // 
			   this->tb13->Enabled = false;
			   this->tb13->Location = System::Drawing::Point(551, 107);
			   this->tb13->Name = L"tb13";
			   this->tb13->Size = System::Drawing::Size(32, 20);
			   this->tb13->TabIndex = 14;
			   this->tb13->Visible = false;
			   // 
			   // tb14
			   // 
			   this->tb14->Enabled = false;
			   this->tb14->Location = System::Drawing::Point(589, 107);
			   this->tb14->Name = L"tb14";
			   this->tb14->Size = System::Drawing::Size(32, 20);
			   this->tb14->TabIndex = 19;
			   this->tb14->Visible = false;
			   // 
			   // tb04
			   // 
			   this->tb04->Enabled = false;
			   this->tb04->Location = System::Drawing::Point(589, 82);
			   this->tb04->Name = L"tb04";
			   this->tb04->Size = System::Drawing::Size(32, 20);
			   this->tb04->TabIndex = 18;
			   this->tb04->Visible = false;
			   // 
			   // tb12
			   // 
			   this->tb12->Enabled = false;
			   this->tb12->Location = System::Drawing::Point(513, 107);
			   this->tb12->Name = L"tb12";
			   this->tb12->Size = System::Drawing::Size(32, 20);
			   this->tb12->TabIndex = 17;
			   this->tb12->Visible = false;
			   // 
			   // tb10
			   // 
			   this->tb10->Enabled = false;
			   this->tb10->Location = System::Drawing::Point(437, 107);
			   this->tb10->Name = L"tb10";
			   this->tb10->Size = System::Drawing::Size(32, 20);
			   this->tb10->TabIndex = 15;
			   this->tb10->Visible = false;
			   // 
			   // tb24
			   // 
			   this->tb24->Enabled = false;
			   this->tb24->Location = System::Drawing::Point(589, 133);
			   this->tb24->Name = L"tb24";
			   this->tb24->Size = System::Drawing::Size(32, 20);
			   this->tb24->TabIndex = 24;
			   this->tb24->Visible = false;
			   // 
			   // tb23
			   // 
			   this->tb23->Enabled = false;
			   this->tb23->Location = System::Drawing::Point(551, 133);
			   this->tb23->Name = L"tb23";
			   this->tb23->Size = System::Drawing::Size(32, 20);
			   this->tb23->TabIndex = 23;
			   this->tb23->Visible = false;
			   // 
			   // tb22
			   // 
			   this->tb22->Enabled = false;
			   this->tb22->Location = System::Drawing::Point(513, 132);
			   this->tb22->Name = L"tb22";
			   this->tb22->Size = System::Drawing::Size(32, 20);
			   this->tb22->TabIndex = 22;
			   this->tb22->Visible = false;
			   // 
			   // tb21
			   // 
			   this->tb21->Enabled = false;
			   this->tb21->Location = System::Drawing::Point(475, 132);
			   this->tb21->Name = L"tb21";
			   this->tb21->Size = System::Drawing::Size(32, 20);
			   this->tb21->TabIndex = 21;
			   this->tb21->Visible = false;
			   // 
			   // tb20
			   // 
			   this->tb20->Enabled = false;
			   this->tb20->Location = System::Drawing::Point(437, 133);
			   this->tb20->Name = L"tb20";
			   this->tb20->Size = System::Drawing::Size(32, 20);
			   this->tb20->TabIndex = 20;
			   this->tb20->Visible = false;
			   // 
			   // tb34
			   // 
			   this->tb34->Enabled = false;
			   this->tb34->Location = System::Drawing::Point(589, 159);
			   this->tb34->Name = L"tb34";
			   this->tb34->Size = System::Drawing::Size(32, 20);
			   this->tb34->TabIndex = 29;
			   this->tb34->Visible = false;
			   // 
			   // tb33
			   // 
			   this->tb33->Enabled = false;
			   this->tb33->Location = System::Drawing::Point(551, 159);
			   this->tb33->Name = L"tb33";
			   this->tb33->Size = System::Drawing::Size(32, 20);
			   this->tb33->TabIndex = 28;
			   this->tb33->Visible = false;
			   // 
			   // tb32
			   // 
			   this->tb32->Enabled = false;
			   this->tb32->Location = System::Drawing::Point(513, 159);
			   this->tb32->Name = L"tb32";
			   this->tb32->Size = System::Drawing::Size(32, 20);
			   this->tb32->TabIndex = 27;
			   this->tb32->Visible = false;
			   // 
			   // tb31
			   // 
			   this->tb31->Enabled = false;
			   this->tb31->Location = System::Drawing::Point(475, 158);
			   this->tb31->Name = L"tb31";
			   this->tb31->Size = System::Drawing::Size(32, 20);
			   this->tb31->TabIndex = 26;
			   this->tb31->Visible = false;
			   // 
			   // tb30
			   // 
			   this->tb30->Enabled = false;
			   this->tb30->Location = System::Drawing::Point(437, 159);
			   this->tb30->Name = L"tb30";
			   this->tb30->Size = System::Drawing::Size(32, 20);
			   this->tb30->TabIndex = 25;
			   this->tb30->Visible = false;
			   // 
			   // tb44
			   // 
			   this->tb44->Enabled = false;
			   this->tb44->Location = System::Drawing::Point(589, 185);
			   this->tb44->Name = L"tb44";
			   this->tb44->Size = System::Drawing::Size(32, 20);
			   this->tb44->TabIndex = 34;
			   this->tb44->Visible = false;
			   // 
			   // tb43
			   // 
			   this->tb43->Enabled = false;
			   this->tb43->Location = System::Drawing::Point(551, 185);
			   this->tb43->Name = L"tb43";
			   this->tb43->Size = System::Drawing::Size(32, 20);
			   this->tb43->TabIndex = 33;
			   this->tb43->Visible = false;
			   // 
			   // tb42
			   // 
			   this->tb42->Enabled = false;
			   this->tb42->Location = System::Drawing::Point(513, 184);
			   this->tb42->Name = L"tb42";
			   this->tb42->Size = System::Drawing::Size(32, 20);
			   this->tb42->TabIndex = 32;
			   this->tb42->Visible = false;
			   // 
			   // tb41
			   // 
			   this->tb41->Enabled = false;
			   this->tb41->Location = System::Drawing::Point(475, 185);
			   this->tb41->Name = L"tb41";
			   this->tb41->Size = System::Drawing::Size(32, 20);
			   this->tb41->TabIndex = 31;
			   this->tb41->Visible = false;
			   // 
			   // tb40
			   // 
			   this->tb40->Enabled = false;
			   this->tb40->Location = System::Drawing::Point(437, 185);
			   this->tb40->Name = L"tb40";
			   this->tb40->Size = System::Drawing::Size(32, 20);
			   this->tb40->TabIndex = 30;
			   this->tb40->Visible = false;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label11->ForeColor = System::Drawing::Color::White;
			   this->label11->Location = System::Drawing::Point(34, 50);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(275, 13);
			   this->label11->TabIndex = 35;
			   this->label11->Text = L"Ingrese el tama�o de la matriz cuadrada (nxn) :";
			   // 
			   // tbEntrada
			   // 
			   this->tbEntrada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbEntrada->ForeColor = System::Drawing::Color::Black;
			   this->tbEntrada->Location = System::Drawing::Point(318, 47);
			   this->tbEntrada->Name = L"tbEntrada";
			   this->tbEntrada->Size = System::Drawing::Size(61, 20);
			   this->tbEntrada->TabIndex = 36;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Gray;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(37, 82);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(342, 48);
			   this->button2->TabIndex = 39;
			   this->button2->Text = L"Generar tama�o de la matriz";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MatrizVisual::button2_Click);
			   // 
			   // lbFfila
			   // 
			   this->lbFfila->AutoSize = true;
			   this->lbFfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbFfila->ForeColor = System::Drawing::Color::White;
			   this->lbFfila->Location = System::Drawing::Point(407, 216);
			   this->lbFfila->Name = L"lbFfila";
			   this->lbFfila->Size = System::Drawing::Size(13, 17);
			   this->lbFfila->TabIndex = 40;
			   this->lbFfila->Text = L"F";
			   this->lbFfila->Visible = false;
			   // 
			   // lbFcolumna
			   // 
			   this->lbFcolumna->AutoSize = true;
			   this->lbFcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbFcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbFcolumna->Location = System::Drawing::Point(636, 50);
			   this->lbFcolumna->Name = L"lbFcolumna";
			   this->lbFcolumna->Size = System::Drawing::Size(13, 17);
			   this->lbFcolumna->TabIndex = 41;
			   this->lbFcolumna->Text = L"F";
			   this->lbFcolumna->Visible = false;
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Gray;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->ForeColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(235, 144);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(144, 47);
			   this->button3->TabIndex = 42;
			   this->button3->Text = L"Generar valores en la matriz";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MatrizVisual::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Gray;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->ForeColor = System::Drawing::Color::White;
			   this->button4->Location = System::Drawing::Point(37, 144);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(144, 47);
			   this->button4->TabIndex = 43;
			   this->button4->Text = L"Autogenerar valores en la matriz";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MatrizVisual::button4_Click);
			   // 
			   // tb11
			   // 
			   this->tb11->Enabled = false;
			   this->tb11->Location = System::Drawing::Point(475, 107);
			   this->tb11->Name = L"tb11";
			   this->tb11->Size = System::Drawing::Size(32, 20);
			   this->tb11->TabIndex = 16;
			   this->tb11->Visible = false;
			   // 
			   // tb01
			   // 
			   this->tb01->Enabled = false;
			   this->tb01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tb01->ForeColor = System::Drawing::SystemColors::WindowText;
			   this->tb01->Location = System::Drawing::Point(475, 82);
			   this->tb01->Name = L"tb01";
			   this->tb01->Size = System::Drawing::Size(32, 20);
			   this->tb01->TabIndex = 11;
			   this->tb01->Visible = false;
			   // 
			   // lbLfila
			   // 
			   this->lbLfila->AutoSize = true;
			   this->lbLfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbLfila->ForeColor = System::Drawing::Color::White;
			   this->lbLfila->Location = System::Drawing::Point(408, 370);
			   this->lbLfila->Name = L"lbLfila";
			   this->lbLfila->Size = System::Drawing::Size(13, 17);
			   this->lbLfila->TabIndex = 49;
			   this->lbLfila->Text = L"L";
			   this->lbLfila->Visible = false;
			   // 
			   // lbKfila
			   // 
			   this->lbKfila->AutoSize = true;
			   this->lbKfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbKfila->ForeColor = System::Drawing::Color::White;
			   this->lbKfila->Location = System::Drawing::Point(406, 343);
			   this->lbKfila->Name = L"lbKfila";
			   this->lbKfila->Size = System::Drawing::Size(13, 17);
			   this->lbKfila->TabIndex = 48;
			   this->lbKfila->Text = L"K";
			   this->lbKfila->Visible = false;
			   // 
			   // lbJfila
			   // 
			   this->lbJfila->AutoSize = true;
			   this->lbJfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbJfila->ForeColor = System::Drawing::Color::White;
			   this->lbJfila->Location = System::Drawing::Point(407, 319);
			   this->lbJfila->Name = L"lbJfila";
			   this->lbJfila->Size = System::Drawing::Size(13, 17);
			   this->lbJfila->TabIndex = 47;
			   this->lbJfila->Text = L"J";
			   this->lbJfila->Visible = false;
			   // 
			   // lbIfila
			   // 
			   this->lbIfila->AutoSize = true;
			   this->lbIfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbIfila->ForeColor = System::Drawing::Color::White;
			   this->lbIfila->Location = System::Drawing::Point(410, 293);
			   this->lbIfila->Name = L"lbIfila";
			   this->lbIfila->Size = System::Drawing::Size(10, 17);
			   this->lbIfila->TabIndex = 46;
			   this->lbIfila->Text = L"I";
			   this->lbIfila->Visible = false;
			   // 
			   // lbHfila
			   // 
			   this->lbHfila->AutoSize = true;
			   this->lbHfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbHfila->ForeColor = System::Drawing::Color::White;
			   this->lbHfila->Location = System::Drawing::Point(406, 265);
			   this->lbHfila->Name = L"lbHfila";
			   this->lbHfila->Size = System::Drawing::Size(14, 17);
			   this->lbHfila->TabIndex = 45;
			   this->lbHfila->Text = L"H";
			   this->lbHfila->Visible = false;
			   // 
			   // lbGfila
			   // 
			   this->lbGfila->AutoSize = true;
			   this->lbGfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbGfila->ForeColor = System::Drawing::Color::White;
			   this->lbGfila->Location = System::Drawing::Point(406, 240);
			   this->lbGfila->Name = L"lbGfila";
			   this->lbGfila->Size = System::Drawing::Size(14, 17);
			   this->lbGfila->TabIndex = 44;
			   this->lbGfila->Text = L"G";
			   this->lbGfila->Visible = false;
			   // 
			   // lbOfila
			   // 
			   this->lbOfila->AutoSize = true;
			   this->lbOfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbOfila->ForeColor = System::Drawing::Color::White;
			   this->lbOfila->Location = System::Drawing::Point(405, 449);
			   this->lbOfila->Name = L"lbOfila";
			   this->lbOfila->Size = System::Drawing::Size(15, 17);
			   this->lbOfila->TabIndex = 52;
			   this->lbOfila->Text = L"O";
			   this->lbOfila->Visible = false;
			   // 
			   // lbNfila
			   // 
			   this->lbNfila->AutoSize = true;
			   this->lbNfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbNfila->ForeColor = System::Drawing::Color::White;
			   this->lbNfila->Location = System::Drawing::Point(406, 422);
			   this->lbNfila->Name = L"lbNfila";
			   this->lbNfila->Size = System::Drawing::Size(15, 17);
			   this->lbNfila->TabIndex = 51;
			   this->lbNfila->Text = L"N";
			   this->lbNfila->Visible = false;
			   // 
			   // lbMfila
			   // 
			   this->lbMfila->AutoSize = true;
			   this->lbMfila->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbMfila->ForeColor = System::Drawing::Color::White;
			   this->lbMfila->Location = System::Drawing::Point(406, 395);
			   this->lbMfila->Name = L"lbMfila";
			   this->lbMfila->Size = System::Drawing::Size(19, 17);
			   this->lbMfila->TabIndex = 50;
			   this->lbMfila->Text = L"M";
			   this->lbMfila->Visible = false;
			   // 
			   // lbOcolumna
			   // 
			   this->lbOcolumna->AutoSize = true;
			   this->lbOcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbOcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbOcolumna->Location = System::Drawing::Point(977, 50);
			   this->lbOcolumna->Name = L"lbOcolumna";
			   this->lbOcolumna->Size = System::Drawing::Size(15, 17);
			   this->lbOcolumna->TabIndex = 61;
			   this->lbOcolumna->Text = L"O";
			   this->lbOcolumna->Visible = false;
			   // 
			   // lbNcolumna
			   // 
			   this->lbNcolumna->AutoSize = true;
			   this->lbNcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbNcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbNcolumna->Location = System::Drawing::Point(937, 50);
			   this->lbNcolumna->Name = L"lbNcolumna";
			   this->lbNcolumna->Size = System::Drawing::Size(15, 17);
			   this->lbNcolumna->TabIndex = 60;
			   this->lbNcolumna->Text = L"N";
			   this->lbNcolumna->Visible = false;
			   // 
			   // lbMcolumna
			   // 
			   this->lbMcolumna->AutoSize = true;
			   this->lbMcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbMcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbMcolumna->Location = System::Drawing::Point(900, 50);
			   this->lbMcolumna->Name = L"lbMcolumna";
			   this->lbMcolumna->Size = System::Drawing::Size(19, 17);
			   this->lbMcolumna->TabIndex = 59;
			   this->lbMcolumna->Text = L"M";
			   this->lbMcolumna->Visible = false;
			   // 
			   // lbLcolumna
			   // 
			   this->lbLcolumna->AutoSize = true;
			   this->lbLcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbLcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbLcolumna->Location = System::Drawing::Point(865, 50);
			   this->lbLcolumna->Name = L"lbLcolumna";
			   this->lbLcolumna->Size = System::Drawing::Size(13, 17);
			   this->lbLcolumna->TabIndex = 58;
			   this->lbLcolumna->Text = L"L";
			   this->lbLcolumna->Visible = false;
			   // 
			   // lbKcolumna
			   // 
			   this->lbKcolumna->AutoSize = true;
			   this->lbKcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbKcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbKcolumna->Location = System::Drawing::Point(825, 50);
			   this->lbKcolumna->Name = L"lbKcolumna";
			   this->lbKcolumna->Size = System::Drawing::Size(13, 17);
			   this->lbKcolumna->TabIndex = 57;
			   this->lbKcolumna->Text = L"K";
			   this->lbKcolumna->Visible = false;
			   // 
			   // lbJcolumna
			   // 
			   this->lbJcolumna->AutoSize = true;
			   this->lbJcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbJcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbJcolumna->Location = System::Drawing::Point(789, 50);
			   this->lbJcolumna->Name = L"lbJcolumna";
			   this->lbJcolumna->Size = System::Drawing::Size(13, 17);
			   this->lbJcolumna->TabIndex = 56;
			   this->lbJcolumna->Text = L"J";
			   this->lbJcolumna->Visible = false;
			   // 
			   // lbIcolumna
			   // 
			   this->lbIcolumna->AutoSize = true;
			   this->lbIcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbIcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbIcolumna->Location = System::Drawing::Point(752, 50);
			   this->lbIcolumna->Name = L"lbIcolumna";
			   this->lbIcolumna->Size = System::Drawing::Size(10, 17);
			   this->lbIcolumna->TabIndex = 55;
			   this->lbIcolumna->Text = L"I";
			   this->lbIcolumna->Visible = false;
			   // 
			   // lbHcolumna
			   // 
			   this->lbHcolumna->AutoSize = true;
			   this->lbHcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbHcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbHcolumna->Location = System::Drawing::Point(711, 49);
			   this->lbHcolumna->Name = L"lbHcolumna";
			   this->lbHcolumna->Size = System::Drawing::Size(14, 17);
			   this->lbHcolumna->TabIndex = 54;
			   this->lbHcolumna->Text = L"H";
			   this->lbHcolumna->Visible = false;
			   // 
			   // lbGcolumna
			   // 
			   this->lbGcolumna->AutoSize = true;
			   this->lbGcolumna->Font = (gcnew System::Drawing::Font(L"Brighly Crush", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGcolumna->ForeColor = System::Drawing::Color::White;
			   this->lbGcolumna->Location = System::Drawing::Point(673, 50);
			   this->lbGcolumna->Name = L"lbGcolumna";
			   this->lbGcolumna->Size = System::Drawing::Size(14, 17);
			   this->lbGcolumna->TabIndex = 53;
			   this->lbGcolumna->Text = L"G";
			   this->lbGcolumna->Visible = false;
			   // 
			   // tb94
			   // 
			   this->tb94->Enabled = false;
			   this->tb94->Location = System::Drawing::Point(589, 315);
			   this->tb94->Name = L"tb94";
			   this->tb94->Size = System::Drawing::Size(32, 20);
			   this->tb94->TabIndex = 86;
			   this->tb94->Visible = false;
			   // 
			   // tb93
			   // 
			   this->tb93->Enabled = false;
			   this->tb93->Location = System::Drawing::Point(551, 315);
			   this->tb93->Name = L"tb93";
			   this->tb93->Size = System::Drawing::Size(32, 20);
			   this->tb93->TabIndex = 85;
			   this->tb93->Visible = false;
			   // 
			   // tb92
			   // 
			   this->tb92->Enabled = false;
			   this->tb92->Location = System::Drawing::Point(513, 314);
			   this->tb92->Name = L"tb92";
			   this->tb92->Size = System::Drawing::Size(32, 20);
			   this->tb92->TabIndex = 84;
			   this->tb92->Visible = false;
			   // 
			   // tb91
			   // 
			   this->tb91->Enabled = false;
			   this->tb91->Location = System::Drawing::Point(475, 315);
			   this->tb91->Name = L"tb91";
			   this->tb91->Size = System::Drawing::Size(32, 20);
			   this->tb91->TabIndex = 83;
			   this->tb91->Visible = false;
			   // 
			   // tb90
			   // 
			   this->tb90->Enabled = false;
			   this->tb90->Location = System::Drawing::Point(437, 315);
			   this->tb90->Name = L"tb90";
			   this->tb90->Size = System::Drawing::Size(32, 20);
			   this->tb90->TabIndex = 82;
			   this->tb90->Visible = false;
			   // 
			   // tb84
			   // 
			   this->tb84->Enabled = false;
			   this->tb84->Location = System::Drawing::Point(589, 289);
			   this->tb84->Name = L"tb84";
			   this->tb84->Size = System::Drawing::Size(32, 20);
			   this->tb84->TabIndex = 81;
			   this->tb84->Visible = false;
			   // 
			   // tb83
			   // 
			   this->tb83->Enabled = false;
			   this->tb83->Location = System::Drawing::Point(551, 289);
			   this->tb83->Name = L"tb83";
			   this->tb83->Size = System::Drawing::Size(32, 20);
			   this->tb83->TabIndex = 80;
			   this->tb83->Visible = false;
			   // 
			   // tb82
			   // 
			   this->tb82->Enabled = false;
			   this->tb82->Location = System::Drawing::Point(513, 289);
			   this->tb82->Name = L"tb82";
			   this->tb82->Size = System::Drawing::Size(32, 20);
			   this->tb82->TabIndex = 79;
			   this->tb82->Visible = false;
			   // 
			   // tb81
			   // 
			   this->tb81->Enabled = false;
			   this->tb81->Location = System::Drawing::Point(475, 288);
			   this->tb81->Name = L"tb81";
			   this->tb81->Size = System::Drawing::Size(32, 20);
			   this->tb81->TabIndex = 78;
			   this->tb81->Visible = false;
			   // 
			   // tb80
			   // 
			   this->tb80->Enabled = false;
			   this->tb80->Location = System::Drawing::Point(437, 289);
			   this->tb80->Name = L"tb80";
			   this->tb80->Size = System::Drawing::Size(32, 20);
			   this->tb80->TabIndex = 77;
			   this->tb80->Visible = false;
			   // 
			   // tb74
			   // 
			   this->tb74->Enabled = false;
			   this->tb74->Location = System::Drawing::Point(589, 263);
			   this->tb74->Name = L"tb74";
			   this->tb74->Size = System::Drawing::Size(32, 20);
			   this->tb74->TabIndex = 76;
			   this->tb74->Visible = false;
			   // 
			   // tb73
			   // 
			   this->tb73->Enabled = false;
			   this->tb73->Location = System::Drawing::Point(551, 263);
			   this->tb73->Name = L"tb73";
			   this->tb73->Size = System::Drawing::Size(32, 20);
			   this->tb73->TabIndex = 75;
			   this->tb73->Visible = false;
			   // 
			   // tb72
			   // 
			   this->tb72->Enabled = false;
			   this->tb72->Location = System::Drawing::Point(513, 262);
			   this->tb72->Name = L"tb72";
			   this->tb72->Size = System::Drawing::Size(32, 20);
			   this->tb72->TabIndex = 74;
			   this->tb72->Visible = false;
			   // 
			   // tb71
			   // 
			   this->tb71->Enabled = false;
			   this->tb71->Location = System::Drawing::Point(475, 262);
			   this->tb71->Name = L"tb71";
			   this->tb71->Size = System::Drawing::Size(32, 20);
			   this->tb71->TabIndex = 73;
			   this->tb71->Visible = false;
			   // 
			   // tb70
			   // 
			   this->tb70->Enabled = false;
			   this->tb70->Location = System::Drawing::Point(437, 263);
			   this->tb70->Name = L"tb70";
			   this->tb70->Size = System::Drawing::Size(32, 20);
			   this->tb70->TabIndex = 72;
			   this->tb70->Visible = false;
			   // 
			   // tb64
			   // 
			   this->tb64->Enabled = false;
			   this->tb64->Location = System::Drawing::Point(589, 237);
			   this->tb64->Name = L"tb64";
			   this->tb64->Size = System::Drawing::Size(32, 20);
			   this->tb64->TabIndex = 71;
			   this->tb64->Visible = false;
			   // 
			   // tb54
			   // 
			   this->tb54->Enabled = false;
			   this->tb54->Location = System::Drawing::Point(589, 212);
			   this->tb54->Name = L"tb54";
			   this->tb54->Size = System::Drawing::Size(32, 20);
			   this->tb54->TabIndex = 70;
			   this->tb54->Visible = false;
			   // 
			   // tb62
			   // 
			   this->tb62->Enabled = false;
			   this->tb62->Location = System::Drawing::Point(513, 237);
			   this->tb62->Name = L"tb62";
			   this->tb62->Size = System::Drawing::Size(32, 20);
			   this->tb62->TabIndex = 69;
			   this->tb62->Visible = false;
			   // 
			   // tb61
			   // 
			   this->tb61->Enabled = false;
			   this->tb61->Location = System::Drawing::Point(475, 237);
			   this->tb61->Name = L"tb61";
			   this->tb61->Size = System::Drawing::Size(32, 20);
			   this->tb61->TabIndex = 68;
			   this->tb61->Visible = false;
			   // 
			   // tb60
			   // 
			   this->tb60->Enabled = false;
			   this->tb60->Location = System::Drawing::Point(437, 237);
			   this->tb60->Name = L"tb60";
			   this->tb60->Size = System::Drawing::Size(32, 20);
			   this->tb60->TabIndex = 67;
			   this->tb60->Visible = false;
			   // 
			   // tb63
			   // 
			   this->tb63->Enabled = false;
			   this->tb63->Location = System::Drawing::Point(551, 237);
			   this->tb63->Name = L"tb63";
			   this->tb63->Size = System::Drawing::Size(32, 20);
			   this->tb63->TabIndex = 66;
			   this->tb63->Visible = false;
			   // 
			   // tb53
			   // 
			   this->tb53->Enabled = false;
			   this->tb53->Location = System::Drawing::Point(551, 211);
			   this->tb53->Name = L"tb53";
			   this->tb53->Size = System::Drawing::Size(32, 20);
			   this->tb53->TabIndex = 65;
			   this->tb53->Visible = false;
			   // 
			   // tb52
			   // 
			   this->tb52->Enabled = false;
			   this->tb52->Location = System::Drawing::Point(513, 211);
			   this->tb52->Name = L"tb52";
			   this->tb52->Size = System::Drawing::Size(32, 20);
			   this->tb52->TabIndex = 64;
			   this->tb52->Visible = false;
			   // 
			   // tb51
			   // 
			   this->tb51->Enabled = false;
			   this->tb51->Location = System::Drawing::Point(475, 212);
			   this->tb51->Name = L"tb51";
			   this->tb51->Size = System::Drawing::Size(32, 20);
			   this->tb51->TabIndex = 63;
			   this->tb51->Visible = false;
			   // 
			   // tb50
			   // 
			   this->tb50->Enabled = false;
			   this->tb50->Location = System::Drawing::Point(437, 211);
			   this->tb50->Name = L"tb50";
			   this->tb50->Size = System::Drawing::Size(32, 20);
			   this->tb50->TabIndex = 62;
			   this->tb50->Visible = false;
			   // 
			   // tb144
			   // 
			   this->tb144->Enabled = false;
			   this->tb144->Location = System::Drawing::Point(589, 445);
			   this->tb144->Name = L"tb144";
			   this->tb144->Size = System::Drawing::Size(32, 20);
			   this->tb144->TabIndex = 111;
			   this->tb144->Visible = false;
			   // 
			   // tb143
			   // 
			   this->tb143->Enabled = false;
			   this->tb143->Location = System::Drawing::Point(551, 445);
			   this->tb143->Name = L"tb143";
			   this->tb143->Size = System::Drawing::Size(32, 20);
			   this->tb143->TabIndex = 110;
			   this->tb143->Visible = false;
			   // 
			   // tb142
			   // 
			   this->tb142->Enabled = false;
			   this->tb142->Location = System::Drawing::Point(513, 444);
			   this->tb142->Name = L"tb142";
			   this->tb142->Size = System::Drawing::Size(32, 20);
			   this->tb142->TabIndex = 109;
			   this->tb142->Visible = false;
			   // 
			   // tb141
			   // 
			   this->tb141->Enabled = false;
			   this->tb141->Location = System::Drawing::Point(475, 445);
			   this->tb141->Name = L"tb141";
			   this->tb141->Size = System::Drawing::Size(32, 20);
			   this->tb141->TabIndex = 108;
			   this->tb141->Visible = false;
			   // 
			   // tb140
			   // 
			   this->tb140->Enabled = false;
			   this->tb140->Location = System::Drawing::Point(437, 445);
			   this->tb140->Name = L"tb140";
			   this->tb140->Size = System::Drawing::Size(32, 20);
			   this->tb140->TabIndex = 107;
			   this->tb140->Visible = false;
			   // 
			   // tb134
			   // 
			   this->tb134->Enabled = false;
			   this->tb134->Location = System::Drawing::Point(589, 419);
			   this->tb134->Name = L"tb134";
			   this->tb134->Size = System::Drawing::Size(32, 20);
			   this->tb134->TabIndex = 106;
			   this->tb134->Visible = false;
			   // 
			   // tb133
			   // 
			   this->tb133->Enabled = false;
			   this->tb133->Location = System::Drawing::Point(551, 419);
			   this->tb133->Name = L"tb133";
			   this->tb133->Size = System::Drawing::Size(32, 20);
			   this->tb133->TabIndex = 105;
			   this->tb133->Visible = false;
			   // 
			   // tb132
			   // 
			   this->tb132->Enabled = false;
			   this->tb132->Location = System::Drawing::Point(513, 419);
			   this->tb132->Name = L"tb132";
			   this->tb132->Size = System::Drawing::Size(32, 20);
			   this->tb132->TabIndex = 104;
			   this->tb132->Visible = false;
			   // 
			   // tb131
			   // 
			   this->tb131->Enabled = false;
			   this->tb131->Location = System::Drawing::Point(475, 418);
			   this->tb131->Name = L"tb131";
			   this->tb131->Size = System::Drawing::Size(32, 20);
			   this->tb131->TabIndex = 103;
			   this->tb131->Visible = false;
			   // 
			   // tb130
			   // 
			   this->tb130->Enabled = false;
			   this->tb130->Location = System::Drawing::Point(437, 419);
			   this->tb130->Name = L"tb130";
			   this->tb130->Size = System::Drawing::Size(32, 20);
			   this->tb130->TabIndex = 102;
			   this->tb130->Visible = false;
			   // 
			   // tb124
			   // 
			   this->tb124->Enabled = false;
			   this->tb124->Location = System::Drawing::Point(589, 393);
			   this->tb124->Name = L"tb124";
			   this->tb124->Size = System::Drawing::Size(32, 20);
			   this->tb124->TabIndex = 101;
			   this->tb124->Visible = false;
			   // 
			   // tb123
			   // 
			   this->tb123->Enabled = false;
			   this->tb123->Location = System::Drawing::Point(551, 393);
			   this->tb123->Name = L"tb123";
			   this->tb123->Size = System::Drawing::Size(32, 20);
			   this->tb123->TabIndex = 100;
			   this->tb123->Visible = false;
			   // 
			   // tb122
			   // 
			   this->tb122->Enabled = false;
			   this->tb122->Location = System::Drawing::Point(513, 392);
			   this->tb122->Name = L"tb122";
			   this->tb122->Size = System::Drawing::Size(32, 20);
			   this->tb122->TabIndex = 99;
			   this->tb122->Visible = false;
			   // 
			   // tb121
			   // 
			   this->tb121->Enabled = false;
			   this->tb121->Location = System::Drawing::Point(475, 392);
			   this->tb121->Name = L"tb121";
			   this->tb121->Size = System::Drawing::Size(32, 20);
			   this->tb121->TabIndex = 98;
			   this->tb121->Visible = false;
			   // 
			   // tb120
			   // 
			   this->tb120->Enabled = false;
			   this->tb120->Location = System::Drawing::Point(437, 393);
			   this->tb120->Name = L"tb120";
			   this->tb120->Size = System::Drawing::Size(32, 20);
			   this->tb120->TabIndex = 97;
			   this->tb120->Visible = false;
			   // 
			   // tb114
			   // 
			   this->tb114->Enabled = false;
			   this->tb114->Location = System::Drawing::Point(589, 367);
			   this->tb114->Name = L"tb114";
			   this->tb114->Size = System::Drawing::Size(32, 20);
			   this->tb114->TabIndex = 96;
			   this->tb114->Visible = false;
			   // 
			   // tb104
			   // 
			   this->tb104->Enabled = false;
			   this->tb104->Location = System::Drawing::Point(589, 342);
			   this->tb104->Name = L"tb104";
			   this->tb104->Size = System::Drawing::Size(32, 20);
			   this->tb104->TabIndex = 95;
			   this->tb104->Visible = false;
			   // 
			   // tb112
			   // 
			   this->tb112->Enabled = false;
			   this->tb112->Location = System::Drawing::Point(513, 367);
			   this->tb112->Name = L"tb112";
			   this->tb112->Size = System::Drawing::Size(32, 20);
			   this->tb112->TabIndex = 94;
			   this->tb112->Visible = false;
			   // 
			   // tb111
			   // 
			   this->tb111->Enabled = false;
			   this->tb111->Location = System::Drawing::Point(475, 367);
			   this->tb111->Name = L"tb111";
			   this->tb111->Size = System::Drawing::Size(32, 20);
			   this->tb111->TabIndex = 93;
			   this->tb111->Visible = false;
			   // 
			   // tb110
			   // 
			   this->tb110->Enabled = false;
			   this->tb110->Location = System::Drawing::Point(437, 367);
			   this->tb110->Name = L"tb110";
			   this->tb110->Size = System::Drawing::Size(32, 20);
			   this->tb110->TabIndex = 92;
			   this->tb110->Visible = false;
			   // 
			   // tb113
			   // 
			   this->tb113->Enabled = false;
			   this->tb113->Location = System::Drawing::Point(551, 367);
			   this->tb113->Name = L"tb113";
			   this->tb113->Size = System::Drawing::Size(32, 20);
			   this->tb113->TabIndex = 91;
			   this->tb113->Visible = false;
			   // 
			   // tb103
			   // 
			   this->tb103->Enabled = false;
			   this->tb103->Location = System::Drawing::Point(551, 341);
			   this->tb103->Name = L"tb103";
			   this->tb103->Size = System::Drawing::Size(32, 20);
			   this->tb103->TabIndex = 90;
			   this->tb103->Visible = false;
			   // 
			   // tb102
			   // 
			   this->tb102->Enabled = false;
			   this->tb102->Location = System::Drawing::Point(513, 341);
			   this->tb102->Name = L"tb102";
			   this->tb102->Size = System::Drawing::Size(32, 20);
			   this->tb102->TabIndex = 89;
			   this->tb102->Visible = false;
			   // 
			   // tb101
			   // 
			   this->tb101->Enabled = false;
			   this->tb101->Location = System::Drawing::Point(475, 342);
			   this->tb101->Name = L"tb101";
			   this->tb101->Size = System::Drawing::Size(32, 20);
			   this->tb101->TabIndex = 88;
			   this->tb101->Visible = false;
			   // 
			   // tb100
			   // 
			   this->tb100->Enabled = false;
			   this->tb100->Location = System::Drawing::Point(437, 341);
			   this->tb100->Name = L"tb100";
			   this->tb100->Size = System::Drawing::Size(32, 20);
			   this->tb100->TabIndex = 87;
			   this->tb100->Visible = false;
			   // 
			   // tb149
			   // 
			   this->tb149->Enabled = false;
			   this->tb149->Location = System::Drawing::Point(779, 445);
			   this->tb149->Name = L"tb149";
			   this->tb149->Size = System::Drawing::Size(32, 20);
			   this->tb149->TabIndex = 186;
			   this->tb149->Visible = false;
			   // 
			   // tb148
			   // 
			   this->tb148->Enabled = false;
			   this->tb148->Location = System::Drawing::Point(741, 445);
			   this->tb148->Name = L"tb148";
			   this->tb148->Size = System::Drawing::Size(32, 20);
			   this->tb148->TabIndex = 185;
			   this->tb148->Visible = false;
			   // 
			   // tb147
			   // 
			   this->tb147->Enabled = false;
			   this->tb147->Location = System::Drawing::Point(703, 444);
			   this->tb147->Name = L"tb147";
			   this->tb147->Size = System::Drawing::Size(32, 20);
			   this->tb147->TabIndex = 184;
			   this->tb147->Visible = false;
			   // 
			   // tb146
			   // 
			   this->tb146->Enabled = false;
			   this->tb146->Location = System::Drawing::Point(665, 445);
			   this->tb146->Name = L"tb146";
			   this->tb146->Size = System::Drawing::Size(32, 20);
			   this->tb146->TabIndex = 183;
			   this->tb146->Visible = false;
			   // 
			   // tb145
			   // 
			   this->tb145->Enabled = false;
			   this->tb145->Location = System::Drawing::Point(627, 445);
			   this->tb145->Name = L"tb145";
			   this->tb145->Size = System::Drawing::Size(32, 20);
			   this->tb145->TabIndex = 182;
			   this->tb145->Visible = false;
			   // 
			   // tb139
			   // 
			   this->tb139->Enabled = false;
			   this->tb139->Location = System::Drawing::Point(779, 419);
			   this->tb139->Name = L"tb139";
			   this->tb139->Size = System::Drawing::Size(32, 20);
			   this->tb139->TabIndex = 181;
			   this->tb139->Visible = false;
			   // 
			   // tb138
			   // 
			   this->tb138->Enabled = false;
			   this->tb138->Location = System::Drawing::Point(741, 419);
			   this->tb138->Name = L"tb138";
			   this->tb138->Size = System::Drawing::Size(32, 20);
			   this->tb138->TabIndex = 180;
			   this->tb138->Visible = false;
			   // 
			   // tb137
			   // 
			   this->tb137->Enabled = false;
			   this->tb137->Location = System::Drawing::Point(703, 419);
			   this->tb137->Name = L"tb137";
			   this->tb137->Size = System::Drawing::Size(32, 20);
			   this->tb137->TabIndex = 179;
			   this->tb137->Visible = false;
			   // 
			   // tb136
			   // 
			   this->tb136->Enabled = false;
			   this->tb136->Location = System::Drawing::Point(665, 418);
			   this->tb136->Name = L"tb136";
			   this->tb136->Size = System::Drawing::Size(32, 20);
			   this->tb136->TabIndex = 178;
			   this->tb136->Visible = false;
			   // 
			   // tb135
			   // 
			   this->tb135->Enabled = false;
			   this->tb135->Location = System::Drawing::Point(627, 419);
			   this->tb135->Name = L"tb135";
			   this->tb135->Size = System::Drawing::Size(32, 20);
			   this->tb135->TabIndex = 177;
			   this->tb135->Visible = false;
			   // 
			   // tb129
			   // 
			   this->tb129->Enabled = false;
			   this->tb129->Location = System::Drawing::Point(779, 393);
			   this->tb129->Name = L"tb129";
			   this->tb129->Size = System::Drawing::Size(32, 20);
			   this->tb129->TabIndex = 176;
			   this->tb129->Visible = false;
			   // 
			   // tb128
			   // 
			   this->tb128->Enabled = false;
			   this->tb128->Location = System::Drawing::Point(741, 393);
			   this->tb128->Name = L"tb128";
			   this->tb128->Size = System::Drawing::Size(32, 20);
			   this->tb128->TabIndex = 175;
			   this->tb128->Visible = false;
			   // 
			   // tb127
			   // 
			   this->tb127->Enabled = false;
			   this->tb127->Location = System::Drawing::Point(703, 392);
			   this->tb127->Name = L"tb127";
			   this->tb127->Size = System::Drawing::Size(32, 20);
			   this->tb127->TabIndex = 174;
			   this->tb127->Visible = false;
			   // 
			   // tb126
			   // 
			   this->tb126->Enabled = false;
			   this->tb126->Location = System::Drawing::Point(665, 392);
			   this->tb126->Name = L"tb126";
			   this->tb126->Size = System::Drawing::Size(32, 20);
			   this->tb126->TabIndex = 173;
			   this->tb126->Visible = false;
			   // 
			   // tb125
			   // 
			   this->tb125->Enabled = false;
			   this->tb125->Location = System::Drawing::Point(627, 393);
			   this->tb125->Name = L"tb125";
			   this->tb125->Size = System::Drawing::Size(32, 20);
			   this->tb125->TabIndex = 172;
			   this->tb125->Visible = false;
			   // 
			   // tb119
			   // 
			   this->tb119->Enabled = false;
			   this->tb119->Location = System::Drawing::Point(779, 367);
			   this->tb119->Name = L"tb119";
			   this->tb119->Size = System::Drawing::Size(32, 20);
			   this->tb119->TabIndex = 171;
			   this->tb119->Visible = false;
			   // 
			   // tb117
			   // 
			   this->tb117->Enabled = false;
			   this->tb117->Location = System::Drawing::Point(703, 367);
			   this->tb117->Name = L"tb117";
			   this->tb117->Size = System::Drawing::Size(32, 20);
			   this->tb117->TabIndex = 169;
			   this->tb117->Visible = false;
			   // 
			   // tb116
			   // 
			   this->tb116->Enabled = false;
			   this->tb116->Location = System::Drawing::Point(665, 367);
			   this->tb116->Name = L"tb116";
			   this->tb116->Size = System::Drawing::Size(32, 20);
			   this->tb116->TabIndex = 168;
			   this->tb116->Visible = false;
			   // 
			   // tb115
			   // 
			   this->tb115->Enabled = false;
			   this->tb115->Location = System::Drawing::Point(627, 367);
			   this->tb115->Name = L"tb115";
			   this->tb115->Size = System::Drawing::Size(32, 20);
			   this->tb115->TabIndex = 167;
			   this->tb115->Visible = false;
			   // 
			   // tb108
			   // 
			   this->tb108->Enabled = false;
			   this->tb108->Location = System::Drawing::Point(741, 341);
			   this->tb108->Name = L"tb108";
			   this->tb108->Size = System::Drawing::Size(32, 20);
			   this->tb108->TabIndex = 165;
			   this->tb108->Visible = false;
			   // 
			   // tb107
			   // 
			   this->tb107->Enabled = false;
			   this->tb107->Location = System::Drawing::Point(703, 341);
			   this->tb107->Name = L"tb107";
			   this->tb107->Size = System::Drawing::Size(32, 20);
			   this->tb107->TabIndex = 164;
			   this->tb107->Visible = false;
			   // 
			   // tb106
			   // 
			   this->tb106->Enabled = false;
			   this->tb106->Location = System::Drawing::Point(665, 342);
			   this->tb106->Name = L"tb106";
			   this->tb106->Size = System::Drawing::Size(32, 20);
			   this->tb106->TabIndex = 163;
			   this->tb106->Visible = false;
			   // 
			   // tb105
			   // 
			   this->tb105->Enabled = false;
			   this->tb105->Location = System::Drawing::Point(627, 341);
			   this->tb105->Name = L"tb105";
			   this->tb105->Size = System::Drawing::Size(32, 20);
			   this->tb105->TabIndex = 162;
			   this->tb105->Visible = false;
			   // 
			   // tb99
			   // 
			   this->tb99->Enabled = false;
			   this->tb99->Location = System::Drawing::Point(779, 315);
			   this->tb99->Name = L"tb99";
			   this->tb99->Size = System::Drawing::Size(32, 20);
			   this->tb99->TabIndex = 161;
			   this->tb99->Visible = false;
			   // 
			   // tb98
			   // 
			   this->tb98->Enabled = false;
			   this->tb98->Location = System::Drawing::Point(741, 315);
			   this->tb98->Name = L"tb98";
			   this->tb98->Size = System::Drawing::Size(32, 20);
			   this->tb98->TabIndex = 160;
			   this->tb98->Visible = false;
			   // 
			   // tb97
			   // 
			   this->tb97->Enabled = false;
			   this->tb97->Location = System::Drawing::Point(703, 314);
			   this->tb97->Name = L"tb97";
			   this->tb97->Size = System::Drawing::Size(32, 20);
			   this->tb97->TabIndex = 159;
			   this->tb97->Visible = false;
			   // 
			   // tb96
			   // 
			   this->tb96->Enabled = false;
			   this->tb96->Location = System::Drawing::Point(665, 315);
			   this->tb96->Name = L"tb96";
			   this->tb96->Size = System::Drawing::Size(32, 20);
			   this->tb96->TabIndex = 158;
			   this->tb96->Visible = false;
			   // 
			   // tb95
			   // 
			   this->tb95->Enabled = false;
			   this->tb95->Location = System::Drawing::Point(627, 315);
			   this->tb95->Name = L"tb95";
			   this->tb95->Size = System::Drawing::Size(32, 20);
			   this->tb95->TabIndex = 157;
			   this->tb95->Visible = false;
			   // 
			   // tb89
			   // 
			   this->tb89->Enabled = false;
			   this->tb89->Location = System::Drawing::Point(779, 289);
			   this->tb89->Name = L"tb89";
			   this->tb89->Size = System::Drawing::Size(32, 20);
			   this->tb89->TabIndex = 156;
			   this->tb89->Visible = false;
			   // 
			   // tb88
			   // 
			   this->tb88->Enabled = false;
			   this->tb88->Location = System::Drawing::Point(741, 289);
			   this->tb88->Name = L"tb88";
			   this->tb88->Size = System::Drawing::Size(32, 20);
			   this->tb88->TabIndex = 155;
			   this->tb88->Visible = false;
			   // 
			   // tb87
			   // 
			   this->tb87->Enabled = false;
			   this->tb87->Location = System::Drawing::Point(703, 289);
			   this->tb87->Name = L"tb87";
			   this->tb87->Size = System::Drawing::Size(32, 20);
			   this->tb87->TabIndex = 154;
			   this->tb87->Visible = false;
			   // 
			   // tb86
			   // 
			   this->tb86->Enabled = false;
			   this->tb86->Location = System::Drawing::Point(665, 288);
			   this->tb86->Name = L"tb86";
			   this->tb86->Size = System::Drawing::Size(32, 20);
			   this->tb86->TabIndex = 153;
			   this->tb86->Visible = false;
			   // 
			   // tb85
			   // 
			   this->tb85->Enabled = false;
			   this->tb85->Location = System::Drawing::Point(627, 289);
			   this->tb85->Name = L"tb85";
			   this->tb85->Size = System::Drawing::Size(32, 20);
			   this->tb85->TabIndex = 152;
			   this->tb85->Visible = false;
			   // 
			   // tb79
			   // 
			   this->tb79->Enabled = false;
			   this->tb79->Location = System::Drawing::Point(779, 263);
			   this->tb79->Name = L"tb79";
			   this->tb79->Size = System::Drawing::Size(32, 20);
			   this->tb79->TabIndex = 151;
			   this->tb79->Visible = false;
			   // 
			   // tb78
			   // 
			   this->tb78->Enabled = false;
			   this->tb78->Location = System::Drawing::Point(741, 263);
			   this->tb78->Name = L"tb78";
			   this->tb78->Size = System::Drawing::Size(32, 20);
			   this->tb78->TabIndex = 150;
			   this->tb78->Visible = false;
			   // 
			   // tb77
			   // 
			   this->tb77->Enabled = false;
			   this->tb77->Location = System::Drawing::Point(703, 262);
			   this->tb77->Name = L"tb77";
			   this->tb77->Size = System::Drawing::Size(32, 20);
			   this->tb77->TabIndex = 149;
			   this->tb77->Visible = false;
			   // 
			   // tb76
			   // 
			   this->tb76->Enabled = false;
			   this->tb76->Location = System::Drawing::Point(665, 262);
			   this->tb76->Name = L"tb76";
			   this->tb76->Size = System::Drawing::Size(32, 20);
			   this->tb76->TabIndex = 148;
			   this->tb76->Visible = false;
			   // 
			   // tb75
			   // 
			   this->tb75->Enabled = false;
			   this->tb75->Location = System::Drawing::Point(627, 263);
			   this->tb75->Name = L"tb75";
			   this->tb75->Size = System::Drawing::Size(32, 20);
			   this->tb75->TabIndex = 147;
			   this->tb75->Visible = false;
			   // 
			   // tb69
			   // 
			   this->tb69->Enabled = false;
			   this->tb69->Location = System::Drawing::Point(779, 237);
			   this->tb69->Name = L"tb69";
			   this->tb69->Size = System::Drawing::Size(32, 20);
			   this->tb69->TabIndex = 146;
			   this->tb69->Visible = false;
			   // 
			   // tb59
			   // 
			   this->tb59->Enabled = false;
			   this->tb59->Location = System::Drawing::Point(779, 212);
			   this->tb59->Name = L"tb59";
			   this->tb59->Size = System::Drawing::Size(32, 20);
			   this->tb59->TabIndex = 145;
			   this->tb59->Visible = false;
			   // 
			   // tb67
			   // 
			   this->tb67->Enabled = false;
			   this->tb67->Location = System::Drawing::Point(703, 237);
			   this->tb67->Name = L"tb67";
			   this->tb67->Size = System::Drawing::Size(32, 20);
			   this->tb67->TabIndex = 144;
			   this->tb67->Visible = false;
			   // 
			   // tb66
			   // 
			   this->tb66->Enabled = false;
			   this->tb66->Location = System::Drawing::Point(665, 237);
			   this->tb66->Name = L"tb66";
			   this->tb66->Size = System::Drawing::Size(32, 20);
			   this->tb66->TabIndex = 143;
			   this->tb66->Visible = false;
			   // 
			   // tb65
			   // 
			   this->tb65->Enabled = false;
			   this->tb65->Location = System::Drawing::Point(627, 237);
			   this->tb65->Name = L"tb65";
			   this->tb65->Size = System::Drawing::Size(32, 20);
			   this->tb65->TabIndex = 142;
			   this->tb65->Visible = false;
			   // 
			   // tb68
			   // 
			   this->tb68->Enabled = false;
			   this->tb68->Location = System::Drawing::Point(741, 237);
			   this->tb68->Name = L"tb68";
			   this->tb68->Size = System::Drawing::Size(32, 20);
			   this->tb68->TabIndex = 141;
			   this->tb68->Visible = false;
			   // 
			   // tb58
			   // 
			   this->tb58->Enabled = false;
			   this->tb58->Location = System::Drawing::Point(741, 211);
			   this->tb58->Name = L"tb58";
			   this->tb58->Size = System::Drawing::Size(32, 20);
			   this->tb58->TabIndex = 140;
			   this->tb58->Visible = false;
			   // 
			   // tb57
			   // 
			   this->tb57->Enabled = false;
			   this->tb57->Location = System::Drawing::Point(703, 211);
			   this->tb57->Name = L"tb57";
			   this->tb57->Size = System::Drawing::Size(32, 20);
			   this->tb57->TabIndex = 139;
			   this->tb57->Visible = false;
			   // 
			   // tb56
			   // 
			   this->tb56->Enabled = false;
			   this->tb56->Location = System::Drawing::Point(665, 212);
			   this->tb56->Name = L"tb56";
			   this->tb56->Size = System::Drawing::Size(32, 20);
			   this->tb56->TabIndex = 138;
			   this->tb56->Visible = false;
			   // 
			   // tb55
			   // 
			   this->tb55->Enabled = false;
			   this->tb55->Location = System::Drawing::Point(627, 211);
			   this->tb55->Name = L"tb55";
			   this->tb55->Size = System::Drawing::Size(32, 20);
			   this->tb55->TabIndex = 137;
			   this->tb55->Visible = false;
			   // 
			   // tb49
			   // 
			   this->tb49->Enabled = false;
			   this->tb49->Location = System::Drawing::Point(779, 185);
			   this->tb49->Name = L"tb49";
			   this->tb49->Size = System::Drawing::Size(32, 20);
			   this->tb49->TabIndex = 136;
			   this->tb49->Visible = false;
			   // 
			   // tb48
			   // 
			   this->tb48->Enabled = false;
			   this->tb48->Location = System::Drawing::Point(741, 185);
			   this->tb48->Name = L"tb48";
			   this->tb48->Size = System::Drawing::Size(32, 20);
			   this->tb48->TabIndex = 135;
			   this->tb48->Visible = false;
			   // 
			   // tb47
			   // 
			   this->tb47->Enabled = false;
			   this->tb47->Location = System::Drawing::Point(703, 184);
			   this->tb47->Name = L"tb47";
			   this->tb47->Size = System::Drawing::Size(32, 20);
			   this->tb47->TabIndex = 134;
			   this->tb47->Visible = false;
			   // 
			   // tb46
			   // 
			   this->tb46->Enabled = false;
			   this->tb46->Location = System::Drawing::Point(665, 185);
			   this->tb46->Name = L"tb46";
			   this->tb46->Size = System::Drawing::Size(32, 20);
			   this->tb46->TabIndex = 133;
			   this->tb46->Visible = false;
			   // 
			   // tb45
			   // 
			   this->tb45->Enabled = false;
			   this->tb45->Location = System::Drawing::Point(627, 185);
			   this->tb45->Name = L"tb45";
			   this->tb45->Size = System::Drawing::Size(32, 20);
			   this->tb45->TabIndex = 132;
			   this->tb45->Visible = false;
			   // 
			   // tb39
			   // 
			   this->tb39->Enabled = false;
			   this->tb39->Location = System::Drawing::Point(779, 159);
			   this->tb39->Name = L"tb39";
			   this->tb39->Size = System::Drawing::Size(32, 20);
			   this->tb39->TabIndex = 131;
			   this->tb39->Visible = false;
			   // 
			   // tb38
			   // 
			   this->tb38->Enabled = false;
			   this->tb38->Location = System::Drawing::Point(741, 159);
			   this->tb38->Name = L"tb38";
			   this->tb38->Size = System::Drawing::Size(32, 20);
			   this->tb38->TabIndex = 130;
			   this->tb38->Visible = false;
			   // 
			   // tb37
			   // 
			   this->tb37->Enabled = false;
			   this->tb37->Location = System::Drawing::Point(703, 159);
			   this->tb37->Name = L"tb37";
			   this->tb37->Size = System::Drawing::Size(32, 20);
			   this->tb37->TabIndex = 129;
			   this->tb37->Visible = false;
			   // 
			   // tb36
			   // 
			   this->tb36->Enabled = false;
			   this->tb36->Location = System::Drawing::Point(665, 158);
			   this->tb36->Name = L"tb36";
			   this->tb36->Size = System::Drawing::Size(32, 20);
			   this->tb36->TabIndex = 128;
			   this->tb36->Visible = false;
			   // 
			   // tb35
			   // 
			   this->tb35->Enabled = false;
			   this->tb35->Location = System::Drawing::Point(627, 159);
			   this->tb35->Name = L"tb35";
			   this->tb35->Size = System::Drawing::Size(32, 20);
			   this->tb35->TabIndex = 127;
			   this->tb35->Visible = false;
			   // 
			   // tb29
			   // 
			   this->tb29->Enabled = false;
			   this->tb29->Location = System::Drawing::Point(779, 133);
			   this->tb29->Name = L"tb29";
			   this->tb29->Size = System::Drawing::Size(32, 20);
			   this->tb29->TabIndex = 126;
			   this->tb29->Visible = false;
			   // 
			   // tb28
			   // 
			   this->tb28->Enabled = false;
			   this->tb28->Location = System::Drawing::Point(741, 133);
			   this->tb28->Name = L"tb28";
			   this->tb28->Size = System::Drawing::Size(32, 20);
			   this->tb28->TabIndex = 125;
			   this->tb28->Visible = false;
			   // 
			   // tb27
			   // 
			   this->tb27->Enabled = false;
			   this->tb27->Location = System::Drawing::Point(703, 132);
			   this->tb27->Name = L"tb27";
			   this->tb27->Size = System::Drawing::Size(32, 20);
			   this->tb27->TabIndex = 124;
			   this->tb27->Visible = false;
			   // 
			   // tb26
			   // 
			   this->tb26->Enabled = false;
			   this->tb26->Location = System::Drawing::Point(665, 132);
			   this->tb26->Name = L"tb26";
			   this->tb26->Size = System::Drawing::Size(32, 20);
			   this->tb26->TabIndex = 123;
			   this->tb26->Visible = false;
			   // 
			   // tb25
			   // 
			   this->tb25->Enabled = false;
			   this->tb25->Location = System::Drawing::Point(627, 133);
			   this->tb25->Name = L"tb25";
			   this->tb25->Size = System::Drawing::Size(32, 20);
			   this->tb25->TabIndex = 122;
			   this->tb25->Visible = false;
			   // 
			   // tb19
			   // 
			   this->tb19->Enabled = false;
			   this->tb19->Location = System::Drawing::Point(779, 107);
			   this->tb19->Name = L"tb19";
			   this->tb19->Size = System::Drawing::Size(32, 20);
			   this->tb19->TabIndex = 121;
			   this->tb19->Visible = false;
			   // 
			   // tb09
			   // 
			   this->tb09->Enabled = false;
			   this->tb09->Location = System::Drawing::Point(779, 82);
			   this->tb09->Name = L"tb09";
			   this->tb09->Size = System::Drawing::Size(32, 20);
			   this->tb09->TabIndex = 120;
			   this->tb09->Visible = false;
			   // 
			   // tb17
			   // 
			   this->tb17->Enabled = false;
			   this->tb17->Location = System::Drawing::Point(703, 107);
			   this->tb17->Name = L"tb17";
			   this->tb17->Size = System::Drawing::Size(32, 20);
			   this->tb17->TabIndex = 119;
			   this->tb17->Visible = false;
			   // 
			   // tb16
			   // 
			   this->tb16->Enabled = false;
			   this->tb16->Location = System::Drawing::Point(665, 107);
			   this->tb16->Name = L"tb16";
			   this->tb16->Size = System::Drawing::Size(32, 20);
			   this->tb16->TabIndex = 118;
			   this->tb16->Visible = false;
			   // 
			   // tb15
			   // 
			   this->tb15->Enabled = false;
			   this->tb15->Location = System::Drawing::Point(627, 107);
			   this->tb15->Name = L"tb15";
			   this->tb15->Size = System::Drawing::Size(32, 20);
			   this->tb15->TabIndex = 117;
			   this->tb15->Visible = false;
			   // 
			   // tb18
			   // 
			   this->tb18->Enabled = false;
			   this->tb18->Location = System::Drawing::Point(741, 107);
			   this->tb18->Name = L"tb18";
			   this->tb18->Size = System::Drawing::Size(32, 20);
			   this->tb18->TabIndex = 116;
			   this->tb18->Visible = false;
			   // 
			   // tb08
			   // 
			   this->tb08->Enabled = false;
			   this->tb08->Location = System::Drawing::Point(741, 81);
			   this->tb08->Name = L"tb08";
			   this->tb08->Size = System::Drawing::Size(32, 20);
			   this->tb08->TabIndex = 115;
			   this->tb08->Visible = false;
			   // 
			   // tb07
			   // 
			   this->tb07->Enabled = false;
			   this->tb07->Location = System::Drawing::Point(703, 81);
			   this->tb07->Name = L"tb07";
			   this->tb07->Size = System::Drawing::Size(32, 20);
			   this->tb07->TabIndex = 114;
			   this->tb07->Visible = false;
			   // 
			   // tb06
			   // 
			   this->tb06->Enabled = false;
			   this->tb06->Location = System::Drawing::Point(665, 82);
			   this->tb06->Name = L"tb06";
			   this->tb06->Size = System::Drawing::Size(32, 20);
			   this->tb06->TabIndex = 113;
			   this->tb06->Visible = false;
			   // 
			   // tb05
			   // 
			   this->tb05->Enabled = false;
			   this->tb05->Location = System::Drawing::Point(627, 81);
			   this->tb05->Name = L"tb05";
			   this->tb05->Size = System::Drawing::Size(32, 20);
			   this->tb05->TabIndex = 112;
			   this->tb05->Visible = false;
			   // 
			   // tb414
			   // 
			   this->tb414->Enabled = false;
			   this->tb414->Location = System::Drawing::Point(969, 187);
			   this->tb414->Name = L"tb414";
			   this->tb414->Size = System::Drawing::Size(32, 20);
			   this->tb414->TabIndex = 211;
			   this->tb414->Visible = false;
			   // 
			   // tb413
			   // 
			   this->tb413->Enabled = false;
			   this->tb413->Location = System::Drawing::Point(931, 187);
			   this->tb413->Name = L"tb413";
			   this->tb413->Size = System::Drawing::Size(32, 20);
			   this->tb413->TabIndex = 210;
			   this->tb413->Visible = false;
			   // 
			   // tb412
			   // 
			   this->tb412->Enabled = false;
			   this->tb412->Location = System::Drawing::Point(893, 186);
			   this->tb412->Name = L"tb412";
			   this->tb412->Size = System::Drawing::Size(32, 20);
			   this->tb412->TabIndex = 209;
			   this->tb412->Visible = false;
			   // 
			   // tb411
			   // 
			   this->tb411->Enabled = false;
			   this->tb411->Location = System::Drawing::Point(855, 187);
			   this->tb411->Name = L"tb411";
			   this->tb411->Size = System::Drawing::Size(32, 20);
			   this->tb411->TabIndex = 208;
			   this->tb411->Visible = false;
			   // 
			   // tb410
			   // 
			   this->tb410->Enabled = false;
			   this->tb410->Location = System::Drawing::Point(817, 187);
			   this->tb410->Name = L"tb410";
			   this->tb410->Size = System::Drawing::Size(32, 20);
			   this->tb410->TabIndex = 207;
			   this->tb410->Visible = false;
			   // 
			   // tb314
			   // 
			   this->tb314->Enabled = false;
			   this->tb314->Location = System::Drawing::Point(969, 161);
			   this->tb314->Name = L"tb314";
			   this->tb314->Size = System::Drawing::Size(32, 20);
			   this->tb314->TabIndex = 206;
			   this->tb314->Visible = false;
			   // 
			   // tb313
			   // 
			   this->tb313->Enabled = false;
			   this->tb313->Location = System::Drawing::Point(931, 161);
			   this->tb313->Name = L"tb313";
			   this->tb313->Size = System::Drawing::Size(32, 20);
			   this->tb313->TabIndex = 205;
			   this->tb313->Visible = false;
			   // 
			   // tb312
			   // 
			   this->tb312->Enabled = false;
			   this->tb312->Location = System::Drawing::Point(893, 161);
			   this->tb312->Name = L"tb312";
			   this->tb312->Size = System::Drawing::Size(32, 20);
			   this->tb312->TabIndex = 204;
			   this->tb312->Visible = false;
			   // 
			   // tb311
			   // 
			   this->tb311->Enabled = false;
			   this->tb311->Location = System::Drawing::Point(855, 160);
			   this->tb311->Name = L"tb311";
			   this->tb311->Size = System::Drawing::Size(32, 20);
			   this->tb311->TabIndex = 203;
			   this->tb311->Visible = false;
			   // 
			   // tb310
			   // 
			   this->tb310->Enabled = false;
			   this->tb310->Location = System::Drawing::Point(817, 161);
			   this->tb310->Name = L"tb310";
			   this->tb310->Size = System::Drawing::Size(32, 20);
			   this->tb310->TabIndex = 202;
			   this->tb310->Visible = false;
			   // 
			   // tb214
			   // 
			   this->tb214->Enabled = false;
			   this->tb214->Location = System::Drawing::Point(969, 135);
			   this->tb214->Name = L"tb214";
			   this->tb214->Size = System::Drawing::Size(32, 20);
			   this->tb214->TabIndex = 201;
			   this->tb214->Visible = false;
			   // 
			   // tb213
			   // 
			   this->tb213->Enabled = false;
			   this->tb213->Location = System::Drawing::Point(931, 135);
			   this->tb213->Name = L"tb213";
			   this->tb213->Size = System::Drawing::Size(32, 20);
			   this->tb213->TabIndex = 200;
			   this->tb213->Visible = false;
			   // 
			   // tb212
			   // 
			   this->tb212->Enabled = false;
			   this->tb212->Location = System::Drawing::Point(893, 134);
			   this->tb212->Name = L"tb212";
			   this->tb212->Size = System::Drawing::Size(32, 20);
			   this->tb212->TabIndex = 199;
			   this->tb212->Visible = false;
			   // 
			   // tb211
			   // 
			   this->tb211->Enabled = false;
			   this->tb211->Location = System::Drawing::Point(855, 134);
			   this->tb211->Name = L"tb211";
			   this->tb211->Size = System::Drawing::Size(32, 20);
			   this->tb211->TabIndex = 198;
			   this->tb211->Visible = false;
			   // 
			   // tb210
			   // 
			   this->tb210->Enabled = false;
			   this->tb210->Location = System::Drawing::Point(817, 135);
			   this->tb210->Name = L"tb210";
			   this->tb210->Size = System::Drawing::Size(32, 20);
			   this->tb210->TabIndex = 197;
			   this->tb210->Visible = false;
			   // 
			   // tb0114
			   // 
			   this->tb0114->Enabled = false;
			   this->tb0114->Location = System::Drawing::Point(969, 109);
			   this->tb0114->Name = L"tb0114";
			   this->tb0114->Size = System::Drawing::Size(32, 20);
			   this->tb0114->TabIndex = 196;
			   this->tb0114->Visible = false;
			   // 
			   // tb014
			   // 
			   this->tb014->Enabled = false;
			   this->tb014->Location = System::Drawing::Point(969, 84);
			   this->tb014->Name = L"tb014";
			   this->tb014->Size = System::Drawing::Size(32, 20);
			   this->tb014->TabIndex = 195;
			   this->tb014->Visible = false;
			   // 
			   // tb0112
			   // 
			   this->tb0112->Enabled = false;
			   this->tb0112->Location = System::Drawing::Point(893, 109);
			   this->tb0112->Name = L"tb0112";
			   this->tb0112->Size = System::Drawing::Size(32, 20);
			   this->tb0112->TabIndex = 194;
			   this->tb0112->Visible = false;
			   // 
			   // tb0111
			   // 
			   this->tb0111->Enabled = false;
			   this->tb0111->Location = System::Drawing::Point(855, 109);
			   this->tb0111->Name = L"tb0111";
			   this->tb0111->Size = System::Drawing::Size(32, 20);
			   this->tb0111->TabIndex = 193;
			   this->tb0111->Visible = false;
			   // 
			   // tb0110
			   // 
			   this->tb0110->Enabled = false;
			   this->tb0110->Location = System::Drawing::Point(817, 109);
			   this->tb0110->Name = L"tb0110";
			   this->tb0110->Size = System::Drawing::Size(32, 20);
			   this->tb0110->TabIndex = 192;
			   this->tb0110->Visible = false;
			   // 
			   // tb0113
			   // 
			   this->tb0113->Enabled = false;
			   this->tb0113->Location = System::Drawing::Point(931, 109);
			   this->tb0113->Name = L"tb0113";
			   this->tb0113->Size = System::Drawing::Size(32, 20);
			   this->tb0113->TabIndex = 191;
			   this->tb0113->Visible = false;
			   // 
			   // tb013
			   // 
			   this->tb013->Enabled = false;
			   this->tb013->Location = System::Drawing::Point(931, 83);
			   this->tb013->Name = L"tb013";
			   this->tb013->Size = System::Drawing::Size(32, 20);
			   this->tb013->TabIndex = 190;
			   this->tb013->Visible = false;
			   // 
			   // tb012
			   // 
			   this->tb012->Enabled = false;
			   this->tb012->Location = System::Drawing::Point(893, 83);
			   this->tb012->Name = L"tb012";
			   this->tb012->Size = System::Drawing::Size(32, 20);
			   this->tb012->TabIndex = 189;
			   this->tb012->Visible = false;
			   // 
			   // tb011
			   // 
			   this->tb011->Enabled = false;
			   this->tb011->Location = System::Drawing::Point(855, 84);
			   this->tb011->Name = L"tb011";
			   this->tb011->Size = System::Drawing::Size(32, 20);
			   this->tb011->TabIndex = 188;
			   this->tb011->Visible = false;
			   // 
			   // tb010
			   // 
			   this->tb010->Enabled = false;
			   this->tb010->Location = System::Drawing::Point(817, 83);
			   this->tb010->Name = L"tb010";
			   this->tb010->Size = System::Drawing::Size(32, 20);
			   this->tb010->TabIndex = 187;
			   this->tb010->Visible = false;
			   // 
			   // tb914
			   // 
			   this->tb914->Enabled = false;
			   this->tb914->Location = System::Drawing::Point(969, 317);
			   this->tb914->Name = L"tb914";
			   this->tb914->Size = System::Drawing::Size(32, 20);
			   this->tb914->TabIndex = 236;
			   this->tb914->Visible = false;
			   // 
			   // tb913
			   // 
			   this->tb913->Enabled = false;
			   this->tb913->Location = System::Drawing::Point(931, 317);
			   this->tb913->Name = L"tb913";
			   this->tb913->Size = System::Drawing::Size(32, 20);
			   this->tb913->TabIndex = 235;
			   this->tb913->Visible = false;
			   // 
			   // tb912
			   // 
			   this->tb912->Enabled = false;
			   this->tb912->Location = System::Drawing::Point(893, 316);
			   this->tb912->Name = L"tb912";
			   this->tb912->Size = System::Drawing::Size(32, 20);
			   this->tb912->TabIndex = 234;
			   this->tb912->Visible = false;
			   // 
			   // tb911
			   // 
			   this->tb911->Enabled = false;
			   this->tb911->Location = System::Drawing::Point(855, 317);
			   this->tb911->Name = L"tb911";
			   this->tb911->Size = System::Drawing::Size(32, 20);
			   this->tb911->TabIndex = 233;
			   this->tb911->Visible = false;
			   // 
			   // tb910
			   // 
			   this->tb910->Enabled = false;
			   this->tb910->Location = System::Drawing::Point(817, 317);
			   this->tb910->Name = L"tb910";
			   this->tb910->Size = System::Drawing::Size(32, 20);
			   this->tb910->TabIndex = 232;
			   this->tb910->Visible = false;
			   // 
			   // tb814
			   // 
			   this->tb814->Enabled = false;
			   this->tb814->Location = System::Drawing::Point(969, 291);
			   this->tb814->Name = L"tb814";
			   this->tb814->Size = System::Drawing::Size(32, 20);
			   this->tb814->TabIndex = 231;
			   this->tb814->Visible = false;
			   // 
			   // tb813
			   // 
			   this->tb813->Enabled = false;
			   this->tb813->Location = System::Drawing::Point(931, 291);
			   this->tb813->Name = L"tb813";
			   this->tb813->Size = System::Drawing::Size(32, 20);
			   this->tb813->TabIndex = 230;
			   this->tb813->Visible = false;
			   // 
			   // tb812
			   // 
			   this->tb812->Enabled = false;
			   this->tb812->Location = System::Drawing::Point(893, 291);
			   this->tb812->Name = L"tb812";
			   this->tb812->Size = System::Drawing::Size(32, 20);
			   this->tb812->TabIndex = 229;
			   this->tb812->Visible = false;
			   // 
			   // tb811
			   // 
			   this->tb811->Enabled = false;
			   this->tb811->Location = System::Drawing::Point(855, 290);
			   this->tb811->Name = L"tb811";
			   this->tb811->Size = System::Drawing::Size(32, 20);
			   this->tb811->TabIndex = 228;
			   this->tb811->Visible = false;
			   // 
			   // tb810
			   // 
			   this->tb810->Enabled = false;
			   this->tb810->Location = System::Drawing::Point(817, 291);
			   this->tb810->Name = L"tb810";
			   this->tb810->Size = System::Drawing::Size(32, 20);
			   this->tb810->TabIndex = 227;
			   this->tb810->Visible = false;
			   // 
			   // tb714
			   // 
			   this->tb714->Enabled = false;
			   this->tb714->Location = System::Drawing::Point(969, 265);
			   this->tb714->Name = L"tb714";
			   this->tb714->Size = System::Drawing::Size(32, 20);
			   this->tb714->TabIndex = 226;
			   this->tb714->Visible = false;
			   // 
			   // tb713
			   // 
			   this->tb713->Enabled = false;
			   this->tb713->Location = System::Drawing::Point(931, 265);
			   this->tb713->Name = L"tb713";
			   this->tb713->Size = System::Drawing::Size(32, 20);
			   this->tb713->TabIndex = 225;
			   this->tb713->Visible = false;
			   // 
			   // tb712
			   // 
			   this->tb712->Enabled = false;
			   this->tb712->Location = System::Drawing::Point(893, 264);
			   this->tb712->Name = L"tb712";
			   this->tb712->Size = System::Drawing::Size(32, 20);
			   this->tb712->TabIndex = 224;
			   this->tb712->Visible = false;
			   // 
			   // tb711
			   // 
			   this->tb711->Enabled = false;
			   this->tb711->Location = System::Drawing::Point(855, 264);
			   this->tb711->Name = L"tb711";
			   this->tb711->Size = System::Drawing::Size(32, 20);
			   this->tb711->TabIndex = 223;
			   this->tb711->Visible = false;
			   // 
			   // tb710
			   // 
			   this->tb710->Enabled = false;
			   this->tb710->Location = System::Drawing::Point(817, 265);
			   this->tb710->Name = L"tb710";
			   this->tb710->Size = System::Drawing::Size(32, 20);
			   this->tb710->TabIndex = 222;
			   this->tb710->Visible = false;
			   // 
			   // tb614
			   // 
			   this->tb614->Enabled = false;
			   this->tb614->Location = System::Drawing::Point(969, 239);
			   this->tb614->Name = L"tb614";
			   this->tb614->Size = System::Drawing::Size(32, 20);
			   this->tb614->TabIndex = 221;
			   this->tb614->Visible = false;
			   // 
			   // tb514
			   // 
			   this->tb514->Enabled = false;
			   this->tb514->Location = System::Drawing::Point(969, 214);
			   this->tb514->Name = L"tb514";
			   this->tb514->Size = System::Drawing::Size(32, 20);
			   this->tb514->TabIndex = 220;
			   this->tb514->Visible = false;
			   // 
			   // tb612
			   // 
			   this->tb612->Enabled = false;
			   this->tb612->Location = System::Drawing::Point(893, 239);
			   this->tb612->Name = L"tb612";
			   this->tb612->Size = System::Drawing::Size(32, 20);
			   this->tb612->TabIndex = 219;
			   this->tb612->Visible = false;
			   // 
			   // tb611
			   // 
			   this->tb611->Enabled = false;
			   this->tb611->Location = System::Drawing::Point(855, 239);
			   this->tb611->Name = L"tb611";
			   this->tb611->Size = System::Drawing::Size(32, 20);
			   this->tb611->TabIndex = 218;
			   this->tb611->Visible = false;
			   // 
			   // tb610
			   // 
			   this->tb610->Enabled = false;
			   this->tb610->Location = System::Drawing::Point(817, 239);
			   this->tb610->Name = L"tb610";
			   this->tb610->Size = System::Drawing::Size(32, 20);
			   this->tb610->TabIndex = 217;
			   this->tb610->Visible = false;
			   // 
			   // tb613
			   // 
			   this->tb613->Enabled = false;
			   this->tb613->Location = System::Drawing::Point(931, 239);
			   this->tb613->Name = L"tb613";
			   this->tb613->Size = System::Drawing::Size(32, 20);
			   this->tb613->TabIndex = 216;
			   this->tb613->Visible = false;
			   // 
			   // tb513
			   // 
			   this->tb513->Enabled = false;
			   this->tb513->Location = System::Drawing::Point(931, 213);
			   this->tb513->Name = L"tb513";
			   this->tb513->Size = System::Drawing::Size(32, 20);
			   this->tb513->TabIndex = 215;
			   this->tb513->Visible = false;
			   // 
			   // tb512
			   // 
			   this->tb512->Enabled = false;
			   this->tb512->Location = System::Drawing::Point(893, 213);
			   this->tb512->Name = L"tb512";
			   this->tb512->Size = System::Drawing::Size(32, 20);
			   this->tb512->TabIndex = 214;
			   this->tb512->Visible = false;
			   // 
			   // tb511
			   // 
			   this->tb511->Enabled = false;
			   this->tb511->Location = System::Drawing::Point(855, 214);
			   this->tb511->Name = L"tb511";
			   this->tb511->Size = System::Drawing::Size(32, 20);
			   this->tb511->TabIndex = 213;
			   this->tb511->Visible = false;
			   // 
			   // tb510
			   // 
			   this->tb510->Enabled = false;
			   this->tb510->Location = System::Drawing::Point(817, 213);
			   this->tb510->Name = L"tb510";
			   this->tb510->Size = System::Drawing::Size(32, 20);
			   this->tb510->TabIndex = 212;
			   this->tb510->Visible = false;
			   // 
			   // tb1414
			   // 
			   this->tb1414->Enabled = false;
			   this->tb1414->Location = System::Drawing::Point(969, 447);
			   this->tb1414->Name = L"tb1414";
			   this->tb1414->Size = System::Drawing::Size(32, 20);
			   this->tb1414->TabIndex = 261;
			   this->tb1414->Visible = false;
			   // 
			   // tb1413
			   // 
			   this->tb1413->Enabled = false;
			   this->tb1413->Location = System::Drawing::Point(931, 447);
			   this->tb1413->Name = L"tb1413";
			   this->tb1413->Size = System::Drawing::Size(32, 20);
			   this->tb1413->TabIndex = 260;
			   this->tb1413->Visible = false;
			   // 
			   // tb1412
			   // 
			   this->tb1412->Enabled = false;
			   this->tb1412->Location = System::Drawing::Point(893, 446);
			   this->tb1412->Name = L"tb1412";
			   this->tb1412->Size = System::Drawing::Size(32, 20);
			   this->tb1412->TabIndex = 259;
			   this->tb1412->Visible = false;
			   // 
			   // tb1411
			   // 
			   this->tb1411->Enabled = false;
			   this->tb1411->Location = System::Drawing::Point(855, 447);
			   this->tb1411->Name = L"tb1411";
			   this->tb1411->Size = System::Drawing::Size(32, 20);
			   this->tb1411->TabIndex = 258;
			   this->tb1411->Visible = false;
			   // 
			   // tb1410
			   // 
			   this->tb1410->Enabled = false;
			   this->tb1410->Location = System::Drawing::Point(817, 447);
			   this->tb1410->Name = L"tb1410";
			   this->tb1410->Size = System::Drawing::Size(32, 20);
			   this->tb1410->TabIndex = 257;
			   this->tb1410->Visible = false;
			   // 
			   // tb1314
			   // 
			   this->tb1314->Enabled = false;
			   this->tb1314->Location = System::Drawing::Point(969, 421);
			   this->tb1314->Name = L"tb1314";
			   this->tb1314->Size = System::Drawing::Size(32, 20);
			   this->tb1314->TabIndex = 256;
			   this->tb1314->Visible = false;
			   // 
			   // tb1313
			   // 
			   this->tb1313->Enabled = false;
			   this->tb1313->Location = System::Drawing::Point(931, 421);
			   this->tb1313->Name = L"tb1313";
			   this->tb1313->Size = System::Drawing::Size(32, 20);
			   this->tb1313->TabIndex = 255;
			   this->tb1313->Visible = false;
			   // 
			   // tb1312
			   // 
			   this->tb1312->Enabled = false;
			   this->tb1312->Location = System::Drawing::Point(893, 421);
			   this->tb1312->Name = L"tb1312";
			   this->tb1312->Size = System::Drawing::Size(32, 20);
			   this->tb1312->TabIndex = 254;
			   this->tb1312->Visible = false;
			   // 
			   // tb1311
			   // 
			   this->tb1311->Enabled = false;
			   this->tb1311->Location = System::Drawing::Point(855, 420);
			   this->tb1311->Name = L"tb1311";
			   this->tb1311->Size = System::Drawing::Size(32, 20);
			   this->tb1311->TabIndex = 253;
			   this->tb1311->Visible = false;
			   // 
			   // tb1310
			   // 
			   this->tb1310->Enabled = false;
			   this->tb1310->Location = System::Drawing::Point(817, 421);
			   this->tb1310->Name = L"tb1310";
			   this->tb1310->Size = System::Drawing::Size(32, 20);
			   this->tb1310->TabIndex = 252;
			   this->tb1310->Visible = false;
			   // 
			   // tb1214
			   // 
			   this->tb1214->Enabled = false;
			   this->tb1214->Location = System::Drawing::Point(969, 395);
			   this->tb1214->Name = L"tb1214";
			   this->tb1214->Size = System::Drawing::Size(32, 20);
			   this->tb1214->TabIndex = 251;
			   this->tb1214->Visible = false;
			   // 
			   // tb1213
			   // 
			   this->tb1213->Enabled = false;
			   this->tb1213->Location = System::Drawing::Point(931, 395);
			   this->tb1213->Name = L"tb1213";
			   this->tb1213->Size = System::Drawing::Size(32, 20);
			   this->tb1213->TabIndex = 250;
			   this->tb1213->Visible = false;
			   // 
			   // tb1212
			   // 
			   this->tb1212->Enabled = false;
			   this->tb1212->Location = System::Drawing::Point(893, 394);
			   this->tb1212->Name = L"tb1212";
			   this->tb1212->Size = System::Drawing::Size(32, 20);
			   this->tb1212->TabIndex = 249;
			   this->tb1212->Visible = false;
			   // 
			   // tb1211
			   // 
			   this->tb1211->Enabled = false;
			   this->tb1211->Location = System::Drawing::Point(855, 394);
			   this->tb1211->Name = L"tb1211";
			   this->tb1211->Size = System::Drawing::Size(32, 20);
			   this->tb1211->TabIndex = 248;
			   this->tb1211->Visible = false;
			   // 
			   // tb1210
			   // 
			   this->tb1210->Enabled = false;
			   this->tb1210->Location = System::Drawing::Point(817, 395);
			   this->tb1210->Name = L"tb1210";
			   this->tb1210->Size = System::Drawing::Size(32, 20);
			   this->tb1210->TabIndex = 247;
			   this->tb1210->Visible = false;
			   // 
			   // tb1114
			   // 
			   this->tb1114->Enabled = false;
			   this->tb1114->Location = System::Drawing::Point(969, 369);
			   this->tb1114->Name = L"tb1114";
			   this->tb1114->Size = System::Drawing::Size(32, 20);
			   this->tb1114->TabIndex = 246;
			   this->tb1114->Visible = false;
			   // 
			   // tb1014
			   // 
			   this->tb1014->Enabled = false;
			   this->tb1014->Location = System::Drawing::Point(969, 344);
			   this->tb1014->Name = L"tb1014";
			   this->tb1014->Size = System::Drawing::Size(32, 20);
			   this->tb1014->TabIndex = 245;
			   this->tb1014->Visible = false;
			   // 
			   // tb1112
			   // 
			   this->tb1112->Enabled = false;
			   this->tb1112->Location = System::Drawing::Point(893, 369);
			   this->tb1112->Name = L"tb1112";
			   this->tb1112->Size = System::Drawing::Size(32, 20);
			   this->tb1112->TabIndex = 244;
			   this->tb1112->Visible = false;
			   // 
			   // tb1111
			   // 
			   this->tb1111->Enabled = false;
			   this->tb1111->Location = System::Drawing::Point(855, 369);
			   this->tb1111->Name = L"tb1111";
			   this->tb1111->Size = System::Drawing::Size(32, 20);
			   this->tb1111->TabIndex = 243;
			   this->tb1111->Visible = false;
			   // 
			   // tb1110
			   // 
			   this->tb1110->Enabled = false;
			   this->tb1110->Location = System::Drawing::Point(817, 369);
			   this->tb1110->Name = L"tb1110";
			   this->tb1110->Size = System::Drawing::Size(32, 20);
			   this->tb1110->TabIndex = 242;
			   this->tb1110->Visible = false;
			   // 
			   // tb1113
			   // 
			   this->tb1113->Enabled = false;
			   this->tb1113->Location = System::Drawing::Point(931, 369);
			   this->tb1113->Name = L"tb1113";
			   this->tb1113->Size = System::Drawing::Size(32, 20);
			   this->tb1113->TabIndex = 241;
			   this->tb1113->Visible = false;
			   // 
			   // tb1013
			   // 
			   this->tb1013->Enabled = false;
			   this->tb1013->Location = System::Drawing::Point(931, 343);
			   this->tb1013->Name = L"tb1013";
			   this->tb1013->Size = System::Drawing::Size(32, 20);
			   this->tb1013->TabIndex = 240;
			   this->tb1013->Visible = false;
			   // 
			   // tb1012
			   // 
			   this->tb1012->Enabled = false;
			   this->tb1012->Location = System::Drawing::Point(893, 343);
			   this->tb1012->Name = L"tb1012";
			   this->tb1012->Size = System::Drawing::Size(32, 20);
			   this->tb1012->TabIndex = 239;
			   this->tb1012->Visible = false;
			   // 
			   // tb1011
			   // 
			   this->tb1011->Enabled = false;
			   this->tb1011->Location = System::Drawing::Point(855, 344);
			   this->tb1011->Name = L"tb1011";
			   this->tb1011->Size = System::Drawing::Size(32, 20);
			   this->tb1011->TabIndex = 238;
			   this->tb1011->Visible = false;
			   // 
			   // tb1010
			   // 
			   this->tb1010->Enabled = false;
			   this->tb1010->Location = System::Drawing::Point(817, 343);
			   this->tb1010->Name = L"tb1010";
			   this->tb1010->Size = System::Drawing::Size(32, 20);
			   this->tb1010->TabIndex = 237;
			   this->tb1010->Visible = false;
			   // 
			   // tb118
			   // 
			   this->tb118->Enabled = false;
			   this->tb118->Location = System::Drawing::Point(741, 367);
			   this->tb118->Name = L"tb118";
			   this->tb118->Size = System::Drawing::Size(32, 20);
			   this->tb118->TabIndex = 166;
			   this->tb118->Visible = false;
			   // 
			   // tb109
			   // 
			   this->tb109->Enabled = false;
			   this->tb109->Location = System::Drawing::Point(779, 342);
			   this->tb109->Name = L"tb109";
			   this->tb109->Size = System::Drawing::Size(32, 20);
			   this->tb109->TabIndex = 170;
			   this->tb109->Visible = false;
			   // 
			   // btnConfirmar
			   // 
			   this->btnConfirmar->BackColor = System::Drawing::Color::Gray;
			   this->btnConfirmar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnConfirmar->ForeColor = System::Drawing::Color::White;
			   this->btnConfirmar->Location = System::Drawing::Point(265, 204);
			   this->btnConfirmar->Name = L"btnConfirmar";
			   this->btnConfirmar->Size = System::Drawing::Size(114, 35);
			   this->btnConfirmar->TabIndex = 262;
			   this->btnConfirmar->Text = L"Confirmar los datos";
			   this->btnConfirmar->UseVisualStyleBackColor = false;
			   this->btnConfirmar->Visible = false;
			   this->btnConfirmar->Click += gcnew System::EventHandler(this, &MatrizVisual::btnConfirmar_Click);
			   // 
			   // btnLimpiar
			   // 
			   this->btnLimpiar->BackColor = System::Drawing::Color::Gray;
			   this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnLimpiar->ForeColor = System::Drawing::Color::White;
			   this->btnLimpiar->Location = System::Drawing::Point(889, 484);
			   this->btnLimpiar->Name = L"btnLimpiar";
			   this->btnLimpiar->Size = System::Drawing::Size(112, 36);
			   this->btnLimpiar->TabIndex = 263;
			   this->btnLimpiar->Text = L"Limpiar matriz";
			   this->btnLimpiar->UseVisualStyleBackColor = false;
			   this->btnLimpiar->Click += gcnew System::EventHandler(this, &MatrizVisual::btnLimpiar_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Gray;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(326, 505);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(231, 40);
			   this->button1->TabIndex = 264;
			   this->button1->Text = L"Graficar el grafo";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MatrizVisual::button1_Click);
			   // 
			   // lbGrafoA
			   // 
			   this->lbGrafoA->AutoSize = true;
			   this->lbGrafoA->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoA->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoA->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoA->Location = System::Drawing::Point(51, 163);
			   this->lbGrafoA->Name = L"lbGrafoA";
			   this->lbGrafoA->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoA->TabIndex = 265;
			   this->lbGrafoA->Text = L"A";
			   // 
			   // lbGrafoB
			   // 
			   this->lbGrafoB->AutoSize = true;
			   this->lbGrafoB->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoB->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoB->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoB->Location = System::Drawing::Point(106, 84);
			   this->lbGrafoB->Name = L"lbGrafoB";
			   this->lbGrafoB->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoB->TabIndex = 266;
			   this->lbGrafoB->Text = L"B";
			   // 
			   // lbGrafoC
			   // 
			   this->lbGrafoC->AutoSize = true;
			   this->lbGrafoC->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoC->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoC->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoC->Location = System::Drawing::Point(115, 246);
			   this->lbGrafoC->Name = L"lbGrafoC";
			   this->lbGrafoC->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoC->TabIndex = 267;
			   this->lbGrafoC->Text = L"C";
			   // 
			   // lbGrafoD
			   // 
			   this->lbGrafoD->AutoSize = true;
			   this->lbGrafoD->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoD->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoD->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoD->Location = System::Drawing::Point(182, 23);
			   this->lbGrafoD->Name = L"lbGrafoD";
			   this->lbGrafoD->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoD->TabIndex = 268;
			   this->lbGrafoD->Text = L"D";
			   // 
			   // lbGrafoE
			   // 
			   this->lbGrafoE->AutoSize = true;
			   this->lbGrafoE->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoE->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoE->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoE->Location = System::Drawing::Point(182, 299);
			   this->lbGrafoE->Name = L"lbGrafoE";
			   this->lbGrafoE->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoE->TabIndex = 269;
			   this->lbGrafoE->Text = L"E";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->lbGrafoO);
			   this->panel1->Controls->Add(this->lbGrafoN);
			   this->panel1->Controls->Add(this->lbGrafoM);
			   this->panel1->Controls->Add(this->lbGrafoL);
			   this->panel1->Controls->Add(this->lbGrafoK);
			   this->panel1->Controls->Add(this->lbGrafoJ);
			   this->panel1->Controls->Add(this->lbGrafoI);
			   this->panel1->Controls->Add(this->lbGrafoH);
			   this->panel1->Controls->Add(this->lbGrafoG);
			   this->panel1->Controls->Add(this->lbGrafoF);
			   this->panel1->Controls->Add(this->lbGrafoA);
			   this->panel1->Controls->Add(this->lbGrafoE);
			   this->panel1->Controls->Add(this->lbGrafoC);
			   this->panel1->Controls->Add(this->lbGrafoB);
			   this->panel1->Controls->Add(this->lbGrafoD);
			   this->panel1->ForeColor = System::Drawing::Color::Black;
			   this->panel1->Location = System::Drawing::Point(326, 567);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(709, 338);
			   this->panel1->TabIndex = 270;
			   // 
			   // lbGrafoO
			   // 
			   this->lbGrafoO->AutoSize = true;
			   this->lbGrafoO->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoO->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoO->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoO->Location = System::Drawing::Point(609, 163);
			   this->lbGrafoO->Name = L"lbGrafoO";
			   this->lbGrafoO->Size = System::Drawing::Size(19, 20);
			   this->lbGrafoO->TabIndex = 279;
			   this->lbGrafoO->Text = L"O";
			   // 
			   // lbGrafoN
			   // 
			   this->lbGrafoN->AutoSize = true;
			   this->lbGrafoN->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoN->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoN->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoN->Location = System::Drawing::Point(562, 84);
			   this->lbGrafoN->Name = L"lbGrafoN";
			   this->lbGrafoN->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoN->TabIndex = 278;
			   this->lbGrafoN->Text = L"N";
			   // 
			   // lbGrafoM
			   // 
			   this->lbGrafoM->AutoSize = true;
			   this->lbGrafoM->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoM->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoM->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoM->Location = System::Drawing::Point(558, 246);
			   this->lbGrafoM->Name = L"lbGrafoM";
			   this->lbGrafoM->Size = System::Drawing::Size(20, 20);
			   this->lbGrafoM->TabIndex = 277;
			   this->lbGrafoM->Text = L"M";
			   // 
			   // lbGrafoL
			   // 
			   this->lbGrafoL->AutoSize = true;
			   this->lbGrafoL->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoL->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoL->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoL->Location = System::Drawing::Point(499, 23);
			   this->lbGrafoL->Name = L"lbGrafoL";
			   this->lbGrafoL->Size = System::Drawing::Size(17, 20);
			   this->lbGrafoL->TabIndex = 276;
			   this->lbGrafoL->Text = L"L";
			   // 
			   // lbGrafoK
			   // 
			   this->lbGrafoK->AutoSize = true;
			   this->lbGrafoK->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoK->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoK->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoK->Location = System::Drawing::Point(466, 299);
			   this->lbGrafoK->Name = L"lbGrafoK";
			   this->lbGrafoK->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoK->TabIndex = 275;
			   this->lbGrafoK->Text = L"K";
			   // 
			   // lbGrafoJ
			   // 
			   this->lbGrafoJ->AutoSize = true;
			   this->lbGrafoJ->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoJ->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoJ->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoJ->Location = System::Drawing::Point(419, 23);
			   this->lbGrafoJ->Name = L"lbGrafoJ";
			   this->lbGrafoJ->Size = System::Drawing::Size(16, 20);
			   this->lbGrafoJ->TabIndex = 274;
			   this->lbGrafoJ->Text = L"J";
			   // 
			   // lbGrafoI
			   // 
			   this->lbGrafoI->AutoSize = true;
			   this->lbGrafoI->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoI->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoI->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoI->Location = System::Drawing::Point(372, 299);
			   this->lbGrafoI->Name = L"lbGrafoI";
			   this->lbGrafoI->Size = System::Drawing::Size(13, 20);
			   this->lbGrafoI->TabIndex = 273;
			   this->lbGrafoI->Text = L"I";
			   // 
			   // lbGrafoH
			   // 
			   this->lbGrafoH->AutoSize = true;
			   this->lbGrafoH->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoH->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoH->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoH->Location = System::Drawing::Point(343, 23);
			   this->lbGrafoH->Name = L"lbGrafoH";
			   this->lbGrafoH->Size = System::Drawing::Size(18, 20);
			   this->lbGrafoH->TabIndex = 272;
			   this->lbGrafoH->Text = L"H";
			   // 
			   // lbGrafoG
			   // 
			   this->lbGrafoG->AutoSize = true;
			   this->lbGrafoG->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoG->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoG->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoG->Location = System::Drawing::Point(275, 299);
			   this->lbGrafoG->Name = L"lbGrafoG";
			   this->lbGrafoG->Size = System::Drawing::Size(19, 20);
			   this->lbGrafoG->TabIndex = 271;
			   this->lbGrafoG->Text = L"G";
			   // 
			   // lbGrafoF
			   // 
			   this->lbGrafoF->AutoSize = true;
			   this->lbGrafoF->BackColor = System::Drawing::Color::Black;
			   this->lbGrafoF->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbGrafoF->ForeColor = System::Drawing::Color::White;
			   this->lbGrafoF->Location = System::Drawing::Point(266, 23);
			   this->lbGrafoF->Name = L"lbGrafoF";
			   this->lbGrafoF->Size = System::Drawing::Size(17, 20);
			   this->lbGrafoF->TabIndex = 270;
			   this->lbGrafoF->Text = L"F";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(44, 738);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(81, 13);
			   this->label1->TabIndex = 271;
			   this->label1->Text = L"Peso minimo:";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(33, 781);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(94, 13);
			   this->label2->TabIndex = 272;
			   this->label2->Text = L"Camino minimo:";
			   // 
			   // lbPesoMinimo
			   // 
			   this->lbPesoMinimo->AutoSize = true;
			   this->lbPesoMinimo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbPesoMinimo->ForeColor = System::Drawing::Color::White;
			   this->lbPesoMinimo->Location = System::Drawing::Point(137, 743);
			   this->lbPesoMinimo->Name = L"lbPesoMinimo";
			   this->lbPesoMinimo->Size = System::Drawing::Size(0, 13);
			   this->lbPesoMinimo->TabIndex = 273;
			   // 
			   // lbCaminoMinimo
			   // 
			   this->lbCaminoMinimo->AutoSize = true;
			   this->lbCaminoMinimo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbCaminoMinimo->ForeColor = System::Drawing::Color::White;
			   this->lbCaminoMinimo->Location = System::Drawing::Point(149, 786);
			   this->lbCaminoMinimo->Name = L"lbCaminoMinimo";
			   this->lbCaminoMinimo->Size = System::Drawing::Size(0, 13);
			   this->lbCaminoMinimo->TabIndex = 274;
			   // 
			   // pictureBox2
			   // 
			  // this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(25, 211);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(225, 217);
			   this->pictureBox2->TabIndex = 276;
			   this->pictureBox2->TabStop = false;
			   // 
			   // MatrizVisual
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->ClientSize = System::Drawing::Size(1047, 919);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->lbCaminoMinimo);
			   this->Controls->Add(this->lbPesoMinimo);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->btnCalcularCaminoMinimo);
			   this->Controls->Add(this->lblCaminoMinimo);
			   this->Controls->Add(this->comboBoxVerticeFinal);
			   this->Controls->Add(this->ComboBoxVerticeInicio);
			   this->Controls->Add(this->lblVerticeFinal);
			   this->Controls->Add(this->lblVerticeInicio);
			   this->Controls->Add(this->btnLimpiar);
			   this->Controls->Add(this->btnConfirmar);
			   this->Controls->Add(this->tb1414);
			   this->Controls->Add(this->tb1413);
			   this->Controls->Add(this->tb1412);
			   this->Controls->Add(this->tb1411);
			   this->Controls->Add(this->tb1410);
			   this->Controls->Add(this->tb1314);
			   this->Controls->Add(this->tb1313);
			   this->Controls->Add(this->tb1312);
			   this->Controls->Add(this->tb1311);
			   this->Controls->Add(this->tb1310);
			   this->Controls->Add(this->tb1214);
			   this->Controls->Add(this->tb1213);
			   this->Controls->Add(this->tb1212);
			   this->Controls->Add(this->tb1211);
			   this->Controls->Add(this->tb1210);
			   this->Controls->Add(this->tb1114);
			   this->Controls->Add(this->tb1014);
			   this->Controls->Add(this->tb1112);
			   this->Controls->Add(this->tb1111);
			   this->Controls->Add(this->tb1110);
			   this->Controls->Add(this->tb1113);
			   this->Controls->Add(this->tb1013);
			   this->Controls->Add(this->tb1012);
			   this->Controls->Add(this->tb1011);
			   this->Controls->Add(this->tb1010);
			   this->Controls->Add(this->tb914);
			   this->Controls->Add(this->tb913);
			   this->Controls->Add(this->tb912);
			   this->Controls->Add(this->tb911);
			   this->Controls->Add(this->tb910);
			   this->Controls->Add(this->tb814);
			   this->Controls->Add(this->tb813);
			   this->Controls->Add(this->tb812);
			   this->Controls->Add(this->tb811);
			   this->Controls->Add(this->tb810);
			   this->Controls->Add(this->tb714);
			   this->Controls->Add(this->tb713);
			   this->Controls->Add(this->tb712);
			   this->Controls->Add(this->tb711);
			   this->Controls->Add(this->tb710);
			   this->Controls->Add(this->tb614);
			   this->Controls->Add(this->tb514);
			   this->Controls->Add(this->tb612);
			   this->Controls->Add(this->tb611);
			   this->Controls->Add(this->tb610);
			   this->Controls->Add(this->tb613);
			   this->Controls->Add(this->tb513);
			   this->Controls->Add(this->tb512);
			   this->Controls->Add(this->tb511);
			   this->Controls->Add(this->tb510);
			   this->Controls->Add(this->tb414);
			   this->Controls->Add(this->tb413);
			   this->Controls->Add(this->tb412);
			   this->Controls->Add(this->tb411);
			   this->Controls->Add(this->tb410);
			   this->Controls->Add(this->tb314);
			   this->Controls->Add(this->tb313);
			   this->Controls->Add(this->tb312);
			   this->Controls->Add(this->tb311);
			   this->Controls->Add(this->tb310);
			   this->Controls->Add(this->tb214);
			   this->Controls->Add(this->tb213);
			   this->Controls->Add(this->tb212);
			   this->Controls->Add(this->tb211);
			   this->Controls->Add(this->tb210);
			   this->Controls->Add(this->tb0114);
			   this->Controls->Add(this->tb014);
			   this->Controls->Add(this->tb0112);
			   this->Controls->Add(this->tb0111);
			   this->Controls->Add(this->tb0110);
			   this->Controls->Add(this->tb0113);
			   this->Controls->Add(this->tb013);
			   this->Controls->Add(this->tb012);
			   this->Controls->Add(this->tb011);
			   this->Controls->Add(this->tb010);
			   this->Controls->Add(this->tb149);
			   this->Controls->Add(this->tb148);
			   this->Controls->Add(this->tb147);
			   this->Controls->Add(this->tb146);
			   this->Controls->Add(this->tb145);
			   this->Controls->Add(this->tb139);
			   this->Controls->Add(this->tb138);
			   this->Controls->Add(this->tb137);
			   this->Controls->Add(this->tb136);
			   this->Controls->Add(this->tb135);
			   this->Controls->Add(this->tb129);
			   this->Controls->Add(this->tb128);
			   this->Controls->Add(this->tb127);
			   this->Controls->Add(this->tb126);
			   this->Controls->Add(this->tb125);
			   this->Controls->Add(this->tb119);
			   this->Controls->Add(this->tb109);
			   this->Controls->Add(this->tb117);
			   this->Controls->Add(this->tb116);
			   this->Controls->Add(this->tb115);
			   this->Controls->Add(this->tb118);
			   this->Controls->Add(this->tb108);
			   this->Controls->Add(this->tb107);
			   this->Controls->Add(this->tb106);
			   this->Controls->Add(this->tb105);
			   this->Controls->Add(this->tb99);
			   this->Controls->Add(this->tb98);
			   this->Controls->Add(this->tb97);
			   this->Controls->Add(this->tb96);
			   this->Controls->Add(this->tb95);
			   this->Controls->Add(this->tb89);
			   this->Controls->Add(this->tb88);
			   this->Controls->Add(this->tb87);
			   this->Controls->Add(this->tb86);
			   this->Controls->Add(this->tb85);
			   this->Controls->Add(this->tb79);
			   this->Controls->Add(this->tb78);
			   this->Controls->Add(this->tb77);
			   this->Controls->Add(this->tb76);
			   this->Controls->Add(this->tb75);
			   this->Controls->Add(this->tb69);
			   this->Controls->Add(this->tb59);
			   this->Controls->Add(this->tb67);
			   this->Controls->Add(this->tb66);
			   this->Controls->Add(this->tb65);
			   this->Controls->Add(this->tb68);
			   this->Controls->Add(this->tb58);
			   this->Controls->Add(this->tb57);
			   this->Controls->Add(this->tb56);
			   this->Controls->Add(this->tb55);
			   this->Controls->Add(this->tb49);
			   this->Controls->Add(this->tb48);
			   this->Controls->Add(this->tb47);
			   this->Controls->Add(this->tb46);
			   this->Controls->Add(this->tb45);
			   this->Controls->Add(this->tb39);
			   this->Controls->Add(this->tb38);
			   this->Controls->Add(this->tb37);
			   this->Controls->Add(this->tb36);
			   this->Controls->Add(this->tb35);
			   this->Controls->Add(this->tb29);
			   this->Controls->Add(this->tb28);
			   this->Controls->Add(this->tb27);
			   this->Controls->Add(this->tb26);
			   this->Controls->Add(this->tb25);
			   this->Controls->Add(this->tb19);
			   this->Controls->Add(this->tb09);
			   this->Controls->Add(this->tb17);
			   this->Controls->Add(this->tb16);
			   this->Controls->Add(this->tb15);
			   this->Controls->Add(this->tb18);
			   this->Controls->Add(this->tb08);
			   this->Controls->Add(this->tb07);
			   this->Controls->Add(this->tb06);
			   this->Controls->Add(this->tb05);
			   this->Controls->Add(this->tb144);
			   this->Controls->Add(this->tb143);
			   this->Controls->Add(this->tb142);
			   this->Controls->Add(this->tb141);
			   this->Controls->Add(this->tb140);
			   this->Controls->Add(this->tb134);
			   this->Controls->Add(this->tb133);
			   this->Controls->Add(this->tb132);
			   this->Controls->Add(this->tb131);
			   this->Controls->Add(this->tb130);
			   this->Controls->Add(this->tb124);
			   this->Controls->Add(this->tb123);
			   this->Controls->Add(this->tb122);
			   this->Controls->Add(this->tb121);
			   this->Controls->Add(this->tb120);
			   this->Controls->Add(this->tb114);
			   this->Controls->Add(this->tb104);
			   this->Controls->Add(this->tb112);
			   this->Controls->Add(this->tb111);
			   this->Controls->Add(this->tb110);
			   this->Controls->Add(this->tb113);
			   this->Controls->Add(this->tb103);
			   this->Controls->Add(this->tb102);
			   this->Controls->Add(this->tb101);
			   this->Controls->Add(this->tb100);
			   this->Controls->Add(this->tb94);
			   this->Controls->Add(this->tb93);
			   this->Controls->Add(this->tb92);
			   this->Controls->Add(this->tb91);
			   this->Controls->Add(this->tb90);
			   this->Controls->Add(this->tb84);
			   this->Controls->Add(this->tb83);
			   this->Controls->Add(this->tb82);
			   this->Controls->Add(this->tb81);
			   this->Controls->Add(this->tb80);
			   this->Controls->Add(this->tb74);
			   this->Controls->Add(this->tb73);
			   this->Controls->Add(this->tb72);
			   this->Controls->Add(this->tb71);
			   this->Controls->Add(this->tb70);
			   this->Controls->Add(this->tb64);
			   this->Controls->Add(this->tb54);
			   this->Controls->Add(this->tb62);
			   this->Controls->Add(this->tb61);
			   this->Controls->Add(this->tb60);
			   this->Controls->Add(this->tb63);
			   this->Controls->Add(this->tb53);
			   this->Controls->Add(this->tb52);
			   this->Controls->Add(this->tb51);
			   this->Controls->Add(this->tb50);
			   this->Controls->Add(this->lbOcolumna);
			   this->Controls->Add(this->lbNcolumna);
			   this->Controls->Add(this->lbMcolumna);
			   this->Controls->Add(this->lbLcolumna);
			   this->Controls->Add(this->lbKcolumna);
			   this->Controls->Add(this->lbJcolumna);
			   this->Controls->Add(this->lbIcolumna);
			   this->Controls->Add(this->lbHcolumna);
			   this->Controls->Add(this->lbGcolumna);
			   this->Controls->Add(this->lbOfila);
			   this->Controls->Add(this->lbNfila);
			   this->Controls->Add(this->lbMfila);
			   this->Controls->Add(this->lbLfila);
			   this->Controls->Add(this->lbKfila);
			   this->Controls->Add(this->lbJfila);
			   this->Controls->Add(this->lbIfila);
			   this->Controls->Add(this->lbHfila);
			   this->Controls->Add(this->lbGfila);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->lbFcolumna);
			   this->Controls->Add(this->lbFfila);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->tbEntrada);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->tb44);
			   this->Controls->Add(this->tb43);
			   this->Controls->Add(this->tb42);
			   this->Controls->Add(this->tb41);
			   this->Controls->Add(this->tb40);
			   this->Controls->Add(this->tb34);
			   this->Controls->Add(this->tb33);
			   this->Controls->Add(this->tb32);
			   this->Controls->Add(this->tb31);
			   this->Controls->Add(this->tb30);
			   this->Controls->Add(this->tb24);
			   this->Controls->Add(this->tb23);
			   this->Controls->Add(this->tb22);
			   this->Controls->Add(this->tb21);
			   this->Controls->Add(this->tb20);
			   this->Controls->Add(this->tb14);
			   this->Controls->Add(this->tb04);
			   this->Controls->Add(this->tb12);
			   this->Controls->Add(this->tb11);
			   this->Controls->Add(this->tb10);
			   this->Controls->Add(this->tb13);
			   this->Controls->Add(this->tb03);
			   this->Controls->Add(this->tb02);
			   this->Controls->Add(this->tb01);
			   this->Controls->Add(this->tb00);
			   this->Controls->Add(this->lbEcolumna);
			   this->Controls->Add(this->lbDcolumna);
			   this->Controls->Add(this->lbCcolumna);
			   this->Controls->Add(this->lbBcolumna);
			   this->Controls->Add(this->lbAcolumna);
			   this->Controls->Add(this->lbEfila);
			   this->Controls->Add(this->lbDfila);
			   this->Controls->Add(this->lbCfila);
			   this->Controls->Add(this->lbBfila);
			   this->Controls->Add(this->lbAfila);
			   this->Name = L"MatrizVisual";
			   this->Text = L"MatrizVisual";
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   void ComprobarDespinte(int n) {
			   switch (n)
			   {
			   case 5:
				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }
				   /*if (Convert::ToInt32(tb04->Text) && Convert::ToInt32(tb14->Text) && Convert::ToInt32(tb24->Text) && Convert::ToInt32(tb34->Text) == 0) {
					   lbGrafoE->Visible = false;
				   }*/

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }
				   /*if (Convert::ToInt32(tb03->Text) && Convert::ToInt32(tb13->Text) && Convert::ToInt32(tb23->Text) == 0) {
					   lbGrafoD->Visible = false;
				   }*/

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }
				   /*if (Convert::ToInt32(tb02->Text) && Convert::ToInt32(tb12->Text) == 0) {
					   lbGrafoC->Visible = false;
				   }*/

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   /*if (Convert::ToInt32(tb01->Text) == 0) {
					   lbGrafoB->Visible = false;
				   }*/
				   break;

			   case 6:
				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 7:
				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 8:
				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 9:
				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 10:
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 11:

				   //Columna K
				   if (Convert::ToInt32(tb010->Text) || Convert::ToInt32(tb0110->Text) || Convert::ToInt32(tb210->Text) || Convert::ToInt32(tb310->Text) || Convert::ToInt32(tb410->Text) || Convert::ToInt32(tb510->Text)
					   || Convert::ToInt32(tb610->Text) || Convert::ToInt32(tb710->Text) || Convert::ToInt32(tb810->Text) || Convert::ToInt32(tb910->Text) != 0)
				   {
					   lbGrafoK->Visible = true;
				   }
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 12:

				   //Columna L 
				   if (Convert::ToInt32(tb011->Text) || Convert::ToInt32(tb0111->Text) || Convert::ToInt32(tb211->Text) || Convert::ToInt32(tb311->Text) || Convert::ToInt32(tb411->Text) || Convert::ToInt32(tb511->Text)
					   || Convert::ToInt32(tb611->Text) || Convert::ToInt32(tb711->Text) || Convert::ToInt32(tb811->Text) || Convert::ToInt32(tb911->Text) || Convert::ToInt32(tb1011->Text) != 0)
				   {
					   lbGrafoL->Visible = true;
				   }
				   //Columna K
				   if (Convert::ToInt32(tb010->Text) || Convert::ToInt32(tb0110->Text) || Convert::ToInt32(tb210->Text) || Convert::ToInt32(tb310->Text) || Convert::ToInt32(tb410->Text) || Convert::ToInt32(tb510->Text)
					   || Convert::ToInt32(tb610->Text) || Convert::ToInt32(tb710->Text) || Convert::ToInt32(tb810->Text) || Convert::ToInt32(tb910->Text) != 0)
				   {
					   lbGrafoK->Visible = true;
				   }
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 13:

				   // Columna M
				   if (Convert::ToInt32(tb012->Text) || Convert::ToInt32(tb0112->Text) || Convert::ToInt32(tb212->Text) || Convert::ToInt32(tb312->Text) || Convert::ToInt32(tb412->Text) || Convert::ToInt32(tb512->Text)
					   || Convert::ToInt32(tb612->Text) || Convert::ToInt32(tb712->Text) || Convert::ToInt32(tb812->Text) || Convert::ToInt32(tb912->Text) || Convert::ToInt32(tb1012->Text)
					   || Convert::ToInt32(tb1112->Text) != 0)
				   {
					   lbGrafoM->Visible = true;
				   }
				   //Columna L 
				   if (Convert::ToInt32(tb011->Text) || Convert::ToInt32(tb0111->Text) || Convert::ToInt32(tb211->Text) || Convert::ToInt32(tb311->Text) || Convert::ToInt32(tb411->Text) || Convert::ToInt32(tb511->Text)
					   || Convert::ToInt32(tb611->Text) || Convert::ToInt32(tb711->Text) || Convert::ToInt32(tb811->Text) || Convert::ToInt32(tb911->Text) || Convert::ToInt32(tb1011->Text) != 0)
				   {
					   lbGrafoL->Visible = true;
				   }
				   //Columna K
				   if (Convert::ToInt32(tb010->Text) || Convert::ToInt32(tb0110->Text) || Convert::ToInt32(tb210->Text) || Convert::ToInt32(tb310->Text) || Convert::ToInt32(tb410->Text) || Convert::ToInt32(tb510->Text)
					   || Convert::ToInt32(tb610->Text) || Convert::ToInt32(tb710->Text) || Convert::ToInt32(tb810->Text) || Convert::ToInt32(tb910->Text) != 0)
				   {
					   lbGrafoK->Visible = true;
				   }
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 14:

				   // Columna N

				   if (Convert::ToInt32(tb013->Text) || Convert::ToInt32(tb0113->Text) || Convert::ToInt32(tb213->Text) || Convert::ToInt32(tb313->Text) || Convert::ToInt32(tb413->Text) || Convert::ToInt32(tb513->Text)
					   || Convert::ToInt32(tb613->Text) || Convert::ToInt32(tb713->Text) || Convert::ToInt32(tb813->Text) || Convert::ToInt32(tb913->Text) || Convert::ToInt32(tb1013->Text)
					   || Convert::ToInt32(tb1113->Text) || Convert::ToInt32(tb1213->Text) != 0)
				   {
					   lbGrafoN->Visible = true;
				   }
				   // Columna M
				   if (Convert::ToInt32(tb012->Text) || Convert::ToInt32(tb0112->Text) || Convert::ToInt32(tb212->Text) || Convert::ToInt32(tb312->Text) || Convert::ToInt32(tb412->Text) || Convert::ToInt32(tb512->Text)
					   || Convert::ToInt32(tb612->Text) || Convert::ToInt32(tb712->Text) || Convert::ToInt32(tb812->Text) || Convert::ToInt32(tb912->Text) || Convert::ToInt32(tb1012->Text)
					   || Convert::ToInt32(tb1112->Text) != 0)
				   {
					   lbGrafoM->Visible = true;
				   }
				   //Columna L 
				   if (Convert::ToInt32(tb011->Text) || Convert::ToInt32(tb0111->Text) || Convert::ToInt32(tb211->Text) || Convert::ToInt32(tb311->Text) || Convert::ToInt32(tb411->Text) || Convert::ToInt32(tb511->Text)
					   || Convert::ToInt32(tb611->Text) || Convert::ToInt32(tb711->Text) || Convert::ToInt32(tb811->Text) || Convert::ToInt32(tb911->Text) || Convert::ToInt32(tb1011->Text) != 0)
				   {
					   lbGrafoL->Visible = true;
				   }
				   //Columna K
				   if (Convert::ToInt32(tb010->Text) || Convert::ToInt32(tb0110->Text) || Convert::ToInt32(tb210->Text) || Convert::ToInt32(tb310->Text) || Convert::ToInt32(tb410->Text) || Convert::ToInt32(tb510->Text)
					   || Convert::ToInt32(tb610->Text) || Convert::ToInt32(tb710->Text) || Convert::ToInt32(tb810->Text) || Convert::ToInt32(tb910->Text) != 0)
				   {
					   lbGrafoK->Visible = true;
				   }
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   case 15:


				   // Columna O

				   if (Convert::ToInt32(tb014->Text) || Convert::ToInt32(tb0114->Text) || Convert::ToInt32(tb214->Text) || Convert::ToInt32(tb314->Text) || Convert::ToInt32(tb414->Text) || Convert::ToInt32(tb514->Text)
					   || Convert::ToInt32(tb614->Text) || Convert::ToInt32(tb714->Text) || Convert::ToInt32(tb814->Text) || Convert::ToInt32(tb914->Text) || Convert::ToInt32(tb1014->Text)
					   || Convert::ToInt32(tb1114->Text) || Convert::ToInt32(tb1214->Text) || Convert::ToInt32(tb1314->Text) != 0)
				   {
					   lbGrafoO->Visible = true;
				   }
				   // Columna N

				   if (Convert::ToInt32(tb013->Text) || Convert::ToInt32(tb0113->Text) || Convert::ToInt32(tb213->Text) || Convert::ToInt32(tb313->Text) || Convert::ToInt32(tb413->Text) || Convert::ToInt32(tb513->Text)
					   || Convert::ToInt32(tb613->Text) || Convert::ToInt32(tb713->Text) || Convert::ToInt32(tb813->Text) || Convert::ToInt32(tb913->Text) || Convert::ToInt32(tb1013->Text)
					   || Convert::ToInt32(tb1113->Text) || Convert::ToInt32(tb1213->Text) != 0)
				   {
					   lbGrafoN->Visible = true;
				   }
				   // Columna M
				   if (Convert::ToInt32(tb012->Text) || Convert::ToInt32(tb0112->Text) || Convert::ToInt32(tb212->Text) || Convert::ToInt32(tb312->Text) || Convert::ToInt32(tb412->Text) || Convert::ToInt32(tb512->Text)
					   || Convert::ToInt32(tb612->Text) || Convert::ToInt32(tb712->Text) || Convert::ToInt32(tb812->Text) || Convert::ToInt32(tb912->Text) || Convert::ToInt32(tb1012->Text)
					   || Convert::ToInt32(tb1112->Text) != 0)
				   {
					   lbGrafoM->Visible = true;
				   }
				   //Columna L 
				   if (Convert::ToInt32(tb011->Text) || Convert::ToInt32(tb0111->Text) || Convert::ToInt32(tb211->Text) || Convert::ToInt32(tb311->Text) || Convert::ToInt32(tb411->Text) || Convert::ToInt32(tb511->Text)
					   || Convert::ToInt32(tb611->Text) || Convert::ToInt32(tb711->Text) || Convert::ToInt32(tb811->Text) || Convert::ToInt32(tb911->Text) || Convert::ToInt32(tb1011->Text) != 0)
				   {
					   lbGrafoL->Visible = true;
				   }
				   //Columna K
				   if (Convert::ToInt32(tb010->Text) || Convert::ToInt32(tb0110->Text) || Convert::ToInt32(tb210->Text) || Convert::ToInt32(tb310->Text) || Convert::ToInt32(tb410->Text) || Convert::ToInt32(tb510->Text)
					   || Convert::ToInt32(tb610->Text) || Convert::ToInt32(tb710->Text) || Convert::ToInt32(tb810->Text) || Convert::ToInt32(tb910->Text) != 0)
				   {
					   lbGrafoK->Visible = true;
				   }
				   //Columna J
				   if (Convert::ToInt32(tb09->Text) || Convert::ToInt32(tb19->Text) || Convert::ToInt32(tb29->Text) || Convert::ToInt32(tb39->Text) || Convert::ToInt32(tb49->Text) || Convert::ToInt32(tb59->Text) || Convert::ToInt32(tb69->Text) || Convert::ToInt32(tb79->Text) || Convert::ToInt32(tb89->Text) != 0) {
					   lbGrafoJ->Visible = true;
				   }

				   //Columna I
				   if (Convert::ToInt32(tb08->Text) || Convert::ToInt32(tb18->Text) || Convert::ToInt32(tb28->Text) || Convert::ToInt32(tb38->Text) || Convert::ToInt32(tb48->Text) || Convert::ToInt32(tb58->Text) || Convert::ToInt32(tb68->Text) || Convert::ToInt32(tb78->Text) != 0) {
					   lbGrafoI->Visible = true;
				   }

				   //Columna H
				   if (Convert::ToInt32(tb07->Text) || Convert::ToInt32(tb17->Text) || Convert::ToInt32(tb27->Text) || Convert::ToInt32(tb37->Text) || Convert::ToInt32(tb47->Text) || Convert::ToInt32(tb57->Text) || Convert::ToInt32(tb67->Text) != 0) {
					   lbGrafoH->Visible = true;
				   }

				   //Columna G
				   if (Convert::ToInt32(tb06->Text) || Convert::ToInt32(tb16->Text) || Convert::ToInt32(tb26->Text) || Convert::ToInt32(tb36->Text) || Convert::ToInt32(tb46->Text) || Convert::ToInt32(tb56->Text) != 0) {
					   lbGrafoG->Visible = true;
				   }

				   //Columna F
				   if (Convert::ToInt32(tb05->Text) || Convert::ToInt32(tb15->Text) || Convert::ToInt32(tb25->Text) || Convert::ToInt32(tb35->Text) || Convert::ToInt32(tb45->Text) != 0) {
					   lbGrafoF->Visible = true;
				   }

				   //Columna E
				   if (Convert::ToInt32(tb04->Text) || Convert::ToInt32(tb14->Text) || Convert::ToInt32(tb24->Text) || Convert::ToInt32(tb34->Text) != 0) {
					   lbGrafoE->Visible = true;
				   }

				   //Columna D
				   if (Convert::ToInt32(tb03->Text) || Convert::ToInt32(tb13->Text) || Convert::ToInt32(tb23->Text) != 0) {
					   lbGrafoD->Visible = true;
				   }

				   //Columna C
				   if (Convert::ToInt32(tb02->Text) || Convert::ToInt32(tb12->Text) != 0) {
					   lbGrafoC->Visible = true;
				   }

				   //Columna B
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   lbGrafoB->Visible = true;
				   }
				   break;

			   }
		   }
		   void Dibujar(int n) {
			   switch (n)
			   {
			   case 5:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(5);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Left, lbGrafoA->Top, lbGrafoC->Left, lbGrafoC->Top);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Left, lbGrafoA->Top, lbGrafoD->Left, lbGrafoD->Top);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Left, lbGrafoA->Top, lbGrafoE->Left, lbGrafoE->Top);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Left, lbGrafoB->Top, lbGrafoC->Left, lbGrafoC->Top);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Left, lbGrafoB->Top, lbGrafoD->Left, lbGrafoD->Top);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Left, lbGrafoB->Top, lbGrafoE->Left, lbGrafoE->Top);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Left, lbGrafoC->Top, lbGrafoD->Left, lbGrafoD->Top);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Left, lbGrafoC->Top, lbGrafoE->Left, lbGrafoE->Top);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Left, lbGrafoD->Top, lbGrafoE->Left, lbGrafoE->Top);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(5);
				   break;

			   case 6:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(6);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(6);
				   break;

			   case 7:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(7);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(7);
				   break;

			   case 8:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(8);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(8);
				   break;

			   case 9:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(9);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);

				   //HI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(9);
				   break;

			   case 10:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(10);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(10);
				   break;

			   case 11:
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(11);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);
				   //*-----      VAMOS DE A --  K k=10
				   //AK
				   if (Convert::ToInt32(tb010->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);


				   //BK------------------------------------
				   if (Convert::ToInt32(tb0110->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //CK ---------------------------------------------------------------
				   if (Convert::ToInt32(tb210->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //DK  -----------------------------------------////////////////////////////
				   if (Convert::ToInt32(tb310->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //EK-----------------------------------//////////////
				   if (Convert::ToInt32(tb410->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FK --------------//////////////////////////
				   if (Convert::ToInt32(tb510->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GK ---------------///////// 
				   if (Convert::ToInt32(tb610->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //HK      ---------------------    ///////////////////
				   if (Convert::ToInt32(tb710->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //IK  --------///////////////////////
				   if (Convert::ToInt32(tb810->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //JK  --------///////////////////////
				   if (Convert::ToInt32(tb910->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);


				   break;


			   case 12://----#######################################################
				   //     ENTONCES POR LO TANTO 
				   //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(12);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //AK
				   if (Convert::ToInt32(tb010->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);
				   //*-----      VAMOS DE A --  L   L =11
				   //AL
				   if (Convert::ToInt32(tb011->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);


				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);


				   //BK------------------------------------
				   if (Convert::ToInt32(tb0110->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //*-----      VAMOS DE B =1--  L   L =11
				   //BL

				   if (Convert::ToInt32(tb0111->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //CK ---------------------------------------------------------------
				   if (Convert::ToInt32(tb210->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //*-----      VAMOS DE C=2 --  L   L =11
				   //CL
				   if (Convert::ToInt32(tb211->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //DK  -----------------------------------------////////////////////////////
				   if (Convert::ToInt32(tb310->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);
				   //DL -----------------  D=3     L=11
				   if (Convert::ToInt32(tb311->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);



				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EK-----------------------------------//////////////
				   if (Convert::ToInt32(tb410->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //EL -----------------  E=4     L=11
				   if (Convert::ToInt32(tb411->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //FK --------------//////////////////////////
				   if (Convert::ToInt32(tb510->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //FL -----------------  F=5     L=11 /////////
				   if (Convert::ToInt32(tb511->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GK ---------------///////// 
				   if (Convert::ToInt32(tb610->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(11);

				   //GL -----------------  G=6    L=11 /////////
				   if (Convert::ToInt32(tb611->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //HK      ---------------------    ///////////////////
				   if (Convert::ToInt32(tb710->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //HL -----------------  H=7     L=11 /////////
				   if (Convert::ToInt32(tb711->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //IK  --------///////////////////////
				   if (Convert::ToInt32(tb810->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //IL -----------------  I=8     L=11 /////////
				   if (Convert::ToInt32(tb811->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //JK  --------///////////////////////
				   if (Convert::ToInt32(tb910->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);
				   //JL  --------      J=9     ---  L=11
				   if (Convert::ToInt32(tb911->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   // KL    -----    K=10 ///////   L=11
				   if (Convert::ToInt32(tb1011->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(12);

				   //*******************************************************  TERMINE CASE 12
				   break;

			   case 13://----#######################################################
			  //     ENTONCES POR LO TANTO 
			  //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(13);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //AK
				   if (Convert::ToInt32(tb010->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);
				   //*-----      VAMOS DE A --  L   L =11
				   //AL
				   if (Convert::ToInt32(tb011->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);
				   //AM            A=0   M= 12
				   if (Convert::ToInt32(tb012->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);




				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);


				   //BK------------------------------------
				   if (Convert::ToInt32(tb0110->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //*-----      VAMOS DE B =1--  L   L =11
				   //BL

				   if (Convert::ToInt32(tb0111->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //BM            B=1  M= 12   **************
				   if (Convert::ToInt32(tb0112->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CK ---------------------------------------------------------------
				   if (Convert::ToInt32(tb210->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //*-----      VAMOS DE C=2 --  L   L =11
				   //CL
				   if (Convert::ToInt32(tb211->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //CM            C=2   M= 12       ****************
				   if (Convert::ToInt32(tb212->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DK  -----------------------------------------////////////////////////////
				   if (Convert::ToInt32(tb310->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);
				   //DL -----------------  D=3     L=11
				   if (Convert::ToInt32(tb311->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //DM -----------------  D=3     M=12
				   if (Convert::ToInt32(tb312->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);



				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EK-----------------------------------//////////////
				   if (Convert::ToInt32(tb410->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EL -----------------  E=4     L=11
				   if (Convert::ToInt32(tb411->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //EM -----------------  E=4     M=12
				   if (Convert::ToInt32(tb412->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FK --------------//////////////////////////
				   if (Convert::ToInt32(tb510->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FL -----------------  F=5     L=11 /////////
				   if (Convert::ToInt32(tb511->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //FM -----------------  F=5     M=12 /////////
				   if (Convert::ToInt32(tb512->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GK ---------------///////// 
				   if (Convert::ToInt32(tb610->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GL -----------------  G=6    L=11 /////////
				   if (Convert::ToInt32(tb611->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //GM -----------------  G=6    L=12 /////////
				   if (Convert::ToInt32(tb612->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //HK      ---------------------    ///////////////////
				   if (Convert::ToInt32(tb710->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //HL -----------------  H=7     L=11 /////////
				   if (Convert::ToInt32(tb711->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //HM -----------------  H=7     M=12 /////////
				   if (Convert::ToInt32(tb712->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //IK  --------///////////////////////
				   if (Convert::ToInt32(tb810->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //IL -----------------  I=8     L=11 /////////
				   if (Convert::ToInt32(tb811->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //IM -----------------  I=8     M=12 /////////
				   if (Convert::ToInt32(tb812->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //JK  --------///////////////////////
				   if (Convert::ToInt32(tb910->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);
				   //JL  --------      J=9     ---  L=11
				   if (Convert::ToInt32(tb911->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   //JM  --------      J=9     ---  M=12
				   if (Convert::ToInt32(tb912->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);


				   // KL    -----    K=10 ///////   L=11
				   if (Convert::ToInt32(tb1011->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   // KM    -----    K=10 ///////   M=12
				   if (Convert::ToInt32(tb1012->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);

				   // LM    -----    L=11 ///////   M=12
				   if (Convert::ToInt32(tb1112->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(13);
				   //*******************************************************  TERMINE CASE 12
				   break;


			   case 14://----********************************************

		 //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(14);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AK
				   if (Convert::ToInt32(tb010->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);
				   //*-----      VAMOS DE A --  L   L =11
				   //AL
				   if (Convert::ToInt32(tb011->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);
				   //AM            A=0   M= 12
				   if (Convert::ToInt32(tb012->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //AN            A=0   N= 13   ////////////
				   if (Convert::ToInt32(tb013->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);




				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);


				   //BK------------------------------------
				   if (Convert::ToInt32(tb0110->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //*-----      VAMOS DE B =1--  L   L =11
				   //BL

				   if (Convert::ToInt32(tb0111->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BM            B=1  M= 12   **************
				   if (Convert::ToInt32(tb0112->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //BN           B=1  N= 13   **************
				   if (Convert::ToInt32(tb0113->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CK ---------------------------------------------------------------
				   if (Convert::ToInt32(tb210->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //*-----      VAMOS DE C=2 --  L   L =11
				   //CL
				   if (Convert::ToInt32(tb211->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CM            C=2   M= 12       ****************
				   if (Convert::ToInt32(tb212->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //CN           C=2   N= 13       ****************
				   if (Convert::ToInt32(tb213->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DK  -----------------------------------------////////////////////////////
				   if (Convert::ToInt32(tb310->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);
				   //DL -----------------  D=3     L=11
				   if (Convert::ToInt32(tb311->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DM -----------------  D=3     M=12
				   if (Convert::ToInt32(tb312->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //DN -----------------  D=3     N=13
				   if (Convert::ToInt32(tb313->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);



				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EK-----------------------------------//////////////
				   if (Convert::ToInt32(tb410->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EL -----------------  E=4     L=11
				   if (Convert::ToInt32(tb411->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EM -----------------  E=4     M=12
				   if (Convert::ToInt32(tb412->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //EN -----------------  E=4     N=13
				   if (Convert::ToInt32(tb413->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FK --------------//////////////////////////
				   if (Convert::ToInt32(tb510->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FL -----------------  F=5     L=11 /////////
				   if (Convert::ToInt32(tb511->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FM -----------------  F=5     M=12 /////////
				   if (Convert::ToInt32(tb512->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //FN -----------------  F=5     N=13 /////////***********
				   if (Convert::ToInt32(tb513->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GK ---------------///////// 
				   if (Convert::ToInt32(tb610->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GL -----------------  G=6    L=11 /////////
				   if (Convert::ToInt32(tb611->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GM -----------------  G=6    L=12 /////////
				   if (Convert::ToInt32(tb612->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //GN -----------------  G=6    N=13 /////////
				   if (Convert::ToInt32(tb613->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);


				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //HK      ---------------------    ///////////////////
				   if (Convert::ToInt32(tb710->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //HL -----------------  H=7     L=11 /////////
				   if (Convert::ToInt32(tb711->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //HM -----------------  H=7     M=12 /////////
				   if (Convert::ToInt32(tb712->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //HN -----------------  H=7     N=13 /////////
				   if (Convert::ToInt32(tb713->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //IK  --------///////////////////////
				   if (Convert::ToInt32(tb810->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //IL -----------------  I=8     L=11 /////////
				   if (Convert::ToInt32(tb811->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //IM -----------------  I=8     M=12 /////////
				   if (Convert::ToInt32(tb812->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //IN -----------------  I=8     N=13 /////////
				   if (Convert::ToInt32(tb813->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //JK  --------///////////////////////
				   if (Convert::ToInt32(tb910->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);
				   //JL  --------      J=9     ---  L=11
				   if (Convert::ToInt32(tb911->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //JM  --------      J=9     ---  M=12
				   if (Convert::ToInt32(tb912->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   //JN  --------      J=9     ---  N=13
				   if (Convert::ToInt32(tb913->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);


				   // KL    -----    K=10 ///////   L=11
				   if (Convert::ToInt32(tb1011->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   // KM    -----    K=10 ///////   M=12
				   if (Convert::ToInt32(tb1012->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   // KN   -----    K=10    N=13  
				   if (Convert::ToInt32(tb1013->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   // LM    -----    L=11 ///////   M=12
				   if (Convert::ToInt32(tb1112->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   // LN    -----    L=11	   N=13
				   if (Convert::ToInt32(tb1113->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);

				   // MN    -----    M=12	   N=13
				   if (Convert::ToInt32(tb1213->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoM->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoM->Visible = true;
				   }
				   else
					   ComprobarDespinte(14);
				   //*******************************************************  TERMINE CASE 13
				   break;


			   case 15://----********************************************

				  //AB//
				   if (Convert::ToInt32(tb01->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoB->Location);
					   lbGrafoB->Visible = true;//columna dif de 0
					   lbGrafoA->Visible = true;// fila dif de 0
				   }
				   else
					   ComprobarDespinte(15);

				   //AC
				   if (Convert::ToInt32(tb02->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AD
				   if (Convert::ToInt32(tb03->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AE
				   if (Convert::ToInt32(tb04->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AF
				   if (Convert::ToInt32(tb05->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AG
				   if (Convert::ToInt32(tb06->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AH
				   if (Convert::ToInt32(tb07->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AI
				   if (Convert::ToInt32(tb08->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AJ
				   if (Convert::ToInt32(tb09->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AK
				   if (Convert::ToInt32(tb010->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);
				   //*-----      VAMOS DE A --  L   L =11
				   //AL
				   if (Convert::ToInt32(tb011->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);
				   //AM            A=0   M= 12
				   if (Convert::ToInt32(tb012->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AN            A=0   N= 13   ////////////
				   if (Convert::ToInt32(tb013->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //AO           A=0   O=14   ////////////
				   if (Convert::ToInt32(tb014->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoA->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoA->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BC
				   if (Convert::ToInt32(tb12->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoC->Location);
					   lbGrafoC->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BD
				   if (Convert::ToInt32(tb13->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BE
				   if (Convert::ToInt32(tb14->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BF
				   if (Convert::ToInt32(tb15->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BG
				   if (Convert::ToInt32(tb16->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BH
				   if (Convert::ToInt32(tb17->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BI
				   if (Convert::ToInt32(tb18->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BJ
				   if (Convert::ToInt32(tb19->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);


				   //BK------------------------------------
				   if (Convert::ToInt32(tb0110->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //*-----      VAMOS DE B =1--  L   L =11
				   //BL

				   if (Convert::ToInt32(tb0111->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BM            B=1  M= 12   **************
				   if (Convert::ToInt32(tb0112->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BN           B=1  N= 13   **************
				   if (Convert::ToInt32(tb0113->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //BO           B=1  O= 14   **************
				   if (Convert::ToInt32(tb0114->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoB->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoB->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CD
				   if (Convert::ToInt32(tb23->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoD->Location);
					   lbGrafoD->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CE
				   if (Convert::ToInt32(tb24->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CF
				   if (Convert::ToInt32(tb25->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CG
				   if (Convert::ToInt32(tb26->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CH
				   if (Convert::ToInt32(tb27->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CI
				   if (Convert::ToInt32(tb28->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CJ
				   if (Convert::ToInt32(tb29->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CK ---------------------------------------------------------------
				   if (Convert::ToInt32(tb210->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //*-----      VAMOS DE C=2 --  L   L =11
				   //CL
				   if (Convert::ToInt32(tb211->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CM            C=2   M= 12       ****************
				   if (Convert::ToInt32(tb212->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CN           C=2   N= 13       ****************
				   if (Convert::ToInt32(tb213->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //CO           C=2   O=14       ****************
				   if (Convert::ToInt32(tb214->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoC->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoC->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DE
				   if (Convert::ToInt32(tb34->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoE->Location);
					   lbGrafoE->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DF
				   if (Convert::ToInt32(tb35->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DG
				   if (Convert::ToInt32(tb36->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DH
				   if (Convert::ToInt32(tb37->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DI
				   if (Convert::ToInt32(tb38->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DJ
				   if (Convert::ToInt32(tb39->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DK  -----------------------------------------////////////////////////////
				   if (Convert::ToInt32(tb310->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);
				   //DL -----------------  D=3     L=11
				   if (Convert::ToInt32(tb311->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DM -----------------  D=3     M=12
				   if (Convert::ToInt32(tb312->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DN -----------------  D=3     N=13
				   if (Convert::ToInt32(tb313->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //DO -----------------  D=3     O=14
				   if (Convert::ToInt32(tb314->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoD->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoD->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EF
				   if (Convert::ToInt32(tb45->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoF->Location);
					   lbGrafoF->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EG
				   if (Convert::ToInt32(tb46->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EH
				   if (Convert::ToInt32(tb47->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EI
				   if (Convert::ToInt32(tb48->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EJ
				   if (Convert::ToInt32(tb49->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EK-----------------------------------//////////////
				   if (Convert::ToInt32(tb410->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EL -----------------  E=4     L=11
				   if (Convert::ToInt32(tb411->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EM -----------------  E=4     M=12
				   if (Convert::ToInt32(tb412->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EN -----------------  E=4     N=13
				   if (Convert::ToInt32(tb413->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //EO -----------------  E=4     O=14
				   if (Convert::ToInt32(tb414->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoE->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoE->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FG
				   if (Convert::ToInt32(tb56->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoG->Location);
					   lbGrafoG->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FH
				   if (Convert::ToInt32(tb57->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FI
				   if (Convert::ToInt32(tb58->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FJ
				   if (Convert::ToInt32(tb59->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FK --------------//////////////////////////
				   if (Convert::ToInt32(tb510->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FL -----------------  F=5     L=11 /////////
				   if (Convert::ToInt32(tb511->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FM -----------------  F=5     M=12 /////////
				   if (Convert::ToInt32(tb512->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FN -----------------  F=5     N=13 /////////***********
				   if (Convert::ToInt32(tb513->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //FO -----------------  F=5     O=14 /////////***********
				   if (Convert::ToInt32(tb514->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoF->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoF->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GH
				   if (Convert::ToInt32(tb67->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoH->Location);
					   lbGrafoH->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GI
				   if (Convert::ToInt32(tb68->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GJ
				   if (Convert::ToInt32(tb69->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GK ---------------///////// 
				   if (Convert::ToInt32(tb610->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GL -----------------  G=6    L=11 /////////
				   if (Convert::ToInt32(tb611->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GM -----------------  G=6    L=12 /////////
				   if (Convert::ToInt32(tb612->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GN -----------------  G=6    N=13 /////////
				   if (Convert::ToInt32(tb613->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //GO -----------------  G=6    O=14 /////////
				   if (Convert::ToInt32(tb614->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoG->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoG->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HI
				   if (Convert::ToInt32(tb78->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoI->Location);
					   lbGrafoI->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HJ
				   if (Convert::ToInt32(tb79->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HK      ---------------------    ///////////////////
				   if (Convert::ToInt32(tb710->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HL -----------------  H=7     L=11 /////////
				   if (Convert::ToInt32(tb711->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HM -----------------  H=7     M=12 /////////
				   if (Convert::ToInt32(tb712->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HN -----------------  H=7     N=13 /////////
				   if (Convert::ToInt32(tb713->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //HO -----------------  H=7     O=14 /////////
				   if (Convert::ToInt32(tb714->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoH->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoH->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IJ
				   if (Convert::ToInt32(tb89->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoJ->Location);
					   lbGrafoJ->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IK  --------///////////////////////
				   if (Convert::ToInt32(tb810->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IL -----------------  I=8     L=11 /////////
				   if (Convert::ToInt32(tb811->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IM -----------------  I=8     M=12 /////////
				   if (Convert::ToInt32(tb812->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IN -----------------  I=8     N=13 /////////
				   if (Convert::ToInt32(tb813->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //IO -----------------  I=8      O= 14 /////////
				   if (Convert::ToInt32(tb814->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoI->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoI->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);


				   //JK  --------///////////////////////
				   if (Convert::ToInt32(tb910->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoK->Location);
					   lbGrafoK->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);
				   //JL  --------      J=9     ---  L=11
				   if (Convert::ToInt32(tb911->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //JM  --------      J=9     ---  M=12
				   if (Convert::ToInt32(tb912->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //JN  --------      J=9     ---  N=13
				   if (Convert::ToInt32(tb913->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   //JO  --------      J=9     ---  O=14
				   if (Convert::ToInt32(tb914->Text) != 0) {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoJ->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoJ->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // KL    -----    K=10 ///////   L=11
				   if (Convert::ToInt32(tb1011->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoL->Location);
					   lbGrafoL->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // KM    -----    K=10 ///////   M=12
				   if (Convert::ToInt32(tb1012->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // KN   -----    K=10    N=13  
				   if (Convert::ToInt32(tb1013->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // KO   -----    K=10    O=14 ********************
				   if (Convert::ToInt32(tb1014->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoK->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoK->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // LM    -----    L=11 ///////   M=12
				   if (Convert::ToInt32(tb1112->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoM->Location);
					   lbGrafoM->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // LN    -----    L=11	   N=13
				   if (Convert::ToInt32(tb1113->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // LO    -----    L=11	   O=14
				   if (Convert::ToInt32(tb1114->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoL->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoL->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // MN    -----    M=12	   N=13
				   if (Convert::ToInt32(tb1213->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoM->Location, lbGrafoN->Location);
					   lbGrafoN->Visible = true;
					   lbGrafoM->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // MO    -----    M=12	   O=14
				   if (Convert::ToInt32(tb1214->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoM->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoM->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);

				   // NO    -----    N=13	   O=14
				   if (Convert::ToInt32(tb1314->Text) != 0)
				   {
					   Pen^ p = gcnew Pen(Color::Black, 3);
					   buffer->Graphics->DrawLine(p, lbGrafoN->Location, lbGrafoO->Location);
					   lbGrafoO->Visible = true;
					   lbGrafoN->Visible = true;
				   }
				   else
					   ComprobarDespinte(15);
				   //*******************************************************  TERMINE CASE 13
				   break;
				   //------- VAMOS POR EL 15
			   }
		   }
		   void Limpiar(int n)
		   {
			   switch (n)
			   {
			   case 5:
				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;

				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();

				   tb23->Clear();
				   tb24->Clear();

				   tb34->Clear();

				   ; break;
			   case 6:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();

				   tb34->Clear();
				   tb35->Clear();

				   tb45->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   ; break;
			   case 7:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();

				   tb45->Clear();
				   tb46->Clear();

				   tb56->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;

				   ; break;
			   case 8:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();

				   tb56->Clear();
				   tb57->Clear();

				   tb67->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   ; break;
			   case 9:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();

				   tb67->Clear();
				   tb68->Clear();

				   tb78->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   ; break;
			   case 10:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();

				   tb78->Clear();
				   tb79->Clear();

				   tb89->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   ; break;

			   case 11:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();
				   tb010->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();
				   tb0110->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();
				   tb210->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();
				   tb310->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();
				   tb410->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();
				   tb510->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();
				   tb610->Clear();

				   tb78->Clear();
				   tb79->Clear();
				   tb710->Clear();

				   tb89->Clear();
				   tb810->Clear();

				   tb910->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbKcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   lbKfila->Visible = false;
				   tb00->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   tb100->Visible = false;
				   tb101->Visible = false;
				   tb102->Visible = false;
				   tb103->Visible = false;
				   tb104->Visible = false;
				   tb105->Visible = false;
				   tb106->Visible = false;
				   tb107->Visible = false;
				   tb108->Visible = false;
				   tb109->Visible = false;
				   tb1010->Visible = false;
				   tb010->Visible = false;
				   tb0110->Visible = false;
				   tb210->Visible = false;
				   tb310->Visible = false;
				   tb410->Visible = false;
				   tb510->Visible = false;
				   tb610->Visible = false;
				   tb710->Visible = false;
				   tb810->Visible = false;
				   tb910->Visible = false;
				   ; break;

			   case 12:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();
				   tb010->Clear();
				   tb011->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();
				   tb0110->Clear();
				   tb0111->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();
				   tb210->Clear();
				   tb211->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();
				   tb310->Clear();
				   tb311->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();
				   tb410->Clear();
				   tb411->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();
				   tb510->Clear();
				   tb511->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();
				   tb610->Clear();
				   tb611->Clear();

				   tb78->Clear();
				   tb79->Clear();
				   tb710->Clear();
				   tb711->Clear();

				   tb89->Clear();
				   tb810->Clear();
				   tb811->Clear();

				   tb910->Clear();
				   tb911->Clear();

				   tb1011->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbKcolumna->Visible = false;
				   lbLcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   lbKfila->Visible = false;
				   lbLfila->Visible = false;
				   tb00->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   tb100->Visible = false;
				   tb101->Visible = false;
				   tb102->Visible = false;
				   tb103->Visible = false;
				   tb104->Visible = false;
				   tb105->Visible = false;
				   tb106->Visible = false;
				   tb107->Visible = false;
				   tb108->Visible = false;
				   tb109->Visible = false;
				   tb1010->Visible = false;
				   tb010->Visible = false;
				   tb0110->Visible = false;
				   tb210->Visible = false;
				   tb310->Visible = false;
				   tb410->Visible = false;
				   tb510->Visible = false;
				   tb610->Visible = false;
				   tb710->Visible = false;
				   tb810->Visible = false;
				   tb910->Visible = false;
				   tb110->Visible = false;
				   tb111->Visible = false;
				   tb112->Visible = false;
				   tb113->Visible = false;
				   tb114->Visible = false;
				   tb115->Visible = false;
				   tb116->Visible = false;
				   tb117->Visible = false;
				   tb118->Visible = false;
				   tb119->Visible = false;
				   tb1110->Visible = false;
				   tb1111->Visible = false;
				   tb011->Visible = false;
				   tb0111->Visible = false;
				   tb211->Visible = false;
				   tb311->Visible = false;
				   tb411->Visible = false;
				   tb511->Visible = false;
				   tb611->Visible = false;
				   tb711->Visible = false;
				   tb811->Visible = false;
				   tb911->Visible = false;
				   tb1011->Visible = false;
				   ; break;
			   case 13:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();
				   tb010->Clear();
				   tb011->Clear();
				   tb012->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();
				   tb0110->Clear();
				   tb0111->Clear();
				   tb0112->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();
				   tb210->Clear();
				   tb211->Clear();
				   tb212->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();
				   tb310->Clear();
				   tb311->Clear();
				   tb312->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();
				   tb410->Clear();
				   tb411->Clear();
				   tb412->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();
				   tb510->Clear();
				   tb511->Clear();
				   tb512->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();
				   tb610->Clear();
				   tb611->Clear();
				   tb612->Clear();

				   tb78->Clear();
				   tb79->Clear();
				   tb710->Clear();
				   tb711->Clear();
				   tb712->Clear();

				   tb89->Clear();
				   tb810->Clear();
				   tb811->Clear();
				   tb812->Clear();

				   tb910->Clear();
				   tb911->Clear();
				   tb912->Clear();

				   tb1011->Clear();
				   tb1012->Clear();

				   tb1112->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbKcolumna->Visible = false;
				   lbLcolumna->Visible = false;
				   lbMcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   lbKfila->Visible = false;
				   lbLfila->Visible = false;
				   lbMfila->Visible = false;
				   tb00->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   tb100->Visible = false;
				   tb101->Visible = false;
				   tb102->Visible = false;
				   tb103->Visible = false;
				   tb104->Visible = false;
				   tb105->Visible = false;
				   tb106->Visible = false;
				   tb107->Visible = false;
				   tb108->Visible = false;
				   tb109->Visible = false;
				   tb1010->Visible = false;
				   tb010->Visible = false;
				   tb0110->Visible = false;
				   tb210->Visible = false;
				   tb310->Visible = false;
				   tb410->Visible = false;
				   tb510->Visible = false;
				   tb610->Visible = false;
				   tb710->Visible = false;
				   tb810->Visible = false;
				   tb910->Visible = false;
				   tb110->Visible = false;
				   tb111->Visible = false;
				   tb112->Visible = false;
				   tb113->Visible = false;
				   tb114->Visible = false;
				   tb115->Visible = false;
				   tb116->Visible = false;
				   tb117->Visible = false;
				   tb118->Visible = false;
				   tb119->Visible = false;
				   tb1110->Visible = false;
				   tb1111->Visible = false;
				   tb011->Visible = false;
				   tb0111->Visible = false;
				   tb211->Visible = false;
				   tb311->Visible = false;
				   tb411->Visible = false;
				   tb511->Visible = false;
				   tb611->Visible = false;
				   tb711->Visible = false;
				   tb811->Visible = false;
				   tb911->Visible = false;
				   tb1011->Visible = false;
				   tb120->Visible = false;
				   tb121->Visible = false;
				   tb122->Visible = false;
				   tb123->Visible = false;
				   tb124->Visible = false;
				   tb125->Visible = false;
				   tb126->Visible = false;
				   tb127->Visible = false;
				   tb128->Visible = false;
				   tb129->Visible = false;
				   tb1210->Visible = false;
				   tb1211->Visible = false;
				   tb1212->Visible = false;
				   tb012->Visible = false;
				   tb0112->Visible = false;
				   tb212->Visible = false;
				   tb312->Visible = false;
				   tb412->Visible = false;
				   tb512->Visible = false;
				   tb612->Visible = false;
				   tb712->Visible = false;
				   tb812->Visible = false;
				   tb912->Visible = false;
				   tb1012->Visible = false;
				   tb1112->Visible = false;
				   ; break;
			   case 14:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();
				   tb010->Clear();
				   tb011->Clear();
				   tb012->Clear();
				   tb013->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();
				   tb0110->Clear();
				   tb0111->Clear();
				   tb0112->Clear();
				   tb0113->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();
				   tb210->Clear();
				   tb211->Clear();
				   tb212->Clear();
				   tb213->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();
				   tb310->Clear();
				   tb311->Clear();
				   tb312->Clear();
				   tb313->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();
				   tb410->Clear();
				   tb411->Clear();
				   tb412->Clear();
				   tb413->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();
				   tb510->Clear();
				   tb511->Clear();
				   tb512->Clear();
				   tb513->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();
				   tb610->Clear();
				   tb611->Clear();
				   tb612->Clear();
				   tb613->Clear();

				   tb78->Clear();
				   tb79->Clear();
				   tb710->Clear();
				   tb711->Clear();
				   tb712->Clear();
				   tb713->Clear();

				   tb89->Clear();
				   tb810->Clear();
				   tb811->Clear();
				   tb812->Clear();
				   tb813->Clear();

				   tb910->Clear();
				   tb911->Clear();
				   tb912->Clear();
				   tb913->Clear();

				   tb1011->Clear();
				   tb1012->Clear();
				   tb1013->Clear();

				   tb1112->Clear();
				   tb1113->Clear();

				   tb1213->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbKcolumna->Visible = false;
				   lbLcolumna->Visible = false;
				   lbMcolumna->Visible = false;
				   lbNcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   lbKfila->Visible = false;
				   lbLfila->Visible = false;
				   lbMfila->Visible = false;
				   lbNfila->Visible = false;
				   tb00->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   tb100->Visible = false;
				   tb101->Visible = false;
				   tb102->Visible = false;
				   tb103->Visible = false;
				   tb104->Visible = false;
				   tb105->Visible = false;
				   tb106->Visible = false;
				   tb107->Visible = false;
				   tb108->Visible = false;
				   tb109->Visible = false;
				   tb1010->Visible = false;
				   tb010->Visible = false;
				   tb0110->Visible = false;
				   tb210->Visible = false;
				   tb310->Visible = false;
				   tb410->Visible = false;
				   tb510->Visible = false;
				   tb610->Visible = false;
				   tb710->Visible = false;
				   tb810->Visible = false;
				   tb910->Visible = false;
				   tb110->Visible = false;
				   tb111->Visible = false;
				   tb112->Visible = false;
				   tb113->Visible = false;
				   tb114->Visible = false;
				   tb115->Visible = false;
				   tb116->Visible = false;
				   tb117->Visible = false;
				   tb118->Visible = false;
				   tb119->Visible = false;
				   tb1110->Visible = false;
				   tb1111->Visible = false;
				   tb011->Visible = false;
				   tb0111->Visible = false;
				   tb211->Visible = false;
				   tb311->Visible = false;
				   tb411->Visible = false;
				   tb511->Visible = false;
				   tb611->Visible = false;
				   tb711->Visible = false;
				   tb811->Visible = false;
				   tb911->Visible = false;
				   tb1011->Visible = false;
				   tb120->Visible = false;
				   tb121->Visible = false;
				   tb122->Visible = false;
				   tb123->Visible = false;
				   tb124->Visible = false;
				   tb125->Visible = false;
				   tb126->Visible = false;
				   tb127->Visible = false;
				   tb128->Visible = false;
				   tb129->Visible = false;
				   tb1210->Visible = false;
				   tb1211->Visible = false;
				   tb1212->Visible = false;
				   tb012->Visible = false;
				   tb0112->Visible = false;
				   tb212->Visible = false;
				   tb312->Visible = false;
				   tb412->Visible = false;
				   tb512->Visible = false;
				   tb612->Visible = false;
				   tb712->Visible = false;
				   tb812->Visible = false;
				   tb912->Visible = false;
				   tb1012->Visible = false;
				   tb1112->Visible = false;
				   tb130->Visible = false;
				   tb131->Visible = false;
				   tb132->Visible = false;
				   tb133->Visible = false;
				   tb134->Visible = false;
				   tb135->Visible = false;
				   tb136->Visible = false;
				   tb137->Visible = false;
				   tb138->Visible = false;
				   tb139->Visible = false;
				   tb1310->Visible = false;
				   tb1311->Visible = false;
				   tb1312->Visible = false;
				   tb1313->Visible = false;
				   tb013->Visible = false;
				   tb0113->Visible = false;
				   tb213->Visible = false;
				   tb313->Visible = false;
				   tb413->Visible = false;
				   tb513->Visible = false;
				   tb613->Visible = false;
				   tb713->Visible = false;
				   tb813->Visible = false;
				   tb913->Visible = false;
				   tb1013->Visible = false;
				   tb1113->Visible = false;
				   tb1213->Visible = false;

				   ; break;
			   case 15:
				   tb01->Clear();
				   tb02->Clear();
				   tb03->Clear();
				   tb04->Clear();
				   tb05->Clear();
				   tb06->Clear();
				   tb07->Clear();
				   tb08->Clear();
				   tb09->Clear();
				   tb010->Clear();
				   tb011->Clear();
				   tb012->Clear();
				   tb013->Clear();
				   tb014->Clear();

				   tb12->Clear();
				   tb13->Clear();
				   tb14->Clear();
				   tb15->Clear();
				   tb16->Clear();
				   tb17->Clear();
				   tb18->Clear();
				   tb19->Clear();
				   tb0110->Clear();
				   tb0111->Clear();
				   tb0112->Clear();
				   tb0113->Clear();
				   tb0114->Clear();

				   tb23->Clear();
				   tb24->Clear();
				   tb25->Clear();
				   tb26->Clear();
				   tb27->Clear();
				   tb28->Clear();
				   tb29->Clear();
				   tb210->Clear();
				   tb211->Clear();
				   tb212->Clear();
				   tb213->Clear();
				   tb214->Clear();

				   tb34->Clear();
				   tb35->Clear();
				   tb36->Clear();
				   tb37->Clear();
				   tb38->Clear();
				   tb39->Clear();
				   tb310->Clear();
				   tb311->Clear();
				   tb312->Clear();
				   tb313->Clear();
				   tb314->Clear();

				   tb45->Clear();
				   tb46->Clear();
				   tb47->Clear();
				   tb48->Clear();
				   tb49->Clear();
				   tb410->Clear();
				   tb411->Clear();
				   tb412->Clear();
				   tb413->Clear();
				   tb414->Clear();

				   tb56->Clear();
				   tb57->Clear();
				   tb58->Clear();
				   tb59->Clear();
				   tb510->Clear();
				   tb511->Clear();
				   tb512->Clear();
				   tb513->Clear();
				   tb514->Clear();

				   tb67->Clear();
				   tb68->Clear();
				   tb69->Clear();
				   tb610->Clear();
				   tb611->Clear();
				   tb612->Clear();
				   tb613->Clear();
				   tb614->Clear();

				   tb78->Clear();
				   tb79->Clear();
				   tb710->Clear();
				   tb711->Clear();
				   tb712->Clear();
				   tb713->Clear();
				   tb714->Clear();

				   tb89->Clear();
				   tb810->Clear();
				   tb811->Clear();
				   tb812->Clear();
				   tb813->Clear();
				   tb814->Clear();

				   tb910->Clear();
				   tb911->Clear();
				   tb912->Clear();
				   tb913->Clear();
				   tb914->Clear();

				   tb1011->Clear();
				   tb1012->Clear();
				   tb1013->Clear();
				   tb1014->Clear();

				   tb1112->Clear();
				   tb1113->Clear();
				   tb1114->Clear();

				   tb1213->Clear();
				   tb1214->Clear();

				   tb1314->Clear();

				   lbAcolumna->Visible = false;
				   lbBcolumna->Visible = false;
				   lbCcolumna->Visible = false;
				   lbDcolumna->Visible = false;
				   lbEcolumna->Visible = false;
				   lbFcolumna->Visible = false;
				   lbGcolumna->Visible = false;
				   lbHcolumna->Visible = false;
				   lbIcolumna->Visible = false;
				   lbJcolumna->Visible = false;
				   lbKcolumna->Visible = false;
				   lbLcolumna->Visible = false;
				   lbMcolumna->Visible = false;
				   lbNcolumna->Visible = false;
				   lbOcolumna->Visible = false;
				   lbAfila->Visible = false;
				   lbBfila->Visible = false;
				   lbCfila->Visible = false;
				   lbDfila->Visible = false;
				   lbEfila->Visible = false;
				   lbFfila->Visible = false;
				   lbGfila->Visible = false;
				   lbHfila->Visible = false;
				   lbIfila->Visible = false;
				   lbJfila->Visible = false;
				   lbKfila->Visible = false;
				   lbLfila->Visible = false;
				   lbMfila->Visible = false;
				   lbNfila->Visible = false;
				   lbOfila->Visible = false;
				   tb00->Visible = false;
				   tb00->Visible = false;
				   tb01->Visible = false;
				   tb02->Visible = false;
				   tb03->Visible = false;
				   tb04->Visible = false;
				   tb05->Visible = false;
				   tb06->Visible = false;
				   tb10->Visible = false;
				   tb11->Visible = false;
				   tb12->Visible = false;
				   tb13->Visible = false;
				   tb14->Visible = false;
				   tb15->Visible = false;
				   tb16->Visible = false;
				   tb20->Visible = false;
				   tb21->Visible = false;
				   tb22->Visible = false;
				   tb23->Visible = false;
				   tb24->Visible = false;
				   tb25->Visible = false;
				   tb26->Visible = false;
				   tb30->Visible = false;
				   tb31->Visible = false;
				   tb32->Visible = false;
				   tb33->Visible = false;
				   tb34->Visible = false;
				   tb35->Visible = false;
				   tb36->Visible = false;
				   tb40->Visible = false;
				   tb41->Visible = false;
				   tb42->Visible = false;
				   tb43->Visible = false;
				   tb44->Visible = false;
				   tb45->Visible = false;
				   tb46->Visible = false;
				   tb50->Visible = false;
				   tb51->Visible = false;
				   tb52->Visible = false;
				   tb53->Visible = false;
				   tb54->Visible = false;
				   tb55->Visible = false;
				   tb56->Visible = false;
				   tb60->Visible = false;
				   tb61->Visible = false;
				   tb62->Visible = false;
				   tb63->Visible = false;
				   tb64->Visible = false;
				   tb65->Visible = false;
				   tb66->Visible = false;
				   tb70->Visible = false;
				   tb71->Visible = false;
				   tb72->Visible = false;
				   tb73->Visible = false;
				   tb74->Visible = false;
				   tb75->Visible = false;
				   tb76->Visible = false;
				   tb77->Visible = false;
				   tb07->Visible = false;
				   tb17->Visible = false;
				   tb27->Visible = false;
				   tb37->Visible = false;
				   tb47->Visible = false;
				   tb57->Visible = false;
				   tb67->Visible = false;
				   tb80->Visible = false;
				   tb81->Visible = false;
				   tb82->Visible = false;
				   tb83->Visible = false;
				   tb84->Visible = false;
				   tb85->Visible = false;
				   tb86->Visible = false;
				   tb87->Visible = false;
				   tb88->Visible = false;
				   tb08->Visible = false;
				   tb18->Visible = false;
				   tb28->Visible = false;
				   tb38->Visible = false;
				   tb48->Visible = false;
				   tb58->Visible = false;
				   tb68->Visible = false;
				   tb78->Visible = false;
				   tb90->Visible = false;
				   tb91->Visible = false;
				   tb92->Visible = false;
				   tb93->Visible = false;
				   tb94->Visible = false;
				   tb95->Visible = false;
				   tb96->Visible = false;
				   tb97->Visible = false;
				   tb98->Visible = false;
				   tb99->Visible = false;
				   tb09->Visible = false;
				   tb19->Visible = false;
				   tb29->Visible = false;
				   tb39->Visible = false;
				   tb49->Visible = false;
				   tb59->Visible = false;
				   tb69->Visible = false;
				   tb79->Visible = false;
				   tb89->Visible = false;
				   tb100->Visible = false;
				   tb101->Visible = false;
				   tb102->Visible = false;
				   tb103->Visible = false;
				   tb104->Visible = false;
				   tb105->Visible = false;
				   tb106->Visible = false;
				   tb107->Visible = false;
				   tb108->Visible = false;
				   tb109->Visible = false;
				   tb1010->Visible = false;
				   tb010->Visible = false;
				   tb0110->Visible = false;
				   tb210->Visible = false;
				   tb310->Visible = false;
				   tb410->Visible = false;
				   tb510->Visible = false;
				   tb610->Visible = false;
				   tb710->Visible = false;
				   tb810->Visible = false;
				   tb910->Visible = false;
				   tb110->Visible = false;
				   tb111->Visible = false;
				   tb112->Visible = false;
				   tb113->Visible = false;
				   tb114->Visible = false;
				   tb115->Visible = false;
				   tb116->Visible = false;
				   tb117->Visible = false;
				   tb118->Visible = false;
				   tb119->Visible = false;
				   tb1110->Visible = false;
				   tb1111->Visible = false;
				   tb011->Visible = false;
				   tb0111->Visible = false;
				   tb211->Visible = false;
				   tb311->Visible = false;
				   tb411->Visible = false;
				   tb511->Visible = false;
				   tb611->Visible = false;
				   tb711->Visible = false;
				   tb811->Visible = false;
				   tb911->Visible = false;
				   tb1011->Visible = false;
				   tb120->Visible = false;
				   tb121->Visible = false;
				   tb122->Visible = false;
				   tb123->Visible = false;
				   tb124->Visible = false;
				   tb125->Visible = false;
				   tb126->Visible = false;
				   tb127->Visible = false;
				   tb128->Visible = false;
				   tb129->Visible = false;
				   tb1210->Visible = false;
				   tb1211->Visible = false;
				   tb1212->Visible = false;
				   tb012->Visible = false;
				   tb0112->Visible = false;
				   tb212->Visible = false;
				   tb312->Visible = false;
				   tb412->Visible = false;
				   tb512->Visible = false;
				   tb612->Visible = false;
				   tb712->Visible = false;
				   tb812->Visible = false;
				   tb912->Visible = false;
				   tb1012->Visible = false;
				   tb1112->Visible = false;
				   tb130->Visible = false;
				   tb131->Visible = false;
				   tb132->Visible = false;
				   tb133->Visible = false;
				   tb134->Visible = false;
				   tb135->Visible = false;
				   tb136->Visible = false;
				   tb137->Visible = false;
				   tb138->Visible = false;
				   tb139->Visible = false;
				   tb1310->Visible = false;
				   tb1311->Visible = false;
				   tb1312->Visible = false;
				   tb1313->Visible = false;
				   tb013->Visible = false;
				   tb0113->Visible = false;
				   tb213->Visible = false;
				   tb313->Visible = false;
				   tb413->Visible = false;
				   tb513->Visible = false;
				   tb613->Visible = false;
				   tb713->Visible = false;
				   tb813->Visible = false;
				   tb913->Visible = false;
				   tb1013->Visible = false;
				   tb1113->Visible = false;
				   tb1213->Visible = false;
				   tb140->Visible = false;
				   tb141->Visible = false;
				   tb142->Visible = false;
				   tb143->Visible = false;
				   tb144->Visible = false;
				   tb145->Visible = false;
				   tb146->Visible = false;
				   tb147->Visible = false;
				   tb148->Visible = false;
				   tb149->Visible = false;
				   tb1410->Visible = false;
				   tb1411->Visible = false;
				   tb1412->Visible = false;
				   tb1413->Visible = false;
				   tb1414->Visible = false;
				   tb014->Visible = false;
				   tb0114->Visible = false;
				   tb214->Visible = false;
				   tb314->Visible = false;
				   tb414->Visible = false;
				   tb514->Visible = false;
				   tb614->Visible = false;
				   tb714->Visible = false;
				   tb814->Visible = false;
				   tb914->Visible = false;
				   tb1014->Visible = false;
				   tb1114->Visible = false;
				   tb1214->Visible = false;
				   tb1314->Visible = false;
				   ; break;
			   }
		   }
		   void encenderCasilla(int n)
		   {
			   switch (n)
			   {
			   case 5:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;

				   tb34->Enabled = true;

				   ; break;
			   case 6:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;

				   tb45->Enabled = true;

				   ; break;
			   case 7:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;

				   tb56->Enabled = true;

				   ; break;
			   case 8:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;

				   tb67->Enabled = true;
				   ; break;
			   case 9:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;

				   tb78->Enabled = true;
				   ; break;
			   case 10:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;

				   tb89->Enabled = true;
				   ; break;

			   case 11:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;
				   tb010->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;
				   tb0110->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;
				   tb210->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;
				   tb310->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;
				   tb410->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;
				   tb510->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;
				   tb610->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;
				   tb710->Enabled = true;

				   tb89->Enabled = true;
				   tb810->Enabled = true;

				   tb910->Enabled = true;
				   ; break;

			   case 12:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;
				   tb010->Enabled = true;
				   tb011->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;
				   tb0110->Enabled = true;
				   tb0111->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;
				   tb210->Enabled = true;
				   tb211->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;
				   tb310->Enabled = true;
				   tb311->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;
				   tb410->Enabled = true;
				   tb411->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;
				   tb510->Enabled = true;
				   tb511->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;
				   tb610->Enabled = true;
				   tb611->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;
				   tb710->Enabled = true;
				   tb711->Enabled = true;

				   tb89->Enabled = true;
				   tb810->Enabled = true;
				   tb811->Enabled = true;

				   tb910->Enabled = true;
				   tb911->Enabled = true;

				   tb1011->Enabled = true;
				   ; break;
			   case 13:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;
				   tb010->Enabled = true;
				   tb011->Enabled = true;
				   tb012->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;
				   tb0110->Enabled = true;
				   tb0111->Enabled = true;
				   tb0112->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;
				   tb210->Enabled = true;
				   tb211->Enabled = true;
				   tb212->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;
				   tb310->Enabled = true;
				   tb311->Enabled = true;
				   tb312->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;
				   tb410->Enabled = true;
				   tb411->Enabled = true;
				   tb412->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;
				   tb510->Enabled = true;
				   tb511->Enabled = true;
				   tb512->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;
				   tb610->Enabled = true;
				   tb611->Enabled = true;
				   tb612->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;
				   tb710->Enabled = true;
				   tb711->Enabled = true;
				   tb712->Enabled = true;

				   tb89->Enabled = true;
				   tb810->Enabled = true;
				   tb811->Enabled = true;
				   tb812->Enabled = true;

				   tb910->Enabled = true;
				   tb911->Enabled = true;
				   tb912->Enabled = true;

				   tb1011->Enabled = true;
				   tb1012->Enabled = true;

				   tb1112->Enabled = true;
				   ; break;
			   case 14:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;
				   tb010->Enabled = true;
				   tb011->Enabled = true;
				   tb012->Enabled = true;
				   tb013->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;
				   tb0110->Enabled = true;
				   tb0111->Enabled = true;
				   tb0112->Enabled = true;
				   tb0113->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;
				   tb210->Enabled = true;
				   tb211->Enabled = true;
				   tb212->Enabled = true;
				   tb213->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;
				   tb310->Enabled = true;
				   tb311->Enabled = true;
				   tb312->Enabled = true;
				   tb313->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;
				   tb410->Enabled = true;
				   tb411->Enabled = true;
				   tb412->Enabled = true;
				   tb413->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;
				   tb510->Enabled = true;
				   tb511->Enabled = true;
				   tb512->Enabled = true;
				   tb513->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;
				   tb610->Enabled = true;
				   tb611->Enabled = true;
				   tb612->Enabled = true;
				   tb613->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;
				   tb710->Enabled = true;
				   tb711->Enabled = true;
				   tb712->Enabled = true;
				   tb713->Enabled = true;

				   tb89->Enabled = true;
				   tb810->Enabled = true;
				   tb811->Enabled = true;
				   tb812->Enabled = true;
				   tb813->Enabled = true;

				   tb910->Enabled = true;
				   tb911->Enabled = true;
				   tb912->Enabled = true;
				   tb913->Enabled = true;

				   tb1011->Enabled = true;
				   tb1012->Enabled = true;
				   tb1013->Enabled = true;

				   tb1112->Enabled = true;
				   tb1113->Enabled = true;

				   tb1213->Enabled = true;

				   ; break;
			   case 15:
				   tb01->Enabled = true;
				   tb02->Enabled = true;
				   tb03->Enabled = true;
				   tb04->Enabled = true;
				   tb05->Enabled = true;
				   tb06->Enabled = true;
				   tb07->Enabled = true;
				   tb08->Enabled = true;
				   tb09->Enabled = true;
				   tb010->Enabled = true;
				   tb011->Enabled = true;
				   tb012->Enabled = true;
				   tb013->Enabled = true;
				   tb014->Enabled = true;

				   tb12->Enabled = true;
				   tb13->Enabled = true;
				   tb14->Enabled = true;
				   tb15->Enabled = true;
				   tb16->Enabled = true;
				   tb17->Enabled = true;
				   tb18->Enabled = true;
				   tb19->Enabled = true;
				   tb0110->Enabled = true;
				   tb0111->Enabled = true;
				   tb0112->Enabled = true;
				   tb0113->Enabled = true;
				   tb0114->Enabled = true;

				   tb23->Enabled = true;
				   tb24->Enabled = true;
				   tb25->Enabled = true;
				   tb26->Enabled = true;
				   tb27->Enabled = true;
				   tb28->Enabled = true;
				   tb29->Enabled = true;
				   tb210->Enabled = true;
				   tb211->Enabled = true;
				   tb212->Enabled = true;
				   tb213->Enabled = true;
				   tb214->Enabled = true;

				   tb34->Enabled = true;
				   tb35->Enabled = true;
				   tb36->Enabled = true;
				   tb37->Enabled = true;
				   tb38->Enabled = true;
				   tb39->Enabled = true;
				   tb310->Enabled = true;
				   tb311->Enabled = true;
				   tb312->Enabled = true;
				   tb313->Enabled = true;
				   tb314->Enabled = true;

				   tb45->Enabled = true;
				   tb46->Enabled = true;
				   tb47->Enabled = true;
				   tb48->Enabled = true;
				   tb49->Enabled = true;
				   tb410->Enabled = true;
				   tb411->Enabled = true;
				   tb412->Enabled = true;
				   tb413->Enabled = true;
				   tb414->Enabled = true;

				   tb56->Enabled = true;
				   tb57->Enabled = true;
				   tb58->Enabled = true;
				   tb59->Enabled = true;
				   tb510->Enabled = true;
				   tb511->Enabled = true;
				   tb512->Enabled = true;
				   tb513->Enabled = true;
				   tb514->Enabled = true;

				   tb67->Enabled = true;
				   tb68->Enabled = true;
				   tb69->Enabled = true;
				   tb610->Enabled = true;
				   tb611->Enabled = true;
				   tb612->Enabled = true;
				   tb613->Enabled = true;
				   tb614->Enabled = true;

				   tb78->Enabled = true;
				   tb79->Enabled = true;
				   tb710->Enabled = true;
				   tb711->Enabled = true;
				   tb712->Enabled = true;
				   tb713->Enabled = true;
				   tb714->Enabled = true;

				   tb89->Enabled = true;
				   tb810->Enabled = true;
				   tb811->Enabled = true;
				   tb812->Enabled = true;
				   tb813->Enabled = true;
				   tb814->Enabled = true;

				   tb910->Enabled = true;
				   tb911->Enabled = true;
				   tb912->Enabled = true;
				   tb913->Enabled = true;
				   tb914->Enabled = true;

				   tb1011->Enabled = true;
				   tb1012->Enabled = true;
				   tb1013->Enabled = true;
				   tb1014->Enabled = true;

				   tb1112->Enabled = true;
				   tb1113->Enabled = true;
				   tb1114->Enabled = true;

				   tb1213->Enabled = true;
				   tb1214->Enabled = true;

				   tb1314->Enabled = true;
				   ; break;
			   }
		   }
		   void apagarCasilla(int n)
		   {
			   switch (n)
			   {
			   case 5:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;

				   tb34->Enabled = false;

				   ; break;
			   case 6:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;

				   tb45->Enabled = false;

				   ; break;
			   case 7:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;

				   tb56->Enabled = false;

				   ; break;
			   case 8:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;

				   tb67->Enabled = false;
				   ; break;
			   case 9:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;

				   tb78->Enabled = false;
				   ; break;
			   case 10:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;

				   tb89->Enabled = false;
				   ; break;

			   case 11:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;
				   tb010->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;
				   tb0110->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;
				   tb210->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;
				   tb310->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;
				   tb410->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;
				   tb510->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;
				   tb610->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;
				   tb710->Enabled = false;

				   tb89->Enabled = false;
				   tb810->Enabled = false;

				   tb910->Enabled = false;
				   ; break;

			   case 12:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;
				   tb010->Enabled = false;
				   tb011->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;
				   tb0110->Enabled = false;
				   tb0111->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;
				   tb210->Enabled = false;
				   tb211->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;
				   tb310->Enabled = false;
				   tb311->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;
				   tb410->Enabled = false;
				   tb411->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;
				   tb510->Enabled = false;
				   tb511->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;
				   tb610->Enabled = false;
				   tb611->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;
				   tb710->Enabled = false;
				   tb711->Enabled = false;

				   tb89->Enabled = false;
				   tb810->Enabled = false;
				   tb811->Enabled = false;

				   tb910->Enabled = false;
				   tb911->Enabled = false;

				   tb1011->Enabled = false;
				   ; break;
			   case 13:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;
				   tb010->Enabled = false;
				   tb011->Enabled = false;
				   tb012->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;
				   tb0110->Enabled = false;
				   tb0111->Enabled = false;
				   tb0112->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;
				   tb210->Enabled = false;
				   tb211->Enabled = false;
				   tb212->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;
				   tb310->Enabled = false;
				   tb311->Enabled = false;
				   tb312->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;
				   tb410->Enabled = false;
				   tb411->Enabled = false;
				   tb412->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;
				   tb510->Enabled = false;
				   tb511->Enabled = false;
				   tb512->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;
				   tb610->Enabled = false;
				   tb611->Enabled = false;
				   tb612->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;
				   tb710->Enabled = false;
				   tb711->Enabled = false;
				   tb712->Enabled = false;

				   tb89->Enabled = false;
				   tb810->Enabled = false;
				   tb811->Enabled = false;
				   tb812->Enabled = false;

				   tb910->Enabled = false;
				   tb911->Enabled = false;
				   tb912->Enabled = false;

				   tb1011->Enabled = false;
				   tb1012->Enabled = false;

				   tb1112->Enabled = false;
				   ; break;
			   case 14:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;
				   tb010->Enabled = false;
				   tb011->Enabled = false;
				   tb012->Enabled = false;
				   tb013->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;
				   tb0110->Enabled = false;
				   tb0111->Enabled = false;
				   tb0112->Enabled = false;
				   tb0113->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;
				   tb210->Enabled = false;
				   tb211->Enabled = false;
				   tb212->Enabled = false;
				   tb213->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;
				   tb310->Enabled = false;
				   tb311->Enabled = false;
				   tb312->Enabled = false;
				   tb313->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;
				   tb410->Enabled = false;
				   tb411->Enabled = false;
				   tb412->Enabled = false;
				   tb413->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;
				   tb510->Enabled = false;
				   tb511->Enabled = false;
				   tb512->Enabled = false;
				   tb513->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;
				   tb610->Enabled = false;
				   tb611->Enabled = false;
				   tb612->Enabled = false;
				   tb613->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;
				   tb710->Enabled = false;
				   tb711->Enabled = false;
				   tb712->Enabled = false;
				   tb713->Enabled = false;

				   tb89->Enabled = false;
				   tb810->Enabled = false;
				   tb811->Enabled = false;
				   tb812->Enabled = false;
				   tb813->Enabled = false;

				   tb910->Enabled = false;
				   tb911->Enabled = false;
				   tb912->Enabled = false;
				   tb913->Enabled = false;

				   tb1011->Enabled = false;
				   tb1012->Enabled = false;
				   tb1013->Enabled = false;

				   tb1112->Enabled = false;
				   tb1113->Enabled = false;

				   tb1213->Enabled = false;

				   ; break;
			   case 15:
				   tb01->Enabled = false;
				   tb02->Enabled = false;
				   tb03->Enabled = false;
				   tb04->Enabled = false;
				   tb05->Enabled = false;
				   tb06->Enabled = false;
				   tb07->Enabled = false;
				   tb08->Enabled = false;
				   tb09->Enabled = false;
				   tb010->Enabled = false;
				   tb011->Enabled = false;
				   tb012->Enabled = false;
				   tb013->Enabled = false;
				   tb014->Enabled = false;

				   tb12->Enabled = false;
				   tb13->Enabled = false;
				   tb14->Enabled = false;
				   tb15->Enabled = false;
				   tb16->Enabled = false;
				   tb17->Enabled = false;
				   tb18->Enabled = false;
				   tb19->Enabled = false;
				   tb0110->Enabled = false;
				   tb0111->Enabled = false;
				   tb0112->Enabled = false;
				   tb0113->Enabled = false;
				   tb0114->Enabled = false;

				   tb23->Enabled = false;
				   tb24->Enabled = false;
				   tb25->Enabled = false;
				   tb26->Enabled = false;
				   tb27->Enabled = false;
				   tb28->Enabled = false;
				   tb29->Enabled = false;
				   tb210->Enabled = false;
				   tb211->Enabled = false;
				   tb212->Enabled = false;
				   tb213->Enabled = false;
				   tb214->Enabled = false;

				   tb34->Enabled = false;
				   tb35->Enabled = false;
				   tb36->Enabled = false;
				   tb37->Enabled = false;
				   tb38->Enabled = false;
				   tb39->Enabled = false;
				   tb310->Enabled = false;
				   tb311->Enabled = false;
				   tb312->Enabled = false;
				   tb313->Enabled = false;
				   tb314->Enabled = false;

				   tb45->Enabled = false;
				   tb46->Enabled = false;
				   tb47->Enabled = false;
				   tb48->Enabled = false;
				   tb49->Enabled = false;
				   tb410->Enabled = false;
				   tb411->Enabled = false;
				   tb412->Enabled = false;
				   tb413->Enabled = false;
				   tb414->Enabled = false;

				   tb56->Enabled = false;
				   tb57->Enabled = false;
				   tb58->Enabled = false;
				   tb59->Enabled = false;
				   tb510->Enabled = false;
				   tb511->Enabled = false;
				   tb512->Enabled = false;
				   tb513->Enabled = false;
				   tb514->Enabled = false;

				   tb67->Enabled = false;
				   tb68->Enabled = false;
				   tb69->Enabled = false;
				   tb610->Enabled = false;
				   tb611->Enabled = false;
				   tb612->Enabled = false;
				   tb613->Enabled = false;
				   tb614->Enabled = false;

				   tb78->Enabled = false;
				   tb79->Enabled = false;
				   tb710->Enabled = false;
				   tb711->Enabled = false;
				   tb712->Enabled = false;
				   tb713->Enabled = false;
				   tb714->Enabled = false;

				   tb89->Enabled = false;
				   tb810->Enabled = false;
				   tb811->Enabled = false;
				   tb812->Enabled = false;
				   tb813->Enabled = false;
				   tb814->Enabled = false;

				   tb910->Enabled = false;
				   tb911->Enabled = false;
				   tb912->Enabled = false;
				   tb913->Enabled = false;
				   tb914->Enabled = false;

				   tb1011->Enabled = false;
				   tb1012->Enabled = false;
				   tb1013->Enabled = false;
				   tb1014->Enabled = false;

				   tb1112->Enabled = false;
				   tb1113->Enabled = false;
				   tb1114->Enabled = false;

				   tb1213->Enabled = false;
				   tb1214->Enabled = false;

				   tb1314->Enabled = false;
				   ; break;
			   }
		   }
		   int Cero() {
			   return rand() % 2;
		   }
		   void GenerarDatos(int n)
		   {
			   switch (n)
			   {
			   case 5://------------------  tb(fila)(columna)
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));

				   ; break;

			   case 6:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));

				   ; break;
			   case 7:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));

				   ; break;
			   case 8:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;
			   case 9:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;
			   case 10:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;

			   case 11:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb010->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0110->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb210->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb310->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb410->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb510->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb610->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb710->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb810->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb910->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;

			   case 12:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb010->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb011->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0110->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0111->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb210->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb211->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb310->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb311->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb410->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb411->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb510->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb511->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb610->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb611->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb710->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb711->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb810->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb811->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb910->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb911->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1011->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;
			   case 13:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb010->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb012->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0110->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0111->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0112->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb210->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb211->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb212->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb310->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb311->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb312->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb410->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb411->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb412->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb510->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb511->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb512->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb610->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb611->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb612->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb710->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb711->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb712->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb810->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb811->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb812->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb910->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb911->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb912->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1012->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1112->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;
			   case 14:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb010->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb012->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb013->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0110->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0111->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0112->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0113->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb210->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb211->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb212->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb213->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb310->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb311->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb312->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb313->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb410->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb411->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb412->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb413->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb510->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb511->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb512->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb513->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb610->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb611->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb612->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb613->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb710->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb711->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb712->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb713->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb810->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb811->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb812->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb813->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb910->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb911->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb912->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb913->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1012->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1013->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1112->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1113->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1213->Text = Convert::ToString(Cero() * (rand() % 20));

				   ; break;
			   case 15:
				   tb01->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb02->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb03->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb04->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb05->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb06->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb07->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb08->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb09->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb010->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb012->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb013->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb014->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb12->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb13->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb14->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb15->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb16->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb17->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb18->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb19->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0110->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0111->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0112->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0113->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb0114->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb23->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb24->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb25->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb26->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb27->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb28->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb29->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb210->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb211->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb212->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb213->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb214->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb34->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb35->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb36->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb37->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb38->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb39->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb310->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb311->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb312->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb313->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb314->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb45->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb46->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb47->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb48->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb49->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb410->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb411->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb412->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb413->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb414->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb56->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb57->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb58->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb59->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb510->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb511->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb512->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb513->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb514->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb67->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb68->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb69->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb610->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb611->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb612->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb613->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb614->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb78->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb79->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb710->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb711->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb712->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb713->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb714->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb89->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb810->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb811->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb812->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb813->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb814->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb910->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb911->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb912->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb913->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb914->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1011->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1012->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1013->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1014->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1112->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1113->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1114->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1213->Text = Convert::ToString(Cero() * (rand() % 20));
				   tb1214->Text = Convert::ToString(Cero() * (rand() % 20));

				   tb1314->Text = Convert::ToString(Cero() * (rand() % 20));
				   ; break;

			   }
		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToInt32(tbEntrada->Text) > 4 && Convert::ToInt32(tbEntrada->Text) < 16) {
			if (Convert::ToInt32(tbEntrada->Text) == 5) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 6) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 7) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 8) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 9) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 10) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 11) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbKcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				lbKfila->Visible = true;
				tb00->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
				tb100->Visible = true;
				tb101->Visible = true;
				tb102->Visible = true;
				tb103->Visible = true;
				tb104->Visible = true;
				tb105->Visible = true;
				tb106->Visible = true;
				tb107->Visible = true;
				tb108->Visible = true;
				tb109->Visible = true;
				tb1010->Visible = true;
				tb010->Visible = true;
				tb0110->Visible = true;
				tb210->Visible = true;
				tb310->Visible = true;
				tb410->Visible = true;
				tb510->Visible = true;
				tb610->Visible = true;
				tb710->Visible = true;
				tb810->Visible = true;
				tb910->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 12) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbKcolumna->Visible = true;
				lbLcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				lbKfila->Visible = true;
				lbLfila->Visible = true;
				tb00->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
				tb100->Visible = true;
				tb101->Visible = true;
				tb102->Visible = true;
				tb103->Visible = true;
				tb104->Visible = true;
				tb105->Visible = true;
				tb106->Visible = true;
				tb107->Visible = true;
				tb108->Visible = true;
				tb109->Visible = true;
				tb1010->Visible = true;
				tb010->Visible = true;
				tb0110->Visible = true;
				tb210->Visible = true;
				tb310->Visible = true;
				tb410->Visible = true;
				tb510->Visible = true;
				tb610->Visible = true;
				tb710->Visible = true;
				tb810->Visible = true;
				tb910->Visible = true;
				tb110->Visible = true;
				tb111->Visible = true;
				tb112->Visible = true;
				tb113->Visible = true;
				tb114->Visible = true;
				tb115->Visible = true;
				tb116->Visible = true;
				tb117->Visible = true;
				tb118->Visible = true;
				tb119->Visible = true;
				tb1110->Visible = true;
				tb1111->Visible = true;
				tb011->Visible = true;
				tb0111->Visible = true;
				tb211->Visible = true;
				tb311->Visible = true;
				tb411->Visible = true;
				tb511->Visible = true;
				tb611->Visible = true;
				tb711->Visible = true;
				tb811->Visible = true;
				tb911->Visible = true;
				tb1011->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 13) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbKcolumna->Visible = true;
				lbLcolumna->Visible = true;
				lbMcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				lbKfila->Visible = true;
				lbLfila->Visible = true;
				lbMfila->Visible = true;
				tb00->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
				tb100->Visible = true;
				tb101->Visible = true;
				tb102->Visible = true;
				tb103->Visible = true;
				tb104->Visible = true;
				tb105->Visible = true;
				tb106->Visible = true;
				tb107->Visible = true;
				tb108->Visible = true;
				tb109->Visible = true;
				tb1010->Visible = true;
				tb010->Visible = true;
				tb0110->Visible = true;
				tb210->Visible = true;
				tb310->Visible = true;
				tb410->Visible = true;
				tb510->Visible = true;
				tb610->Visible = true;
				tb710->Visible = true;
				tb810->Visible = true;
				tb910->Visible = true;
				tb110->Visible = true;
				tb111->Visible = true;
				tb112->Visible = true;
				tb113->Visible = true;
				tb114->Visible = true;
				tb115->Visible = true;
				tb116->Visible = true;
				tb117->Visible = true;
				tb118->Visible = true;
				tb119->Visible = true;
				tb1110->Visible = true;
				tb1111->Visible = true;
				tb011->Visible = true;
				tb0111->Visible = true;
				tb211->Visible = true;
				tb311->Visible = true;
				tb411->Visible = true;
				tb511->Visible = true;
				tb611->Visible = true;
				tb711->Visible = true;
				tb811->Visible = true;
				tb911->Visible = true;
				tb1011->Visible = true;
				tb120->Visible = true;
				tb121->Visible = true;
				tb122->Visible = true;
				tb123->Visible = true;
				tb124->Visible = true;
				tb125->Visible = true;
				tb126->Visible = true;
				tb127->Visible = true;
				tb128->Visible = true;
				tb129->Visible = true;
				tb1210->Visible = true;
				tb1211->Visible = true;
				tb1212->Visible = true;
				tb012->Visible = true;
				tb0112->Visible = true;
				tb212->Visible = true;
				tb312->Visible = true;
				tb412->Visible = true;
				tb512->Visible = true;
				tb612->Visible = true;
				tb712->Visible = true;
				tb812->Visible = true;
				tb912->Visible = true;
				tb1012->Visible = true;
				tb1112->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 14) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbKcolumna->Visible = true;
				lbLcolumna->Visible = true;
				lbMcolumna->Visible = true;
				lbNcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				lbKfila->Visible = true;
				lbLfila->Visible = true;
				lbMfila->Visible = true;
				lbNfila->Visible = true;
				tb00->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
				tb100->Visible = true;
				tb101->Visible = true;
				tb102->Visible = true;
				tb103->Visible = true;
				tb104->Visible = true;
				tb105->Visible = true;
				tb106->Visible = true;
				tb107->Visible = true;
				tb108->Visible = true;
				tb109->Visible = true;
				tb1010->Visible = true;
				tb010->Visible = true;
				tb0110->Visible = true;
				tb210->Visible = true;
				tb310->Visible = true;
				tb410->Visible = true;
				tb510->Visible = true;
				tb610->Visible = true;
				tb710->Visible = true;
				tb810->Visible = true;
				tb910->Visible = true;
				tb110->Visible = true;
				tb111->Visible = true;
				tb112->Visible = true;
				tb113->Visible = true;
				tb114->Visible = true;
				tb115->Visible = true;
				tb116->Visible = true;
				tb117->Visible = true;
				tb118->Visible = true;
				tb119->Visible = true;
				tb1110->Visible = true;
				tb1111->Visible = true;
				tb011->Visible = true;
				tb0111->Visible = true;
				tb211->Visible = true;
				tb311->Visible = true;
				tb411->Visible = true;
				tb511->Visible = true;
				tb611->Visible = true;
				tb711->Visible = true;
				tb811->Visible = true;
				tb911->Visible = true;
				tb1011->Visible = true;
				tb120->Visible = true;
				tb121->Visible = true;
				tb122->Visible = true;
				tb123->Visible = true;
				tb124->Visible = true;
				tb125->Visible = true;
				tb126->Visible = true;
				tb127->Visible = true;
				tb128->Visible = true;
				tb129->Visible = true;
				tb1210->Visible = true;
				tb1211->Visible = true;
				tb1212->Visible = true;
				tb012->Visible = true;
				tb0112->Visible = true;
				tb212->Visible = true;
				tb312->Visible = true;
				tb412->Visible = true;
				tb512->Visible = true;
				tb612->Visible = true;
				tb712->Visible = true;
				tb812->Visible = true;
				tb912->Visible = true;
				tb1012->Visible = true;
				tb1112->Visible = true;
				tb130->Visible = true;
				tb131->Visible = true;
				tb132->Visible = true;
				tb133->Visible = true;
				tb134->Visible = true;
				tb135->Visible = true;
				tb136->Visible = true;
				tb137->Visible = true;
				tb138->Visible = true;
				tb139->Visible = true;
				tb1310->Visible = true;
				tb1311->Visible = true;
				tb1312->Visible = true;
				tb1313->Visible = true;
				tb013->Visible = true;
				tb0113->Visible = true;
				tb213->Visible = true;
				tb313->Visible = true;
				tb413->Visible = true;
				tb513->Visible = true;
				tb613->Visible = true;
				tb713->Visible = true;
				tb813->Visible = true;
				tb913->Visible = true;
				tb1013->Visible = true;
				tb1113->Visible = true;
				tb1213->Visible = true;
			}
			if (Convert::ToInt32(tbEntrada->Text) == 15) {
				lbAcolumna->Visible = true;
				lbBcolumna->Visible = true;
				lbCcolumna->Visible = true;
				lbDcolumna->Visible = true;
				lbEcolumna->Visible = true;
				lbFcolumna->Visible = true;
				lbGcolumna->Visible = true;
				lbHcolumna->Visible = true;
				lbIcolumna->Visible = true;
				lbJcolumna->Visible = true;
				lbKcolumna->Visible = true;
				lbLcolumna->Visible = true;
				lbMcolumna->Visible = true;
				lbNcolumna->Visible = true;
				lbOcolumna->Visible = true;
				lbAfila->Visible = true;
				lbBfila->Visible = true;
				lbCfila->Visible = true;
				lbDfila->Visible = true;
				lbEfila->Visible = true;
				lbFfila->Visible = true;
				lbGfila->Visible = true;
				lbHfila->Visible = true;
				lbIfila->Visible = true;
				lbJfila->Visible = true;
				lbKfila->Visible = true;
				lbLfila->Visible = true;
				lbMfila->Visible = true;
				lbNfila->Visible = true;
				lbOfila->Visible = true;
				tb00->Visible = true;
				tb00->Visible = true;
				tb01->Visible = true;
				tb02->Visible = true;
				tb03->Visible = true;
				tb04->Visible = true;
				tb05->Visible = true;
				tb06->Visible = true;
				tb10->Visible = true;
				tb11->Visible = true;
				tb12->Visible = true;
				tb13->Visible = true;
				tb14->Visible = true;
				tb15->Visible = true;
				tb16->Visible = true;
				tb20->Visible = true;
				tb21->Visible = true;
				tb22->Visible = true;
				tb23->Visible = true;
				tb24->Visible = true;
				tb25->Visible = true;
				tb26->Visible = true;
				tb30->Visible = true;
				tb31->Visible = true;
				tb32->Visible = true;
				tb33->Visible = true;
				tb34->Visible = true;
				tb35->Visible = true;
				tb36->Visible = true;
				tb40->Visible = true;
				tb41->Visible = true;
				tb42->Visible = true;
				tb43->Visible = true;
				tb44->Visible = true;
				tb45->Visible = true;
				tb46->Visible = true;
				tb50->Visible = true;
				tb51->Visible = true;
				tb52->Visible = true;
				tb53->Visible = true;
				tb54->Visible = true;
				tb55->Visible = true;
				tb56->Visible = true;
				tb60->Visible = true;
				tb61->Visible = true;
				tb62->Visible = true;
				tb63->Visible = true;
				tb64->Visible = true;
				tb65->Visible = true;
				tb66->Visible = true;
				tb70->Visible = true;
				tb71->Visible = true;
				tb72->Visible = true;
				tb73->Visible = true;
				tb74->Visible = true;
				tb75->Visible = true;
				tb76->Visible = true;
				tb77->Visible = true;
				tb07->Visible = true;
				tb17->Visible = true;
				tb27->Visible = true;
				tb37->Visible = true;
				tb47->Visible = true;
				tb57->Visible = true;
				tb67->Visible = true;
				tb80->Visible = true;
				tb81->Visible = true;
				tb82->Visible = true;
				tb83->Visible = true;
				tb84->Visible = true;
				tb85->Visible = true;
				tb86->Visible = true;
				tb87->Visible = true;
				tb88->Visible = true;
				tb08->Visible = true;
				tb18->Visible = true;
				tb28->Visible = true;
				tb38->Visible = true;
				tb48->Visible = true;
				tb58->Visible = true;
				tb68->Visible = true;
				tb78->Visible = true;
				tb90->Visible = true;
				tb91->Visible = true;
				tb92->Visible = true;
				tb93->Visible = true;
				tb94->Visible = true;
				tb95->Visible = true;
				tb96->Visible = true;
				tb97->Visible = true;
				tb98->Visible = true;
				tb99->Visible = true;
				tb09->Visible = true;
				tb19->Visible = true;
				tb29->Visible = true;
				tb39->Visible = true;
				tb49->Visible = true;
				tb59->Visible = true;
				tb69->Visible = true;
				tb79->Visible = true;
				tb89->Visible = true;
				tb100->Visible = true;
				tb101->Visible = true;
				tb102->Visible = true;
				tb103->Visible = true;
				tb104->Visible = true;
				tb105->Visible = true;
				tb106->Visible = true;
				tb107->Visible = true;
				tb108->Visible = true;
				tb109->Visible = true;
				tb1010->Visible = true;
				tb010->Visible = true;
				tb0110->Visible = true;
				tb210->Visible = true;
				tb310->Visible = true;
				tb410->Visible = true;
				tb510->Visible = true;
				tb610->Visible = true;
				tb710->Visible = true;
				tb810->Visible = true;
				tb910->Visible = true;
				tb110->Visible = true;
				tb111->Visible = true;
				tb112->Visible = true;
				tb113->Visible = true;
				tb114->Visible = true;
				tb115->Visible = true;
				tb116->Visible = true;
				tb117->Visible = true;
				tb118->Visible = true;
				tb119->Visible = true;
				tb1110->Visible = true;
				tb1111->Visible = true;
				tb011->Visible = true;
				tb0111->Visible = true;
				tb211->Visible = true;
				tb311->Visible = true;
				tb411->Visible = true;
				tb511->Visible = true;
				tb611->Visible = true;
				tb711->Visible = true;
				tb811->Visible = true;
				tb911->Visible = true;
				tb1011->Visible = true;
				tb120->Visible = true;
				tb121->Visible = true;
				tb122->Visible = true;
				tb123->Visible = true;
				tb124->Visible = true;
				tb125->Visible = true;
				tb126->Visible = true;
				tb127->Visible = true;
				tb128->Visible = true;
				tb129->Visible = true;
				tb1210->Visible = true;
				tb1211->Visible = true;
				tb1212->Visible = true;
				tb012->Visible = true;
				tb0112->Visible = true;
				tb212->Visible = true;
				tb312->Visible = true;
				tb412->Visible = true;
				tb512->Visible = true;
				tb612->Visible = true;
				tb712->Visible = true;
				tb812->Visible = true;
				tb912->Visible = true;
				tb1012->Visible = true;
				tb1112->Visible = true;
				tb130->Visible = true;
				tb131->Visible = true;
				tb132->Visible = true;
				tb133->Visible = true;
				tb134->Visible = true;
				tb135->Visible = true;
				tb136->Visible = true;
				tb137->Visible = true;
				tb138->Visible = true;
				tb139->Visible = true;
				tb1310->Visible = true;
				tb1311->Visible = true;
				tb1312->Visible = true;
				tb1313->Visible = true;
				tb013->Visible = true;
				tb0113->Visible = true;
				tb213->Visible = true;
				tb313->Visible = true;
				tb413->Visible = true;
				tb513->Visible = true;
				tb613->Visible = true;
				tb713->Visible = true;
				tb813->Visible = true;
				tb913->Visible = true;
				tb1013->Visible = true;
				tb1113->Visible = true;
				tb1213->Visible = true;
				tb140->Visible = true;
				tb141->Visible = true;
				tb142->Visible = true;
				tb143->Visible = true;
				tb144->Visible = true;
				tb145->Visible = true;
				tb146->Visible = true;
				tb147->Visible = true;
				tb148->Visible = true;
				tb149->Visible = true;
				tb1410->Visible = true;
				tb1411->Visible = true;
				tb1412->Visible = true;
				tb1413->Visible = true;
				tb1414->Visible = true;
				tb014->Visible = true;
				tb0114->Visible = true;
				tb214->Visible = true;
				tb314->Visible = true;
				tb414->Visible = true;
				tb514->Visible = true;
				tb614->Visible = true;
				tb714->Visible = true;
				tb814->Visible = true;
				tb914->Visible = true;
				tb1014->Visible = true;
				tb1114->Visible = true;
				tb1214->Visible = true;
				tb1314->Visible = true;
			}
		}
		else
			MessageBox::Show("Solo valores entre el 5 y 15", "ERROR");
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		encenderCasilla(Convert::ToDouble(tbEntrada->Text));
		btnConfirmar->Visible = true;
	}
	private: System::Void btnConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {
		apagarCasilla(Convert::ToDouble(tbEntrada->Text));
		btnConfirmar->Visible = false;
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		Limpiar(Convert::ToDouble(tbEntrada->Text));
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		GenerarDatos(Convert::ToDouble(tbEntrada->Text));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::FromArgb(192, 192, 255));
		Dibujar(Convert::ToDouble(tbEntrada->Text));
		buffer->Render(g);
	}
	private: System::Void btnCalcularCaminoMinimo_Click(System::Object^ sender, System::EventArgs^ e) {

		//lbCaminoMinimo/lbPesoMinimo
		int nele = Convert::ToInt32(tbEntrada->Text);
		char Vinicial = Convert::ToChar(ComboBoxVerticeInicio->Text);
		char Vfinal = Convert::ToChar(comboBoxVerticeFinal->Text);

		//Convert::ToInt32(tb01->Text)






		if (Convert::ToInt32(tbEntrada->Text) == 5) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text);
			int de = Convert::ToInt32(tb34->Text);
			Vertices* v = new Vertices(ab, ac, ad, ae, bc, bd, be, cd, ce, de, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 6) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text);
			int ef = Convert::ToInt32(tb45->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, bc, bd, be, bf, cd, ce, cf, de, df, ef, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 7) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text);
			int fg = Convert::ToInt32(tb56->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, bc, bd, be, bf, bg, cd, ce, cf, cg, de, df, dg, ef, eg, fg, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 8) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text);
			int gh = Convert::ToInt32(tb67->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, bc, bd, be, bf, bg, bh, cd, ce, cf, cg, ch, de, df, dg, dh, ef, eg, eh, fg, fh, gh, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 9) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text);
			int hi = Convert::ToInt32(tb78->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, bc, bd, be, bf, bg, bh, bi, cd, ce, cf, cg, ch, ci, de, df, dg, dh, di, ef, eg, eh, ei, fg, fh, fi, gh, gi, hi, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 10) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text);
			int ij = Convert::ToInt32(tb89->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, bc, bd, be, bf, bg, bh, bi, bj, cd, ce, cf, cg, ch, ci, cj, de, df, dg, dh, di, dj, ef, eg, eh, ei, ej, fg, fh, fi, fj, gh, gi, gj, hi, hj, ij, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 11) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text); int ak = Convert::ToInt32(tb010->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text); int bk = Convert::ToInt32(tb0110->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text); int ck = Convert::ToInt32(tb210->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text); int dk = Convert::ToInt32(tb310->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text); int ek = Convert::ToInt32(tb410->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text); int fk = Convert::ToInt32(tb510->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text); int gk = Convert::ToInt32(tb610->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text); int hk = Convert::ToInt32(tb710->Text);
			int ij = Convert::ToInt32(tb89->Text); int ik = Convert::ToInt32(tb810->Text);
			int jk = Convert::ToInt32(tb910->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, ak, bc, bd, be, bf, bg, bh, bi, bj, bk, cd, ce, cf, cg, ch, ci, cj, ck, de, df, dg, dh, di, dj, dk, ef, eg, eh, ei, ej, ek, fg, fh, fi, fj, fk, gh, gi, gj, gk, hi, hj, hk, ij, ik, jk, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 12) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text); int ak = Convert::ToInt32(tb010->Text); int al = Convert::ToInt32(tb011->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text); int bk = Convert::ToInt32(tb0110->Text); int bl = Convert::ToInt32(tb0111->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text); int ck = Convert::ToInt32(tb210->Text); int cl = Convert::ToInt32(tb211->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text); int dk = Convert::ToInt32(tb310->Text); int dl = Convert::ToInt32(tb311->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text); int ek = Convert::ToInt32(tb410->Text); int el = Convert::ToInt32(tb411->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text); int fk = Convert::ToInt32(tb510->Text); int fl = Convert::ToInt32(tb511->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text); int gk = Convert::ToInt32(tb610->Text); int gl = Convert::ToInt32(tb611->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text); int hk = Convert::ToInt32(tb710->Text); int hl = Convert::ToInt32(tb711->Text);
			int ij = Convert::ToInt32(tb89->Text); int ik = Convert::ToInt32(tb810->Text); int il = Convert::ToInt32(tb811->Text);
			int jk = Convert::ToInt32(tb910->Text); int jl = Convert::ToInt32(tb911->Text);
			int kl = Convert::ToInt32(tb1011->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, cd, ce, cf, cg, ch, ci, cj, ck, cl, de, df, dg, dh, di, dj, dk, dl, ef, eg, eh, ei, ej, ek, el, fg, fh, fi, fj, fk, fl, gh, gi, gj, gk, gl, hi, hj, hk, hl, ij, ik, il, jk, jl, kl, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 13) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text); int ak = Convert::ToInt32(tb010->Text); int al = Convert::ToInt32(tb011->Text); int am = Convert::ToInt32(tb012->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text); int bk = Convert::ToInt32(tb0110->Text); int bl = Convert::ToInt32(tb0111->Text); int bm = Convert::ToInt32(tb0112->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text); int ck = Convert::ToInt32(tb210->Text); int cl = Convert::ToInt32(tb211->Text); int cm = Convert::ToInt32(tb212->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text); int dk = Convert::ToInt32(tb310->Text); int dl = Convert::ToInt32(tb311->Text); int dm = Convert::ToInt32(tb312->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text); int ek = Convert::ToInt32(tb410->Text); int el = Convert::ToInt32(tb411->Text); int em = Convert::ToInt32(tb412->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text); int fk = Convert::ToInt32(tb510->Text); int fl = Convert::ToInt32(tb511->Text); int fm = Convert::ToInt32(tb512->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text); int gk = Convert::ToInt32(tb610->Text); int gl = Convert::ToInt32(tb611->Text); int gm = Convert::ToInt32(tb612->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text); int hk = Convert::ToInt32(tb710->Text); int hl = Convert::ToInt32(tb711->Text); int hm = Convert::ToInt32(tb712->Text);
			int ij = Convert::ToInt32(tb89->Text); int ik = Convert::ToInt32(tb810->Text); int il = Convert::ToInt32(tb811->Text); int im = Convert::ToInt32(tb812->Text);
			int jk = Convert::ToInt32(tb910->Text); int jl = Convert::ToInt32(tb911->Text); int jm = Convert::ToInt32(tb912->Text);
			int kl = Convert::ToInt32(tb1011->Text); int km = Convert::ToInt32(tb1012->Text);
			int lm = Convert::ToInt32(tb1112->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, de, df, dg, dh, di, dj, dk, dl, dm, ef, eg, eh, ei, ej, ek, el, em, fg, fh, fi, fj, fk, fl, fm, gh, gi, gj, gk, gl, gm, hi, hj, hk, hl, hm, ij, ik, il, im, jk, jl, jm, kl, km, lm, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 14) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text); int ak = Convert::ToInt32(tb010->Text); int al = Convert::ToInt32(tb011->Text); int am = Convert::ToInt32(tb012->Text); int an = Convert::ToInt32(tb013->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text); int bk = Convert::ToInt32(tb0110->Text); int bl = Convert::ToInt32(tb0111->Text); int bm = Convert::ToInt32(tb0112->Text); int bn = Convert::ToInt32(tb0113->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text); int ck = Convert::ToInt32(tb210->Text); int cl = Convert::ToInt32(tb211->Text); int cm = Convert::ToInt32(tb212->Text); int cn = Convert::ToInt32(tb213->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text); int dk = Convert::ToInt32(tb310->Text); int dl = Convert::ToInt32(tb311->Text); int dm = Convert::ToInt32(tb312->Text); int dn = Convert::ToInt32(tb313->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text); int ek = Convert::ToInt32(tb410->Text); int el = Convert::ToInt32(tb411->Text); int em = Convert::ToInt32(tb412->Text); int en = Convert::ToInt32(tb413->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text); int fk = Convert::ToInt32(tb510->Text); int fl = Convert::ToInt32(tb511->Text); int fm = Convert::ToInt32(tb512->Text); int fn = Convert::ToInt32(tb513->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text); int gk = Convert::ToInt32(tb610->Text); int gl = Convert::ToInt32(tb611->Text); int gm = Convert::ToInt32(tb612->Text); int gn = Convert::ToInt32(tb613->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text); int hk = Convert::ToInt32(tb710->Text); int hl = Convert::ToInt32(tb711->Text); int hm = Convert::ToInt32(tb712->Text); int hn = Convert::ToInt32(tb713->Text);
			int ij = Convert::ToInt32(tb89->Text); int ik = Convert::ToInt32(tb810->Text); int il = Convert::ToInt32(tb811->Text); int im = Convert::ToInt32(tb812->Text); int in = Convert::ToInt32(tb813->Text);
			int jk = Convert::ToInt32(tb910->Text); int jl = Convert::ToInt32(tb911->Text); int jm = Convert::ToInt32(tb912->Text); int jn = Convert::ToInt32(tb913->Text);
			int kl = Convert::ToInt32(tb1011->Text); int km = Convert::ToInt32(tb1012->Text); int kn = Convert::ToInt32(tb1013->Text);
			int lm = Convert::ToInt32(tb1112->Text); int ln = Convert::ToInt32(tb1113->Text);
			int mn = Convert::ToInt32(tb1213->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, an, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn, de, df, dg, dh, di, dj, dk, dl, dm, dn, ef, eg, eh, ei, ej, ek, el, em, en, fg, fh, fi, fj, fk, fl, fm, fn, gh, gi, gj, gk, gl, gm, gn, hi, hj, hk, hl, hm, hn, ij, ik, il, im, in, jk, jl, jm, jn, kl, km, kn, lm, ln, mn, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}

		if (Convert::ToInt32(tbEntrada->Text) == 15) {
			int ab = Convert::ToInt32(tb01->Text); int ac = Convert::ToInt32(tb02->Text); int ad = Convert::ToInt32(tb03->Text); int ae = Convert::ToInt32(tb04->Text); int af = Convert::ToInt32(tb05->Text); int ag = Convert::ToInt32(tb06->Text); int ah = Convert::ToInt32(tb07->Text); int ai = Convert::ToInt32(tb08->Text); int aj = Convert::ToInt32(tb09->Text); int ak = Convert::ToInt32(tb010->Text); int al = Convert::ToInt32(tb011->Text); int am = Convert::ToInt32(tb012->Text); int an = Convert::ToInt32(tb013->Text); int ao = Convert::ToInt32(tb014->Text);
			int bc = Convert::ToInt32(tb12->Text); int bd = Convert::ToInt32(tb13->Text); int be = Convert::ToInt32(tb14->Text); int bf = Convert::ToInt32(tb15->Text); int bg = Convert::ToInt32(tb16->Text); int bh = Convert::ToInt32(tb17->Text); int bi = Convert::ToInt32(tb18->Text); int bj = Convert::ToInt32(tb19->Text); int bk = Convert::ToInt32(tb0110->Text); int bl = Convert::ToInt32(tb0111->Text); int bm = Convert::ToInt32(tb0112->Text); int bn = Convert::ToInt32(tb0113->Text); int bo = Convert::ToInt32(tb0114->Text);
			int cd = Convert::ToInt32(tb23->Text); int ce = Convert::ToInt32(tb24->Text); int cf = Convert::ToInt32(tb25->Text); int cg = Convert::ToInt32(tb26->Text); int ch = Convert::ToInt32(tb27->Text); int ci = Convert::ToInt32(tb28->Text); int cj = Convert::ToInt32(tb29->Text); int ck = Convert::ToInt32(tb210->Text); int cl = Convert::ToInt32(tb211->Text); int cm = Convert::ToInt32(tb212->Text); int cn = Convert::ToInt32(tb213->Text); int co = Convert::ToInt32(tb214->Text);
			int de = Convert::ToInt32(tb34->Text); int df = Convert::ToInt32(tb35->Text); int dg = Convert::ToInt32(tb36->Text); int dh = Convert::ToInt32(tb37->Text); int di = Convert::ToInt32(tb38->Text); int dj = Convert::ToInt32(tb39->Text); int dk = Convert::ToInt32(tb310->Text); int dl = Convert::ToInt32(tb311->Text); int dm = Convert::ToInt32(tb312->Text); int dn = Convert::ToInt32(tb313->Text); int doo = Convert::ToInt32(tb314->Text);
			int ef = Convert::ToInt32(tb45->Text); int eg = Convert::ToInt32(tb46->Text); int eh = Convert::ToInt32(tb47->Text); int ei = Convert::ToInt32(tb48->Text); int ej = Convert::ToInt32(tb49->Text); int ek = Convert::ToInt32(tb410->Text); int el = Convert::ToInt32(tb411->Text); int em = Convert::ToInt32(tb412->Text); int en = Convert::ToInt32(tb413->Text); int eo = Convert::ToInt32(tb414->Text);
			int fg = Convert::ToInt32(tb56->Text); int fh = Convert::ToInt32(tb57->Text); int fi = Convert::ToInt32(tb58->Text); int fj = Convert::ToInt32(tb59->Text); int fk = Convert::ToInt32(tb510->Text); int fl = Convert::ToInt32(tb511->Text); int fm = Convert::ToInt32(tb512->Text); int fn = Convert::ToInt32(tb513->Text); int fo = Convert::ToInt32(tb514->Text);
			int gh = Convert::ToInt32(tb67->Text); int gi = Convert::ToInt32(tb68->Text); int gj = Convert::ToInt32(tb69->Text); int gk = Convert::ToInt32(tb610->Text); int gl = Convert::ToInt32(tb611->Text); int gm = Convert::ToInt32(tb612->Text); int gn = Convert::ToInt32(tb613->Text); int go = Convert::ToInt32(tb614->Text);
			int hi = Convert::ToInt32(tb78->Text); int hj = Convert::ToInt32(tb79->Text); int hk = Convert::ToInt32(tb710->Text); int hl = Convert::ToInt32(tb711->Text); int hm = Convert::ToInt32(tb712->Text); int hn = Convert::ToInt32(tb713->Text); int ho = Convert::ToInt32(tb714->Text);
			int ij = Convert::ToInt32(tb89->Text); int ik = Convert::ToInt32(tb810->Text); int il = Convert::ToInt32(tb811->Text); int im = Convert::ToInt32(tb812->Text); int in = Convert::ToInt32(tb813->Text); int io = Convert::ToInt32(tb814->Text);
			int jk = Convert::ToInt32(tb910->Text); int jl = Convert::ToInt32(tb911->Text); int jm = Convert::ToInt32(tb912->Text); int jn = Convert::ToInt32(tb913->Text); int jo = Convert::ToInt32(tb914->Text);
			int kl = Convert::ToInt32(tb1011->Text); int km = Convert::ToInt32(tb1012->Text); int kn = Convert::ToInt32(tb1013->Text); int ko = Convert::ToInt32(tb1014->Text);
			int lm = Convert::ToInt32(tb1112->Text); int ln = Convert::ToInt32(tb1113->Text); int lo = Convert::ToInt32(tb1114->Text);
			int mn = Convert::ToInt32(tb1213->Text); int mo = Convert::ToInt32(tb1214->Text);
			int no = Convert::ToInt32(tb1314->Text);

			Vertices* v = new Vertices(ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, an, ao, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn, bo, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn, co, de, df, dg, dh, di, dj, dk, dl, dm, dn, doo, ef, eg, eh, ei, ej, ek, el, em, en, eo, fg, fh, fi, fj, fk, fl, fm, fn, fo, gh, gi, gj, gk, gl, gm, gn, go, hi, hj, hk, hl, hm, hn, ho, ij, ik, il, im, in, io, jk, jl, jm, jn, jo, kl, km, kn, ko, lm, ln, lo, mn, mo, no, nele, Vinicial, Vfinal);
			String^ pesoM = gcnew String(v->getRspta().c_str());
			lbPesoMinimo->Text = pesoM;
			String^ caminoM = gcnew String(v->getCamino().c_str());
			lbCaminoMinimo->Text = caminoM;
		}
	}
	};
}
