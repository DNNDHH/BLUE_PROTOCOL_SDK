#pragma once

 

// Package: PlayerReport

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerReport.PlayerReport_C
// 0x0178 (0x03F0 - 0x0278)
class UPlayerReport_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bg_base;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      btn_cmn_anim_arrow_confirm;                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            btn_input_confirm;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  btn_space;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_148;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBMultiLineEditableTextBox*            Multiline_tb_report_input_body;                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Sb_cb_category_list;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_category_tag;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_character_id;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_player_id_tag;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_player_name;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_player_name_tag;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tb_report_guide_title;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_word_count_input;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_word_count_limit;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Word_count_input_color_red;                        // 0x0328(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            Word_count_input_color_white;                      // 0x0350(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Selected_report_catetory_index;                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Typed_report_word_count;                           // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Typed_report_text;                                 // 0x0380(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Target_player_id;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Target_character_id;                               // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   Dialog_message_text;                               // 0x03B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Type_word_count_max;                               // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type_word_count_min;                               // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bWindowOpen;                                       // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              In_Visibility;                                     // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_PlayerReport(int32 EntryPoint);
	void OnVisibilityChanged_Event_0(ESlateVisibility InVisibility);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void PressCancel_Event();
	void BndEvt__PlayerReport_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void OnRequestReportSendDelegate_Event(const bool bWasSuccessful, const int32 RetCode);
	void OnCloseReportDialog(const EYesNoDialogResult Result);
	void BndEvt__btn_space_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void OnDecideReportDialog(const EYesNoDialogResult Result);
	void BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__btn_input_confirm_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void DownLoadFaceImage_Event(const class FString& URL);
	void Destruct();
	void Construct();
	void Init(const struct FPlayerProfileMenuDetailData& TargetPlayerDetailData);
	void InitCategoryList();
	class FText Get_multiline_tb_report_input_body_HintText();
	void CheckReportMessage();
	void UpdateReportConfirmState();
	void ClearInputData();
	class UWidget* On_sb_cb_category_list_GenerateWidget_0(const class FString& Item);
	class UWidget* On_sb_cb_category_list_GenerateWidget_1(const class FString& Item);
	class UWidget* On_sb_cb_category_list_GenerateWidget_2(const class FString& Item);
	class UWidget* On_sb_cb_category_list_GenerateWidget_3(const class FString& Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerReport_C">();
	}
	static class UPlayerReport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerReport_C>();
	}
};
static_assert(alignof(UPlayerReport_C) == 0x000008, "Wrong alignment on UPlayerReport_C");
static_assert(sizeof(UPlayerReport_C) == 0x0003F0, "Wrong size on UPlayerReport_C");
static_assert(offsetof(UPlayerReport_C, UberGraphFrame) == 0x000278, "Member 'UPlayerReport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, AnimOut) == 0x000280, "Member 'UPlayerReport_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, AnimIn) == 0x000288, "Member 'UPlayerReport_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, bg_base) == 0x000290, "Member 'UPlayerReport_C::bg_base' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, btn_cmn_anim_arrow_confirm) == 0x000298, "Member 'UPlayerReport_C::btn_cmn_anim_arrow_confirm' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, btn_input_confirm) == 0x0002A0, "Member 'UPlayerReport_C::btn_input_confirm' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, btn_space) == 0x0002A8, "Member 'UPlayerReport_C::btn_space' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, CaptureImageFace) == 0x0002B0, "Member 'UPlayerReport_C::CaptureImageFace' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, ClassIcon) == 0x0002B8, "Member 'UPlayerReport_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, CmnClose02) == 0x0002C0, "Member 'UPlayerReport_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Image_148) == 0x0002C8, "Member 'UPlayerReport_C::Image_148' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Multiline_tb_report_input_body) == 0x0002D0, "Member 'UPlayerReport_C::Multiline_tb_report_input_body' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Sb_cb_category_list) == 0x0002D8, "Member 'UPlayerReport_C::Sb_cb_category_list' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_category_tag) == 0x0002E0, "Member 'UPlayerReport_C::Tb_category_tag' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_character_id) == 0x0002E8, "Member 'UPlayerReport_C::Tb_character_id' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_player_id_tag) == 0x0002F0, "Member 'UPlayerReport_C::Tb_player_id_tag' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_player_name) == 0x0002F8, "Member 'UPlayerReport_C::Tb_player_name' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_player_name_tag) == 0x000300, "Member 'UPlayerReport_C::Tb_player_name_tag' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Tb_report_guide_title) == 0x000308, "Member 'UPlayerReport_C::Tb_report_guide_title' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Txt_word_count_input) == 0x000310, "Member 'UPlayerReport_C::Txt_word_count_input' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Txt_word_count_limit) == 0x000318, "Member 'UPlayerReport_C::Txt_word_count_limit' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, UIBlocker) == 0x000320, "Member 'UPlayerReport_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Word_count_input_color_red) == 0x000328, "Member 'UPlayerReport_C::Word_count_input_color_red' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Word_count_input_color_white) == 0x000350, "Member 'UPlayerReport_C::Word_count_input_color_white' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Selected_report_catetory_index) == 0x000378, "Member 'UPlayerReport_C::Selected_report_catetory_index' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Typed_report_word_count) == 0x00037C, "Member 'UPlayerReport_C::Typed_report_word_count' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Typed_report_text) == 0x000380, "Member 'UPlayerReport_C::Typed_report_text' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Target_player_id) == 0x000398, "Member 'UPlayerReport_C::Target_player_id' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Target_character_id) == 0x0003A8, "Member 'UPlayerReport_C::Target_character_id' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Dialog_message_text) == 0x0003B8, "Member 'UPlayerReport_C::Dialog_message_text' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Type_word_count_max) == 0x0003D0, "Member 'UPlayerReport_C::Type_word_count_max' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, Type_word_count_min) == 0x0003D4, "Member 'UPlayerReport_C::Type_word_count_min' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, OnClose) == 0x0003D8, "Member 'UPlayerReport_C::OnClose' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, bWindowOpen) == 0x0003E8, "Member 'UPlayerReport_C::bWindowOpen' has a wrong offset!");
static_assert(offsetof(UPlayerReport_C, In_Visibility) == 0x0003E9, "Member 'UPlayerReport_C::In_Visibility' has a wrong offset!");

}

