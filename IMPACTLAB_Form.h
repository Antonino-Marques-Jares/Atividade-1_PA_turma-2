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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IMPACTLAB_Form::typeid));
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
				resources->ApplyResources(this->btopen, L"btopen");
				this->btopen->Name = L"btopen";
				this->btopen->UseVisualStyleBackColor = true;
				this->btopen->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btopen_Click);
				// 
				// btExit
				// 
				resources->ApplyResources(this->btExit, L"btExit");
				this->btExit->Name = L"btExit";
				this->btExit->UseVisualStyleBackColor = true;
				this->btExit->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::btExit_Click);
				// 
				// Input_Image_Box
				// 
				this->Input_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
				this->Input_Image_Box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				resources->ApplyResources(this->Input_Image_Box, L"Input_Image_Box");
				this->Input_Image_Box->Name = L"Input_Image_Box";
				this->Input_Image_Box->TabStop = false;
				this->Input_Image_Box->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::Input_Image_Box_Click);
				// 
				// Output_Image_Box
				// 
				this->Output_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
				this->Output_Image_Box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				resources->ApplyResources(this->Output_Image_Box, L"Output_Image_Box");
				this->Output_Image_Box->Name = L"Output_Image_Box";
				this->Output_Image_Box->TabStop = false;
				// 
				// label1
				// 
				resources->ApplyResources(this->label1, L"label1");
				this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
				this->label1->Name = L"label1";
				this->label1->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::label1_Click);
				// 
				// label2
				// 
				resources->ApplyResources(this->label2, L"label2");
				this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
				this->label2->Name = L"label2";
				this->label2->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::label2_Click);
				// 
				// cmbFiltro
				// 
				resources->ApplyResources(this->cmbFiltro, L"cmbFiltro");
				this->cmbFiltro->FormattingEnabled = true;
				this->cmbFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
					resources->GetString(L"cmbFiltro.Items"), resources->GetString(L"cmbFiltro.Items1"),
						resources->GetString(L"cmbFiltro.Items2")
				});
				this->cmbFiltro->Name = L"cmbFiltro";
				// 
				// cmbProcessamento
				// 
				resources->ApplyResources(this->cmbProcessamento, L"cmbProcessamento");
				this->cmbProcessamento->FormattingEnabled = true;
				this->cmbProcessamento->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
					resources->GetString(L"cmbProcessamento.Items"),
						resources->GetString(L"cmbProcessamento.Items1")
				});
				this->cmbProcessamento->Name = L"cmbProcessamento";
				// 
				// label3
				// 
				resources->ApplyResources(this->label3, L"label3");
				this->label3->Name = L"label3";
				// 
				// label4
				// 
				resources->ApplyResources(this->label4, L"label4");
				this->label4->Name = L"label4";
				// 
				// label5
				// 
				resources->ApplyResources(this->label5, L"label5");
				this->label5->Name = L"label5";
				// 
				// label7
				// 
				resources->ApplyResources(this->label7, L"label7");
				this->label7->Name = L"label7";
				// 
				// btnExecutar
				// 
				resources->ApplyResources(this->btnExecutar, L"btnExecutar");
				this->btnExecutar->Name = L"btnExecutar";
				this->btnExecutar->UseVisualStyleBackColor = true;
				this->btnExecutar->Click += gcnew System::EventHandler(this, &IMPACTLAB_Form::button1_Click);
				// 
				// label8
				// 
				resources->ApplyResources(this->label8, L"label8");
				this->label8->Name = L"label8";
				// 
				// lblMensagem
				// 
				resources->ApplyResources(this->lblMensagem, L"lblMensagem");
				this->lblMensagem->ForeColor = System::Drawing::Color::IndianRed;
				this->lblMensagem->Name = L"lblMensagem";
				// 
				// lblTempo
				// 
				resources->ApplyResources(this->lblTempo, L"lblTempo");
				this->lblTempo->ForeColor = System::Drawing::SystemColors::Highlight;
				this->lblTempo->Name = L"lblTempo";
				// 
				// IMPACTLAB_Form
				// 
				resources->ApplyResources(this, L"$this");
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::ButtonFace;
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
				this->ForeColor = System::Drawing::Color::Black;
				this->Name = L"IMPACTLAB_Form";
				this->Load += gcnew System::EventHandler(this, &IMPACTLAB_Form::IMPACTLAB_Form_Load);
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

	private: System::Void IMPACTLAB_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Input_Image_Box_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
