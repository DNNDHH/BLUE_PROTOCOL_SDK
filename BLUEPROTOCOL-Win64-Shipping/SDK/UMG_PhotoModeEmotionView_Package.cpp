/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.InitFacialOption
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::InitFacialOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.InitFacialOption");
		
		UUMG_PhotoModeEmotionView_C_InitFacialOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.On_FacialComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UUMG_PhotoModeEmotionView_C::On_FacialComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.On_FacialComboBox_GenerateWidget_1");
		
		UUMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.SelectEmotionItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::SelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.SelectEmotionItem");
		
		UUMG_PhotoModeEmotionView_C_SelectEmotionItem_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.RefreshFacialView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPhotoModePlayerControlData*               Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::RefreshFacialView(class USBPhotoModePlayerControlData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.RefreshFacialView");
		
		UUMG_PhotoModeEmotionView_C_RefreshFacialView_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ConstructFacial
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::ConstructFacial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ConstructFacial");
		
		UUMG_PhotoModeEmotionView_C_ConstructFacial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ChangeFacialOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::ChangeFacialOption(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ChangeFacialOption");
		
		UUMG_PhotoModeEmotionView_C_ChangeFacialOption_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct_Emotion
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::Construct_Emotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct_Emotion");
		
		UUMG_PhotoModeEmotionView_C_Construct_Emotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateEmotionList
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::UpdateEmotionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateEmotionList");
		
		UUMG_PhotoModeEmotionView_C_UpdateEmotionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct");
		
		UUMG_PhotoModeEmotionView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Tick");
		
		UUMG_PhotoModeEmotionView_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeEmotionView_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Destruct");
		
		UUMG_PhotoModeEmotionView_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ExecuteUbergraph_UMG_PhotoModeEmotionView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::ExecuteUbergraph_UMG_PhotoModeEmotionView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ExecuteUbergraph_UMG_PhotoModeEmotionView");
		
		UUMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeCloseEyes__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCloseEyes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeEmotionView_C::OnChangeCloseEyes__DelegateSignature(bool bCloseEyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeCloseEyes__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature_Params params {};
		params.bCloseEyes = bCloseEyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeLipSync__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBLipSyncType                                     LipSyncType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeLipSync__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature_Params params {};
		params.LipSyncType = LipSyncType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangePale__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::OnChangePale__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangePale__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeBlush__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::OnChangeBlush__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeBlush__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeFacialComboBox__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacialType                                      FacialType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeFacialComboBox__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature_Params params {};
		params.FacialType = FacialType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickEnableFacial__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeEmotionView_C::OnClickEnableFacial__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickEnableFacial__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnRequestEmote__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EmotionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeEmotionView_C::OnRequestEmote__DelegateSignature(const class FName& EmotionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnRequestEmote__DelegateSignature");
		
		UUMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature_Params params {};
		params.EmotionId = EmotionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoModeEmotionView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoModeEmotionView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C");
		return ptr;
	}

}


