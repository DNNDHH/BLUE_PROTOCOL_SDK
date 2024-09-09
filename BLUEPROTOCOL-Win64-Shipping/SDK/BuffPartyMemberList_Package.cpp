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
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.OnCreateIcon
	 * 		Flags  -> ()
	 */
	class USBBuffIcon* UBuffPartyMemberList_C::OnCreateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.OnCreateIcon");
		
		UBuffPartyMemberList_C_OnCreateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UBuffPartyMemberList_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.UpdateList");
		
		UBuffPartyMemberList_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.GetList
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UBuffPartyMemberList_C::GetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.GetList");
		
		UBuffPartyMemberList_C_GetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.BindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffPartyMemberList_C::BindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.BindBattleStatusComponent");
		
		UBuffPartyMemberList_C_BindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.UnbindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffPartyMemberList_C::UnbindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.UnbindBattleStatusComponent");
		
		UBuffPartyMemberList_C_UnbindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffPartyMemberList.BuffPartyMemberList_C.ExecuteUbergraph_BuffPartyMemberList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBuffPartyMemberList_C::ExecuteUbergraph_BuffPartyMemberList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffPartyMemberList.BuffPartyMemberList_C.ExecuteUbergraph_BuffPartyMemberList");
		
		UBuffPartyMemberList_C_ExecuteUbergraph_BuffPartyMemberList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffPartyMemberList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffPartyMemberList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffPartyMemberList.BuffPartyMemberList_C");
		return ptr;
	}

}


