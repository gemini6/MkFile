#pragma once

namespace MkFile {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Threading;

	/// <summary>
	/// Summary for gui
	/// </summary>
	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
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
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^  title_lbl;
    private: System::Windows::Forms::Label^  file_name_lbl;
    protected:


    private: System::Windows::Forms::RichTextBox^  file_name_input;
    private: System::Windows::Forms::Label^  file_ext_lbl;


    private: System::Windows::Forms::ComboBox^  file_extension_input;
    private: System::Windows::Forms::ListView^  file_queue_list;
    private: System::Windows::Forms::ListViewItem^ new_list_item;


    private: System::Windows::Forms::Button^  create_files_btn;
    private: System::Windows::Forms::Button^  done_btn;
    private: System::Windows::Forms::Label^  file_path_lbl;



    private: System::Windows::Forms::RichTextBox^  file_path_input;
    private: System::Windows::Forms::Button^  open_folder_btn;


    private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
    private: System::ComponentModel::IContainer^  components;

    protected:

    protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

       System::String^ file_creation_path = nullptr;
       System::String^ DEFAULT_FILE_CREATION_PATH = System::IO::Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments) + "\\MkFilev1.0\\"); // Remove in release version.
       System::String^ file_name = nullptr;
       System::String^ DEFAULT_FILE_NAME = "File";
       System::String^ DEFAULT_FILE_EXT = ".txt";
       System::String^ file_ext = nullptr;
       static int DEFAULT_FILE_COUNT = 0;
       static int SAME_FILE_COUNT = 1;
       cli::array<System::String^>^ files_to_create;
       System::IO::File^ creation_file;
    private: System::Windows::Forms::Button^  add_file_btn;
    private: System::Windows::Forms::MenuStrip^  menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^  file_menu;
    private: System::Windows::Forms::ToolStripMenuItem^  view_menu;
    private: System::Windows::Forms::ToolStripMenuItem^  view_menu_theme;
    private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  help_menu;
    private: System::Windows::Forms::ToolStripMenuItem^  help_menu_view_help;
    private: System::Windows::Forms::ToolStripMenuItem^  help_menu_feedback;
    private: System::Windows::Forms::ToolStripMenuItem^  help_menu_technical_support;
    private: System::Windows::Forms::ToolStripMenuItem^  help_menu_about;
    private: System::Windows::Forms::ToolStripMenuItem^  file_menu_restart;
    private: System::Windows::Forms::ToolStripMenuItem^  file_menu_exit;
    private: System::Windows::Forms::ToolStripMenuItem^  theme_menu_light;
    public: System::Windows::Forms::ColumnHeader^  file_column_header;
    private: System::Windows::Forms::ProgressBar^  progress_bar;
    public:

    private: System::Windows::Forms::Label^  output_lbl;
    public:

    private: System::Windows::Forms::ToolTip^  output_lbl_tooltip;
    private: System::Windows::Forms::ToolTip^  choose_path_btn_tooltip;
    private: System::Windows::Forms::ToolTip^  add_file_btn_tooltip;
    private: System::Windows::Forms::ToolTip^  create_btn_tooltip;
    private: System::Windows::Forms::ToolTip^  done_btn_tooltip;
    private: System::Windows::Forms::Button^  button1;
    private: ComponentFactory::Krypton::Toolkit::KryptonManager^  kryptonManager1;

    private: System::Windows::Forms::ToolStripMenuItem^  theme_menu_dark;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->title_lbl = (gcnew System::Windows::Forms::Label());
            this->file_name_lbl = (gcnew System::Windows::Forms::Label());
            this->file_name_input = (gcnew System::Windows::Forms::RichTextBox());
            this->file_ext_lbl = (gcnew System::Windows::Forms::Label());
            this->file_extension_input = (gcnew System::Windows::Forms::ComboBox());
            this->file_queue_list = (gcnew System::Windows::Forms::ListView());
            this->file_column_header = (gcnew System::Windows::Forms::ColumnHeader());
            this->create_files_btn = (gcnew System::Windows::Forms::Button());
            this->done_btn = (gcnew System::Windows::Forms::Button());
            this->file_path_lbl = (gcnew System::Windows::Forms::Label());
            this->file_path_input = (gcnew System::Windows::Forms::RichTextBox());
            this->open_folder_btn = (gcnew System::Windows::Forms::Button());
            this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
            this->add_file_btn = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->file_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->file_menu_restart = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->file_menu_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->view_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->view_menu_theme = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->theme_menu_light = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->theme_menu_dark = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->help_menu = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->help_menu_view_help = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->help_menu_feedback = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->help_menu_technical_support = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->help_menu_about = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->progress_bar = (gcnew System::Windows::Forms::ProgressBar());
            this->output_lbl = (gcnew System::Windows::Forms::Label());
            this->output_lbl_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
            this->choose_path_btn_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
            this->add_file_btn_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
            this->create_btn_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
            this->done_btn_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->kryptonManager1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonManager(this->components));
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // title_lbl
            // 
            this->title_lbl->AutoSize = true;
            this->title_lbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->title_lbl->Font = (gcnew System::Drawing::Font(L"Impact",26.25F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->title_lbl->Location = System::Drawing::Point(264,43);
            this->title_lbl->Name = L"title_lbl";
            this->title_lbl->Size = System::Drawing::Size(111,43);
            this->title_lbl->TabIndex = 0;
            this->title_lbl->Text = L"MkFile";
            this->title_lbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // file_name_lbl
            // 
            this->file_name_lbl->AutoSize = true;
            this->file_name_lbl->Font = (gcnew System::Drawing::Font(L"Impact",12,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->file_name_lbl->Location = System::Drawing::Point(73,115);
            this->file_name_lbl->Name = L"file_name_lbl";
            this->file_name_lbl->Size = System::Drawing::Size(74,20);
            this->file_name_lbl->TabIndex = 1;
            this->file_name_lbl->Text = L"File Name:";
            // 
            // file_name_input
            // 
            this->file_name_input->BackColor = System::Drawing::SystemColors::Window;
            this->file_name_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->file_name_input->Location = System::Drawing::Point(153,115);
            this->file_name_input->Multiline = false;
            this->file_name_input->Name = L"file_name_input";
            this->file_name_input->Size = System::Drawing::Size(166,20);
            this->file_name_input->TabIndex = 2;
            this->file_name_input->Text = L"";
            this->file_name_input->TextChanged += gcnew System::EventHandler(this,&gui::on_file_name_input_text_changed);
            // 
            // file_ext_lbl
            // 
            this->file_ext_lbl->AutoSize = true;
            this->file_ext_lbl->Font = (gcnew System::Drawing::Font(L"Impact",12,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->file_ext_lbl->Location = System::Drawing::Point(73,156);
            this->file_ext_lbl->Name = L"file_ext_lbl";
            this->file_ext_lbl->Size = System::Drawing::Size(99,20);
            this->file_ext_lbl->TabIndex = 3;
            this->file_ext_lbl->Text = L"File Extension:";
            // 
            // file_extension_input
            // 
            this->file_extension_input->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->file_extension_input->FormattingEnabled = true;
            this->file_extension_input->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
                L".txt",L".html",L".xml",L".css",
L".less",L".js",L".php",L".sql",L".mysql",L".py",L".java",L".cpp",L".hpp",L".h",L".bat",L".sh"
            });
            this->file_extension_input->Location = System::Drawing::Point(179,155);
            this->file_extension_input->Name = L"file_extension_input";
            this->file_extension_input->Size = System::Drawing::Size(140,21);
            this->file_extension_input->TabIndex = 4;
            this->file_extension_input->Text = L".txt";
            this->file_extension_input->TextChanged += gcnew System::EventHandler(this,&gui::on_file_extension_input_text_changed);
            // 
            // file_queue_list
            // 
            this->file_queue_list->Alignment = System::Windows::Forms::ListViewAlignment::Left;
            this->file_queue_list->BackColor = System::Drawing::SystemColors::Window;
            this->file_queue_list->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->file_queue_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->file_column_header });
            this->file_queue_list->GridLines = true;
            this->file_queue_list->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
            this->file_queue_list->Location = System::Drawing::Point(359,115);
            this->file_queue_list->Name = L"file_queue_list";
            this->file_queue_list->ShowItemToolTips = true;
            this->file_queue_list->Size = System::Drawing::Size(164,99);
            this->file_queue_list->TabIndex = 5;
            this->file_queue_list->UseCompatibleStateImageBehavior = false;
            this->file_queue_list->View = System::Windows::Forms::View::Details;
            // 
            // file_column_header
            // 
            this->file_column_header->Text = L"File Queue";
            this->file_column_header->Width = 164;
            // 
            // create_files_btn
            // 
            this->create_files_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->create_files_btn->Font = (gcnew System::Drawing::Font(L"Impact",9.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->create_files_btn->Location = System::Drawing::Point(359,288);
            this->create_files_btn->Name = L"create_files_btn";
            this->create_files_btn->Size = System::Drawing::Size(77,29);
            this->create_files_btn->TabIndex = 6;
            this->create_files_btn->Text = L"Create";
            this->create_btn_tooltip->SetToolTip(this->create_files_btn,L"Click the \"Create\" button to create all of the files \r\nadded to the file queue.");
            this->create_files_btn->UseVisualStyleBackColor = true;
            this->create_files_btn->Click += gcnew System::EventHandler(this,&gui::create_files_btn_click);
            // 
            // done_btn
            // 
            this->done_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->done_btn->Font = (gcnew System::Drawing::Font(L"Impact",9.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->done_btn->Location = System::Drawing::Point(448,288);
            this->done_btn->Name = L"done_btn";
            this->done_btn->Size = System::Drawing::Size(75,29);
            this->done_btn->TabIndex = 7;
            this->done_btn->Text = L"Done";
            this->done_btn_tooltip->SetToolTip(this->done_btn,L"Click the \"Done\" button to exit the program.\r\n");
            this->done_btn->UseVisualStyleBackColor = true;
            this->done_btn->Click += gcnew System::EventHandler(this,&gui::done_btn_click);
            // 
            // file_path_lbl
            // 
            this->file_path_lbl->AutoSize = true;
            this->file_path_lbl->Font = (gcnew System::Drawing::Font(L"Impact",12,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->file_path_lbl->Location = System::Drawing::Point(73,195);
            this->file_path_lbl->Name = L"file_path_lbl";
            this->file_path_lbl->Size = System::Drawing::Size(66,20);
            this->file_path_lbl->TabIndex = 8;
            this->file_path_lbl->Text = L"File Path:";
            // 
            // file_path_input
            // 
            this->file_path_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->file_path_input->Location = System::Drawing::Point(146,195);
            this->file_path_input->Multiline = false;
            this->file_path_input->Name = L"file_path_input";
            this->file_path_input->Size = System::Drawing::Size(173,20);
            this->file_path_input->TabIndex = 9;
            this->file_path_input->Text = L"";
            this->file_path_input->TextChanged += gcnew System::EventHandler(this,&gui::on_file_path_input_text_changed);
            // 
            // open_folder_btn
            // 
            this->open_folder_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->open_folder_btn->Font = (gcnew System::Drawing::Font(L"Impact",9.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->open_folder_btn->Location = System::Drawing::Point(77,221);
            this->open_folder_btn->Name = L"open_folder_btn";
            this->open_folder_btn->Size = System::Drawing::Size(242,28);
            this->open_folder_btn->TabIndex = 10;
            this->open_folder_btn->Text = L"Choose Path";
            this->choose_path_btn_tooltip->SetToolTip(this->open_folder_btn,L"Click the \"Choose Path\" button to choose which \r\npath you would like to have the "
            L"current file that your \r\nadding saved to. ");
            this->open_folder_btn->UseVisualStyleBackColor = true;
            this->open_folder_btn->Click += gcnew System::EventHandler(this,&gui::open_folder_btn_Click);
            // 
            // add_file_btn
            // 
            this->add_file_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->add_file_btn->Font = (gcnew System::Drawing::Font(L"Impact",9.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->add_file_btn->Location = System::Drawing::Point(359,221);
            this->add_file_btn->Name = L"add_file_btn";
            this->add_file_btn->Size = System::Drawing::Size(74,28);
            this->add_file_btn->TabIndex = 11;
            this->add_file_btn->Text = L"Add File";
            this->add_file_btn_tooltip->SetToolTip(this->add_file_btn,L"Click the \"Add File To Queue\" button to add\r\nthe current file that you want to cr"
            L"eate to the \r\nfile queue.");
            this->add_file_btn->UseVisualStyleBackColor = true;
            this->add_file_btn->Click += gcnew System::EventHandler(this,&gui::on_add_file_btn_click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI",9));
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->file_menu,this->view_menu,
this->toolsToolStripMenuItem,this->help_menu
            });
            this->menuStrip1->Location = System::Drawing::Point(0,0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(609,24);
            this->menuStrip1->TabIndex = 13;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // file_menu
            // 
            this->file_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->file_menu_restart,
this->file_menu_exit
            });
            this->file_menu->Name = L"file_menu";
            this->file_menu->Size = System::Drawing::Size(37,20);
            this->file_menu->Text = L"File";
            // 
            // file_menu_restart
            // 
            this->file_menu_restart->Name = L"file_menu_restart";
            this->file_menu_restart->Size = System::Drawing::Size(110,22);
            this->file_menu_restart->Text = L"Restart";
            this->file_menu_restart->Click += gcnew System::EventHandler(this,&gui::on_file_menu_restart_click);
            // 
            // file_menu_exit
            // 
            this->file_menu_exit->Name = L"file_menu_exit";
            this->file_menu_exit->Size = System::Drawing::Size(110,22);
            this->file_menu_exit->Text = L"Exit";
            this->file_menu_exit->Click += gcnew System::EventHandler(this,&gui::on_file_menu_exit_click);
            // 
            // view_menu
            // 
            this->view_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->view_menu_theme });
            this->view_menu->Name = L"view_menu";
            this->view_menu->Size = System::Drawing::Size(44,20);
            this->view_menu->Text = L"View";
            // 
            // view_menu_theme
            // 
            this->view_menu_theme->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->theme_menu_light,
this->theme_menu_dark
            });
            this->view_menu_theme->Name = L"view_menu_theme";
            this->view_menu_theme->Size = System::Drawing::Size(111,22);
            this->view_menu_theme->Text = L"Theme";
            // 
            // theme_menu_light
            // 
            this->theme_menu_light->Name = L"theme_menu_light";
            this->theme_menu_light->Size = System::Drawing::Size(101,22);
            this->theme_menu_light->Text = L"Light";
            this->theme_menu_light->Click += gcnew System::EventHandler(this,&gui::on_theme_menu_light_click);
            // 
            // theme_menu_dark
            // 
            this->theme_menu_dark->Name = L"theme_menu_dark";
            this->theme_menu_dark->Size = System::Drawing::Size(101,22);
            this->theme_menu_dark->Text = L"Dark";
            this->theme_menu_dark->Click += gcnew System::EventHandler(this,&gui::on_theme_menu_dark_click);
            // 
            // toolsToolStripMenuItem
            // 
            this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
            this->toolsToolStripMenuItem->Size = System::Drawing::Size(47,20);
            this->toolsToolStripMenuItem->Text = L"Tools";
            // 
            // help_menu
            // 
            this->help_menu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->help_menu_view_help,
this->help_menu_feedback,this->help_menu_technical_support,this->help_menu_about
            });
            this->help_menu->Name = L"help_menu";
            this->help_menu->Size = System::Drawing::Size(44,20);
            this->help_menu->Text = L"Help";
            // 
            // help_menu_view_help
            // 
            this->help_menu_view_help->Name = L"help_menu_view_help";
            this->help_menu_view_help->Size = System::Drawing::Size(169,22);
            this->help_menu_view_help->Text = L"View Help";
            // 
            // help_menu_feedback
            // 
            this->help_menu_feedback->Name = L"help_menu_feedback";
            this->help_menu_feedback->Size = System::Drawing::Size(169,22);
            this->help_menu_feedback->Text = L"FeedBack";
            // 
            // help_menu_technical_support
            // 
            this->help_menu_technical_support->Name = L"help_menu_technical_support";
            this->help_menu_technical_support->Size = System::Drawing::Size(169,22);
            this->help_menu_technical_support->Text = L"Technical Support";
            // 
            // help_menu_about
            // 
            this->help_menu_about->Name = L"help_menu_about";
            this->help_menu_about->Size = System::Drawing::Size(169,22);
            this->help_menu_about->Text = L"About MkFile1.0";
            // 
            // progress_bar
            // 
            this->progress_bar->Location = System::Drawing::Point(77,288);
            this->progress_bar->MarqueeAnimationSpeed = 35;
            this->progress_bar->Name = L"progress_bar";
            this->progress_bar->Size = System::Drawing::Size(147,29);
            this->progress_bar->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
            this->progress_bar->TabIndex = 14;
            // 
            // output_lbl
            // 
            this->output_lbl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->output_lbl->Font = (gcnew System::Drawing::Font(L"Impact",9,System::Drawing::FontStyle::Italic,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->output_lbl->Location = System::Drawing::Point(230,288);
            this->output_lbl->Name = L"output_lbl";
            this->output_lbl->Size = System::Drawing::Size(123,29);
            this->output_lbl->TabIndex = 15;
            this->output_lbl->Text = L"Add files to begin";
            this->output_lbl_tooltip->SetToolTip(this->output_lbl,L"Output text is displayed here.\r\n");
            // 
            // button1
            // 
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Impact",9.75F,System::Drawing::FontStyle::Regular,System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(439,221);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(84,28);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Clear Queue";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this,&gui::on_clear_btn_cick);
            // 
            // gui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(609,329);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->output_lbl);
            this->Controls->Add(this->progress_bar);
            this->Controls->Add(this->menuStrip1);
            this->Controls->Add(this->add_file_btn);
            this->Controls->Add(this->open_folder_btn);
            this->Controls->Add(this->file_path_input);
            this->Controls->Add(this->file_path_lbl);
            this->Controls->Add(this->done_btn);
            this->Controls->Add(this->create_files_btn);
            this->Controls->Add(this->file_queue_list);
            this->Controls->Add(this->file_extension_input);
            this->Controls->Add(this->file_ext_lbl);
            this->Controls->Add(this->file_name_input);
            this->Controls->Add(this->file_name_lbl);
            this->Controls->Add(this->title_lbl);
            this->MainMenuStrip = this->menuStrip1;
            this->Margin = System::Windows::Forms::Padding(3,2,3,2);
            this->Name = L"gui";
            this->Tag = L"   ";
            this->Text = L"MkFile v1.0";
            this->Shown += gcnew System::EventHandler(this,&gui::on_gui_shown);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

 private: void progress(int amount, int speed)
 {
    progress_bar->Step = 1;
    for(int index = 1; index < amount; index++ )
    {
        progress_bar->PerformStep();
        Threading::Thread::Sleep(speed);
    }
 }

private: System::Void open_folder_btn_Click(System::Object^  sender,System::EventArgs^  e) {
        folderBrowserDialog1->ShowDialog();
        file_path_input->Text = folderBrowserDialog1->SelectedPath;
        file_creation_path = folderBrowserDialog1->SelectedPath;
}

private: System::Void done_btn_click(System::Object^  sender,System::EventArgs^  e) {
    if(System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Are you sure you want to exit?", "Exit?", MessageBoxButtons::YesNo, MessageBoxIcon::Question))
    {
        Application::Exit();
    }
}
private: System::Void on_file_name_input_text_changed(System::Object^  sender,System::EventArgs^  e) {
    file_name = file_name_input->Text;
}
private: System::Void on_file_extension_input_text_changed(System::Object^  sender,System::EventArgs^  e) {
    file_ext = file_extension_input->Text;
}

private: System::Void on_file_path_input_text_changed(System::Object^  sender,System::EventArgs^  e) {
    file_creation_path = file_path_input->Text;
}

private: System::Void on_add_file_btn_click(System::Object^  sender,System::EventArgs^  e) {
    new_list_item = gcnew ListViewItem();
    String^ full_file_name; 
    if(!String::IsNullOrEmpty(file_name_input->Text))
    {
        file_name = file_name_input->Text;
    }
    if(String::IsNullOrEmpty(file_ext))
    {
        file_ext = DEFAULT_FILE_EXT;
    }
    if(String::IsNullOrEmpty(file_name))
    {
        DEFAULT_FILE_COUNT += 1;
        file_name = DEFAULT_FILE_NAME + DEFAULT_FILE_COUNT;
    }

    if(String::IsNullOrEmpty(file_creation_path))
    {
        file_creation_path = DEFAULT_FILE_CREATION_PATH;
    }
    progress_bar->Style = ProgressBarStyle::Continuous;
    progress_bar->Value = 100;

    full_file_name = file_creation_path + file_name + file_ext;
    for(int index = 0; index < file_queue_list->Items->Count; index++)
    {
        if(full_file_name == file_queue_list->Items[index]->Text)
        {
            full_file_name = file_creation_path + file_name + SAME_FILE_COUNT + file_ext;
            SAME_FILE_COUNT+= 1;
        }
    }

    file_queue_list->Items->Add(full_file_name);
    file_name = nullptr;
    progress_bar->Value = 0;
    progress_bar->Style = ProgressBarStyle::Marquee;
}

private: System::Void create_files_btn_click(System::Object^  sender,System::EventArgs^  e) {
    
    progress_bar->Style = ProgressBarStyle::Continuous;

    int queue_count = file_queue_list->Items->Count;
    files_to_create = (gcnew array<String^>(queue_count));
    
    progress(100 ,1);  
     for(int index = 0; index < queue_count; index++)
        {
            files_to_create[index] = file_queue_list->Items[index]->Text;
            creation_file->Create(files_to_create[index])->Close();
            file_queue_list->Items[index]->Text = "Created file.";
           
          
        }
     file_queue_list->Items->Clear();
     SAME_FILE_COUNT = 1;
     DEFAULT_FILE_COUNT = 0;
     progress_bar->Style = ProgressBarStyle::Marquee;
}

private: System::Void on_gui_shown(System::Object^  sender,System::EventArgs^  e) {
  
}

private: System::Void on_file_menu_restart_click(System::Object^  sender,System::EventArgs^  e) {
    if(System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Are you sure you would like to restart?", "Restart?", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1))
    {
        Application::Restart();
    }
}
private: System::Void on_file_menu_exit_click(System::Object^  sender,System::EventArgs^  e) {
    if(System::Windows::Forms::DialogResult::Yes == MessageBox::Show("Are you sure you would like to exit?", "Exit?", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1))
    {
        Application::Exit();
    }
}

private: System::Void on_theme_menu_light_click(System::Object^  sender,System::EventArgs^  e) {
    this->BackColor = SystemColors::Control;
    this->ForeColor = SystemColors::ControlText;

    this->file_name_input->BackColor = SystemColors::Window;
    this->file_extension_input->BackColor = SystemColors::Window;
    this->file_path_input->BackColor = SystemColors::Window;
    this->file_queue_list->BackColor = SystemColors::Window;

    this->file_name_input->ForeColor = SystemColors::WindowText;
    this->file_extension_input->ForeColor = SystemColors::WindowText;
    this->file_path_input->ForeColor = SystemColors::WindowText;
    this->file_queue_list->ForeColor = SystemColors::WindowText;


}

private: System::Void on_theme_menu_dark_click(System::Object^  sender,System::EventArgs^  e) {
    this->BackColor = Color::Black;
    this->ForeColor = SystemColors::ControlLight;

    this->file_name_input->BackColor = SystemColors::ControlDarkDark;
    this->file_extension_input->BackColor = SystemColors::ControlDarkDark;
    this->file_path_input->BackColor = SystemColors::ControlDarkDark;
    this->file_queue_list->BackColor = SystemColors::ControlDarkDark;

    this->file_name_input->ForeColor = Color::Cyan;
    this->file_extension_input->ForeColor = Color::Cyan;
    this->file_path_input->ForeColor = Color::Cyan;
    this->file_queue_list->ForeColor = Color::Cyan;

}

private: System::Void on_clear_btn_cick(System::Object^  sender,System::EventArgs^  e) {
    file_queue_list->Items->Clear();
}
};
}
