#include "main.h"

IMPLEMENT_APP(MainApp);

bool MainApp::OnInit() {
	SetTopWindow(new MainFrame(NULL));
	GetTopWindow()->Show();
	return true;
}

MainFrame::MainFrame(wxWindow* parent)
	: MainFrameBase(parent) {
	wxInitAllImageHandlers();
	this->SetIcon(wxICON(MAIN_ICON));
}

MainFrame::~MainFrame() {
}

void MainFrame::OnCloseFrame(wxCloseEvent& event) {
	Destroy();
}

void MainFrame::OnExitClick(wxCommandEvent& event) {
	Destroy();
}
