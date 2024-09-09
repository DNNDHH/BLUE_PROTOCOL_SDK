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
	 * 		Name   -> Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.IsInfoEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetFlag                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScriptFastForwardWidget_C::IsInfoEnable(bool* RetFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.IsInfoEnable");
		
		UScriptFastForwardWidget_C_IsInfoEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetFlag != nullptr)
			*RetFlag = params.RetFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.SetFastForwardStatus
	 * 		Flags  -> ()
	 */
	void UScriptFastForwardWidget_C::SetFastForwardStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.SetFastForwardStatus");
		
		UScriptFastForwardWidget_C_SetFastForwardStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UScriptFastForwardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Construct");
		
		UScriptFastForwardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFastForwardWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Tick");
		
		UScriptFastForwardWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.ExecuteUbergraph_ScriptFastForwardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFastForwardWidget_C::ExecuteUbergraph_ScriptFastForwardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.ExecuteUbergraph_ScriptFastForwardWidget");
		
		UScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptFastForwardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptFastForwardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScriptFastForwardWidget.ScriptFastForwardWidget_C");
		return ptr;
	}

}


