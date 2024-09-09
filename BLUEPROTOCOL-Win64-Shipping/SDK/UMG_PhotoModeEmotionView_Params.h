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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.InitFacialOption
	 */
	struct UUMG_PhotoModeEmotionView_C_InitFacialOption_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.On_FacialComboBox_GenerateWidget_1
	 */
	struct UUMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.SelectEmotionItem
	 */
	struct UUMG_PhotoModeEmotionView_C_SelectEmotionItem_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.RefreshFacialView
	 */
	struct UUMG_PhotoModeEmotionView_C_RefreshFacialView_Params
	{
	public:
		class USBPhotoModePlayerControlData*                       Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ConstructFacial
	 */
	struct UUMG_PhotoModeEmotionView_C_ConstructFacial_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ChangeFacialOption
	 */
	struct UUMG_PhotoModeEmotionView_C_ChangeFacialOption_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct_Emotion
	 */
	struct UUMG_PhotoModeEmotionView_C_Construct_Emotion_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateEmotionList
	 */
	struct UUMG_PhotoModeEmotionView_C_UpdateEmotionList_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct
	 */
	struct UUMG_PhotoModeEmotionView_C_Construct_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Tick
	 */
	struct UUMG_PhotoModeEmotionView_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Destruct
	 */
	struct UUMG_PhotoModeEmotionView_C_Destruct_Params
	{	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ExecuteUbergraph_UMG_PhotoModeEmotionView
	 */
	struct UUMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeCloseEyes__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseEyes;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeLipSync__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature_Params
	{
	public:
		ESBLipSyncType                                             LipSyncType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangePale__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeBlush__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeFacialComboBox__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature_Params
	{
	public:
		ESBFacialType                                              FacialType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickEnableFacial__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnRequestEmote__DelegateSignature
	 */
	struct UUMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature_Params
	{
	public:
		class FName                                                EmotionId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
