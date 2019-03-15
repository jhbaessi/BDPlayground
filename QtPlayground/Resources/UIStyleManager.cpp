
#include "stdafx.h"
#include "UIStyleManager.h"


// Color Macro

// font
#define FONT_FAMILY_DEFAULT		"Arial"

#define FONT_COLOR_NORMAL		"#FFFFFF"
#define FONT_COLOR_DISABLED		"#4CFFFFFF"
#define FONT_COLOR_SUBTITLE		"#75798E"
#define FONT_COLOR_ERROR		"#E2A747"

// widget
#define VIEW_WIDGET_BKG_COLOR	"#000000"

// medium button
#define BTN_MEDIUM_BKG_COLOR_NORMAL		"#2C2D37"
#define BTN_MEDIUM_BKG_COLOR_HOVER		"#75798E"
#define BTN_MEDIUM_BKG_COLOR_PRESSED	"#3A3B46"
#define BTN_MEDIUM_BKG_COLOR_DISABLED	"#4C2C2D37"

#define BTN_MEDIUM_BORDER_COLOR_NORMAL		"#1A1A1E"
#define BTN_MEDIUM_BORDER_COLOR_HOVER		"#1A1A1E"
#define BTN_MEDIUM_BORDER_COLOR_PRESSED		"#1A1A1E"
#define BTN_MEDIUM_BORDER_COLOR_DISABLED	"#4C1A1A1E"

#define BTN_MEDIUM_BORDER_WIDTH	"1px"

// heavy button
#define BTN_HEAVY_BKG_COLOR_NORMAL		"#3D81FF"
#define BTN_HEAVY_BKG_COLOR_HOVER		"#1E6DFF"
#define BTN_HEAVY_BKG_COLOR_PRESSED		"#2E60BC"
#define BTN_HEAVY_BKG_COLOR_DISABLED	"#2C2D37"

#define BTN_HEAVY_BORDER_COLOR			"#1A1A1E"

#define BTN_HEAVY_BORDER_WIDTH	"0px"

// checkable button
#define BTN_CHECKABLE_BKG_COLOR_CHECKED			"#3d81ff"
#define BTN_CHECKABLE_BKG_COLOR_CHECKED_HOVER	"#1E6DFF"
#define BTN_CHECKABLE_BKG_COLOR_CHECKED_PRESSED	"#2E60BC"

// divider
#define DIVIDER_COLOR	"#1A1A1E"

// editbox
#define EDITBOX_BKG_COLOR_NORMAL	"#1A1A1E"
#define EDITBOX_BKG_COLOR_DISABLED	"#4C1A1A1E"

#define EDITBOX_FONT_COLOR_NORMAL	"#FFFFFF"
#define EDITBOX_FONT_COLOR_DISABLED	"#4B4D5C"

#define EDITBOX_BORDER_COLOR_READONLY	"#1a1a1e"

// spinbox
#define SPINBOX_BKG_COLOR_NORMAL	"#1A1A1E"
#define SPINBOX_BKG_COLOR_DISABLED	"#2C2D37"

#define SPINBOX_FONT_COLOR_NORMAL	"#FFFFFF"
#define SPINBOX_FONT_COLOR_DISABLED	"#4B4D5C"

// list
#define LIST_BKG_COLOR			"#1A1A1E"
#define LIST_BKG_COLOR_DISABLED	"#4C1A1A1E"

#define LIST_ITEM_BKG_COLOR_NORMAL		"#1A1A1E"
#define LIST_ITEM_BKG_COLOR_SELECTED	"#4B4D5C"
#define LIST_ITEM_OPERATION_BKG_COLOR_SELECTED		"#3d81ff"

#define LIST_ITEM_EDIT_BKG_COLOR_FOCUS	"#000000"

// scrollbar
#define SCROLLBAR_BKG_COLOR		"#002C2D37"
#define SCROLLBAR_HANDLE_COLOR	"#7F75798E"

#define SCROLLBAR_BKG_COLOR_PANEL	"#2C2D37"
#define SCROLLBAR_BKG_COLOR_LIST	"#1A1A1E"
#define SCROLLBAR_HANDLE_COLOR		"#7F75798E"

// combobox
#define COMBOBOX_BKG_COLOR				"#1A1A1E"
#define COMBOBOX_BKG_COLOR_DISABLED		"#4C1A1A1E"
#define COMBOBOX_ITEM_BKG_COLOR_NORMAL	"#1A1A1E"
#define COMBOBOX_ITEM_BKG_COLOR_HOVER	"#4B4D5C"

// tree widget
#define TREEWIDGET_BKG_COLOR_NORMAL		"#1A1A1E"
#define TREEWIDGET_BKG_COLOR_SELECTED	"#4B4D5C"

// main
#define MAINWINDOW_BKG_COLOR	"#1A1A1E"

// menu
#define POPUP_MENU_BKG_COLOR	"#3A3B46"

#define POPUP_MENU_BORDER_COLOR	"#1A1A1E"

#define POPUP_MENU_ITEM_BKG_COLOR_NORMAL	"#3A3B46"
#define POPUP_MENU_ITEM_BKG_COLOR_HOVER		"#3D81FF"

// titlebar
#define TITLEBAR_BKG_COLOR	"#2C2D37"

// step menu
#define STEPMENU_BKG_COLOR	"#3A3B46"

#define STEPMENU_BTN_BKG_COLOR_NORMAL	"#3A3B46"
#define STEPMENU_BTN_BKG_COLOR_HOVER	"#4B4D5C"
#define STEPMENU_BTN_BKG_COLOR_PRESSED	"#2C2D37"
#define STEPMENU_BTN_BKG_COLOR_DISABLED	"#3A3B46"

#define STEPMENU_BTN_FONT_COLOR_NORMAL		"#FFFFFF"
#define STEPMENU_BTN_FONT_COLOR_DISABLED	"#75798E"

// parameter panel
#define PARAMETER_PANEL_BKG_COLOR	"#2C2D37"

#define PARAMETER_PANEL_SUB_WIDGET_BORDER_COLOR	"#75798E"

// dialog
#define DIALOG_BKG_COLOR	"#2C2D37"

// progress bar
#define PROGRESSBAR_BKG_COLOR		"#2C2D37"
#define PROGRESSBAR_BORDER_COLOR	"#1A1A1E"

#define PROGRESSBAR_CHUNK_COLOR_START	"#3D81FF"
#define PROGRESSBAR_CHUNK_COLOR_END		"#2C2D37"

// log
#define LOGVIEW_BKG_COLOR	"#2C2D37"

// Todo: 사용하지 않는 macro 삭제

////////////////////////////////////////////////////////////////
#define MAINWINDOW_BACKGROUND_COLOR		"#1C1D1F"
#define MAINWINDOW_FONT_COLOR			"#91919a"
#define MAINWINDOW_FONT_SIZE			"18" // px

#define SPLITTER_GRABBER_COLOR		MAINWINDOW_BACKGROUND_COLOR

#define LOGVIEW_BACKGROUND_COLOR	"#4e4e54"
#define LOGVIEW_FONT_COLOR			"#ffffff"
#define LOGVIEW_FONT_SIZE			(13+1)	// px
											// 폰트 fuzzy 이슈로 디자인 문서에 명시된 사이즈 보다 1px sizeup

#define STATUSBAR_BACKGROUND_COLOR	MAINWINDOW_BACKGROUND_COLOR

#define LOGO_BACKGROUND_COLOR		MAINWINDOW_BACKGROUND_COLOR
#define LOGO_FONT_COLOR				"#ffffff"
#define LOGO_FONT_SIZE				15 // px
#define LOGO_COPYRIGHT_FONT_COLOR	"#63636a"
#define LOGO_COPYRIGHT_FONT_SIZE	12	// px
#define LOGO_COPYRIGHT_FONT_FAMILY	""

#define STEPMENU_BACKGROUND_COLOR			"#4e4e54"
#define STEPMENU_BUTTON_COLOR_CHECKED		"#2f2f2f"
#define STEPMENU_BUTTON_COLOR_UNCHECKED		"#4e4e54"
#define STEPMENU_BUTTON_COLOR_HOVER			"#595960"
#define STEPMENU_FONT_COLOR_CHECKED			"#ffffff"
#define STEPMENU_FONT_COLOR_UNCHECKED		"#9a9aa3"
#define STEPMENU_FONT_SIZE					15	// px

#define PARAMETERPANEL_BACKGROUND_COLOR		"#4e4e54"
#define PARAMETERPANEL_FONT_COLOR			"#ffffff"
#define PARAMETERPANEL_FONT_COLOR_DISABLE	"#91919a"
#define PARAMETERPANEL_FONT_SIZE			13 // px
#define PARAMETERPANEL_BUTTON_COLOR			"#3c3c41"
#define PARAMETERPANEL_BUTTON_COLOR_DISABLED	"#63636a"
#define PARAMETERPANEL_BUTTON_COLOR_HOVER		"#595960"
#define PARAMETERPANEL_BUTTON_COLOR_PRESSED		"#1c1d1f"
#define PARAMETERPANEL_BUTTON_BORDER_COLOR	"#2f2f2f"
#define PARAMETERPANEL_BUTTON_FONT_COLOR	PARAMETERPANEL_FONT_COLOR
#define PARAMETERPANEL_BUTTON_FONT_SIZE		15 //px

#define VIEW_BACKROUND_COLOR_START	"#28282d"
#define VIEW_BACKROUND_COLOR_END	"#000000"

#define LIST_BACKGROUND_COLOR	"#3c3c41"
#define LIST_BORDER_COLOR		"#2f2f2f"

#define LISTITEM_BACKGROUND_COLOR_DEFAULT	"#3c3c41"
#define LISTITEM_BACKGROUND_COLOR_SELECTED	"#2f2f2f"
#define LISTITEM_FONT_COLOR					"#ffffff"
#define LISTITEM_FONT_SIZE					13 //px

#define SCROLLBAR_FIXED_WIDTH					18
#define SCROLLBAR_BACKGROUND_COLOR				"#45454a"
#define SCROLLBAR_PAGE_COLOR					"#45454a"
#define SCROLLBAR_ARROW_COLOR					"#3c3c41"
#define SCROLLBAR_ARROW_BUTTON_HEIGHT			18
#define SCROLLBAR_ARROW_BUTTON_BACKGROUND_COLOR	"#9a9aa3"

#define CHECKBOX_FONT_COLOR_DISABLED	"#91919a"

#define RADIO_FONT_COLOR_DISABLED		"#91919a"

#define LINEEDIT_BACKGROUND_COLOR				"#3c3c41"
#define LINEEDIT_BACKGROUND_COLOR_DISABLED		"#4e4e54"
#define LINEEDIT_FONT_COLOR_DISABLED			"#91919a"

#define TITLEBAR_BACKGROUND_COLOR			"#424247"
#define TITLEBAR_BUTTON_FONT_COLOR			"#ffffff"
#define TITLEBAR_BUTTON_FONT_COLOR_HOVER	"#63636a"
#define TITLEBAR_BUTTON_FONT_COLOR_PRESSED	"#1c1d1f"
#define TITLEBAR_BUTTON_DISABLED_FONT_COLOR	"#2C2D37"
#define TITLEBAR_BUTTON_FONT_SIZE			15 // px
#define TITLEBAR_TITLE_FONT_COLOR			"#ffffff"
#define TITLEBAR_TITLE_FONT_SIZE			(12+2)	// px
													// 폰트 fuzzy 이슈로 디자인 문서에 명시된 사이즈 보다 2px sizeup

#define POPUP_DIALOG_BACKGROUND_COLOR	"#424247"
#define POPUP_DIALOG_BORDER_COLOR		"#2f2f2f"
#define POPUP_DIALOG_FONT_COLOR			"#ffffff"
#define POPUP_DIALOG_FONT_SIZE			15 // px
#define POPUP_DIALOG_BUTTON_BACKGROUND_COLOR	"#3c3c41"
#define POPUP_DIALOG_BUTTON_BACKGROUND_HOVER	"#595960"
#define POPUP_DIALOG_BUTTON_BACKGROUND_PRESSED	"#1c1d1f"

#define COMBOBOX_BACKGROUND_COLOR				"#3c3c41"
#define COMBOBOX_BACKGROUND_COLOR_DISABLED		"#4e4e541e"
#define COMBOBOX_FONT_COLOR_DISABLED			"#91919a"
#define COMBOBOX_ARROW_BUTTON_BACKGROUND_COLOR	"#9a9aa3"
#define COMBOBOX_DROPDOWN_BORDER_COLOR			"#2f2f2f"

#define SPINBOX_BACKGROUND_COLOR			"#3c3c41"
#define SPINBOX_BACKGROUND_COLOR_DIABLED	"#4e4e54"
#define SPINBOX_FONT_COLOR_DIABLED			"#91919a"
#define SPINBOX_BUTTON_BORDER_COLOR			SPINBOX_BACKGROUND_COLOR
#define SPINBOX_ARROW_BUTTON_COLOR			"#9a9aa3"
#define SPINBOX_ARROW_BUTTON_COLOR_PRESSED	"#2f2f2f"

#define SLIDER_MARGIN				(8)

#define TREE_BACKGROUND_COLOR			"#3c3c41"
#define TREE_BACKGROUND_COLOR_SELECTED	"#2f2f2f"

CUIStyleManager::CUIStyleManager()
{
	RegisterResource();
	LookNFeel_DarkGray();
}

void CUIStyleManager::RegisterResource()
{
	QString rccPath = QCoreApplication::applicationDirPath() + "/" + APP_RESOURCE_RCC;
	QResource::registerResource(rccPath);

	RegisterFont();
}

void CUIStyleManager::RegisterFont()
{
	bool bUseDesignFont = false;

#ifdef USE_DESIGN_FONT
	bUseDesignFont = true;
#endif

	QString fontFamily, fontFamily_Bold;

	if (bUseDesignFont)
	{		
		// 사용할 폰트 리소스 정의
		QStringList slFontResource;
		slFontResource << RES_FONT_NOTOSANS;

		// 사용할 폰트를 QFontDatabase에 추가
		for (auto font : slFontResource)
		{
			QFile resFont(font);
			if (resFont.open(QIODevice::ReadOnly) == false)
			{
				qDebug() << "Couldn't open a font -" << font;
			}
			else
			{
				int fontID = QFontDatabase::addApplicationFont(font);
				if (fontID == -1)
				{
					qDebug() << "Couldn't add application font -" << font;
				}
				else
				{
					// UIStyleManager 에서 사용할 폰트 정의
					if (font == RES_FONT_NOTOSANS)
					{
						fontFamily = FONT_FAMILY_NOTOSANS;
						fontFamily_Bold = FONT_FAMILY_NOTOSANS;					
					}
				}
			}		}
	}
	else
	{
		fontFamily = FONT_FAMILY_DEFAULT;
		fontFamily_Bold = FONT_FAMILY_DEFAULT;
	}

	m_fontRegular = QFont(fontFamily);
	m_fontLogView = m_fontRegular;

	m_fontBold = QFont(fontFamily);
	m_fontBold.setBold(true);
}

void CUIStyleManager::LookNFeel_DarkGray()
{
	QString cssScrollBar = QString(
		"QScrollBar::add-line, QScrollBar::sub-line {width: 0px; height: 0px;}"

		"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {background-color: %1;}"
		"QScrollBar:vertical {background: %1; width: 10px;}"
		"QScrollBar::handle:vertical {"
		"	background-color: %2;"
		"	border-width: 1px; border-radius: 3px; border-color: %2;"
		"	margin: 2px;"
		"	min-height: 10px;"
		"}"

		"QAbstractItemView QScrollBar::add-page:vertical, QAbstractItemView QScrollBar::sub-page:vertical {background-color: %3;}"
		"QAbstractItemView QScrollBar:vertical {background: %3; width: 10px;}"
		"QAbstractItemView QScrollBar::handle:vertical {"
		"	background-color: %2;"
		"	border-width: 1px; border-radius: 3px; border-color: %2;"
		"	margin: 2px;"
		"	min-height: 10px;"
		"}"

		"QScrollArea#warning QScrollBar::add-page:vertical, QScrollArea#warning QScrollBar::sub-page:vertical {background-color: %3;}"
		"QScrollArea#warning QScrollBar:vertical {background: %3; width: 10px;}"

	).arg(SCROLLBAR_BKG_COLOR_PANEL)
		.arg(SCROLLBAR_HANDLE_COLOR)
		.arg(SCROLLBAR_BKG_COLOR_LIST);

	QString cssCheckBox = QString(
		"QCheckBox {border: none; background-color: transparent; spacing: 10px;}"
		"QCheckBox::indicator:checked {image: url(%1);}"
		"QCheckBox::indicator:checked:disabled {image: url(%2);}"
		"QCheckBox::indicator:unchecked {image: url(%3);}"
		"QCheckBox::indicator:unchecked:disabled {image: url(%4);}"
		"QCheckBox:disabled {color: %5;}"

		"QCheckBox#point_name {font-size: 10px; spacing: 5px;}"
		"QCheckBox#point_name::indicator {width: 30px; height: 30px;}"
		"QCheckBox#point_name::indicator:unchecked:disabled, QCheckBox#point_name::indicator:checked:disabled {image: url(%6);}"
		"QCheckBox#point_name::indicator:unchecked {image: url(%7);}"
		"QCheckBox#point_name::indicator:unchecked:hover {image: url(%8);}"
		"QCheckBox#point_name::indicator:unchecked:pressed {image: url(%9);}"
		"QCheckBox#point_name::indicator:checked {image: url(%9);}"
		"QCheckBox#point_name::indicator:checked:hover {image: url(%9);}"
		"QCheckBox#point_name::indicator:checked:pressed {image: url(%8);}"

		"QCheckBox#system_point {font-size: 10px; spacing: 5px;}"
		"QCheckBox#system_point::indicator {width: 30px; height: 30px;}"
		"QCheckBox#system_point::indicator:unchecked:disabled, QCheckBox#system_point::indicator:checked:disabled {image: url(%10);}"
		"QCheckBox#system_point::indicator:unchecked {image: url(%11);}"
		"QCheckBox#system_point::indicator:unchecked:hover {image: url(%12);}"
		"QCheckBox#system_point::indicator:unchecked:pressed {image: url(%13);}"
		"QCheckBox#system_point::indicator:checked {image: url(%13);}"
		"QCheckBox#system_point::indicator:checked:hover {image: url(%13);}"
		"QCheckBox#system_point::indicator:checked:pressed {image: url(%12);}"

		"QCheckBox#position_picker {font-size: 10px; spacing: 5px;}"
		"QCheckBox#position_picker::indicator {width: 30px; height: 30px;}"
		"QCheckBox#position_picker::indicator:unchecked:disabled, QCheckBox#position_picker::indicator:checked:disabled {image: url(%14);}"
		"QCheckBox#position_picker::indicator:unchecked {image: url(%15);}"
		"QCheckBox#position_picker::indicator:unchecked:hover {image: url(%16);}"
		"QCheckBox#position_picker::indicator:unchecked:pressed {image: url(%17);}"
		"QCheckBox#position_picker::indicator:checked {image: url(%17);}"
		"QCheckBox#position_picker::indicator:checked:hover {image: url(%17);}"
		"QCheckBox#position_picker::indicator:checked:pressed {image: url(%16);}"

		"QCheckBox#show_stimulator {font-size: 10px; spacing: 5px;}"
		"QCheckBox#show_stimulator::indicator {width: 30px; height: 30px;}"
		"QCheckBox#show_stimulator::indicator:unchecked:disabled, QCheckBox#show_stimulator::indicator:checked:disabled {image: url(%18);}"
		"QCheckBox#show_stimulator::indicator:unchecked {image: url(%19);}"
		"QCheckBox#show_stimulator::indicator:unchecked:hover {image: url(%20);}"
		"QCheckBox#show_stimulator::indicator:unchecked:pressed {image: url(%21);}"
		"QCheckBox#show_stimulator::indicator:checked {image: url(%21);}"
		"QCheckBox#show_stimulator::indicator:checked:hover {image: url(%21);}"
		"QCheckBox#show_stimulator::indicator:checked:pressed {image: url(%20);}"

		"QCheckBox#magnitude_picker {font-size: 10px; spacing: 5px;}"
		"QCheckBox#magnitude_picker::indicator {width: 30px; height: 30px;}"
		"QCheckBox#magnitude_picker::indicator:unchecked:disabled, QCheckBox#magnitude_picker::indicator:checked:disabled {image: url(%22);}"
		"QCheckBox#magnitude_picker::indicator:unchecked {image: url(%23);}"
		"QCheckBox#magnitude_picker::indicator:unchecked:hover {image: url(%24);}"
		"QCheckBox#magnitude_picker::indicator:unchecked:pressed {image: url(%25);}"
		"QCheckBox#magnitude_picker::indicator:checked {image: url(%25);}"
		"QCheckBox#magnitude_picker::indicator:checked:hover {image: url(%25);}"
		"QCheckBox#magnitude_picker::indicator:checked:pressed {image: url(%24);}"

		"QCheckBox#tool-cursor::indicator {width: 42px; height: 42px;}"
		"QCheckBox#tool-cursor::indicator:unchecked {image: url(%26);}"
		"QCheckBox#tool-cursor::indicator:hover {image: url(%27); background-color: #26262d;}"
		"QCheckBox#tool-cursor::indicator:checked {image: url(%28); background-color: #1a1a1e;}"

		"QCheckBox#tool-brush::indicator {width: 42px; height: 42px;}"
		"QCheckBox#tool-brush::indicator:unchecked {image: url(%29);}"
		"QCheckBox#tool-brush::indicator:hover {image: url(%30); background-color: #26262d;}"
		"QCheckBox#tool-brush::indicator:checked {image: url(%31); background-color: #1a1a1e;}"
		"QCheckBox#tool-brush::indicator:disabled {image: url(%32);}"

		"QCheckBox#tool-eraser::indicator {width: 42px; height: 42px;}"
		"QCheckBox#tool-eraser::indicator:unchecked {image: url(%33);}"
		"QCheckBox#tool-eraser::indicator:hover {image: url(%34); background-color: #26262d;}"
		"QCheckBox#tool-eraser::indicator:checked {image: url(%35); background-color: #1a1a1e;}"
		"QCheckBox#tool-eraser::indicator:disabled {image: url(%36);}"

		"QCheckBox#shape-rectangular::indicator {width: 30px; height: 30px;}"
		"QCheckBox#shape-rectangular::indicator:unchecked:disabled, QCheckBox#shape-rectangular::indicator:checked:disabled {image: url(%37);}"
		"QCheckBox#shape-rectangular::indicator:unchecked {image: url(%38);}"
		"QCheckBox#shape-rectangular::indicator:unchecked:hover {image: url(%39);}"
		"QCheckBox#shape-rectangular::indicator:unchecked:pressed {image: url(%40);}"
		"QCheckBox#shape-rectangular::indicator:checked {image: url(%41);}"
		"QCheckBox#shape-rectangular::indicator:checked:hover {image: url(%41);}"
		"QCheckBox#shape-rectangular::indicator:checked:pressed {image: url(%40);}"

	).arg(RES_CHECKBOX_CHECKED)
		.arg(RES_CHECKBOX_CHECKED_DISABLED)
		.arg(RES_CHECKBOX_UNCHECKED)
		.arg(RES_CHECKBOX_UNCHECKED_DISABLED)
		.arg(FONT_COLOR_DISABLED)					// 5
		.arg(RES_IMG_POINT_NAME_DISABLED)
		.arg(RES_IMG_POINT_NAME_OFF)
		.arg(RES_IMG_POINT_NAME_OFFHOVER_ONPRESS)
		.arg(RES_IMG_POINT_NAME_ON_OFFPRESS)
		.arg(RES_IMG_SYSTEM_POINT_DISABLED)			// 10
		.arg(RES_IMG_SYSTEM_POINT_OFF)
		.arg(RES_IMG_SYSTEM_POINT_OFFHOVER_ONPRESS)
		.arg(RES_IMG_SYSTEM_POINT_ON_OFFPRESS)
		.arg(RES_IMG_PICKER_DISABLED)
		.arg(RES_IMG_PICKER_OFF)					// 15
		.arg(RES_IMG_PICKER_OFFHOVER_ONPRESS)
		.arg(RES_IMG_PICKER_ON_OFFPRESS)
		.arg(RES_IMG_SHOW_STIMULATOR_DISABLED)
		.arg(RES_IMG_SHOW_STIMULATOR_OFF)
		.arg(RES_IMG_SHOW_STIMULATOR_OFFHOVER_ONPRESS)		// 20
		.arg(RES_IMG_SHOW_STIMULATOR_ON_OFFPRESS)
		.arg(RES_IMG_MAGNITUDE_PICKER_DISABLED)
		.arg(RES_IMG_MAGNITUDE_PICKER_OFF)
		.arg(RES_IMG_MAGNITUDE_PICKER_OFFHOVER_ONPRESS)
		.arg(RES_IMG_MAGNITUDE_PICKER_ON_OFFPRESS)			//25
		.arg(RES_IMG_CURSOR_TOOL_OFF)
		.arg(RES_IMG_CURSOR_TOOL_HOVER)
		.arg(RES_IMG_CURSOR_TOOL_ON)
		.arg(RES_IMG_BRUSH_TOOL_OFF)
		.arg(RES_IMG_BRUSH_TOOL_HOVER)			// 30
		.arg(RES_IMG_BRUSH_TOOL_ON)
		.arg(RES_IMG_BRUSH_TOOL_DISABLED)
		.arg(RES_IMG_ERASER_TOOL_OFF)
		.arg(RES_IMG_ERASER_TOOL_HOVER)
		.arg(RES_IMG_ERASER_TOOL_ON)		// 35
		.arg(RES_IMG_ERASER_TOOL_DISABLED)
		.arg(RES_IMG_BRUSH_RECTANGULAR_DISABLED)
		.arg(RES_IMG_BRUSH_RECTANGULAR_OFF)
		.arg(RES_IMG_BRUSH_RECTANGULAR_OFFHOVER)
		.arg(RES_IMG_BRUSH_RECTANGULAR_OFFPRESS_ONPRESS)	// 40
		.arg(RES_IMG_BRUSH_RECTANGULAR_ON_ONHOVER)
		;

	QString cssRadioButton = QString(
		"QRadioButton {spacing: 10px;}"
		"QRadioButton::indicator:checked {image: url(%1);}"
		"QRadioButton::indicator:checked:disabled {image: url(%2);}"
		"QRadioButton::indicator:unchecked {image: url(%3);}"
		"QRadioButton::indicator:unchecked:disabled {image: url(%4);}"
		"QRadioButton:disabled {color: %5;}"
	).arg(RES_RADIO_BUTTON_CHECKED)
		.arg(RES_RADIO_BUTTON_CHECKED_DISABLED)
		.arg(RES_RADIO_BUTTON_UNCHECKED)
		.arg(RES_RADIO_BUTTON_UNCHECKED_DISABLED)
		.arg(FONT_COLOR_DISABLED);

	QString cssComboBox = QString(
		"QComboBox {background-color: %1; border: none; padding-left: 10px;}"
		"QComboBox:disabled {background-color: %2; color: %3;}"
		"QComboBox::drop-down {"
		"	background-color: transparent;"
		"	border: none;"
		"	width: 26px;"
		"}"
		"QComboBox::down-arrow {"
		"	background-color: transparent;"
		"	image: url(%4);"
		"}"
		"QComboBox QAbstractItemView {"
		"	outline: 0;"
		"	background: %5;"
		"	border: none;"
		"}"

		"QComboBox QAbstractItemView::item {min-height: 26px; background-color: %5; padding-left: 7px;}"
		"QComboBox QAbstractItemView::item:selected {background-color: %6; padding-left: 7px;}"
		"QComboBox QAbstractItemView::item:hover {background-color: %6; padding-left: 7px;}"

	).arg(COMBOBOX_BKG_COLOR)
		.arg(COMBOBOX_BKG_COLOR_DISABLED)
		.arg(COMBOBOX_FONT_COLOR_DISABLED)
		.arg(RES_IMG_COMOBOBOX_ARROW)
		.arg(COMBOBOX_ITEM_BKG_COLOR_NORMAL)
		.arg(COMBOBOX_ITEM_BKG_COLOR_HOVER);

	QString cssSpinBox = QString(
		"QSpinBox, QDoubleSpinBox {"
		"	border: none;"
		"	background-color: #1a1a1e;"
		"}"
		"QSpinBox:disabled, QDoubleSpinBox:disabled {"
		"	background-color: #2c2d37;"
		"	color: #4b4d5c;"
		"}"
		"QSpinBox::up-button, QDoubleSpinBox::up-button {"
		"	subcontrol-origin: border;"
		"	subcontrol-position: top right;"
		"	width: 18px;"
		"	border: none;"
		"	background-color: transparent;"
		"}"
		"QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed {"
		"	background-color: transparent;"
		"}"
		"QSpinBox::down-button, QDoubleSpinBox::down-button {"
		"	subcontrol-origin: border;"
		"	subcontrol-position: bottom right;"
		"	width: 18px;"
		"	border: none;"
		"	background-color: transparent;"
		"}"
		"QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed {"
		"	background-color: transparent;"
		"}"
		"QSpinBox::up-arrow, QDoubleSpinBox::up-arrow {"
		"	image: url(:/img/btn_arrow_up);"
		"}"
		"QSpinBox::down-arrow, QDoubleSpinBox::down-arrow {"
		"	image: url(:/img/btn_arrow_down);"
		"}"
	);

	QString cssListWidget = QString(
		"QListWidget {background-color: %1; border: none; outline: 0;}"
		"QListWidget:disabled {background-color: %2;}"

		"QListWidget::item {color: %3; background-color: %4; padding-left: 10px;}"
		"QListWidget::item:selected {background-color: %5;}"
		"QListWidget#plot::item:selected {background-color: #3d81ff;}"

		"QListWidget#operation::item:selected {background-color: %6;}"

		"QListWidget::indicator:checked {image: url(%7);}"
		"QListWidget::indicator:checked:disabled {image: url(%8);}"
		"QListWidget::indicator:unchecked {image: url(%9);}"
		"QListWidget::indicator:unchecked:disabled {image: url(%10);}"

		"QUI_AddedElectrodeItem QLabel {background-color: transparent;}"

	).arg(LIST_BKG_COLOR)
		.arg(LIST_BKG_COLOR_DISABLED)
		.arg(FONT_COLOR_NORMAL)
		.arg(LIST_ITEM_BKG_COLOR_NORMAL)
		.arg(LIST_ITEM_BKG_COLOR_SELECTED)
		.arg(LIST_ITEM_OPERATION_BKG_COLOR_SELECTED)
		.arg(RES_CHECKBOX_CHECKED)
		.arg(RES_CHECKBOX_CHECKED_DISABLED)
		.arg(RES_CHECKBOX_UNCHECKED)
		.arg(RES_CHECKBOX_UNCHECKED_DISABLED);

	QString cssTableWidget = QString(
		"QTableWidget {background-color: %1; border: none; outline: 0;}"
		"QTableWidget::item {color: %2; background-color: %3; padding-left: 10px;}"
		"QTableWidget::indicator:checked {image: url(%4);}"
		"QTableWidget::indicator:checked:disabled {image: url(%5);}"
		"QTableWidget::indicator:unchecked {image: url(%6);}"
		"QTableWidget::indicator:unchecked:disabled {image: url(%7);}"
		"QTableWidget QDoubleSpinBox {background-color: %8; border: none;}"
		"QTableWidget QDoubleSpinBox:focus {background-color: %9;}"
	).arg(LIST_BKG_COLOR)
		.arg(FONT_COLOR_NORMAL)
		.arg(LIST_ITEM_BKG_COLOR_NORMAL)
		.arg(RES_CHECKBOX_CHECKED)
		.arg(RES_CHECKBOX_CHECKED_DISABLED)
		.arg(RES_CHECKBOX_UNCHECKED)
		.arg(RES_CHECKBOX_UNCHECKED_DISABLED)
		.arg(LIST_ITEM_BKG_COLOR_NORMAL)
		.arg(LIST_ITEM_EDIT_BKG_COLOR_FOCUS);
	
	QString cssCustomizedSlider = QString(
		"QUI_Slider {"
		"	qproperty-sliderMargin: %1;"	// px
		"	qproperty-tickMarksColor: #ffffff;"
		"}"

		"QUI_Slider QWidget {background: transparent;}"

		"QUI_Slider > QSlider::handle:horizontal {"
		"	image: url(%2);"
		"	margin: 0px -%1px;"
		"}"
		"QUI_Slider > QSlider::handle:horizontal:hover {"
		"	image: url(%3);"
		"	margin: 0px -%1px;"		
		"}"

		"QUI_Slider > QSlider::groove:horizontal {"
		"	border: none;"
		"	position: absolute;"
		"	left: %1px; right: %1px;"
		"}"

		"QUI_Slider > QSlider::sub-page:horizontal {"
		"	background-image: url(%4);"
		"	background-repeat: repeat-x;"
		"	background-position: center;"
		"}"

		"QUI_Slider > QSlider::add-page:horizontal {"
		"	background-image: url(%4);"
		"	background-repeat: repeat-x;"
		"	background-position: center;"
		"}"

		"QUI_Slider > QLabel {padding: 0px;}"
		"QUI_Slider > QWidget > QLabel {padding: 0px;}"
	).arg(SLIDER_MARGIN)
		.arg(RES_IMG_CONTROLLER)
		.arg(RES_IMG_CONTROLLER_HOVER)
		.arg(RES_IMG_SLIDER);

	QString cssTreeWidget = QString(
		"QTreeWidget {color: %1; border: none; background-color: %2; outline: 0; padding-left: 10px;}"
		"QTreeWidget::item {color: %1; outline: 0; font-size: 12px;}"
		"QTreeWidget::item:hover {background-color: %2;}"
		"QTreeWidget::item:selected {border: none; background-color: %3;}"

		"QUI_ElectrodeTreeItem > QLabel {background: transparent; padding: 0px; font-size: 12px;}"
		"QUI_TargetInfoTreeItem > QLabel {background: transparent; padding: 0px; font-size: 12px;}"
	).arg(FONT_COLOR_NORMAL)
		.arg(TREEWIDGET_BKG_COLOR_NORMAL)
		.arg(TREEWIDGET_BKG_COLOR_SELECTED);

	QString cssGroupBox = QString(
		"QGroupBox {background-color: %1; margin: 12px 0px 0 px 0px;}"
		"QGroupBox::title {subcontrol-origin: margin; subcontrol-position: top left;}"

		"QGroupBox > QLabel {background: transparent;}"
	).arg(PARAMETERPANEL_BACKGROUND_COLOR);

	QString cssLabel = QString(
		"QLabel {color: %1; font-size: 13px; border: none;}"

		"QLabel#header-section {font-weight: bold;}"
		"QLabel#header-subsection {color: %2; font-weight: bold;}"
		"QLabel#header-frame {font-size: 11px; color: #4b4d5c; font-weight: bold;}"

		"QLabel#content-warning {color: %3;}"
		"QLabel#content-scroll_warning {color: %3; background-color: #1a1a1e; padding: 0px 0px 0px 10px;}"
		"QLabel#content-tool {font-size: 10px;}"
		"QLabel#content-unit {font-weight: bold;}"
		"QLabel#content-frame {font-size: 11px;}"

		"QUI_ElidedLabel#content-frame {font-size: 11px; border: none;}"
	).arg(FONT_COLOR_NORMAL)
		.arg(FONT_COLOR_SUBTITLE)
		.arg(FONT_COLOR_ERROR);

	QString cssDivider = QString(
		"#Divider {background-color: %1; border: none;}"
	).arg(DIVIDER_COLOR);

	QString cssContextMenu = QString(
		"QMenu {"
		"	color: %1;"
		"	background-color: %2;"
		"	border: 1px solid %3;"
		"	width: 88px;"
		"}"

		"QMenu::item { "
		"	background-color: %4;"
		"	margin: 0px;"
		"	padding-left: 10px;"		
		"	width: 88px; height: 22px;"
		"}"

		"QMenu::item:selected { background-color: %5; }"
		"QMenu::item:disabled { color: %6; background-color: transparent;}"

		"QMenu::separator {"
		"	height: 1px;"
		"	background: %7;"
		"	margin: 0px;"
		"}"

		"QMenu#context-list {width: 133px;}"
		"QMenu#context-list::item {width: 133px; height: 22px;}"

		"QMenu#context-view {width: 133px;}"
		"QMenu#context-view::item {width: 133px; height: 30px;}"

	).arg(FONT_COLOR_NORMAL)
		.arg(POPUP_MENU_BKG_COLOR)
		.arg(POPUP_MENU_BORDER_COLOR)
		.arg(POPUP_MENU_ITEM_BKG_COLOR_NORMAL)
		.arg(POPUP_MENU_ITEM_BKG_COLOR_HOVER)
		.arg(FONT_COLOR_DISABLED)
		.arg(DIVIDER_COLOR);

	QString cssSegmentationLabelItem = QString(
		"QUI_SegmentationLabelItem QWidget#ground-list_item {background-color: #2c2d37;}"

		"QUI_SegmentationLabelItem QCheckBox {width: 26px; height: 25px; background: #1a1a1e;}"
		"QUI_SegmentationLabelItem QCheckBox::indicator {width: 26px; height: 25px; background: #1a1a1e;}"
		"QUI_SegmentationLabelItem QCheckBox::indicator:checked {image: url(%1);}"
		"QUI_SegmentationLabelItem QCheckBox::indicator:unchecked {image: url(%2);}"

		"QUI_SegmentationLabelItem QLabel#text {font-size: 12px; background: #1a1a1e;}"

		"QUI_SegmentationLabelItem QSpinBox#opacity {"
		"	background: #1a1a1e;"
		"	border: none;"
		"	height: 24px;"	// height 값이 정해지지 않은 경우 up/down button 크기가 비정상적으로 정해짐.
		"}"
		"QUI_SegmentationLabelItem QSpinBox#opacity::up-button {"
		"	subcontrol-origin: content;"
		"	subcontrol-position: top right;"
		"	background: #1a1a1e;"
		"	border: none;"
		"	width: 12px; height: 12px;"
		"}"
		"QUI_SegmentationLabelItem QSpinBox#opacity::down-button {"
		"	subcontrol-origin: content;"
		"	subcontrol-position: bottom right;"
		"	background: #1a1a1e;"
		"	border: none;"
		"	width: 12px; height: 12px;"
		"}"
		"QUI_SegmentationLabelItem QSpinBox#opacity::up-arrow {"
		"	image: url(%3);"
		"	width: 6px; height: 4px;"
		"	top: 1px;"	// 중심위치에서 아래로 1px
		"}"
		"QUI_SegmentationLabelItem QSpinBox#opacity::down-arrow {"
		"	image: url(%4);"
		"	width: 6px; height: 4px;"
		"	top: -1px;"	// 중심위치에서 위로 1px
		"}"
	).arg(RES_IMG_LABEL_SHOW)
		.arg(RES_IMG_LABEL_HIDE)
		.arg(RES_IMG_SPINBOX_UP)
		.arg(RES_IMG_SPINBOX_DOWN);

	QString cssConductivitySettingsDialog = QString(
		"ConductivitySettingsDialog {background-color: #2c2d37;}"

		"ConductivitySettingsDialog QWidget#ground-list {background-color: #1a1a1e; border: 1px solid #1a1a1e;}"

		"ConductivityListItem QWidget#ground-list_item {background-color: #2c2d37;}"

		"ConductivityListItem QLabel#text {"
		"	font-size: 12px;"
		"	background-color: #1a1a1e;"
		"	padding: 5px;"
		"}"

		"ConductivityListItem QDoubleSpinBox {font-size: 12px; background-color: #1a1a1e;}"

		//"QFrame#tools {border: 1px solid #1a1a1e; border-top: none;}"
	);

	// Main Window
	m_cssMainWindow = QString(
		"QMainWindow#MainWindow {background-color: %1;}"

		"QStatusBar {color: %2;}"
		"QStatusBar::item {border: none;}"

		"QSplitter::handle {background-color: %3;}"

		"QWidget#overlay-diactivation {background-color: rgba(0, 0, 0, 126);}"

		).arg(MAINWINDOW_BKG_COLOR)
		.arg(STATUSBAR_BACKGROUND_COLOR)
		.arg(SPLITTER_GRABBER_COLOR);

	// Parameter Panel
	m_cssParameterPanel = QString(
		"QWidget {background-color: %1;}"
		).arg(PARAMETER_PANEL_BKG_COLOR);

	// Log View
	m_cssLogView = QString(
		"* {color: %1; font-family: %2; font-size: 13px;}"

		"QTextEdit {"
		"	background-color: %3;"
		"	border: none;"
		"	padding: 10px;"
		"}"
	).arg(FONT_COLOR_NORMAL)
		.arg(FONT_FAMILY_DEFAULT)
		.arg(LOGVIEW_BKG_COLOR);

	m_cssLogView.append(cssScrollBar);
	m_cssLogView.append(cssContextMenu);

	// View1
	m_cssView1 = QString(
		"QLabel {color: %1; font-size: %2px;}"
		"QSplitter {background-color:qlineargradient(x1:1, y1:0, x2:1, y2:1, stop:0 %3, stop:1 %4);}"
		"QSplitter::handle {background: qlineargradient(x1:1, y1:0, x2:1, y2:1, stop:0 %3, stop:1 %4);}"
		).arg(MAINWINDOW_FONT_COLOR)
		.arg(MAINWINDOW_FONT_SIZE)
		.arg(VIEW_BACKROUND_COLOR_START)
		.arg(VIEW_BACKROUND_COLOR_END);

	m_cssView1.append(cssContextMenu);

	// 단계별 파라미터 UI 공통
	m_cssParameterComponentCommon = QString(
		"* {color: %1; font-family: %2; font-size: 13px; background-color: %3;}"

		"QPushButton {background-color: %4; border: 1px solid %5; border-radius: 2px;}"
		"QPushButton:disabled {color: %6; background: %7; border-color: %8;}"
		"QPushButton:hover {background-color: %9;}"
		"QPushButton:pressed {background-color: %10;}"

		"QPushButton#header {font-size: 10px;}"

		"QPushButton#input_position {background: none; border: none; border-image: url(%11);}"
		"QPushButton#input_position:hover {border-image: url(%12);}"
		"QPushButton#input_position:pressed {border-image: url(%13);}"
		"QPushButton#input_position:disabled {border-image: url(%14);}"

		"QPushButton#checkable:checked {background: %15;}"
		"QPushButton#checkable:checked:hover {background: %16;}"
		"QPushButton#checkable:checked:pressed {background: %17;}"

		"QPushButton#complete-middle {"
		"	font-size: 15px;"
		"	background-color: %18;"
		"	border: 1px solid %18;"
		"}"

		"QPushButton#complete-middle-small {"
		"	background-color: %18;"
		"	border: 1px solid %18;"
		"}"

		"QPushButton#complete-bottom {"
		"	font-size: 15px;"
		"	background-color: %18;"
		"	border: none; border-top-color: %19; border-top-style: solid; border-top-width: 1px; border-radius: 0px;"
		"}"

		"QPushButton#complete-middle:hover, QPushButton#complete-middle-small:hover {background-color: %20; border-color: %20;}"
		"QPushButton#complete-middle:pressed, QPushButton#complete-middle-small:pressed {background-color: %21; border-color: %21;}"
		"QPushButton#complete-middle:disabled, QPushButton#complete-middle-small:disabled {color: %6; background-color: %22; border-color: %22;}"

		"QPushButton#complete-bottom:hover {background-color: %20;}"
		"QPushButton#complete-bottom:pressed {background-color: %21;}"
		"QPushButton#complete-bottom:disabled {color: %6; background-color: %22;}"

		"QPushButton#tool-import {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_import_nor);"
		"}"
		"QPushButton#tool-import:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_import_hover);"
		"}"
		"QPushButton#tool-import:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_import_press);"
		"}"
		"QPushButton#tool-import:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_import_dis);"
		"}"

		"QPushButton#tool-export {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_export_nor);"
		"}"
		"QPushButton#tool-export:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_export_hover);"
		"}"
		"QPushButton#tool-export:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_export_press);"
		"}"
		"QPushButton#tool-export:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_export_dis);"
		"}"

		"QPushButton#tool-rename {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_rename_nor);"
		"}"
		"QPushButton#tool-rename:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_rename_hover);"
		"}"
		"QPushButton#tool-rename:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_rename_press);"
		"}"
		"QPushButton#tool-rename:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_rename_dis);"
		"}"

		"QPushButton#tool-remove {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_delete_nor);"
		"}"
		"QPushButton#tool-remove:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_delete_hover);"
		"}"
		"QPushButton#tool-remove:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_delete_press);"
		"}"
		"QPushButton#tool-remove:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_delete_dis);"
		"}"

		"QPushButton#tool-up {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_up_nor);"
		"}"
		"QPushButton#tool-up:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_up_hover);"
		"}"
		"QPushButton#tool-up:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_up_press);"
		"}"
		"QPushButton#tool-up:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_up_dis);"
		"}"

		"QPushButton#tool-down {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_down_nor);"
		"}"
		"QPushButton#tool-down:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/btn_down_hover);"
		"}"
		"QPushButton#tool-down:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_down_press);"
		"}"
		"QPushButton#tool-down:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/btn_down_dis);"
		"}"

		"QPushButton#tool-editor {"
		"	border: 1px solid #1a1a1e; border-radius: 3px;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/btn_editor_nor);"
		"}"
		"QPushButton#tool-editor:hover {"
		"	border: 1px solid #1a1a1e; border-radius: 3px;"
		"	background-color: #3a3b46; background-image: url(:img/btn_editor_hover);"
		"}"
		"QPushButton#tool-editor:pressed {"
		"	border: 1px solid #1a1a1e; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/btn_editor_press);"
		"}"
		"QPushButton#tool-editor:disabled {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: transparent; background-image: url(:img/btn_editor_dis);"
		"}"

		"QPushButton#tool-conductivity {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/conductivity_nor);"
		"}"
		"QPushButton#tool-conductivity:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/conductivity_hover);"
		"}"
		"QPushButton#tool-conductivity:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/conductivity_press);"
		"}"
		"QPushButton#tool-conductivity:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/conductivity_dis);"
		"}"

		"QFrame, QFrame#toolbox-list {border: 1px solid #1a1a1e;}"

		"QScrollArea {border: none;}"

		"QLineEdit {background-color: %23; border:none; padding-left: 5px; padding-right: 5px;}"

		"QLineEdit::disabled {background-color: %24; color: %6;}"

		"QToolTip {"
		"	font-size: 10px;"
		"	background-color: #3a3b46;"
		"	border: 1px solid #75798e;"
		"	padding: 3px 4px;"
		"}"
		
		"QWidget#segmentation_label_list, QWidget#segmentation_region_list { background-color: #1A1A1E; }"

	).arg(FONT_COLOR_NORMAL)
		.arg(FONT_FAMILY_DEFAULT)
		.arg(PARAMETER_PANEL_BKG_COLOR)
		.arg(BTN_MEDIUM_BKG_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BORDER_COLOR_NORMAL)		// %5
		.arg(FONT_COLOR_DISABLED)
		.arg(BTN_MEDIUM_BKG_COLOR_DISABLED)
		.arg(BTN_MEDIUM_BORDER_COLOR_DISABLED)
		.arg(BTN_MEDIUM_BKG_COLOR_HOVER)
		.arg(BTN_MEDIUM_BKG_COLOR_PRESSED)			// 10
		.arg(RES_IMG_INPUT_POS_NORMAL)
		.arg(RES_IMG_INPUT_POS_HOVER)
		.arg(RES_IMG_INPUT_POS_PRESSED)
		.arg(RES_IMG_INPUT_POS_DISABLED)
		.arg(BTN_CHECKABLE_BKG_COLOR_CHECKED)		// 15
		.arg(BTN_CHECKABLE_BKG_COLOR_CHECKED_HOVER)
		.arg(BTN_CHECKABLE_BKG_COLOR_CHECKED_PRESSED)
		.arg(BTN_HEAVY_BKG_COLOR_NORMAL)
		.arg(BTN_HEAVY_BORDER_COLOR)
		.arg(BTN_HEAVY_BKG_COLOR_HOVER)				// 20
		.arg(BTN_HEAVY_BKG_COLOR_PRESSED)
		.arg(BTN_HEAVY_BKG_COLOR_DISABLED)
		.arg(EDITBOX_BKG_COLOR_NORMAL)
		.arg(EDITBOX_BKG_COLOR_DISABLED);

	m_cssParameterComponentCommon.append(cssScrollBar);
	m_cssParameterComponentCommon.append(cssRadioButton);
	m_cssParameterComponentCommon.append(cssListWidget);
	m_cssParameterComponentCommon.append(cssTableWidget);
	m_cssParameterComponentCommon.append(cssDivider);
	m_cssParameterComponentCommon.append(cssLabel);
	m_cssParameterComponentCommon.append(cssSegmentationLabelItem);
	m_cssParameterComponentCommon.append(cssContextMenu);

	// Brain Model Selection 단계 파라미터 UI
	m_cssParameterComponent_BMS = m_cssParameterComponentCommon;

	m_cssParameterComponent_BMS.append(cssComboBox);

	// Electrode Configuration 단계 파라미터 UI
	m_cssParameterComponent_EC = m_cssParameterComponentCommon + QString(
		"QPushButton#back {background: none; border: none; border-image: url(%1);}"
		"QPushButton#back:hover {border-image: url(%2);}"
		"QPushButton#back:pressed {border-image: url(%3);}"

		"QPushButton#point_marker {background: none; border: none; border-image: url(%4);}"
		"QPushButton#point_marker:hover {border-image: url(%5);}"
		"QPushButton#point_marker:pressed {border-image: url(%6);}"
		"QPushButton#point_marker:disabled {border-image: url(%7);}"
	).arg(RES_IMG_BACK_NORMAL)
		.arg(RES_IMG_BACK_HOVER)
		.arg(RES_IMG_BACK_PRESSED)
		.arg(RES_IMG_MARKER_NORMAL)
		.arg(RES_IMG_MARKER_HOVER)
		.arg(RES_IMG_MARKER_PRESSED)
		.arg(RES_IMG_MARKER_DISABLED);

	m_cssParameterComponent_EC.append(cssComboBox);
	m_cssParameterComponent_EC.append(cssSpinBox);
	m_cssParameterComponent_EC.append(cssCheckBox);
	
	// Compute 단계 파라미터 UI
	m_cssParameterComponent_CM = m_cssParameterComponentCommon;

	m_cssParameterComponent_CM.append(cssTreeWidget);
	m_cssParameterComponent_CM.append(cssSpinBox);
	m_cssParameterComponent_CM.append(cssCheckBox);
	
	// Post Processing 단계 파라미터 UI
	m_cssParameterComponent_PP = m_cssParameterComponentCommon + QString(
		"QPushButton#replace_expression {background: none; border: none; border-image: url(%1);}"
		"QPushButton#replace_expression:hover {border-image: url(%2);}"
		"QPushButton#replace_expression:pressed {border-image: url(%3);}"

		"QPushButton#ioef {background: none; border: none; border-image: url(%4);}"
		"QPushButton#ioef:disabled {border-image: url(%5);}"
		"QPushButton#ioef:hover {border-image: url(%6);}"
		"QPushButton#ioef:pressed {border-image: url(%7);}"
	).arg(RES_IMG_REPLACE_NORMAL)
		.arg(RES_IMG_REPLACE_HOVER)
		.arg(RES_IMG_REPLACE_PRESSED)
		.arg(RES_IMG_IOEF_NORMAL)
		.arg(RES_IMG_IOEF_DISABLED)
		.arg(RES_IMG_IOEF_HOVER)
		.arg(RES_IMG_IOEF_PRESSED);

	m_cssParameterComponent_PP.append(cssCustomizedSlider);
	m_cssParameterComponent_PP.append(cssComboBox);
	m_cssParameterComponent_PP.append(cssCheckBox);

	// Export 단계 파라미터 UI
	m_cssParameterComponent_EX = m_cssParameterComponentCommon;

	// 화면 좌측의 Main Step Menu
	m_cssMainStepMenu = QString(
		"* { font-family: %1; font-size: 13px; font-weight: bold; text-align: left;}"

		"QWidget {background-color: %2; border: none;}"

		"QPushButton {color:%3; background-color: %4; border: none; padding-left: 10px;}"
		"QPushButton:checked, QPushButton:pressed {color: %3; background-color: %5;}"	// pressed
		"QPushButton:checked:hover {background-color: %5;}"
		"QPushButton:unchecked {color: %3; background-color:%4;}"
		"QPushButton:disabled {color: %6; background-color: %7;}"
		"QPushButton:enabled {color: %3;}"
		"QPushButton:hover {background-color: %8;}"
	).arg(FONT_FAMILY_DEFAULT)
		.arg(STEPMENU_BKG_COLOR)
		.arg(STEPMENU_BTN_FONT_COLOR_NORMAL)
		.arg(STEPMENU_BTN_BKG_COLOR_NORMAL)
		.arg(STEPMENU_BTN_BKG_COLOR_PRESSED)	// 5
		.arg(STEPMENU_BTN_FONT_COLOR_DISABLED)
		.arg(STEPMENU_BTN_BKG_COLOR_DISABLED)
		.arg(STEPMENU_BTN_BKG_COLOR_HOVER);

	// General Dialog
	m_cssDialog = QString(
		"*{color: %1; font-size: 13px; font-family: %2;}"

		"QDialog {background-color: %3;}"

		"QLabel {border: none;}"
		"#label_Content {font-size: 13px;}"
		"#label_Content_Large {font-size: 15px;}"
		"#label_Title {font-size: 15px; qproperty-alignment: AlignCenter;}"
		"#label_Title_Left_Bold {font-size: 15px; font-weight: bold;}"
		"#label_Subtitle {color: %4; font-size: 13px; font-weight: bold;}"
		"#label_Warning {color: %5; font-size: 13px;}"
		"#label_Info {color: %5; font-size: 13px; qproperty-alignment: AlignCenter;}"

		"QLineEdit, QTextEdit{"
		"	font-size: 13px;"
		"	background-color: %6;"
		"	border: none;"
		"	padding: 5px 10px;"
		"}"

		"QPushButton {background-color: %7; border: 1px solid %8; border-radius: 2px; font-size: 13px;}"
		"QPushButton:hover {background-color: %9; border-color: %10;}"
		"QPushButton:pressed {background-color: %11; border-color: %12;}"

		"QProgressBar {background-color: %13; border: 1px solid %14;}"
		"QProgressBar::chunk {"
		"	background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:1, y2:0, stop:0 %15, stop:1 %16);"
		"}"

		"#pushButton_Ok {background-color: %17; border: 1px solid %17; border-radius: 2px;}"
		"#pushButton_Ok:hover {background-color: %18; border-color: %18; border-radius: 2px;}"
		"#pushButton_Ok:pressed {background-color: %19; border-color: %19; border-radius: 2px;}"

		"QPushButton#ok {background-color: %17; border: 1px solid %17; border-radius: 2px;}"
		"QPushButton#ok:hover {background-color: %18; border-color: %18; border-radius: 2px;}"
		"QPushButton#ok:pressed {background-color: %19; border-color: %19; border-radius: 2px;}"

		"QPushButton#explorer {"
		"	border: 1px solid #1a1a1e; border-radius: 2px;"
		"	background: none; background-repeat: no-repeat; background-position: center;"
		"	background-color: #2c2d37;"
		"	background-image: url(:/img/btn_browse_nor);"
		"}"
		"QPushButton#explorer:hover {"
		"	border: 1px solid #1a1a1e; border-radius: 2px;"
		"	background-color: #3a3b46; background-image: url(:/img/btn_browse_hover);"
		"}"
		"QPushButton#explorer:pressed {border: none; background-color: #1a1a1e; background-image: url(:/img/btn_browse_press);}"
		"QPushButton#explorer:disabled {"
		"	border: 1px solid #3a3b46; border-radius: 2px;"
		"	background-color: #2c2d37; background-image: url(:/img/btn_browse_dis);"
		"}"
	).arg(FONT_COLOR_NORMAL)
		.arg(FONT_FAMILY_DEFAULT)
		.arg(DIALOG_BKG_COLOR)
		.arg(FONT_COLOR_SUBTITLE)
		.arg(FONT_COLOR_ERROR)					// 5
		.arg(EDITBOX_BKG_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BKG_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BORDER_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BKG_COLOR_HOVER)
		.arg(BTN_MEDIUM_BORDER_COLOR_HOVER)		// 10
		.arg(BTN_MEDIUM_BKG_COLOR_PRESSED)
		.arg(BTN_MEDIUM_BORDER_COLOR_PRESSED)
		.arg(PROGRESSBAR_BKG_COLOR)
		.arg(PROGRESSBAR_BORDER_COLOR)
		.arg(PROGRESSBAR_CHUNK_COLOR_START)		// 15
		.arg(PROGRESSBAR_CHUNK_COLOR_END)
		.arg(BTN_HEAVY_BKG_COLOR_NORMAL)
		.arg(BTN_HEAVY_BKG_COLOR_HOVER)
		.arg(BTN_HEAVY_BKG_COLOR_PRESSED);

	m_cssDialog.append(cssDivider);
	m_cssDialog.append(cssListWidget);
	m_cssDialog.append(cssScrollBar);
	m_cssDialog.append(cssRadioButton);
	m_cssDialog.append(cssComboBox);
	m_cssDialog.append(cssLabel);

	m_cssInputDialog = m_cssThreadDialog1 = m_cssThreadDialog2 = m_cssDialog;

	// Feature dialog
	m_cssFeatureDialog = QString(
		"*{color: %1; font-size: 13px; font-family: %2;}"

		"QToolTip {"
		"	font-size: 10px;"
		"	background-color: #3a3b46;"
		"	border: 1px solid #75798e;"
		"	padding: 3px 4px;"
		"}"

		"QDialog {background-color: %3;}"

		"QWidget#parameter_panel {background-color: %4;}"
		"QWidget#sub_widget {background-color: transparent; border: 1px solid %5;}"
		"QWidget#sub_widget QPushButton {font-size: 12px;}"
		"QWidget#view_widget {background-color: %6;}"

		"QLabel {background: transparent; border: none; font-size: 13px;}"
		"QLabel#title {font-weight: bold;}"
		"QLabel#subtitle {color: %7; font-weight: bold;}"
		"QLabel#content-warning {color: #ffb900; font-size: 13px;}"
		"QLabel#content-path {font-size: 11px;}"
		"QLabel#content-info {color: #75798e; font-size: 11px;}"
		"QLabel#image-info {"
		"	border: none;"
		"	background-repeat: no-repeat;"
		"	background-position: center;"
		"	background-image: url(:img/ico_info_nor);"
		"}"
		"QLabel#image-info:hover {background-image: url(:img/ico_info_hover);}"

		"QLineEdit, QTextEdit{"
		"	font-size: 13px;"
		"	background-color: %8;"
		"	border: none;"
		"	padding: 5px 10px;"
		"}"

		"QLineEdit[readOnly=true] {background-color: transparent; border: 1px solid %9;}"

		"QPushButton {background-color: %10; border: 1px solid %11; border-radius: 2px; font-size: 13px;}"
		"QPushButton:hover {background-color: %12; border-color: %13;}"
		"QPushButton:pressed {background-color: %14; border-color: %15;}"

		"QPushButton#ok {background-color: %16; border: 1px solid %16; border-radius: 2px;}"
		"QPushButton#ok:hover {background-color: %17; border-color: %17; border-radius: 2px;}"
		"QPushButton#ok:pressed {background-color: %18; border-color: %18; border-radius: 2px;}"

		"QPushButton#small {font-size: 10px;}"

		"QPushButton#input_position {background: none; border: none; border-image: url(%19);}"
		"QPushButton#input_position:hover {border-image: url(%20);}"
		"QPushButton#input_position:pressed {border-image: url(%21);}"

		"QPushButton#landmark:checked {background: %16;}"
		"QPushButton#landmark:checked:hover {background: %17;}"
		"QPushButton#landmark:checked:pressed {background: %18;}"

		"QPushButton#tool-undo {"
		"	border: none;"
		"	background: none; background-repeat: no-repeat; background-position: center;"
		"	background-color: #2c2d37;"
		"	background-image: url(%22);"
		"}"
		"QPushButton#tool-undo:hover {background-color: #26262d; background-image: url(%23);}"
		"QPushButton#tool-undo:pressed {background-color: #1a1a1e; background-image: url(%24);}"
		"QPushButton#tool-undo:disabled {background-color: #2c2d37; background-image: url(%25);}"

		"QPushButton#tool-redo {"
		"	border: none;"
		"	background: none; background-repeat: no-repeat; background-position: center;"
		"	background-color: #2c2d37;"
		"	background-image: url(%26);"
		"}"
		"QPushButton#tool-redo:hover {background-color: #26262d; background-image: url(%27);}"
		"QPushButton#tool-redo:pressed {background-color: #1a1a1e; background-image: url(%28);}"
		"QPushButton#tool-redo:disabled {background-color: #2c2d37; background-image: url(%29);}"

		"QPushButton#tool-reset {"
		"	border: none;"
		"	background-color: transparent;"
		"	background-position: center;"
		"	background-repeat: no-repeat;"
		"	background-image: url(:img/reset_nor);"
		"}"
		"QPushButton#tool-reset:hover {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #26262d; background-image: url(:img/reset_hover);"
		"}"
		"QPushButton#tool-reset:pressed {"
		"	border: 1px solid #3a3b46; border-radius: 3px;"
		"	background-color: #1a1a1e; background-image: url(:img/reset_press);"
		"}"
		"QPushButton#tool-reset:disabled {"
		"	border: none;"
		"	background-color: transparent; background-image: url(:img/reset_dis);"
		"}"

		"QFrame#spacer {background-color: transparent; border: none;}"
		"QFrame#box {background-color: transparent; border: 1px solid #1a1a1e;}"

		"QWidget#segmentation_label_list {background-color: #1A1A1E;}"

		"QSlider#tool-size::handle {"
		"	background-color: #FFFFFF;"
		"	border: 1px solid white;"
		"	border-radius: 5px;"
		"	width: 8px;"
		"	height: 8px;"
		"	margin: -4px -5px;"
		"}"
		
		"QSlider#tool-size::groove:horizontal {"
		"	height: 2px;"
		"	background-color: #1A1A1E;"
		"	margin: 0px 5px;"
		"}"
	).arg(FONT_COLOR_NORMAL)
		.arg(FONT_FAMILY_DEFAULT)
		.arg(MAINWINDOW_BKG_COLOR)
		.arg(PARAMETER_PANEL_BKG_COLOR)
		.arg(PARAMETER_PANEL_SUB_WIDGET_BORDER_COLOR)	// 5
		.arg(VIEW_WIDGET_BKG_COLOR)
		.arg(FONT_COLOR_SUBTITLE)
		.arg(EDITBOX_BKG_COLOR_NORMAL)
		.arg(EDITBOX_BORDER_COLOR_READONLY)
		.arg(BTN_MEDIUM_BKG_COLOR_NORMAL)				// 10		
		.arg(BTN_MEDIUM_BORDER_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BKG_COLOR_HOVER)
		.arg(BTN_MEDIUM_BORDER_COLOR_HOVER)
		.arg(BTN_MEDIUM_BKG_COLOR_PRESSED)
		.arg(BTN_MEDIUM_BORDER_COLOR_PRESSED)			// 15
		.arg(BTN_HEAVY_BKG_COLOR_NORMAL)
		.arg(BTN_HEAVY_BKG_COLOR_HOVER)
		.arg(BTN_HEAVY_BKG_COLOR_PRESSED)
		.arg(RES_IMG_INPUT_POS_NORMAL)
		.arg(RES_IMG_INPUT_POS_HOVER)					// 20
		.arg(RES_IMG_INPUT_POS_PRESSED)
		.arg(RES_IMG_UNDO_NORMAL)
		.arg(RES_IMG_UNDO_HOVER)
		.arg(RES_IMG_UNDO_PRESSED)
		.arg(RES_IMG_UNDO_DISABLED)						// 25
		.arg(RES_IMG_REDO_NORMAL)
		.arg(RES_IMG_REDO_HOVER)
		.arg(RES_IMG_REDO_PRESSED)
		.arg(RES_IMG_REDO_DISABLED);

	m_cssFeatureDialog.append(cssDivider);
	m_cssFeatureDialog.append(cssRadioButton);
	m_cssFeatureDialog.append(cssCheckBox);
	m_cssFeatureDialog.append(cssComboBox);
	m_cssFeatureDialog.append(cssListWidget);
	m_cssFeatureDialog.append(cssContextMenu);
	m_cssFeatureDialog.append(cssSpinBox);
	m_cssFeatureDialog.append(cssSegmentationLabelItem);
	m_cssFeatureDialog.append(cssConductivitySettingsDialog);

	// Application 실행 시 최초 뜨는 Logo
	m_cssLogo = QString(
		"QDialog {background-color: %1;}"
		"QLabel {background: transparent; color: %2; font-size: %3px}"
		"QLabel#label_License {color: %4; font-size: %5px;}"
		).arg(LOGO_BACKGROUND_COLOR)
		.arg(LOGO_FONT_COLOR)
		.arg(LOGO_FONT_SIZE)
		.arg(LOGO_COPYRIGHT_FONT_COLOR)
		.arg(LOGO_COPYRIGHT_FONT_SIZE);

	// Titlebar	
	m_cssTitlebar = QString(
		"* { font-family: %1; font-size: 13px; }"

		"QLabel#logo-titlebar {"
		"	background-color: transparent;"
		"	background-image: url(:img/img_symbol_titlebar);"
		"	background-repeat: no-repeat;"
		"	background-position: center;"
		"}"

		"QPushButton, QToolButton {\
			color: %2;\
			font-size: 13px;\
			background-color: %3;\
			border: none;\
		}"

		"QPushButton::hover, QToolButton::hover {\
			background-color: %4;\
		}"

		"QPushButton::pressed, QToolButton::pressed {\
			background-color: %5;\
		}"

		"QPushButton::disabled, QToolButton::disabled{\
			color: %6;\
			background-color: %7;\
		}"

		"QToolButton::menu-indicator { image: none; }"

		"QMenu {\
			color: %2;\
			background-color: %8;\
			border: 1px solid %9;\
		}"

		"QMenu::item { background-color: %10;}"
		"QMenu::item:selected { background-color: %11; }"

		"QUI_ElidedLabel {\
			color: %2;\
			background: transparent;\
		}"

		"QFrame#divider {margin: 8px 0px; background-color: #3a3b46; border: none;}"
	).arg(FONT_FAMILY_DEFAULT)
		.arg(FONT_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BKG_COLOR_NORMAL)
		.arg(BTN_MEDIUM_BKG_COLOR_HOVER)
		.arg(BTN_MEDIUM_BKG_COLOR_PRESSED)
		.arg(FONT_COLOR_DISABLED)
		.arg(BTN_MEDIUM_BKG_COLOR_DISABLED)
		.arg(POPUP_MENU_BKG_COLOR)
		.arg(POPUP_MENU_BORDER_COLOR)
		.arg(POPUP_MENU_ITEM_BKG_COLOR_NORMAL)
		.arg(POPUP_MENU_ITEM_BKG_COLOR_HOVER);
}