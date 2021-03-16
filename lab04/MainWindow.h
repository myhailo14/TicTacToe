#pragma once
#include <cstdlib>

namespace lab04 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ gameField;



	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::RadioButton^ manFirst;
	private: System::Windows::Forms::RadioButton^ aiFirst;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ loadingTimer;

	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ hardLevelComBox;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column2;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ restartButton;






















	private: System::ComponentModel::IContainer^ components;










	protected:




	protected:







	protected:





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->gameField = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->manFirst = (gcnew System::Windows::Forms::RadioButton());
			this->aiFirst = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->loadingTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->hardLevelComBox = (gcnew System::Windows::Forms::ComboBox());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->restartButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameField))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gameField
			// 
			this->gameField->BackgroundColor = System::Drawing::Color::LimeGreen;
			this->gameField->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gameField->ColumnHeadersVisible = false;
			this->gameField->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->gameField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gameField->Enabled = false;
			this->gameField->Location = System::Drawing::Point(28, 12);
			this->gameField->MultiSelect = false;
			this->gameField->Name = L"gameField";
			this->gameField->ReadOnly = true;
			this->gameField->RowHeadersVisible = false;
			this->gameField->RowTemplate->Height = 60;
			this->gameField->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->gameField->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->gameField->Size = System::Drawing::Size(183, 183);
			this->gameField->TabIndex = 0;
			this->gameField->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::gameField_CellContentClick);
			// 
			// Column1
			// 
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle10;
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle11;
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column2->Width = 60;
			// 
			// Column3
			// 
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle12;
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column3->Width = 60;
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::Transparent;
			this->startButton->CausesValidation = false;
			this->startButton->FlatAppearance->BorderSize = 0;
			this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(59, 220);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(129, 39);
			this->startButton->TabIndex = 1;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MainWindow::startButton_Click);
			// 
			// manFirst
			// 
			this->manFirst->AutoSize = true;
			this->manFirst->BackColor = System::Drawing::Color::Transparent;
			this->manFirst->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlText;
			this->manFirst->Font = (gcnew System::Drawing::Font(L"Segoe Script", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->manFirst->Location = System::Drawing::Point(45, 199);
			this->manFirst->Name = L"manFirst";
			this->manFirst->Size = System::Drawing::Size(78, 21);
			this->manFirst->TabIndex = 2;
			this->manFirst->TabStop = true;
			this->manFirst->Text = L"You First";
			this->manFirst->UseVisualStyleBackColor = false;
			// 
			// aiFirst
			// 
			this->aiFirst->AutoSize = true;
			this->aiFirst->BackColor = System::Drawing::Color::Transparent;
			this->aiFirst->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlText;
			this->aiFirst->Font = (gcnew System::Drawing::Font(L"Segoe Script", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aiFirst->Location = System::Drawing::Point(129, 199);
			this->aiFirst->Name = L"aiFirst";
			this->aiFirst->Size = System::Drawing::Size(69, 21);
			this->aiFirst->TabIndex = 3;
			this->aiFirst->TabStop = true;
			this->aiFirst->Text = L"AI First";
			this->aiFirst->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(10, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(223, 335);
			this->panel1->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10));
			this->label6->Location = System::Drawing::Point(31, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 44);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Created by \r\nVovkanych Mykhailo";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(40, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 64);
			this->label3->TabIndex = 4;
			this->label3->Text = L"X|  |O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 64);
			this->label1->TabIndex = 3;
			this->label1->Text = L"  |O|X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(40, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 64);
			this->label2->TabIndex = 2;
			this->label2->Text = L"X|O|";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 235);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(183, 23);
			this->progressBar1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(40, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 64);
			this->label4->TabIndex = 5;
			this->label4->Text = L"_______";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(40, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 64);
			this->label5->TabIndex = 6;
			this->label5->Text = L"_______";
			// 
			// loadingTimer
			// 
			this->loadingTimer->Enabled = true;
			this->loadingTimer->Interval = 20;
			this->loadingTimer->Tick += gcnew System::EventHandler(this, &MainWindow::loadingTimer_Tick);
			// 
			// hardLevelComBox
			// 
			this->hardLevelComBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->hardLevelComBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hardLevelComBox->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13));
			this->hardLevelComBox->FormattingEnabled = true;
			this->hardLevelComBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Easy", L"Hard" });
			this->hardLevelComBox->Location = System::Drawing::Point(112, 265);
			this->hardLevelComBox->Name = L"hardLevelComBox";
			this->hardLevelComBox->Size = System::Drawing::Size(121, 35);
			this->hardLevelComBox->TabIndex = 5;
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Transparent;
			this->exitButton->CausesValidation = false;
			this->exitButton->FlatAppearance->BorderSize = 0;
			this->exitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitButton->Location = System::Drawing::Point(2, 309);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(115, 38);
			this->exitButton->TabIndex = 6;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainWindow::exitButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13));
			this->label7->Location = System::Drawing::Point(5, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 29);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Difficulty:";
			// 
			// restartButton
			// 
			this->restartButton->BackColor = System::Drawing::Color::Transparent;
			this->restartButton->CausesValidation = false;
			this->restartButton->Enabled = false;
			this->restartButton->FlatAppearance->BorderSize = 0;
			this->restartButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->restartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restartButton->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restartButton->Location = System::Drawing::Point(123, 309);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(115, 38);
			this->restartButton->TabIndex = 9;
			this->restartButton->Text = L"Restart";
			this->restartButton->UseVisualStyleBackColor = false;
			this->restartButton->Click += gcnew System::EventHandler(this, &MainWindow::restartButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(240, 357);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->aiFirst);
			this->Controls->Add(this->manFirst);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->gameField);
			this->Controls->Add(this->hardLevelComBox);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->restartButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameField))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: bool turn_Flag = true;
		private: int d;
		private: String^ ai_Sign = "";
		private: String^ hu_Sign = "";

		private: System::Void clear_Back() {
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					gameField[i, j]->Style->BackColor = Color::White;
				}
			}
		}
		private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
			gameField->Rows->Add();
			gameField->Rows->Add();
			gameField->Rows[2]->Height = 60;
			//gameField->Rows->Add();
			hardLevelComBox->SelectedIndex = 0;
			loadingTimer->Start();
			gameField->CurrentCell = nullptr;

		}
	

		private: System::Void clear_Field() {
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					gameField[i, j]->Value = nullptr;
				}
			}
			gameField->CurrentCell = nullptr;
			turn_Flag = true;
			gameField->Enabled = false;
			startButton->Enabled = true;
			manFirst->Enabled = true;
			aiFirst->Enabled = true;
			hardLevelComBox->Enabled = true;
			restartButton->Enabled = false;
		}

	
		private: bool check_Field() {
			int free_Box_Count = 0;
			int state_Matrix[3][3] = { 0, 0, 0,
									   0, 0, 0,
									   0, 0, 0 };

			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if (gameField[i, j]->Value == nullptr) {
						++free_Box_Count;
					}
					if (gameField[i, j]->Value == "O") {
						state_Matrix[j][i] = -1;
					}
					if (gameField[i, j]->Value == "X") {
						state_Matrix[j][i] = 1;
					}
				}
			}
			gameField->CurrentCell = nullptr;
			if (Math::Abs(state_Matrix[0][0] + state_Matrix[1][1] + state_Matrix[2][2]) == 3) {
				gameField[0, 0]->Style->BackColor = Color::Green;
				gameField[1, 1]->Style->BackColor = Color::Green;
				gameField[2, 2]->Style->BackColor = Color::Green;
				MessageBox::Show(gameField[1, 1]->Value->ToString() + " wins\nGame will be restarted", "WIN");
				clear_Back();
				clear_Field();
				return false;
			}

			if (Math::Abs(state_Matrix[0][2] + state_Matrix[1][1] + state_Matrix[2][0]) == 3) {
				gameField[2, 0]->Style->BackColor = Color::Green;
				gameField[1, 1]->Style->BackColor = Color::Green;
				gameField[0, 2]->Style->BackColor = Color::Green;
				MessageBox::Show(gameField[1, 1]->Value->ToString() + " wins\nGame will be restarted", "WIN");
				clear_Back();
				clear_Field();
				return false;
			}
			for (int i = 0; i < 3; ++i) {
				if (Math::Abs(state_Matrix[i][0] + state_Matrix[i][1] + state_Matrix[i][2]) == 3) {
					gameField[0, i]->Style->BackColor = Color::Green;
					gameField[1, i]->Style->BackColor = Color::Green;
					gameField[2, i]->Style->BackColor = Color::Green;
					MessageBox::Show(gameField[0, i]->Value->ToString() + " wins\nGame will be restarted", "WIN");
					clear_Back();
					clear_Field();
					return false;
				}
			}

			for (int j = 0; j < 3; ++j) {
				if (Math::Abs(state_Matrix[0][j] + state_Matrix[1][j] + state_Matrix[2][j]) == 3) {
					gameField[j, 0]->Style->BackColor = Color::Green;
					gameField[j, 1]->Style->BackColor = Color::Green;
					gameField[j, 2]->Style->BackColor = Color::Green;

					MessageBox::Show(gameField[j, 0]->Value->ToString() + " wins\nGame will be restarted", "WIN");
					clear_Back();
					clear_Field();
					return false;
				}
			}

			if (free_Box_Count == 0) {
				MessageBox::Show("Tie\nGame will be restarted", "TIE");
				clear_Field();
				return false;
			}
			return true;
		}
		
		private: System::Void ai_Move() {
			
			while (true) {

				int state_Matrix[3][3] = { 0, 0, 0,
									   0, 0, 0,
									   0, 0, 0 };

				for (int i = 0; i < 3; ++i) {
					for (int j = 0; j < 3; ++j) {
						
						if (gameField[i, j]->Value == "O") {
							state_Matrix[j][i] = -1;
						}
						if (gameField[i, j]->Value == "X") {
							state_Matrix[j][i] = 1;
						}
					}
				}
				if (hardLevelComBox->SelectedIndex == 1) {
					if(state_Matrix[1][1] == 0) { gameField[1, 1]->Value = ai_Sign; return; }

					if (Math::Abs(state_Matrix[0][0] + state_Matrix[1][1] + state_Matrix[2][2]) == 2) {
						if (state_Matrix[0][0] == 0) { gameField[0, 0]->Value = ai_Sign; return; }
						if (state_Matrix[1][1] == 0) { gameField[1, 1]->Value = ai_Sign; return; }
						if (state_Matrix[2][2] == 0) { gameField[2, 2]->Value = ai_Sign; return; }
					}

					if (Math::Abs(state_Matrix[2][0] + state_Matrix[1][1] + state_Matrix[0][2]) == 2) {
						if (state_Matrix[0][2] == 0) { gameField[2, 0]->Value = ai_Sign; return; }
						if (state_Matrix[1][1] == 0) { gameField[1, 1]->Value = ai_Sign; return; }
						if (state_Matrix[2][0] == 0) { gameField[0, 2]->Value = ai_Sign; return; }
					}

					for (int i = 0; i < 3; ++i) {

						if (Math::Abs(state_Matrix[i][0] + state_Matrix[i][1] + state_Matrix[i][2]) == 2) {
							if (state_Matrix[i][2] == 0) { gameField[2, i]->Value = ai_Sign; return; }
							if (state_Matrix[i][1] == 0) { gameField[1, i]->Value = ai_Sign; return; }
							if (state_Matrix[i][0] == 0) { gameField[0, i]->Value = ai_Sign; return; }
						}
					}
					for (int j = 0; j < 3; ++j) {

						if (Math::Abs(state_Matrix[0][j] + state_Matrix[1][j] + state_Matrix[2][j]) == 2) {
							if (state_Matrix[2][j] == 0) { gameField[j, 2]->Value = ai_Sign; return; }
							if (state_Matrix[1][j] == 0) { gameField[j, 1]->Value = ai_Sign; return; }
							if (state_Matrix[0][j] == 0) { gameField[j, 0]->Value = ai_Sign; return; }
						}
					}
				}
				int ColNumber = rand() % 3;
				int RawNumber = rand() % 3;
				if (gameField[ColNumber, RawNumber]->Value == nullptr) {
					gameField[ColNumber, RawNumber]->Value = ai_Sign;
					return;
				}
			}
			

		}
		private: System::Void gameField_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			
			if (turn_Flag == true && gameField[e->ColumnIndex, e->RowIndex]->Value == nullptr) {
				gameField[e->ColumnIndex, e->RowIndex]->Value = hu_Sign;
				turn_Flag = false;
			}
			else return;
			/*else {
				if (gameField[e->ColumnIndex, e->RowIndex]->Value == nullptr) {
					gameField[e->ColumnIndex, e->RowIndex]->Value = "O";
					turn_Flag = true;
				}
			}*/
			if (!check_Field()) return;
			ai_Move();
			turn_Flag = true;
			if (!check_Field()) return;
		}
		private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (manFirst->Checked == true || aiFirst->Checked == true) {
				clear_Back();
			}
			else return;

			if (manFirst->Checked == true ) {
				gameField->Enabled = true;
				hu_Sign = "X";
				ai_Sign = "O";
			} else
			if (aiFirst->Checked == true) {
				gameField->Enabled = true;
				hu_Sign = "O";
				ai_Sign = "X";
				ai_Move();
			}
			gameField[0, 0]->Style->BackColor = Color::PaleGreen;
			gameField[0, 1]->Style->BackColor = Color::PaleGreen;
			gameField[0, 2]->Style->BackColor = Color::PaleGreen;
			gameField[1, 0]->Style->BackColor = Color::PaleGreen;
			gameField[1, 1]->Style->BackColor = Color::PaleGreen;
			gameField[1, 2]->Style->BackColor = Color::PaleGreen;
			gameField[2, 0]->Style->BackColor = Color::PaleGreen;
			gameField[2, 1]->Style->BackColor = Color::PaleGreen;
			gameField[2, 2]->Style->BackColor = Color::PaleGreen;
			startButton->Enabled = false;
			manFirst->Enabled = false;
			aiFirst->Enabled = false;
			hardLevelComBox->Enabled = false;
			gameField->CurrentCell = nullptr;
			restartButton->Enabled = true;
		}
	private: System::Void loadingTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (progressBar1->Value == 100) { 
			loadingTimer->Stop(); 
			panel1->Visible = false;
			panel1->Enabled = false;
			return; 
		}
			progressBar1->Value += 1;
		
	}
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void restartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_Back();
		clear_Field();
	}
};
}
