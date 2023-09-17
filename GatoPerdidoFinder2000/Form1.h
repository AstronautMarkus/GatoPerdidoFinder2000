#pragma once


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GatoGame
	/// </summary>
	public ref class GatoGame : public System::Windows::Forms::Form
	{
	public:
		GatoGame(void)
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
		~GatoGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ PlayBtn;
	protected:

	private: System::Windows::Forms::Button^ HelpBtn;
	private: System::Windows::Forms::Label^ Tittle1;
	private: System::Windows::Forms::Label^ Tittle3;
	protected:




	private: System::Windows::Forms::Label^ Tittle2;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Label^ Credits;














	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PlayBtn = (gcnew System::Windows::Forms::Button());
			this->HelpBtn = (gcnew System::Windows::Forms::Button());
			this->Tittle1 = (gcnew System::Windows::Forms::Label());
			this->Tittle3 = (gcnew System::Windows::Forms::Label());
			this->Tittle2 = (gcnew System::Windows::Forms::Label());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->Credits = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			this->PlayBtn->BackColor = System::Drawing::SystemColors::Control;
			this->PlayBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayBtn->Location = System::Drawing::Point(261, 326);
			this->PlayBtn->Name = L"PlayBtn";
			this->PlayBtn->Size = System::Drawing::Size(270, 64);
			this->PlayBtn->TabIndex = 0;
			this->PlayBtn->Text = L"Jugar";
			this->PlayBtn->UseVisualStyleBackColor = false;
			this->HelpBtn->BackColor = System::Drawing::Color::LemonChiffon;
			this->HelpBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelpBtn->Location = System::Drawing::Point(261, 396);
			this->HelpBtn->Name = L"HelpBtn";
			this->HelpBtn->Size = System::Drawing::Size(270, 64);
			this->HelpBtn->TabIndex = 1;
			this->HelpBtn->Text = L"Como jugar";
			this->HelpBtn->UseVisualStyleBackColor = false;
			this->HelpBtn->Click += gcnew System::EventHandler(this, &GatoGame::HelpBtn_Click);
			this->HelpBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &GatoGame::HelpBtn_MouseClick);
			this->Tittle1->AutoSize = true;
			this->Tittle1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 26.25, System::Drawing::FontStyle::Bold));
			this->Tittle1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Tittle1->Location = System::Drawing::Point(176, 91);
			this->Tittle1->Name = L"Tittle1";
			this->Tittle1->Size = System::Drawing::Size(207, 47);
			this->Tittle1->TabIndex = 2;
			this->Tittle1->Text = L"Saludos!!!1";
			this->Tittle1->Click += gcnew System::EventHandler(this, &GatoGame::label1_Click_1);
			this->Tittle3->AutoSize = true;
			this->Tittle3->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 26.25, System::Drawing::FontStyle::Bold));
			this->Tittle3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Tittle3->Location = System::Drawing::Point(174, 185);
			this->Tittle3->Name = L"Tittle3";
			this->Tittle3->Size = System::Drawing::Size(454, 47);
			this->Tittle3->TabIndex = 4;
			this->Tittle3->Text = L"GatoPerdidoFinder2000";
			this->Tittle3->Click += gcnew System::EventHandler(this, &GatoGame::label3_Click);
			this->Tittle2->AutoSize = true;
			this->Tittle2->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 26.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tittle2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Tittle2->Location = System::Drawing::Point(354, 138);
			this->Tittle2->Name = L"Tittle2";
			this->Tittle2->Size = System::Drawing::Size(251, 47);
			this->Tittle2->TabIndex = 5;
			this->Tittle2->Text = L"Bienvenido a";
			this->Tittle2->Click += gcnew System::EventHandler(this, &GatoGame::Tittle2_Click);
			this->ExitBtn->BackColor = System::Drawing::Color::Tomato;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitBtn->Location = System::Drawing::Point(261, 466);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(270, 64);
			this->ExitBtn->TabIndex = 6;
			this->ExitBtn->Text = L"Salir";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &GatoGame::ExitBtn_Click);
			this->Credits->AutoSize = true;
			this->Credits->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 15, System::Drawing::FontStyle::Bold));
			this->Credits->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Credits->Location = System::Drawing::Point(449, 549);
			this->Credits->Name = L"Credits";
			this->Credits->Size = System::Drawing::Size(339, 28);
			this->Credits->TabIndex = 7;
			this->Credits->Text = L"Creado por: AstronautMarkus";
			this->Credits->Click += gcnew System::EventHandler(this, &GatoGame::Credits_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(834, 601);
			this->Controls->Add(this->Credits);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->Tittle2);
			this->Controls->Add(this->Tittle3);
			this->Controls->Add(this->Tittle1);
			this->Controls->Add(this->HelpBtn);
			this->Controls->Add(this->PlayBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"GatoGame";
			this->Text = L"GatoPerdidoFinder2000";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HelpBtn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		String^ HelpMessage = "Instrucciones para jugar        \n";
		HelpMessage += "\n\n";
		HelpMessage += "1. Elige un mapa al inicio del juego.\n\n";
		HelpMessage += "2. Espera durante el contador de inicio de 3 segundos.\n\n";
		HelpMessage += "3. El juego comenzará y tendrás 1 minuto para jugar.\n\n";
		HelpMessage += "4. Haz clic en los gatitos adorables que aparezcan en la pantalla para acumular puntos. Cada gatito clickeado emitirá un \"Miau\".\n\n";
		HelpMessage += "5. **CUIDADO**: Evita hacer clic en el gato rojo malvado, ya que te restará 3 puntos.\n\n";
		HelpMessage += "6. Puedes optar por ignorar a los gatos adorables si crees que eso te ayudará a evitar al gato rojo malvado.\n\n";
		HelpMessage += "7. Al final del juego, se mostrará tu puntuación total.\n\n";
		HelpMessage += "8. ¡Intenta conseguir la puntuación más alta y diviértete jugando a \"GatoPerdidoFinder2000\"!\n\n";
		HelpMessage += "";

		MessageBox::Show(HelpMessage, "Instrucciones para jugar", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void Tittle2_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void HelpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: int clickCount = 0;

	private: System::Void Credits_Click(System::Object^ sender, System::EventArgs^ e) {
		// Incrementar el valor de clickCount cada vez que se hace clic en el label.
		clickCount++;

		// Si se han hecho 4 clics, redirige a GitHub.
		if (clickCount == 4) {
			// Abre la URL de GitHub en el navegador predeterminado.
			System::Diagnostics::Process::Start("https://github.com/AstronautMarkus");

			// Reinicia el contador de clics para permitir futuros clics.
			clickCount = 0;
		}
	}

	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Cerrar el programa
		Application::Exit();
	}




	};
}
