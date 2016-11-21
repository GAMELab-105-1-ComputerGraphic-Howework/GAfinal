#pragma once
#include <iostream>
#include "myCV.h"
#include "dotNetString.h"

using namespace std;

myCV mycv;

namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openImageDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveImageDialog;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  showImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  methodToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  rGBtoLabToolStripMenuItem;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;








	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->methodToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBtoLabToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openImageDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveImageDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->methodToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(344, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->UseWaitCursor = true;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->loadToolStripMenuItem,
					this->saveToolStripMenuItem, this->showImageToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"file";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->loadToolStripMenuItem->Text = L"load";
			this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// showImageToolStripMenuItem
			// 
			this->showImageToolStripMenuItem->Name = L"showImageToolStripMenuItem";
			this->showImageToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->showImageToolStripMenuItem->Text = L"show image";
			this->showImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showImageToolStripMenuItem_Click);
			// 
			// methodToolStripMenuItem
			// 
			this->methodToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rGBtoLabToolStripMenuItem });
			this->methodToolStripMenuItem->Name = L"methodToolStripMenuItem";
			this->methodToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->methodToolStripMenuItem->Text = L"method";
			// 
			// rGBtoLabToolStripMenuItem
			// 
			this->rGBtoLabToolStripMenuItem->Name = L"rGBtoLabToolStripMenuItem";
			this->rGBtoLabToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->rGBtoLabToolStripMenuItem->Text = L"resize";
			this->rGBtoLabToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBtoLabToolStripMenuItem_Click);
			// 
			// openImageDialog
			// 
			this->openImageDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openImageDialog_FileOk);
			// 
			// saveImageDialog
			// 
			this->saveImageDialog->DefaultExt = L"png";
			this->saveImageDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveModelDialog_FileOk);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(151, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(22, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"輸入圖片編號";
			this->label1->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(344, 181);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"FinalProject";
			this->UseWaitCursor = true;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		openImageDialog->Filter = "Image (*.png)|*.png|Image (*.jpg)|*.jpg|All files (*.*)|*.*";
		openImageDialog->Multiselect = false;
		openImageDialog->ShowDialog();
		openImageDialog->RestoreDirectory = true;
	}

	private: System::Void openImageDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		std::string path;
		MarshalString(openImageDialog->FileName, path);
		cout << "load path: " << path << endl;
		mycv.loadFile(path);
		mycv.show();
	}

	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveImageDialog->Filter = "Image (*.png)|*.png|Image (*.jpg)|*.jpg";
		saveImageDialog->ShowDialog();
		saveImageDialog->RestoreDirectory = true;
	}

	private: System::Void saveModelDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		std::string path;
		MarshalString(saveImageDialog->FileName, path);
		std::string number;
		MarshalString(this->textBox1->Text, number);

		if (mycv.saveFile(path,stoi(number)))
			cout << "save path: " << path << endl;
	}

	private: System::Void showImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string number;
		MarshalString(this->textBox1->Text, number);
		mycv.show(stoi(number));
	}

	private: System::Void rGBtoLabToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		mycv.myresize();
	}

};
}
