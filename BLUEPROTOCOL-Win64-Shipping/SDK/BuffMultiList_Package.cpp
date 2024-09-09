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
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.OnCreateIcon
	 * 		Flags  -> ()
	 */
	class USBBuffIcon* UBuffMultiList_C::OnCreateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.OnCreateIcon");
		
		UBuffMultiList_C_OnCreateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UBuffMultiList_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.UpdateList");
		
		UBuffMultiList_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.GetList
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UBuffMultiList_C::GetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.GetList");
		
		UBuffMultiList_C_GetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.BindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffMultiList_C::BindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.BindBattleStatusComponent");
		
		UBuffMultiList_C_BindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.UnbindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffMultiList_C::UnbindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.UnbindBattleStatusComponent");
		
		UBuffMultiList_C_UnbindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffMultiList.BuffMultiList_C.ExecuteUbergraph_BuffMultiList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBuffMultiList_C::ExecuteUbergraph_BuffMultiList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffMultiList.BuffMultiList_C.ExecuteUbergraph_BuffMultiList");
		
		UBuffMultiList_C_ExecuteUbergraph_BuffMultiList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffMultiList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffMultiList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffMultiList.BuffMultiList_C");
		return ptr;
	}

}


