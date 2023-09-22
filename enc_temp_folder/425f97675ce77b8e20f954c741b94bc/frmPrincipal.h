#pragma once
#include <iostream>
#include <string>
#include <chrono>  


namespace MeuFormulario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
    


	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	
	



	private: System::Windows::Forms::ComboBox^ cmbFiltro;
	private: System::Windows::Forms::ComboBox^ cmbProcessamento;
	
	private: System::Windows::Forms::PictureBox^ imgAntes;
	private: System::Windows::Forms::PictureBox^ imgDepois;

	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblFiltro;
	private: System::Windows::Forms::Label^ lblProcessamento;
	private: System::Windows::Forms::Label^ lblSubTitulo;
	private: System::Windows::Forms::Label^ lblAntes;
	private: System::Windows::Forms::Label^ lblDepois;
	private: System::Windows::Forms::Label^ lblDescTempo;
	private: System::Windows::Forms::Label^ lblTempo;
	private: System::Windows::Forms::Button^ btnExecutar;
	private: System::Windows::Forms::Label^ lblMensagem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblProcessado;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblFiltro = (gcnew System::Windows::Forms::Label());
			this->lblProcessamento = (gcnew System::Windows::Forms::Label());
			this->cmbFiltro = (gcnew System::Windows::Forms::ComboBox());
			this->cmbProcessamento = (gcnew System::Windows::Forms::ComboBox());
			this->lblSubTitulo = (gcnew System::Windows::Forms::Label());
			this->imgAntes = (gcnew System::Windows::Forms::PictureBox());
			this->imgDepois = (gcnew System::Windows::Forms::PictureBox());
			this->lblAntes = (gcnew System::Windows::Forms::Label());
			this->lblDepois = (gcnew System::Windows::Forms::Label());
			this->lblDescTempo = (gcnew System::Windows::Forms::Label());
			this->lblTempo = (gcnew System::Windows::Forms::Label());
			this->btnExecutar = (gcnew System::Windows::Forms::Button());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblProcessado = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgAntes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDepois))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(162, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(614, 33);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Grupo II - Turma II - PAVIC LAB - UFAC - 2023";
			// 
			// lblFiltro
			// 
			this->lblFiltro->AutoSize = true;
			this->lblFiltro->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFiltro->Location = System::Drawing::Point(19, 94);
			this->lblFiltro->Name = L"lblFiltro";
			this->lblFiltro->Size = System::Drawing::Size(61, 19);
			this->lblFiltro->TabIndex = 1;
			this->lblFiltro->Text = L"Filtro :";
			// 
			// lblProcessamento
			// 
			this->lblProcessamento->AutoSize = true;
			this->lblProcessamento->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProcessamento->Location = System::Drawing::Point(16, 152);
			this->lblProcessamento->Name = L"lblProcessamento";
			this->lblProcessamento->Size = System::Drawing::Size(142, 19);
			this->lblProcessamento->TabIndex = 2;
			this->lblProcessamento->Text = L"Processamento :";
			// 
			// cmbFiltro
			// 
			this->cmbFiltro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CONVERTER PARA VERMELHO ", L"NEGATIVO", L"RGB TO GRAYSCALE" });
			this->cmbFiltro->Location = System::Drawing::Point(23, 114);
			this->cmbFiltro->Name = L"cmbFiltro";
			this->cmbFiltro->Size = System::Drawing::Size(597, 24);
			this->cmbFiltro->TabIndex = 3;
			// 
			// cmbProcessamento
			// 
			this->cmbProcessamento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbProcessamento->FormattingEnabled = true;
			this->cmbProcessamento->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CPU", L"GPU", L"GPU MULTITHREAD" });
			this->cmbProcessamento->Location = System::Drawing::Point(20, 174);
			this->cmbProcessamento->Name = L"cmbProcessamento";
			this->cmbProcessamento->Size = System::Drawing::Size(597, 24);
			this->cmbProcessamento->TabIndex = 4;
			this->cmbProcessamento->Tag = L"";
			// 
			// lblSubTitulo
			// 
			this->lblSubTitulo->AutoSize = true;
			this->lblSubTitulo->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubTitulo->Location = System::Drawing::Point(304, 63);
			this->lblSubTitulo->Name = L"lblSubTitulo";
			this->lblSubTitulo->Size = System::Drawing::Size(306, 27);
			this->lblSubTitulo->TabIndex = 5;
			this->lblSubTitulo->Text = L"Processamento de Imagem";
			// 
			// imgAntes
			// 
			this->imgAntes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgAntes->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgAntes.ErrorImage")));
			this->imgAntes->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgAntes.InitialImage")));
			this->imgAntes->Location = System::Drawing::Point(20, 248);
			this->imgAntes->Name = L"imgAntes";
			this->imgAntes->Size = System::Drawing::Size(350, 350);
			this->imgAntes->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgAntes->TabIndex = 6;
			this->imgAntes->TabStop = false;
			// 
			// imgDepois
			// 
			this->imgDepois->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgDepois->Location = System::Drawing::Point(801, 248);
			this->imgDepois->Name = L"imgDepois";
			this->imgDepois->Size = System::Drawing::Size(350, 350);
			this->imgDepois->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->imgDepois->TabIndex = 7;
			this->imgDepois->TabStop = false;
			// 
			// lblAntes
			// 
			this->lblAntes->AutoSize = true;
			this->lblAntes->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAntes->Location = System::Drawing::Point(20, 221);
			this->lblAntes->Name = L"lblAntes";
			this->lblAntes->Size = System::Drawing::Size(65, 19);
			this->lblAntes->TabIndex = 8;
			this->lblAntes->Text = L"Antes :";
			// 
			// lblDepois
			// 
			this->lblDepois->AutoSize = true;
			this->lblDepois->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDepois->Location = System::Drawing::Point(797, 221);
			this->lblDepois->Name = L"lblDepois";
			this->lblDepois->Size = System::Drawing::Size(74, 19);
			this->lblDepois->TabIndex = 9;
			this->lblDepois->Text = L"Depois :";
			// 
			// lblDescTempo
			// 
			this->lblDescTempo->AutoSize = true;
			this->lblDescTempo->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescTempo->Location = System::Drawing::Point(19, 612);
			this->lblDescTempo->Name = L"lblDescTempo";
			this->lblDescTempo->Size = System::Drawing::Size(392, 27);
			this->lblDescTempo->TabIndex = 11;
			this->lblDescTempo->Text = L"Tempo de execução em segundos:";
			// 
			// lblTempo
			// 
			this->lblTempo->AutoSize = true;
			this->lblTempo->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTempo->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lblTempo->Location = System::Drawing::Point(417, 612);
			this->lblTempo->Name = L"lblTempo";
			this->lblTempo->Size = System::Drawing::Size(44, 27);
			this->lblTempo->TabIndex = 12;
			this->lblTempo->Text = L"0.0";
			// 
			// btnExecutar
			// 
			this->btnExecutar->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecutar->Location = System::Drawing::Point(988, 612);
			this->btnExecutar->Name = L"btnExecutar";
			this->btnExecutar->Size = System::Drawing::Size(163, 51);
			this->btnExecutar->TabIndex = 13;
			this->btnExecutar->Text = L"Executar";
			this->btnExecutar->UseVisualStyleBackColor = true;
			this->btnExecutar->Click += gcnew System::EventHandler(this, &frmPrincipal::btnExecutar_Click);
			// 
			// lblMensagem
			// 
			this->lblMensagem->AutoSize = true;
			this->lblMensagem->ForeColor = System::Drawing::Color::IndianRed;
			this->lblMensagem->Location = System::Drawing::Point(24, 654);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(16, 16);
			this->lblMensagem->TabIndex = 14;
			this->lblMensagem->Text = L"...";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(407, 248);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 350);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &frmPrincipal::pictureBox1_Click);
			// 
			// lblProcessado
			// 
			this->lblProcessado->AutoSize = true;
			this->lblProcessado->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProcessado->Location = System::Drawing::Point(403, 221);
			this->lblProcessado->Name = L"lblProcessado";
			this->lblProcessado->Size = System::Drawing::Size(113, 19);
			this->lblProcessado->TabIndex = 16;
			this->lblProcessado->Text = L"Processado :";
			// 
			// frmPrincipal
			// 
			this->ClientSize = System::Drawing::Size(1174, 689);
			this->Controls->Add(this->lblProcessado);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->btnExecutar);
			this->Controls->Add(this->lblTempo);
			this->Controls->Add(this->lblDescTempo);
			this->Controls->Add(this->lblDepois);
			this->Controls->Add(this->lblAntes);
			this->Controls->Add(this->imgDepois);
			this->Controls->Add(this->imgAntes);
			this->Controls->Add(this->lblSubTitulo);
			this->Controls->Add(this->cmbProcessamento);
			this->Controls->Add(this->cmbFiltro);
			this->Controls->Add(this->lblProcessamento);
			this->Controls->Add(this->lblFiltro);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgAntes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDepois))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lblTempo->Text = "0";
	    cmbFiltro->SelectedIndex = 1;
		cmbProcessamento->SelectedIndex = 1;
		imgAntes->Image = Image::FromFile(L"C:\\Users\\Antonino\\ProjetoC\\MeuFormulario\\images\\In\\GatoProgramador50.jpg");
		this->imgAntes->Size = System::Drawing::Size(350, 350);
	}

	private: System::Void btnExecutar_Click(System::Object^ sender, System::EventArgs^ e) {
		int itemFiltro, itemProcessamento;
		this->lblMensagem->Text = "Você selecionou o Filtro " + cmbFiltro->SelectedItem + " e Processamento " + cmbProcessamento->SelectedItem;
		
		itemFiltro = cmbFiltro->SelectedIndex;
		itemProcessamento = cmbProcessamento->SelectedIndex;

		chrono::time_point<chrono::system_clock> start, end;
		start = chrono::system_clock::now();

		if (itemFiltro == 1){
			// FILTRO: NEGATIVO
			for (int i = 0; i < 500; i++) {
				cout << i << "\n";
			}
			
		}
		else if (itemFiltro == 2) {
			// FILTRO: RGB TO GRAYSCALE
			for (int i = 0; i < 5000; i++) {
				cout << i << "\n";
			}
		}
		else {
			// FILTRO: CONVERTER PARA VERMELHO
			for (int i = 0; i < 50000; i++) {
				cout << i << "\n";
			}
		}

		end = chrono::system_clock::now();
		std::chrono::duration<double> duracao = end - start;
		this->lblTempo->Text = duracao.count().ToString();

	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
