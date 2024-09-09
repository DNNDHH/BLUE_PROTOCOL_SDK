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
	 * 		Name   -> Function BuffList.BuffList_C.OnCreateIcon
	 * 		Flags  -> ()
	 */
	class USBBuffIcon* UBuffList_C::OnCreateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.OnCreateIcon");
		
		UBuffList_C_OnCreateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffList.BuffList_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UBuffList_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.UpdateList");
		
		UBuffList_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffList.BuffList_C.GetList
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UBuffList_C::GetList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.GetList");
		
		UBuffList_C_GetList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffList.BuffList_C.BindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffList_C::BindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.BindBattleStatusComponent");
		
		UBuffList_C_BindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffList.BuffList_C.UnbindBattleStatusComponent
	 * 		Flags  -> ()
	 */
	void UBuffList_C::UnbindBattleStatusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.UnbindBattleStatusComponent");
		
		UBuffList_C_UnbindBattleStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BuffList.BuffList_C.ExecuteUbergraph_BuffList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBuffList_C::ExecuteUbergraph_BuffList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffList.BuffList_C.ExecuteUbergraph_BuffList");
		
		UBuffList_C_ExecuteUbergraph_BuffList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffList.BuffList_C");
		return ptr;
	}

}


