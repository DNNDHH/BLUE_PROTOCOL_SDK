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
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetCurrentMapMode
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_Simple_C::SetCurrentMapMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetCurrentMapMode");
		
		UPartyMemberInfo_Simple_C_SetCurrentMapMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo_Internal
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_Simple_C::UpdateDisplayInfo_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo_Internal");
		
		UPartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHPMPGaugeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_Simple_C::SetHPMPGaugeVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHPMPGaugeVisibility");
		
		UPartyMemberInfo_Simple_C_SetHPMPGaugeVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHpMpGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         InPartyMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_Simple_C::SetHpMpGauge(class USBPartyMemberState* InPartyMemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHpMpGauge");
		
		UPartyMemberInfo_Simple_C_SetHpMpGauge_Params params {};
		params.InPartyMemberState = InPartyMemberState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.Construct
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_Simple_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.Construct");
		
		UPartyMemberInfo_Simple_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_Simple_C::UpdateDisplayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo");
		
		UPartyMemberInfo_Simple_C_UpdateDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.ExecuteUbergraph_PartyMemberInfo_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_Simple_C::ExecuteUbergraph_PartyMemberInfo_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.ExecuteUbergraph_PartyMemberInfo_Simple");
		
		UPartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberInfo_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberInfo_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberInfo_Simple.PartyMemberInfo_Simple_C");
		return ptr;
	}

}


