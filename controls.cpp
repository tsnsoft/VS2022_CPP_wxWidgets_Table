#include "main.h"
#include <wx/msgdlg.h>

// ��������� ����� � �������
void MainFrame::onRand(wxCommandEvent& event) {
	std::srand(time(0)); // ������������� ������� ��������� �����
	int rc = m_grid1->GetNumberRows(); // ���������� ���������� ����� � �������
	int cc = m_grid1->GetNumberCols(); // ���������� ���������� �������� � �������
	// ���������� ��� ������ �������
	for (int i = 0; i < rc; i++) {
		// ���������� ��� ������� �������
		for (int j = 0; j < cc; j++) {
			int r = std::rand() % 41 - 20; // ���������� ��������� �����
			m_grid1->SetCellValue(i, j, wxString::Format("%d", r)); // ������� � ������ ������� ������ ��������
		}
	}
	// ���������� ������ �� ������ ������� �����
	onSum(event);
}

// ����� ����� � �������
void MainFrame::onSum(wxCommandEvent& event) {
	int rc = m_grid1->GetNumberRows(); // ���������� ���������� ����� � �������
	int cc = m_grid1->GetNumberCols(); // ���������� ���������� �������� � �������
	int sum = 0;
	wxString ss;

	// ���������� ��� ������ �������
	for (int i = 0; i < rc; i++) {
		// ���������� ��� ������� �������
		for (int j = 0; j < cc; j++) {
			ss = m_grid1->GetCellValue(i, j); // ��������� ��������� �������� ������ �������
			sum += strtol(ss, NULL, 0); // ����������� � ���������� �������� �����, ������������ � ����� �������� ������
		}
	}
	m_staticText_Sum->SetLabel(L"����� = " + wxString::Format("%d", sum)); // ������� � ��������� �������� �����
}
