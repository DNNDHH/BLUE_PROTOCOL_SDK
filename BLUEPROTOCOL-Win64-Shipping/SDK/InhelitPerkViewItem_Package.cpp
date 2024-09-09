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
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisablePurge
	 * 		Flags  -> ()
	 */
	void UInhelitPerkViewItem_C::DisablePurge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisablePurge");
		
		UInhelitPerkViewItem_C_DisablePurge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisableChange
	 * 		Flags  -> ()
	 */
	void UInhelitPerkViewItem_C::DisableChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisableChange");
		
		UInhelitPerkViewItem_C_DisableChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UInhelitPerkViewItem_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetEmpty");
		
		UInhelitPerkViewItem_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SBCharacterWeaponPerkData                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkViewItem_C::SetPerkData(const struct FSBStackBPerk& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetPerkData");
		
		UInhelitPerkViewItem_C_SetPerkData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkViewItem_C::BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UInhelitPerkViewItem_C_BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkViewItem_C::BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UInhelitPerkViewItem_C_BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.ExecuteUbergraph_InhelitPerkViewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInhelitPerkViewItem_C::ExecuteUbergraph_InhelitPerkViewItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.ExecuteUbergraph_InhelitPerkViewItem");
		
		UInhelitPerkViewItem_C_ExecuteUbergraph_InhelitPerkViewItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectPurge__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SelectPerk                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkViewItem_C::SelectPurge__DelegateSignature(const struct FSBStackBPerk& SelectPerk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectPurge__DelegateSignature");
		
		UInhelitPerkViewItem_C_SelectPurge__DelegateSignature_Params params {};
		params.SelectPerk = SelectPerk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SelectData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkViewItem_C::SelectChange__DelegateSignature(const struct FSBStackBPerk& SelectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectChange__DelegateSignature");
		
		UInhelitPerkViewItem_C_SelectChange__DelegateSignature_Params params {};
		params.SelectData = SelectData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInhelitPerkViewItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInhelitPerkViewItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InhelitPerkViewItem.InhelitPerkViewItem_C");
		return ptr;
	}

}


