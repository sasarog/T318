#pragma once

namespace PaintingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ PaintingForm
	/// </summary>
	public ref class PaintingForm : public System::Windows::Forms::Form
	{
	public:
		PaintingForm(void)
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
		~PaintingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ btnHousePaint;
	private: System::Windows::Forms::Timer^ timer1;
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
			this->btnHousePaint = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1225, 632);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnHousePaint
			// 
			this->btnHousePaint->Location = System::Drawing::Point(12, 569);
			this->btnHousePaint->Name = L"btnHousePaint";
			this->btnHousePaint->Size = System::Drawing::Size(183, 75);
			this->btnHousePaint->TabIndex = 1;
			this->btnHousePaint->Text = L"HOUSE";
			this->btnHousePaint->UseVisualStyleBackColor = true;
			this->btnHousePaint->Click += gcnew System::EventHandler(this, &PaintingForm::btnHousePaint_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 150;
			this->timer1->Tick += gcnew System::EventHandler(this, &PaintingForm::timer1_Tick);
			// 
			// PaintingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1331, 656);
			this->Controls->Add(this->btnHousePaint);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PaintingForm";
			this->Text = L"PaintingForm";
			this->Load += gcnew System::EventHandler(this, &PaintingForm::PaintingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int posLine;
		void paintKartinka() {
			Graphics^ gr = pictureBox1->CreateGraphics();
			gr->Clear(Color::Black);
			int masSize = 500;
			array<PointF>^ mas = gcnew array<PointF>(masSize);
			Random r;
			for (int i = 0; i < masSize; i++)
			{
				mas[i].X = r.Next(pictureBox1->Width);
				mas[i].Y = r.Next(pictureBox1->Height);
			}
			Pen^ p = gcnew Pen(Color::White, 2);
			gr->DrawLines(p, mas);
			gr->DrawLine(p, posLine, 0, 100, 100);

		}
	private: System::Void btnHousePaint_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		timer1->Enabled = true;
		paintKartinka();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		posLine++;
		paintKartinka();
	}
	private: System::Void PaintingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		posLine = 0;
	}
	};
}
