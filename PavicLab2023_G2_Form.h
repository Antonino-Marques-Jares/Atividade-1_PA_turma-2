#include <msclr\marshal_cppstd.h>
#include <chrono>
#include "useCPU.cpp"
#include "useGPU.h"

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "include/stb_image.h"
#include "include/stb_image_write.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace std;
using namespace std::chrono;

namespace PavicLab2023_G2_Solution
{
public
	ref class PavicLab2023_G2_Form : public System::Windows::Forms::Form
	{
		// Construtor
	public:
		PavicLab2023_G2_Form(void)
		{
			InitializeComponent();
		}
		// Limpa os recursos que estão sendo usados.
	protected:
		~PavicLab2023_G2_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button ^ btloadimg;

	protected:
	private:
		System::Windows::Forms::Button ^ exit;

	private:
		System::Windows::Forms::PictureBox ^ Input_Image_Box;

	private:
		System::Windows::Forms::PictureBox ^ Output_Image_Box;

	private:
		System::Windows::Forms::Button ^ btnRun;

	private:
		System::Windows::Forms::ComboBox ^ cmbFiltro;

	private:
		System::Windows::Forms::ComboBox ^ cmbProcessamento;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Label ^ label7;

	private:
		System::Windows::Forms::Label ^ label5;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::Label ^ label8;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::Label ^ lblTempo;

	protected:
	private:
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PavicLab2023_G2_Form::typeid));
			this->btloadimg = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->Input_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			this->Output_Image_Box = (gcnew System::Windows::Forms::PictureBox());
			this->btnRun = (gcnew System::Windows::Forms::Button());
			this->cmbFiltro = (gcnew System::Windows::Forms::ComboBox());
			this->cmbProcessamento = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTempo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->Input_Image_Box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->Output_Image_Box))->BeginInit();
			this->SuspendLayout();
			//
			// btloadimg
			//
			resources->ApplyResources(this->btloadimg, L"btloadimg");
			this->btloadimg->Name = L"btloadimg";
			this->btloadimg->UseVisualStyleBackColor = true;
			this->btloadimg->Click += gcnew System::EventHandler(this, &PavicLab2023_G2_Form::load_Click);
			//
			// exit
			//
			this->exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
																															 static_cast<System::Int32>(static_cast<System::Byte>(128)));
			resources->ApplyResources(this->exit, L"exit");
			this->exit->Name = L"exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &PavicLab2023_G2_Form::exit_Click);
			//
			// Input_Image_Box
			//
			this->Input_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Input_Image_Box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->Input_Image_Box, L"Input_Image_Box");
			this->Input_Image_Box->Name = L"Input_Image_Box";
			this->Input_Image_Box->TabStop = false;
			//
			// Output_Image_Box
			//
			this->Output_Image_Box->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Output_Image_Box->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->Output_Image_Box, L"Output_Image_Box");
			this->Output_Image_Box->Name = L"Output_Image_Box";
			this->Output_Image_Box->TabStop = false;
			//
			// btnRun
			//
			this->btnRun->BackColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->btnRun, L"btnRun");
			this->btnRun->Name = L"btnRun";
			this->btnRun->UseVisualStyleBackColor = false;
			this->btnRun->Click += gcnew System::EventHandler(this, &PavicLab2023_G2_Form::btnRun_Click);
			//
			// cmbFiltro
			//
			this->cmbFiltro->FormattingEnabled = true;
			this->cmbFiltro->Items->AddRange(gcnew cli::array<System::Object ^>(3){
					resources->GetString(L"cmbFiltro.Items"), resources->GetString(L"cmbFiltro.Items1"),
					resources->GetString(L"cmbFiltro.Items2")});
			resources->ApplyResources(this->cmbFiltro, L"cmbFiltro");
			this->cmbFiltro->Name = L"cmbFiltro";
			//
			// cmbProcessamento
			//
			this->cmbProcessamento->FormattingEnabled = true;
			this->cmbProcessamento->Items->AddRange(gcnew cli::array<System::Object ^>(2){
					resources->GetString(L"cmbProcessamento.Items"),
					resources->GetString(L"cmbProcessamento.Items1")});
			resources->ApplyResources(this->cmbProcessamento, L"cmbProcessamento");
			this->cmbProcessamento->Name = L"cmbProcessamento";
			//
			// label3
			//
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			//
			// label7
			//
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			//
			// label5
			//
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			//
			// label4
			//
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			//
			// label8
			//
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			//
			// label1
			//
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Name = L"label1";
			//
			// lblTempo
			//
			resources->ApplyResources(this->lblTempo, L"lblTempo");
			this->lblTempo->ForeColor = System::Drawing::SystemColors::Highlight;
			this->lblTempo->Name = L"lblTempo";
			//
			// PavicLab2023_G2_Form
			//
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->lblTempo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbProcessamento);
			this->Controls->Add(this->cmbFiltro);
			this->Controls->Add(this->btnRun);
			this->Controls->Add(this->Output_Image_Box);
			this->Controls->Add(this->Input_Image_Box);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->btloadimg);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"PavicLab2023_G2_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->Input_Image_Box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->Output_Image_Box))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:
		void load_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			OpenFileDialog ^ ofd = gcnew OpenFileDialog();
			if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				Input_Image_Box->ImageLocation = "";
				Output_Image_Box->Image = nullptr;
				Input_Image_Box->ImageLocation = ofd->FileName;
			}
		}

		void exit_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			Application::Exit();
		}

		void btnRun_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (Input_Image_Box->Image == nullptr)
			{
				MessageBox::Show("Voce nao selecionou a IMAGEM. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			useGPU obj;
			System::String ^ file = Input_Image_Box->ImageLocation;
			std::string convertedPath = msclr::interop::marshal_as<std::string>(file);
			int width, height, channels, filterOption, processingOption;
			const char *path = convertedPath.c_str();
			unsigned char *img = stbi_load(path, &width, &height, &channels, 4);

			auto start = chrono::system_clock::now();

			filterOption = cmbFiltro->SelectedIndex;
			processingOption = cmbProcessamento->SelectedIndex;

			if (filterOption < 0)
			{
				MessageBox::Show("Voce nao selecionou um FILTRO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (processingOption < 0)
			{
				MessageBox::Show("Voce nao selecionou o PROCESSAMENTO. Tente novamente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				if (filterOption == 0)
				{
					if (processingOption == 0)
					{
						ConvertImageToRed(img, width, height);
					}
					else if (processingOption == 1)
					{
						obj.ConvertImageToRedGpu(img, width, height);
					}
				}
				else if (filterOption == 1)
				{
					if (processingOption == 0)
					{
						ConvertImageToNegative(img, width, height);
					}
					else if (processingOption == 1)
					{
						obj.ConvertImageToNegativeGpu(img, width, height);
					}
				}
				else if (filterOption == 2)
				{
					if (processingOption == 0)
					{
						ConvertImageToGray(img, width, height);
					}
					else if (processingOption == 1)
					{
						obj.ConvertImageToGrayGpu(img, width, height);
					}
				}
			}

			auto end = chrono::system_clock::now();
			std::chrono::duration<double> duration = end - start;
			this->lblTempo->Text = duration.count().ToString();

			stbi_write_png("images/output.jpg", width, height, 4, img, 4 * width);
			Output_Image_Box->ImageLocation = "images/output.jpg";
			stbi_image_free(img);
		}
	};
}
