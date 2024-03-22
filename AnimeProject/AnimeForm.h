#pragma once
#include "KinoForm.h"
namespace AnimeProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum napravlenie
	{
		vehh,
		niz,
		levo,
		pravo
	};
	/// <summary>
	/// —водка дл€ AnimeForm
	/// </summary>
	public ref class AnimeForm : public System::Windows::Forms::Form
	{
	public:
		AnimeForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AnimeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Button^ btnStop;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Button^ btnVerh;
	private: System::Windows::Forms::Button^ btnLevo;
	private: System::Windows::Forms::Button^ btnNiz;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnPravo;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->btnVerh = (gcnew System::Windows::Forms::Button());
			this->btnLevo = (gcnew System::Windows::Forms::Button());
			this->btnNiz = (gcnew System::Windows::Forms::Button());
			this->btnPravo = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1552, 664);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(13, 683);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(214, 72);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &AnimeForm::btnStart_Click);
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(233, 683);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(214, 72);
			this->btnStop->TabIndex = 2;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &AnimeForm::btnStop_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &AnimeForm::timer1_Tick);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(1599, 94);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(56, 350);
			this->trackBar1->TabIndex = 3;
			// 
			// btnVerh
			// 
			this->btnVerh->Location = System::Drawing::Point(1702, 181);
			this->btnVerh->Name = L"btnVerh";
			this->btnVerh->Size = System::Drawing::Size(75, 75);
			this->btnVerh->TabIndex = 4;
			this->btnVerh->Text = L"button1";
			this->btnVerh->UseVisualStyleBackColor = true;
			this->btnVerh->Click += gcnew System::EventHandler(this, &AnimeForm::btnVerh_Click);
			// 
			// btnLevo
			// 
			this->btnLevo->Location = System::Drawing::Point(1621, 253);
			this->btnLevo->Name = L"btnLevo";
			this->btnLevo->Size = System::Drawing::Size(75, 75);
			this->btnLevo->TabIndex = 5;
			this->btnLevo->Text = L"button2";
			this->btnLevo->UseVisualStyleBackColor = true;
			this->btnLevo->Click += gcnew System::EventHandler(this, &AnimeForm::btnLevo_Click);
			// 
			// btnNiz
			// 
			this->btnNiz->Location = System::Drawing::Point(1702, 328);
			this->btnNiz->Name = L"btnNiz";
			this->btnNiz->Size = System::Drawing::Size(75, 75);
			this->btnNiz->TabIndex = 6;
			this->btnNiz->Text = L"button3";
			this->btnNiz->UseVisualStyleBackColor = true;
			this->btnNiz->Click += gcnew System::EventHandler(this, &AnimeForm::btnNiz_Click);
			// 
			// btnPravo
			// 
			this->btnPravo->Location = System::Drawing::Point(1783, 253);
			this->btnPravo->Name = L"btnPravo";
			this->btnPravo->Size = System::Drawing::Size(75, 75);
			this->btnPravo->TabIndex = 7;
			this->btnPravo->Text = L"button4";
			this->btnPravo->UseVisualStyleBackColor = true;
			this->btnPravo->Click += gcnew System::EventHandler(this, &AnimeForm::btnPravo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(548, 683);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 72);
			this->button1->TabIndex = 8;
			this->button1->Text = L"KINO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AnimeForm::button1_Click);
			// 
			// AnimeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1877, 767);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnPravo);
			this->Controls->Add(this->btnNiz);
			this->Controls->Add(this->btnLevo);
			this->Controls->Add(this->btnVerh);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AnimeForm";
			this->Text = L"AnimeForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Enabled = true;
	}
	private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Stop();
	}
	private: System::Void DravZvezda(Point zvezdaPosition) {
		Graphics^ eva = pictureBox1->CreateGraphics();
		int mashtab = trackBar1->Value;
		array<Point>^ mas = gcnew array<Point>(10) {
			Point(zvezdaPosition.X, zvezdaPosition.Y - (5 * mashtab)),
				Point(zvezdaPosition.X + mashtab, zvezdaPosition.Y - (1 * mashtab)),
				Point(zvezdaPosition.X + (mashtab * 5), zvezdaPosition.Y - (2 * mashtab)),
				Point(zvezdaPosition.X + (mashtab * 1), zvezdaPosition.Y + (2 * mashtab)),
				Point(zvezdaPosition.X + (mashtab * 4), zvezdaPosition.Y + (4 * mashtab)),
				Point(zvezdaPosition.X, zvezdaPosition.Y + (2 * mashtab)),
				Point(zvezdaPosition.X - (mashtab * 4), zvezdaPosition.Y + (4 * mashtab)),
				Point(zvezdaPosition.X - (mashtab * 1), zvezdaPosition.Y + (1 * mashtab)),
				Point(zvezdaPosition.X - (mashtab * 5), zvezdaPosition.Y - (2 * mashtab)),
				Point(zvezdaPosition.X - (mashtab * 1), zvezdaPosition.Y - (1 * mashtab))
		};
		Random rd;
		SolidBrush^ sb = gcnew SolidBrush(
			Color::FromArgb(
				rd.Next(255),
				rd.Next(255),
				rd.Next(255)

			)
		);
		eva->FillPolygon(sb, mas);

	}
		   napravlenie napr = napravlenie::pravo;
	private: System::Void PrintFrame() {
		Graphics^ eva = pictureBox1->CreateGraphics();
		static Point p(100, 100);

		switch (napr)
		{
		case AnimeProject::vehh:
			p.Y -= 5;
			break;
		case AnimeProject::niz:
			p.Y += 5;
			break;
		case AnimeProject::levo:
			p.X -= 5;
			break;
		case AnimeProject::pravo:
			p.X += 5;
			break;
		default:
			break;
		}

		eva->Clear(Color::AliceBlue);
		DravZvezda(p);


	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		PrintFrame();
	}
	private: System::Void btnVerh_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = napravlenie::vehh;
	}
	private: System::Void btnNiz_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = napravlenie::niz;
	}
	private: System::Void btnPravo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = napravlenie::pravo;
	}
	private: System::Void btnLevo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = napravlenie::levo;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		KinoForm^ eva = gcnew KinoForm();
		this->Hide();
		eva->ShowDialog();
		this->Show();
	}
	};
}
