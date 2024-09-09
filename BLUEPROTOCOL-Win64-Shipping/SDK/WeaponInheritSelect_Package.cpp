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
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.UpdateBuildData
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::UpdateBuildData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.UpdateBuildData");
		
		UWeaponInheritSelect_C_UpdateBuildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgSubVitalId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ArrayElement                                               (Parm, OutParm)
	 */
	void UWeaponInheritSelect_C::FindArgSubVitalId(struct FOwnItemInfo* ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgSubVitalId");
		
		UWeaponInheritSelect_C_FindArgSubVitalId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.HowSubManyAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        OwnItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            sum                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInheritSelect_C::HowSubManyAbility(TArray<struct FOwnItemInfo>* OwnItems, const struct FOwnItemInfo& Target, int32_t* sum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.HowSubManyAbility");
		
		UWeaponInheritSelect_C_HowSubManyAbility_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnItems != nullptr)
			*OwnItems = params.OwnItems;
		if (sum != nullptr)
			*sum = params.sum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.HowManyAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        OwnItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            sum                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInheritSelect_C::HowManyAbility(TArray<struct FOwnItemInfo>* OwnItems, const struct FOwnItemInfo& Target, int32_t* sum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.HowManyAbility");
		
		UWeaponInheritSelect_C_HowManyAbility_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnItems != nullptr)
			*OwnItems = params.OwnItems;
		if (sum != nullptr)
			*sum = params.sum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.CloseSubWindow
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::CloseSubWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.CloseSubWindow");
		
		UWeaponInheritSelect_C_CloseSubWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgViralId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ArrayElement                                               (Parm, OutParm)
	 */
	void UWeaponInheritSelect_C::FindArgViralId(struct FOwnItemInfo* ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgViralId");
		
		UWeaponInheritSelect_C_FindArgViralId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.IsModalWindowOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponInheritSelect_C::IsModalWindowOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.IsModalWindowOpen");
		
		UWeaponInheritSelect_C_IsModalWindowOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.CloseWindow
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::CloseWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.CloseWindow");
		
		UWeaponInheritSelect_C_CloseWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.AddViewChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInheritSelect_C::AddViewChild(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.AddViewChild");
		
		UWeaponInheritSelect_C_AddViewChild_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Initialize");
		
		UWeaponInheritSelect_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelectedNewVitalType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OnSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInheritSelect_C::OnSelectedNewVitalType(const struct FOwnItemInfo& OnSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelectedNewVitalType");
		
		UWeaponInheritSelect_C_OnSelectedNewVitalType_Params params {};
		params.OnSelect = OnSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnCloseVitalSelect
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::OnCloseVitalSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnCloseVitalSelect");
		
		UWeaponInheritSelect_C_OnCloseVitalSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               ChangeTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature_Params params {};
		params.ChangeTarget = ChangeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnClosePerkSelect
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::OnClosePerkSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnClosePerkSelect");
		
		UWeaponInheritSelect_C_OnClosePerkSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.ChangePerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               Before                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBStackBPerk                               Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInheritSelect_C::ChangePerks(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.ChangePerks");
		
		UWeaponInheritSelect_C_ChangePerks_Params params {};
		params.Before = Before;
		params.Select = Select;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               PurgeTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature_Params params {};
		params.PurgeTarget = PurgeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Construct");
		
		UWeaponInheritSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Destruct");
		
		UWeaponInheritSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnRequestClose
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::OnRequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnRequestClose");
		
		UWeaponInheritSelect_C_OnRequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnCheckedInhelit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInheritSelect_C::OnCheckedInhelit(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnCheckedInhelit");
		
		UWeaponInheritSelect_C_OnCheckedInhelit_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OnSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInheritSelect_C::CustomEvent2(const struct FOwnItemInfo& OnSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent2");
		
		UWeaponInheritSelect_C_CustomEvent2_Params params {};
		params.OnSelect = OnSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent_3
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent_3");
		
		UWeaponInheritSelect_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.RequestClose");
		
		UWeaponInheritSelect_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Begin Selected Weapon Inherit
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::EventOnBeginSelectedWeaponInherit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Begin Selected Weapon Inherit");
		
		UWeaponInheritSelect_C_EventOnBeginSelectedWeaponInherit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Abort Selected Weapon Inherit
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::EventOnAbortSelectedWeaponInherit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Abort Selected Weapon Inherit");
		
		UWeaponInheritSelect_C_EventOnAbortSelectedWeaponInherit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.Event On End Selected Weapon Inherit
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::EventOnEndSelectedWeaponInherit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.Event On End Selected Weapon Inherit");
		
		UWeaponInheritSelect_C_EventOnEndSelectedWeaponInherit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UWeaponInheritSelect_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.ExecuteUbergraph_WeaponInheritSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInheritSelect_C::ExecuteUbergraph_WeaponInheritSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.ExecuteUbergraph_WeaponInheritSelect");
		
		UWeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SpecialPerkUID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SubPerkUID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBStackBPerk>                       SelectedPerks                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponInheritSelect_C::OnSelected__DelegateSignature(const class FString& SpecialPerkUID, const class FString& SubPerkUID, TArray<struct FSBStackBPerk>* SelectedPerks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelected__DelegateSignature");
		
		UWeaponInheritSelect_C_OnSelected__DelegateSignature_Params params {};
		params.SpecialPerkUID = SpecialPerkUID;
		params.SubPerkUID = SubPerkUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedPerks != nullptr)
			*SelectedPerks = params.SelectedPerks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInheritSelect.WeaponInheritSelect_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInheritSelect_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInheritSelect.WeaponInheritSelect_C.OnClose__DelegateSignature");
		
		UWeaponInheritSelect_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponInheritSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponInheritSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponInheritSelect.WeaponInheritSelect_C");
		return ptr;
	}

}


