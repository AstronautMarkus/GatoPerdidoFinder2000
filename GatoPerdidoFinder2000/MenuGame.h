#pragma once
#include "Form1.h"


namespace GatoPerdidoFinder2000 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGame
	/// </summary>
	public ref class MenuGame : public System::Windows::Forms::Form
	{
	public:
		MenuGame(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; // Centra el formulario al abrirse.
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MenuText1;
	private: System::Windows::Forms::Button^ SelectMap1;
	private: System::Windows::Forms::Button^ SelectMap2;
	private: System::Windows::Forms::Button^ SelectMap3;
	private: System::Windows::Forms::LinkLabel^ ExitToMenu;






	protected:

	protected:

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
			this->MenuText1 = (gcnew System::Windows::Forms::Label());
			this->SelectMap1 = (gcnew System::Windows::Forms::Button());
			this->SelectMap2 = (gcnew System::Windows::Forms::Button());
			this->SelectMap3 = (gcnew System::Windows::Forms::Button());
			this->ExitToMenu = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// MenuText1
			// 
			this->MenuText1->AutoSize = true;
			this->MenuText1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuText1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->MenuText1->Location = System::Drawing::Point(231, 29);
			this->MenuText1->Name = L"MenuText1";
			this->MenuText1->Size = System::Drawing::Size(376, 47);
			this->MenuText1->TabIndex = 6;
			this->MenuText1->Text = L"Selecciona un mapa";
			this->MenuText1->Click += gcnew System::EventHandler(this, &MenuGame::Tittle2_Click);
			// 
			// SelectMap1
			// 
			this->SelectMap1->BackColor = System::Drawing::Color::LemonChiffon;
			this->SelectMap1->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F));
			this->SelectMap1->Location = System::Drawing::Point(63, 425);
			this->SelectMap1->Name = L"SelectMap1";
			this->SelectMap1->Size = System::Drawing::Size(236, 76);
			this->SelectMap1->TabIndex = 7;
			this->SelectMap1->Text = L"Seleccionar";
			this->SelectMap1->UseVisualStyleBackColor = false;
			this->SelectMap1->Click += gcnew System::EventHandler(this, &MenuGame::button1_Click);
			// 
			// SelectMap2
			// 
			this->SelectMap2->BackColor = System::Drawing::Color::LemonChiffon;
			this->SelectMap2->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F));
			this->SelectMap2->Location = System::Drawing::Point(305, 425);
			this->SelectMap2->Name = L"SelectMap2";
			this->SelectMap2->Size = System::Drawing::Size(236, 76);
			this->SelectMap2->TabIndex = 8;
			this->SelectMap2->Text = L"Seleccionar";
			this->SelectMap2->UseVisualStyleBackColor = false;
			// 
			// SelectMap3
			// 
			this->SelectMap3->BackColor = System::Drawing::Color::LemonChiffon;
			this->SelectMap3->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F));
			this->SelectMap3->Location = System::Drawing::Point(547, 425);
			this->SelectMap3->Name = L"SelectMap3";
			this->SelectMap3->Size = System::Drawing::Size(236, 76);
			this->SelectMap3->TabIndex = 9;
			this->SelectMap3->Text = L"Seleccionar";
			this->SelectMap3->UseVisualStyleBackColor = false;
			// 
			// ExitToMenu
			// 
			this->ExitToMenu->AutoSize = true;
			this->ExitToMenu->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F));
			this->ExitToMenu->LinkColor = System::Drawing::Color::Brown;
			this->ExitToMenu->Location = System::Drawing::Point(319, 531);
			this->ExitToMenu->Name = L"ExitToMenu";
			this->ExitToMenu->Size = System::Drawing::Size(195, 33);
			this->ExitToMenu->TabIndex = 10;
			this->ExitToMenu->TabStop = true;
			this->ExitToMenu->Text = L"Volver al menú";
			this->ExitToMenu->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuGame::ExitToMenu_LinkClicked);
			// 
			// MenuGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(834, 601);
			this->Controls->Add(this->ExitToMenu);
			this->Controls->Add(this->SelectMap3);
			this->Controls->Add(this->SelectMap2);
			this->Controls->Add(this->SelectMap1);
			this->Controls->Add(this->MenuText1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MenuGame";
			this->Text = L"MenuGame";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Tittle2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ExitToMenu_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {


	}
};
}
