#pragma once

namespace CLRDLLProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CLR_DLL_Form
	/// </summary>
	public ref class CLR_DLL_Form : public System::Windows::Forms::Form
	{
	public:
		CLR_DLL_Form(void)
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
		~CLR_DLL_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rEDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ greenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rEDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->editToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1389, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem1,
					this->settingsToolStripMenuItem
			});
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->openToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(145, 26);
			this->openToolStripMenuItem1->Text = L"Open";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rEDToolStripMenuItem,
					this->greenToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(145, 26);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// rEDToolStripMenuItem
			// 
			this->rEDToolStripMenuItem->Name = L"rEDToolStripMenuItem";
			this->rEDToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			this->rEDToolStripMenuItem->Text = L"RED";
			this->rEDToolStripMenuItem->Click += gcnew System::EventHandler(this, &CLR_DLL_Form::rEDToolStripMenuItem_Click);
			// 
			// greenToolStripMenuItem
			// 
			this->greenToolStripMenuItem->Name = L"greenToolStripMenuItem";
			this->greenToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			this->greenToolStripMenuItem->Text = L"Green";
			this->greenToolStripMenuItem->Click += gcnew System::EventHandler(this, &CLR_DLL_Form::greenToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->closeToolStripMenuItem->Text = L"Close";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newToolStripMenuItem,
					this->deleteToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(211, 80);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &CLR_DLL_Form::newToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// CLR_DLL_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1389, 462);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CLR_DLL_Form";
			this->Text = L"CLR_DLL_Form";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CLR_DLL_Form::CLR_DLL_Form_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rEDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Red;
	}
private: System::Void greenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Green;
}
private: System::Void CLR_DLL_Form_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Right) {
		contextMenuStrip1->Show(MousePosition);
	}
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CLRDLL::Class1 eva;
	eva.sum(2, 5);
}
};
}
