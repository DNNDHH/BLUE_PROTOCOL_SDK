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
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleSetTop_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.GetScoreInfoSwitcher");
		
		UWeaponInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.SetStackBIconByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponInfoForBattleSetTop_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.SetStackBIconByOwnItemInfo");
		
		UWeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Setup
	 * 		Flags  -> ()
	 */
	void UWeaponInfoForBattleSetTop_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Setup");
		
		UWeaponInfoForBattleSetTop_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponInfoForBattleSetTop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Construct");
		
		UWeaponInfoForBattleSetTop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleSetTop_C::BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
		
		UWeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.ExecuteUbergraph_WeaponInfoForBattleSetTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponInfoForBattleSetTop_C::ExecuteUbergraph_WeaponInfoForBattleSetTop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.ExecuteUbergraph_WeaponInfoForBattleSetTop");
		
		UWeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.OnWeaponIconClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponInfoForBattleSetTop_C::OnWeaponIconClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.OnWeaponIconClicked__DelegateSignature");
		
		UWeaponInfoForBattleSetTop_C_OnWeaponIconClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponInfoForBattleSetTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponInfoForBattleSetTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C");
		return ptr;
	}

}


