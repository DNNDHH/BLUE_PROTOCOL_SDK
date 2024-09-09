#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PlayerReport.PlayerReport_C
	 * Size -> 0x0173 (FullSize[0x03EB] - InheritedSize[0x0278])
	 */
	class UPlayerReport_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              bg_base;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_ArrowM_C*                                   btn_cmn_anim_arrow_confirm;                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         btn_input_confirm;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               btn_space;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCaptureImageFace_C*                                 CaptureImageFace;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClassIcon_C*                                        ClassIcon;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_149;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBMultiLineEditableTextBox*                         multiline_tb_report_input_body;                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  sb_cb_category_list;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_category_tag;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_character_id;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_player_id_tag;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_player_name;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_player_name_tag;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          tb_report_guide_title;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txt_word_count_input;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txt_word_count_limit;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         word_count_input_color_red;                              // 0x0328(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         word_count_input_color_white;                            // 0x0350(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    selected_report_catetory_index;                          // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    typed_report_word_count;                                 // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                typed_report_text;                                       // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              target_player_id;                                        // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              target_character_id;                                     // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                dialog_message_text;                                     // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    type_word_count_max;                                     // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    type_word_count_min;                                     // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bWindowOpen;                                             // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           InVisibility;                                            // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBlockSyncAnimIn;                                        // 0x03EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SyncAnimInAfterVisibility(bool* bResult);
		class UWidget* On_sb_cb_category_list_GenerateWidget_4(const class FString& item);
		class UWidget* On_sb_cb_category_list_GenerateWidget_3(const class FString& item);
		class UWidget* On_sb_cb_category_list_GenerateWidget_2(const class FString& item);
		class UWidget* On_sb_cb_category_list_GenerateWidget_1(const class FString& item);
		void ClearInputData();
		void UpdateReportConfirmState();
		void CheckReportMessage();
		class FText Get_multiline_tb_report_input_body_HintText();
		void InitCategoryList();
		void Init(const struct FPlayerProfileMenuDetailData& TargetPlayerDetailData);
		void Construct();
		void Destruct();
		void DownLoadFaceImage_Event(const class FString& URL);
		void BndEvt__btn_input_confirm_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnDecideReportDialog(EYesNoDialogResult Result);
		void BndEvt__btn_space_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void OnCloseReportDialog(EYesNoDialogResult Result);
		void OnRequestReportSendDelegate_Event(bool bWasSuccessful, int32_t RetCode);
		void BndEvt__PlayerReport_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void PressCancel_Event();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
		void OnVisibilityChanged_Event_1(ESlateVisibility InVisibility);
		void ExecuteUbergraph_PlayerReport(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
