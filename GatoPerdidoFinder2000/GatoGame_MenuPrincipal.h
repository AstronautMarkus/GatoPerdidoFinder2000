#pragma once

namespace GatoPerdidoFinder2000 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GatoGame_MenuPrincipal
	/// </summary>
	public ref class GatoGame_MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		GatoGame_MenuPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GatoGame_MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// GatoGame_MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(834, 601);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"GatoGame_MenuPrincipal";
			this->Text = L"GatoPerdidoFinder2000";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GatoGame_MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
