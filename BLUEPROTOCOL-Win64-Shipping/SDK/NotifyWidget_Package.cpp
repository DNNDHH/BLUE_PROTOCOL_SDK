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
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.OnPress_MainMenu
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::OnPress_MainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.OnPress_MainMenu");
		
		UNotifyWidget_C_OnPress_MainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.OnPress_Ok
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::OnPress_Ok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.OnPress_Ok");
		
		UNotifyWidget_C_OnPress_Ok_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.OnPress_Cancel");
		
		UNotifyWidget_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.ExecuteUbergraph_NotifyWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyWidget_C::ExecuteUbergraph_NotifyWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.ExecuteUbergraph_NotifyWidget");
		
		UNotifyWidget_C_ExecuteUbergraph_NotifyWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.Press Cancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::PressCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.Press Cancel__DelegateSignature");
		
		UNotifyWidget_C_PressCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.Press Ok__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::PressOk__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.Press Ok__DelegateSignature");
		
		UNotifyWidget_C_PressOk__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyWidget.NotifyWidget_C.Press MainMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNotifyWidget_C::PressMainMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyWidget.NotifyWidget_C.Press MainMenu__DelegateSignature");
		
		UNotifyWidget_C_PressMainMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyWidget.NotifyWidget_C");
		return ptr;
	}

}


