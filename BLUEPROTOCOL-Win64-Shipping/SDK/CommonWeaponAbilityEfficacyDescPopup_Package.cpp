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
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.CheckAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               FalseIsNone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::CheckAbility(const struct FOwnItemInfo& OwnItem, bool* FalseIsNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.CheckAbility");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_CheckAbility_Params params {};
		params.OwnItem = OwnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FalseIsNone != nullptr)
			*FalseIsNone = params.FalseIsNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Check Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               FalseIsNone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::CheckSlot(const struct FOwnItemInfo& OwnItem, bool* FalseIsNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Check Slot");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_CheckSlot_Params params {};
		params.OwnItem = OwnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FalseIsNone != nullptr)
			*FalseIsNone = params.FalseIsNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.SetupByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::SetupByUniqueId(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.SetupByUniqueId");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::Setup(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Setup");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_Setup_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.PreConstruct");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Construct");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Destruct");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnPressCancelKey
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::OnPressCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnPressCancelKey");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_OnPressCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ChangeMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AbilityMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::ChangeMode(bool AbilityMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ChangeMode");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_ChangeMode_Params params {};
		params.AbilityMode = AbilityMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_T_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_T_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_T_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_T_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_A_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_A_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_A_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_A_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityEfficacyDescPopup_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnClose__DelegateSignature");
		
		UCommonWeaponAbilityEfficacyDescPopup_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWeaponAbilityEfficacyDescPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWeaponAbilityEfficacyDescPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C");
		return ptr;
	}

}


