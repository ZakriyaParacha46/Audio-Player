#pragma once
#include "navigation.h"
#include "storage_media.h"
#include <string>
#include "navigation.h"
#include <sys/stat.h>

namespace AudioPlayerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button17;







	private:
		/// <summary>

		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(408, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Status:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(402, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Pause";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(336, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Play";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(467, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Resume";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(423, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Previous";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(504, 120);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Next";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(23, 45);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(281, 296);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"#";
			this->columnHeader1->Width = 37;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 100;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Address";
			this->columnHeader3->Width = 150;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(425, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Mounted Device:";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(460, 218);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"CD";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(319, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Mount/Unmout:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(533, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Unmount";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(349, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 15);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Status:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(392, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"NA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(520, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"NA";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(395, 218);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"USB";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(520, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"NA";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(425, 303);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 15);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Storage:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(425, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 15);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Storage Taken:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(520, 316);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"NA";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(384, 250);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(345, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 15);
			this->label12->TabIndex = 25;
			this->label12->Text = L"No of song:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(319, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 16);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Controls:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(520, 329);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"NA";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(425, 329);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 15);
			this->label15->TabIndex = 27;
			this->label15->Text = L"No of songs:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(417, 47);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(61, 20);
			this->numericUpDown1->TabIndex = 29;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Crimson;
			this->label16->Location = System::Drawing::Point(360, 147);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 30;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(567, 22);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 26);
			this->button10->TabIndex = 31;
			this->button10->Text = L"Off";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(342, 121);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Shuffle";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(198, 358);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 22);
			this->button11->TabIndex = 33;
			this->button11->Text = L"Add Song";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 34;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(45, 361);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Name: ";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(440, 356);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 36;
			this->button12->Text = L"save Playlist";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(523, 356);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 37;
			this->button13->Text = L"Load Playlist";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(348, 358);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 38;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(301, 361);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 39;
			this->label18->Text = L"Name: ";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(486, 45);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(56, 20);
			this->button14->TabIndex = 40;
			this->button14->Text = L"Delete ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(533, 91);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 23);
			this->button15->TabIndex = 41;
			this->button15->Text = L"Stop";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(198, 12);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 42;
			this->button16->Text = L"Search";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(81, 14);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 43;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(34, 17);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 44;
			this->label19->Text = L"Name: ";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(329, 218);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 23);
			this->button17->TabIndex = 45;
			this->button17->Text = L"Browse";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 405);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Audio Player";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		navigation* n = new navigation();
		aud_playerv2* ap = new aud_playerv2(0, "platitude 25", "2002");
		audio *a=new audio();
		int ind = 0;
		int inp;

std::string MarshalString(String^ s) {
			std::string temp;
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			temp = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return temp;
		}
private:void fill() {
		n->load(*ap);
		numericUpDown1->Minimum = 0;
		if (ap->getsize() !=0) {
			numericUpDown1->Maximum = ap->getsize() - 1;
		}
		else {
			numericUpDown1->Maximum = 0;
		}
		display();
	}
private: void mount(storage_media* s) 
	{
		if (!n->ismounted()) {
			label16->Text = "";
			label11->Text = "";

			if (s->get_size() < s->storage_taken())
			{
				label11->Text = "No of songs exceed the storage capacity";
				return;
			}
			n->mount(*s);
			label6->Text = gcnew String(s->get_name().c_str());
			label7->Text = System::Convert::ToString(s->get_size()) + "Gb";
			label10->Text = System::Convert::ToString(s->storage_taken()) + "Gb";
			label14->Text = System::Convert::ToString(s->count_aud(s->get_addr()));
			fill();

		}
		else
		{
			label11->Text = "A device " + gcnew String(n->getmounted().c_str()) + "is already mounted";
		}
	
	}
private: void display() {
		numericUpDown1->Maximum = ap->getsize() - 1;
		listView1->Items->Clear();
		for (int i = 0; i < ap->getsize(); i++) {
			*a = ap->getsong(i);
			ListViewItem^ item1 = gcnew ListViewItem(System::Convert::ToString(i));
			item1->SubItems->Add(gcnew String(a->get_name().c_str()));
			item1->SubItems->Add(gcnew String(a->get_addr().c_str()));
			listView1->Items->Add(item1);
		}
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	storage_media* u = new storage_media("myusb", ".\\USB", 16, 0.5); //name, addr, size, sizepersong
	mount(u);
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) //mount cd
{  
	storage_media* c = new storage_media("mycd", ".\\CD", 10, 0.5);
	mount(c);	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n->ismounted()) {
		label6->Text = "NA";
		label7->Text = "NA";
		label10->Text = "NA";
		label14->Text = "NA";
		label5->Text = "NA";
		label11->Text = "";

		ap->getsong(ind).stop();
		numericUpDown1->Value = 0;
		label16->Text = "";
		ap->clean_playlist();
		listView1->Items->Clear();
		n->unmount();
	}
	else {
		label11->Text = "No device mounted";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (ap->loaded()) {
		ap->getsong(ind).stop();
		ind = (int)numericUpDown1->Value;
		ap->getsong(ind).play();
		label5->Text = "Playing " + gcnew String(ap->getsong(ind).get_name().c_str());
		ind;
	}
		
	else {
		label16->Text = "No song is in the mounted device";
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	numericUpDown1->Maximum = 0;
	button11->Enabled = false;
	button12->Enabled = false;
	struct stat buffer;
	if (stat(".\\USB", &buffer) != 0) {
		button8->Enabled = false;
	}
	if (stat(".\\CD", &buffer) != 0) {
		button7->Enabled = false;
	}


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->loaded()) {
		ap->getsong(ind).stop();
		ap->next();
		numericUpDown1->Value = ap->getindex();
	}
	else {
		label16->Text = "No song is in the mounted device";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->loaded()) {
		ap->getsong(ind).stop();
		ap->previous();
		numericUpDown1->Value = ap->getindex();	}
	else {
		label16->Text = "No song is in the mounted device";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->loaded()) {
		ap->getsong(ind ).pause();
		label5->Text = "Pausing " + gcnew String(ap->getsong(ind).get_name().c_str());
	}
	else {
		label16->Text = "No song is in the mounted device";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->loaded()) {
		ap->getsong(ind ).resume();
		label5->Text = "Resuming " + gcnew  String(ap->getsong(ind).get_name().c_str());
	}
	else {
		label16->Text = "No song is in the mounted device";
	}
	
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button10->Text == "Off") 
	{
		if (ap->loaded()) {
			ap->getsong(ind).pause();
		}
		button10->Text = "On";
		label11->Text = "";
		label16->Text = "";
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button11->Enabled = false;
		button13->Enabled = false;
		button14->Enabled = false;
		button15->Enabled = false;
		button16->Enabled = false;
		button17->Enabled = false;
		
	}
	else if (button10->Text == "On")
	{
		if (ap->loaded()) {
			ap->getsong(ind).resume();
		}
		button10->Text = "Off";

		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;
		button11->Enabled = true;
		button13->Enabled = true;
		button14->Enabled = true;
		button15->Enabled = true;
		button16->Enabled = true;
		button17->Enabled = false;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->loaded()) {
		ap->getsong(ind).stop();
		ap->shuffle();
		display();
	}
	else {
		label16->Text = "No song is in the mounted device";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ path = gcnew OpenFileDialog();
		path->ShowDialog();
		audio* snew= new audio(MarshalString(textBox1->Text), MarshalString(path->FileName));
		ap->add_aud(*snew);
		display();
		textBox1->Text = "";
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		button11->Enabled = true;
	}
	else 
	{
		button11->Enabled = false;
	}
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	ap->save_playlist(MarshalString(textBox2->Text));
	textBox2->Text = "";
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "") {
		button12->Enabled = true;
	}
	else
	{
		button12->Enabled = false;
	}

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ path = gcnew OpenFileDialog();
	path->ShowDialog();
	ap->load_playlist(MarshalString(path->FileName));
	display();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ap->getsize() - 1 != 0) {
		ap->getsong((int)numericUpDown1->Value).stop();
		ap->delete_aud((int)numericUpDown1->Value);
		display();
	}

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != "") {
		button16->Enabled = true;
	}
	else
	{
		button16->Enabled = false;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	int num=ap->search_aud(MarshalString(textBox3->Text));
	textBox3->Text = "";
	if (num != -1) {
		numericUpDown1->Value = num;
		label5->Text = "found the audio at " + num;
	}
	else 
	{
		label5->Text = "not Found!";
	}
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (ap->loaded()) {
	ap->getsong(ind).stop();
	label5->Text = "stoping " + gcnew  String(ap->getsong(ind).get_name().c_str());
}
	   else {
	label16->Text = "No song is in the mounted device";
}

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ p_sysstring = gcnew FolderBrowserDialog();
	p_sysstring->ShowDialog();
	
		std::string path = MarshalString(p_sysstring->SelectedPath);
		storage_media* p = new storage_media("Browsed", path, 20, 0.5); //name, addr, size, sizepersong
		mount(p);
	
	}
};
}
