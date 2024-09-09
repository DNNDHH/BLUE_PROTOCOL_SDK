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
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectMenuItem_C::SetMenuFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.Set Menu Focus");
		
		USelectMenuItem_C_SetMenuFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.Construct
	 * 		Flags  -> ()
	 */
	void USelectMenuItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.Construct");
		
		USelectMenuItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature");
		
		USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature");
		
		USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.ExecuteUbergraph_SelectMenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenuItem_C::ExecuteUbergraph_SelectMenuItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.ExecuteUbergraph_SelectMenuItem");
		
		USelectMenuItem_C_ExecuteUbergraph_SelectMenuItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMenuItem.SelectMenuItem_C.OnSelectItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USelectMenuItem_C*                           SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMenuItem_C::OnSelectItem__DelegateSignature(class USelectMenuItem_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMenuItem.SelectMenuItem_C.OnSelectItem__DelegateSignature");
		
		USelectMenuItem_C_OnSelectItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectMenuItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectMenuItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectMenuItem.SelectMenuItem_C");
		return ptr;
	}

}


