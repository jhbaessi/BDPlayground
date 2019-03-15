
#ifndef UI_STYLE_MANAGER_H
#define UI_STYLE_MANAGER_H


//////////////////////////////////////////////////////////////////
//		Global UI Macro											//
//////////////////////////////////////////////////////////////////
#define APP_WIDTH_DEFAULT	1290
#define APP_HEIGHT_DEFAULT	921

// Titlebar 관련 설정값
#define TITLEBAR_ICON_FIXED_WIDTH		20
#define TITLEBAR_ICON_FIXED_HEIGHT		TITLEBAR_ICON_FIXED_WIDTH
#define TITLEBAR_WIDGET_FIXED_HEIGHT	60

// LOGO 관련 설정값
#define LOGO_FIXED_WIDTH	370
#define LOGO_FIXED_HEIGHT	100

// Parameter panel 관련 설정값
#define PARAMETER_VIEW_FIXED_WIDTH	240
#define PARAMETER_VIEW_MIN_HEGIHT	690

// Post Processing View 관련 설정값
#define PP_3DVIEW_DEFAULT_WIDTH_RATIO		0.75
#define PP_MPRVIEW_DEFAULT_WIDTH_RATIO		0.25
#define PP_COLORBAR_WIDTH			55
#define PP_COLORBAR_HEIGHT			290

// Log view 관련 설정값
#define LOGVIEW_DEFAULT_WIDTH	1268
#define LOGVIEW_DEFAULT_HEIGHT	70
#define LOGVIEW_DEFAULT_HEIGHT_RATIO	0.82

// List Widget의 Item 관련 설정값
#define LISTITEM_FIXED_HEIGHT	26

#define LISTITEM_LOCK_ICON_WIDTH	8
#define LISTITEM_LOCK_ICON_HEIGHT	10

#define LISTITEM_LOCK_AREA_WIDTH	26
#define LISTITEM_LOCK_AREA_HEIGHT	26

// Popup Dialog 관련 설정값
#define	POPUP_DLG_WIDTH			300
#define POPUP_MSG_DLG_WIDTH		400

#define POPUP_BUTTON_WIDTH			72
#define POPUP_BUTTON_LONG_WIDTH		90
#define POPUP_BUTTON_HEIGHT			32

#define POPUP_EDITBOX_WIDTH		260
#define POPUP_EDITBOX_HEIGHT	30

#define POPUP_LABEL_TITLE_HEIGHT		18
#define POPUP_LABEL_SUBTITLE_HEIGHT		16
#define POPUP_LABEL_CONTENT_HEIGHT		16

// Progressbar 관련 설정값
#define PROGRESSBAR_HEIGHT		18

//////////////////////////////////////////////////////////////////
//		App 에서 사용되는 Resource 경로 Macro 정의				//
//		정의 순서는 resource 파일(resource.qrc)에 정의 된 순서	//
//////////////////////////////////////////////////////////////////
#define RES_IMG_CLOSE_NORMAL	":/img/btn_close_normal"
#define RES_IMG_CLOSE_HOVER		":/img/btn_close_hover"
#define RES_IMG_CLOSE_PRESSED	":/img/btn_close_pressed"

#define RES_IMG_MAXIMIZE_NORMAL	":/img/btn_maximize_normal"
#define RES_IMG_MAXIMIZE_HOVER	":/img/btn_maximize_hover"
#define RES_IMG_MAXIMIZE_PRESSED	":/img/btn_maximize_pressed"

#define RES_IMG_MINIMIZE_NORMAL		":/img/btn_minimize_normal"
#define RES_IMG_MINIMIZE_HOVER		":/img/btn_minimize_hover"
#define RES_IMG_MINIMIZE_PRESSED	":/img/btn_minimize_pressed"

#define RES_IMG_RESTORE_NORMAL	":/img/btn_restore_normal"
#define RES_IMG_RESTORE_HOVER	":/img/btn_restore_hover"
#define RES_IMG_RESTORE_PRESSED	":/img/btn_restore_pressed"

#define RES_IMG_BACK_NORMAL		":/img/btn_back_normal"
#define RES_IMG_BACK_HOVER		":/img/btn_back_hover"
#define RES_IMG_BACK_PRESSED	":/img/btn_back_pressed"

#define RES_IMG_CONTROLLER		":/img/btn_controller"
#define RES_IMG_CONTROLLER_HOVER	":/img/btn_controller_mouseover"

#define RES_IMG_REPLACE_NORMAL	":/img/btn_replace_normal"
#define RES_IMG_REPLACE_HOVER	":/img/btn_replace_hover"
#define RES_IMG_REPLACE_PRESSED	":/img/btn_replace_pressed"

#define RES_IMG_SYMBOL			":/img/img_symbol"
#define RES_IMG_SYMBOL_SMALL	":/img/img_symbol_small"
#define RES_IMG_SYMBOL_TITLEBAR	":/img/img_symbol_titlebar"
#define RES_IMG_LOGO			":/img/img_logo"
#define RES_IMG_SLIDER			":/img/img_slider"
#define RES_IMG_SPLASH			":/img/img_splash"

#define RES_ICON_BMS_DEFAULT	":/img/ic_brain_model_selection_d"
#define RES_ICON_BMS_SELECTED	":/img/ic_brain_model_selection_s"
#define RES_ICON_EC_DEFAULT		":/img/ic_stimulation_setting_d"
#define RES_ICON_EC_SELECTED	":/img/ic_stimulation_setting_s"
#define RES_ICON_EXP_DEFAULT	":/img/ic_export_d"
#define RES_ICON_EXP_SELECTED	":/img/ic_export_s"
#define RES_ICON_PP_DEFAULT		":/img/ic_result_analysis_d"
#define RES_ICON_PP_SELECTED	":/img/ic_result_analysis_s"
#define RES_ICON_COMP_DEFAULT	":/img/ic_simulation_d"
#define RES_ICON_COMP_SELECTED	":/img/ic_simulation_s"

#define RES_ICON_ARROW_PLOT		":/img/ic_arrow_plot"
#define RES_ICON_PICKER			":/img/ic_picker"

#define RES_CHECKBOX_CHECKED			":/img/checkbox_ck"
#define RES_CHECKBOX_CHECKED_DISABLED	":/img/checkbox_ck_dis"
#define RES_CHECKBOX_UNCHECKED			":/img/checkbox_uck"
#define RES_CHECKBOX_UNCHECKED_DISABLED	":/img/checkbox_uck_dis"


#define RES_RADIO_BUTTON_CHECKED			":/img/radiobox_ck"
#define RES_RADIO_BUTTON_CHECKED_DISABLED	":/img/radiobox_ck_dis"
#define RES_RADIO_BUTTON_UNCHECKED			":/img/radiobox_uck"
#define RES_RADIO_BUTTON_UNCHECKED_DISABLED	":/img/radiobox_uck_dis"


#define RES_ARROW_UP		":/img/btn_arrow_up"
#define RES_ARROW_DOWN		":/img/btn_arrow_down"

#define RES_IMG_COMOBOBOX_ARROW	":/img/btn_combobox_arrow"

#define RES_IMG_MARKER_DISABLED ":/img/btn_marker_dis"
#define RES_IMG_MARKER_NORMAL	":/img/btn_marker_normal"
#define RES_IMG_MARKER_HOVER	":/img/btn_marker_hover"
#define RES_IMG_MARKER_PRESSED	":/img/btn_marker_pressed"

#define RES_IMG_PICKER_DISABLED			":/img/btn_picker_dis"
#define RES_IMG_PICKER_OFF				":/img/btn_picker_off"
#define RES_IMG_PICKER_OFFHOVER_ONPRESS	":/img/btn_picker_offhover_onpress"
#define RES_IMG_PICKER_ON_OFFPRESS		":/img/btn_picker_on_offpress"

#define RES_IMG_LOCK_NORMAL		":/img/btn_lock_nor"
#define RES_IMG_LOCK_HOVER		":/img/btn_lock_hover"

#define RES_IMG_POINT_NAME_DISABLED				":/img/btn_point_name_dis"
#define RES_IMG_POINT_NAME_OFF					":/img/btn_point_name_off"
#define RES_IMG_POINT_NAME_OFFHOVER_ONPRESS		":/img/btn_point_name_offhover_onpress"
#define RES_IMG_POINT_NAME_ON_OFFPRESS			":/img/btn_point_name_on_offpress"

#define RES_IMG_SYSTEM_POINT_DISABLED				":/img/btn_systempoint_dis"
#define RES_IMG_SYSTEM_POINT_OFF					":/img/btn_systempoint_off"
#define RES_IMG_SYSTEM_POINT_OFFHOVER_ONPRESS		":/img/btn_systempoint_offhover_onpress"
#define RES_IMG_SYSTEM_POINT_ON_OFFPRESS			":/img/btn_systempoint_on_offpress"

#define RES_IMG_INPUT_POS_DISABLED	":/img/btn_input_pos_dis"
#define RES_IMG_INPUT_POS_HOVER		":/img/btn_input_pos_hover"
#define RES_IMG_INPUT_POS_NORMAL	":/img/btn_input_pos_nor"
#define RES_IMG_INPUT_POS_PRESSED	":/img/btn_input_pos_press"

#define RES_IMG_MAGNITUDE_PICKER_DISABLED			":/img/btn_magnitudepicker_dis"
#define RES_IMG_MAGNITUDE_PICKER_OFF				":/img/btn_magnitudepicker_off"
#define RES_IMG_MAGNITUDE_PICKER_OFFHOVER_ONPRESS	":/img/btn_magnitudepicker_offhover_onpress"
#define RES_IMG_MAGNITUDE_PICKER_ON_OFFPRESS		":/img/btn_magnitudepicker_on_offpress"

#define RES_IMG_SHOW_STIMULATOR_DISABLED			":/img/btn_showstimulator_dis"
#define RES_IMG_SHOW_STIMULATOR_OFF					":/img/btn_showstimulator_off"
#define RES_IMG_SHOW_STIMULATOR_OFFHOVER_ONPRESS	":/img/btn_showstimulator_offhover_onpress"
#define RES_IMG_SHOW_STIMULATOR_ON_OFFPRESS			":/img/btn_showstimulator_on_offpress"

#define RES_IMG_GUIDE_HEAD		":/img/img_guide_head"

#define RES_ICON_AXIAL_HOVER	":/img/ico_axial_hover"
#define RES_ICON_AXIAL_NORMAL	":/img/ico_axial_nor"

#define RES_ICON_CORONAL_HOVER	":/img/ico_coronal_hover"
#define RES_ICON_CORONAL_NORMAL	":/img/ico_coronal_nor"

#define RES_ICON_SAGITTAL_HOVER		":/img/ico_sagittal_hover"
#define RES_ICON_SAGITTAL_NORMAL	":/img/ico_sagittal_nor"

#define RES_ICON_CAPTURE_HOVER	":/img/ico_capture_hover"
#define RES_ICON_CAPTURE_NORMAL	":/img/ico_capture_nor"

#define RES_ICON_RESET_HOVER	":/img/ico_reset_hover"
#define RES_ICON_RESET_NORMAL	":/img/ico_reset_nor"

#define RES_IMG_IOEF_DISABLED	":/img/btn_inout-ef_dis"
#define RES_IMG_IOEF_HOVER		":/img/btn_inout-ef_hover"
#define RES_IMG_IOEF_NORMAL		":/img/btn_inout-ef_nor"
#define RES_IMG_IOEF_PRESSED	":/img/btn_inout-ef_press"

#define RES_IMG_CURSOR_TOOL_HOVER	":/img/btn_2d_cursor_hover"
#define RES_IMG_CURSOR_TOOL_OFF		":/img/btn_2d_cursor_off"
#define RES_IMG_CURSOR_TOOL_ON		":/img/btn_2d_cursor_on"

#define RES_IMG_BRUSH_TOOL_DISABLED		":/img/btn_brush_dis"
#define RES_IMG_BRUSH_TOOL_HOVER		":/img/btn_brush_hover"
#define RES_IMG_BRUSH_TOOL_OFF			":/img/btn_brush_off"
#define RES_IMG_BRUSH_TOOL_ON			":/img/btn_brush_on"

#define RES_IMG_ERASER_TOOL_DISABLED	":/img/btn_eraser_dis"
#define RES_IMG_ERASER_TOOL_HOVER		":/img/btn_eraser_hover"
#define RES_IMG_ERASER_TOOL_OFF			":/img/btn_eraser_off"
#define RES_IMG_ERASER_TOOL_ON			":/img/btn_eraser_on"

#define RES_IMG_BRUSH_RECTANGULAR_DISABLED			":/img/btn_brush_rectangle_disabled"
#define RES_IMG_BRUSH_RECTANGULAR_OFF				":/img/btn_brush_rectangle_off"
#define RES_IMG_BRUSH_RECTANGULAR_OFFHOVER			":/img/btn_brush_rectangle_offhover"
#define RES_IMG_BRUSH_RECTANGULAR_OFFPRESS_ONPRESS	":/img/btn_brush_rectangle_offpressed_onpressed"
#define RES_IMG_BRUSH_RECTANGULAR_ON_ONHOVER		":/img/btn_brush_rectangle_on_onhover"

#define RES_IMG_LABEL_SHOW	":/img/btn_checkbox_on"
#define RES_IMG_LABEL_HIDE	":/img/btn_checkbox_off"

#define RES_IMG_UNDO_DISABLED	":/img/btn_undo_dis"
#define RES_IMG_UNDO_HOVER		":/img/btn_undo_hover"
#define RES_IMG_UNDO_NORMAL		":/img/btn_undo_nor"
#define RES_IMG_UNDO_PRESSED	":/img/btn_undo_press"

#define RES_IMG_REDO_DISABLED	":/img/btn_redo_dis"
#define RES_IMG_REDO_HOVER		":/img/btn_redo_hover"
#define RES_IMG_REDO_NORMAL		":/img/btn_redo_nor"
#define RES_IMG_REDO_PRESSED	":/img/btn_redo_press"

#define RES_IMG_SPINBOX_UP		":/img/btn_spinbox_up"
#define RES_IMG_SPINBOX_DOWN	":/img/btn_spinbox_down"

#define IMG_POS_SYS_16CH		":/img/img_pos_sys_16ch"
#define IMG_POS_SYS_16CH_MASK	":/img/img_pos_sys_16ch_mask"
#define IMG_POS_SYS_32CH		":/img/img_pos_sys_32ch"
#define IMG_POS_SYS_32CH_MASK	":/img/img_pos_sys_32ch_mask"
#define IMG_POS_SYS_64CH		":/img/img_pos_sys_64ch"
#define IMG_POS_SYS_64CH_MASK	":/img/img_pos_sys_64ch_mask"

#define IMG_POS_SYS_EASYCAP_32CH		":/img/img_pos_sys_easycap_32ch"
#define IMG_POS_SYS_EASYCAP_32CH_MASK	":/img/img_pos_sys_easycap_32ch_mask"
#define IMG_POS_SYS_EASYCAP_64CH		":/img/img_pos_sys_easycap_64ch"
#define IMG_POS_SYS_EASYCAP_64CH_MASK	":/img/img_pos_sys_easycap_64ch_mask"

#define RES_FONT_NOTOSANS		":/font/NotoSansCJKkr-Regular"


//////////////////////////////////////////////////////////////////
//		기타 App 에서 사용되는 Macro 정의							//
//////////////////////////////////////////////////////////////////

#define APP_RESOURCE_RCC		"resource.rcc"

#define FONT_FAMILY_NOTOSANS	"Noto Sans CJK KR Regular"

// String
#define RES_STR_APP_TITLE	"NEUROPHET tES LAB"


#define CONVERT_TO_RICH_TEXT(x)	QString("<span>%1</span>").arg(x)	// tooltip 내용 추가시 rich text 포맷으로 작성되면 자동으로 word warp 적용됨.

class CUIStyleManager
{

public:

	CUIStyleManager();

protected:
	// 사용할 RCC 파일 등록
	void RegisterResource();

	// 사용할 Font 리소스 등록
	void RegisterFont();

	void LookNFeel_DarkGray();

public:

	// Main Window
	QString m_cssMainWindow;

	// Parameter Panel
	QString m_cssParameterPanel;

	// Parameter Panel 의 내부 배경
	QString m_cssInternalParameterPanelBackground;

	// Log View
	QString m_cssLogView;

	// View1
	QString m_cssView1;

	// 단계별 파라미터 UI 공통
	QString m_cssParameterComponentCommon;

	// Brain Model Selection 단계 파라미터 UI
	QString m_cssParameterComponent_BMS;

	// Electrode Configuration 단계 파라미터 UI
	QString m_cssParameterComponent_EC;

	// Compute 단계 파라미터 UI
	QString m_cssParameterComponent_CM;	

	// Post Processing 단계 파라미터 UI	
	QString m_cssParameterComponent_PP;

	// Export 단계 파라미터 UI	
	QString m_cssParameterComponent_EX;
	
	// 화면 좌측의 Main Step Menu
	QString m_cssMainStepMenu;	
	
	// General Dialog
	QString m_cssDialog;

	// QInputDialog 와 같은 값 입력을 위한 다이얼로그의 style
	QString m_cssInputDialog;

	// Thread Dialog1 (class ProgressDialog)
	QString m_cssThreadDialog1;

	// Thread Dialog2 (Messsage Box, class CDlgProgress)
	QString m_cssThreadDialog2;

	// Feature dialog (like the Guide and Inward/Outward EF dialog)
	QString m_cssFeatureDialog;

	// Application 실행 시 최초 뜨는 Logo
	QString m_cssLogo;

	// Titlebar
	QString m_cssTitlebar;

	// Font 정의
	QFont m_fontRegular;
	QFont m_fontBold;
	QFont m_fontLogView;
};



#endif // UI_STYLE_MANAGER_H