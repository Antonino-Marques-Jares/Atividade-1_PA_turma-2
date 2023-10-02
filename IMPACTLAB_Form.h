#pragma once
#include <string>
#include <iostream>
#include <chrono>


namespace IMPACTLABGUI2023 {


	extern "C" {
		//Load Images
		#define STB_IMAGE_IMPLEMENTATION
		#define STB_IMAGE_WRITE_IMPLEMENTATION
		#include "include/stb_image.h"
		#include "include/stb_image_write.h"
	}
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for IMPACTLAB_Form
	/// </summary>
	public ref class IMPACTLAB_Form : public System::Windows::Forms::Form
	{
		public:
			IMPACTLAB_Form(void)
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
			~IMPACTLAB_Form()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ btopen;
		protected:

		private: System::Windows::Forms::Button^ btExit;
		private: System::Windows::Forms::PictureBox^ Input_Image_Box;




		private: System::Windows::Forms::PictureBox^ Output_Image_Box;
		private: System::Windows::Forms::ComboBox^ cmbFiltro;
		private: System::Windows::Forms::ComboBox^ cmbProcessamento;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;

		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Button^ btnExecutar;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ lblMensagem;
		private: System::Windows::Forms::Label^ lblTempo;

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
			/// 
		
			/// 
			void InitializeComponent(void)
			{
				this->btopen = (gcnew System::Windows::Forms::Button());
				this->btExit = (gcnew System::Windows::Forms::Button());
				this->Input_Image_Box = (gcnew System::Windows::Forms::PictureBox());
				this->Output_Image_Box = (gcnew System::Windows::Forms::PictureBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->cmbFiltro = (gcnew System::Windows::Forms::ComboBox());
				this->cmbProcessamento = (gcnew System::Windows::Forms::ComboBox());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->btnExecutar = (gcnew System::Windows::Forms::Button());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->lblMensagem = (gcnew System::Windows::Forms::Label());
				this->lblTempo = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->BeginInit();
				this->SuspendLayout();
				// 
				// btopen
				// 
				this->btopen->Location = System::Drawing::Point(21, 125);
				this->btopen->Margin = System::Windows::Forms::Padding(4);
				this->btopen->Name = L"btopen";
				this->btopen->Size = System::Drawing::Size(101, 61);
				this->btopen->TabIndex = 0;
				this->btopen->Text = L"Open";
				this->btopen->UseVisualStyleBackColor = true;
				this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
				// 
				// btExit
				// 
				this->btExit->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btExit->Location = System::Drawing::Point(780, 707);
				this->btExit->Margin = System::Windows::Forms::Padding(4);
				this->btExit->Name = L"btExit";
				this->btExit->Size = System::Drawing::Size(170, 54);
				this->btExit->TabIndex = 2;
				this->btExit->Text = L"Exit";
				this->btExit->UseVisualStyleBackColor = true;
				this->btExit->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btExit_Click);
				// 
				// Input_Image_Box
				// 
				this->Input_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
				this->Input_Image_Box->Location = System::Drawing::Point(15, 281);
				this->Input_Image_Box->Margin = System::Windows::Forms::Padding(4);
				this->Input_Image_Box->MaximumSize = System::Drawing::Size(646, 482);
				this->Input_Image_Box->Name = L"Input_Image_Box";
				this->Input_Image_Box->Size = System::Drawing::Size(406, 369);
				this->Input_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
				this->Input_Image_Box->TabIndex = 4;
				this->Input_Image_Box->TabStop = false;
				// 
				// Output_Image_Box
				// 
				this->Output_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
				this->Output_Image_Box->Location = System::Drawing::Point(540, 281);
				this->Output_Image_Box->Margin = System::Windows::Forms::Padding(4);
				this->Output_Image_Box->MaximumSize = System::Drawing::Size(646, 482);
				this->Output_Image_Box->Name = L"Output_Image_Box";
				this->Output_Image_Box->Size = System::Drawing::Size(406, 369);
				this->Output_Image_Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
				this->Output_Image_Box->TabIndex = 24;
				this->Output_Image_Box->TabStop = false;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(281, 18);
				this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(372, 24);
				this->label1->TabIndex = 25;
				this->label1->Text = L"Grupo II - Turma II - PAVIC LAB - UFAC";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->Location = System::Drawing::Point(331, 42);
				this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(271, 24);
				this->label2->TabIndex = 26;
				this->label2->Text = L"Processamento de Imagens";
				// 
				// cmbFiltro
				// 
				this->cmbFiltro->FormattingEnabled = true;
				this->cmbFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CONVERTER PARA VERMELHO ", L"NEGATIVO", L"RGB TO GRAYSCALE" });
				this->cmbFiltro->Location = System::Drawing::Point(540, 112);
				this->cmbFiltro->Margin = System::Windows::Forms::Padding(4);
				this->cmbFiltro->Name = L"cmbFiltro";
				this->cmbFiltro->Size = System::Drawing::Size(406, 32);
				this->cmbFiltro->TabIndex = 27;
				// 
				// cmbProcessamento
				// 
				this->cmbProcessamento->FormattingEnabled = true;
				this->cmbProcessamento->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CPU", L"GPU" });
				this->cmbProcessamento->Location = System::Drawing::Point(540, 191);
				this->cmbProcessamento->Margin = System::Windows::Forms::Padding(4);
				this->cmbProcessamento->Name = L"cmbProcessamento";
				this->cmbProcessamento->Size = System::Drawing::Size(406, 32);
				this->cmbProcessamento->TabIndex = 28;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->Location = System::Drawing::Point(536, 84);
				this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(66, 24);
				this->label3->TabIndex = 29;
				this->label3->Text = L"Filtro:";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->Location = System::Drawing::Point(536, 162);
				this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(164, 24);
				this->label4->TabIndex = 30;
				this->label4->Text = L"Processamento:";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->Location = System::Drawing::Point(11, 253);
				this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(71, 24);
				this->label5->TabIndex = 31;
				this->label5->Text = L"Antes:";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label7->Location = System::Drawing::Point(536, 253);
				this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(82, 24);
				this->label7->TabIndex = 33;
				this->label7->Text = L"Depois:";
				// 
				// btnExecutar
				// 
				this->btnExecutar->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnExecutar->Location = System::Drawing::Point(544, 709);
				this->btnExecutar->Margin = System::Windows::Forms::Padding(4);
				this->btnExecutar->Name = L"btnExecutar";
				this->btnExecutar->Size = System::Drawing::Size(187, 52);
				this->btnExecutar->TabIndex = 34;
				this->btnExecutar->Text = L"Executar";
				this->btnExecutar->UseVisualStyleBackColor = true;
				this->btnExecutar->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::button1_Click);
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->Location = System::Drawing::Point(9, 654);
				this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(493, 33);
				this->label8->TabIndex = 35;
				this->label8->Text = L"Tempo de execução em segundos :";
				// 
				// lblMensagem
				// 
				this->lblMensagem->AutoSize = true;
				this->lblMensagem->ForeColor = System::Drawing::Color::IndianRed;
				this->lblMensagem->Location = System::Drawing::Point(13, 693);
				this->lblMensagem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->lblMensagem->Name = L"lblMensagem";
				this->lblMensagem->Size = System::Drawing::Size(28, 24);
				this->lblMensagem->TabIndex = 36;
				this->lblMensagem->Text = L"...";
				// 
				// lblTempo
				// 
				this->lblTempo->AutoSize = true;
				this->lblTempo->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblTempo->ForeColor = System::Drawing::SystemColors::Highlight;
				this->lblTempo->Location = System::Drawing::Point(534, 654);
				this->lblTempo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->lblTempo->Name = L"lblTempo";
				this->lblTempo->Size = System::Drawing::Size(31, 33);
				this->lblTempo->TabIndex = 37;
				this->lblTempo->Text = L"0";
				// 
				// IMPACTLAB_Form
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(981, 773);
				this->Controls->Add(this->lblTempo);
				this->Controls->Add(this->lblMensagem);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->btnExecutar);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->cmbProcessamento);
				this->Controls->Add(this->cmbFiltro);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->Output_Image_Box);
				this->Controls->Add(this->Input_Image_Box);
				this->Controls->Add(this->btExit);
				this->Controls->Add(this->btopen);
				this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->Margin = System::Windows::Forms::Padding(4);
				this->Name = L"IMPACTLAB_Form";
				this->Text = L"IMPACTLAB PROJECT 2023";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Input_Image_Box))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Output_Image_Box))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
			#pragma endregion
			private: System::Void btopen_Click(System::Object^ sender, System::EventArgs^ e) {

				Input_Image_Box->ImageLocation = "";
				//Output_Image_Box_01->Image = nullptr;
				Output_Image_Box->Image = nullptr;
				OpenFileDialog^ ofd = gcnew OpenFileDialog();

				if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					Input_Image_Box->ImageLocation = ofd->FileName;
				}


			}

			private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
				Application::Exit();
			}

			

			private: System::Void ImageToBlue_Click(System::Object^ sender, System::EventArgs^ e) {


			if (Input_Image_Box->Image != nullptr) {
				Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

				for (int y = 0; y < bmp->Height; y++) {
					for (int x = 0; x < bmp->Width; x++) {
						Color pixelColor = bmp->GetPixel(x, y);
						Color newColor = Color::FromArgb(pixelColor.A, 0, 0, pixelColor.B);
						bmp->SetPixel(x, y, newColor);
					}
				}

				Output_Image_Box->Image = bmp;
			}
			else {
				MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}

			private: System::Void btcopyimage_Click(System::Object^ sender, System::EventArgs^ e) {

			/*if (Input_Image_Box->Image != nullptr) {
				Output_Image_Box_01->Image = Input_Image_Box->Image;
			}
			else {
				MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}*/
		}

			private: System::Void btcopyimageSTBI_Click(System::Object^ sender, System::EventArgs^ e) {

			if (Input_Image_Box->Image != nullptr) {
				// Salve a imagem carregada em um arquivo temporário
				String^ tempFilePath = "temp_image.jpg";
				Input_Image_Box->Image->Save(tempFilePath, System::Drawing::Imaging::ImageFormat::Jpeg);

				// Carregue a imagem com stbi
				int width, height, channels;
				unsigned char* img = stbi_load("temp_image.jpg", &width, &height, &channels, 0);

				if (img != nullptr) {
					// Altere os canais vermelho e verde para zero
					for (int i = 0; i < width * height * channels; i += channels) {
						img[i] = 0;     // Canal vermelho
						img[i + 1] = 0;   // Canal verde
					}

					// Salve a imagem modificada
					stbi_write_jpg("blue_image.jpg", width, height, channels, img, 100);

					// Libere a memória da imagem original
					stbi_image_free(img);

					// Carregue a imagem modificada na Output_Image_Box
					Output_Image_Box->Image = Image::FromFile("blue_image.jpg");

					// Delete the temporary file
					System::IO::File::Delete(tempFilePath);
				}
				else {
					MessageBox::Show("Failed to load image with stbi", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("No image loaded in the input image box", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

			private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				

				int itemFiltro, itemProcessamento;
				this->lblMensagem->Text = "Você selecionou o Filtro " + cmbFiltro->SelectedItem + " e Processamento " + cmbProcessamento->SelectedItem;

				itemFiltro = cmbFiltro->SelectedIndex;
				itemProcessamento = cmbProcessamento->SelectedIndex;

				chrono:: time_point <chrono::system_clock> start, end;
				start = chrono::system_clock::now();

				if (itemFiltro == 0) {
					//FILTRO: CONVERTER PARA VERMELHO 
					if (itemProcessamento == 0) {
						//CPU
						if (Input_Image_Box->Image != nullptr) {
							Bitmap^ bmp = dynamic_cast<Bitmap^>(Input_Image_Box->Image->Clone());

							for (int y = 0; y < bmp->Height; y++) {
								for (int x = 0; x < bmp->Width; x++) {
									Color pixelColor = bmp->GetPixel(x, y);
									Color newColor = Color::FromArgb(pixelColor.A, 0, 0, pixelColor.B);
									bmp->SetPixel(x, y, newColor);
								}
							}

							Output_Image_Box->Image = bmp;
						}
					}
					else if (itemProcessamento == 1) {
						//GPU

					}
					else {
						MessageBox::Show("Você não selecionou o PROCESSAMENTO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					
				}
				else if (itemFiltro == 1) {
					// FILTRO: NEGATIVO
					if (itemProcessamento == 0) {
						//CPU
					}
					else if (itemProcessamento == 1) {
						//GPU

					}
					else {
						MessageBox::Show("Você não selecionou o PROCESSAMENTO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else if (itemFiltro == 2) {
					// FILTRO: RGB TO GRAYSCALE
					if (itemProcessamento == 0) {
						//CPU
					}
					else if (itemProcessamento == 1) {
						//GPU

					}
					else {
						MessageBox::Show("Você não selecionou o PROCESSAMENTO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					MessageBox::Show("Você não selecionou um FILTRO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				end = chrono::system_clock::now();
				std::chrono::duration<double> duracao = end - start;
				this->lblTempo->Text = duracao.count().ToString();
			};

	};

}
