#ifndef __main__
#define __main__

#include <wx/wx.h>
#include "gui.h"


class MainApp : public wxApp {
public:
	virtual bool OnInit();
};

DECLARE_APP(MainApp)

class MainFrame : public MainFrameBase {
public:
	MainFrame(wxWindow* parent);
	virtual ~MainFrame();
protected:
	virtual void OnCloseFrame(wxCloseEvent& event);
	virtual void OnExitClick(wxCommandEvent& event);
	virtual void onRand(wxCommandEvent& event);
	virtual void onSum(wxCommandEvent& event);
};

#endif //__main__
