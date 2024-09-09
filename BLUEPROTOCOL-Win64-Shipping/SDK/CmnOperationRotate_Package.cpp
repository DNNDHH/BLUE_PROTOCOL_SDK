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
	 * 		Name   -> Function CmnOperationRotate.CmnOperationRotate_C.SwitchIconByOperateMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBOperateMode                                     InOperateMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnOperationRotate_C::SwitchIconByOperateMode(ESBOperateMode InOperateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOperationRotate.CmnOperationRotate_C.SwitchIconByOperateMode");
		
		UCmnOperationRotate_C_SwitchIconByOperateMode_Params params {};
		params.InOperateMode = InOperateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOperationRotate.CmnOperationRotate_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnOperationRotate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOperationRotate.CmnOperationRotate_C.Construct");
		
		UCmnOperationRotate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOperationRotate.CmnOperationRotate_C.OnUpdateOperateMode
	 * 		Flags  -> ()
	 */
	void UCmnOperationRotate_C::OnUpdateOperateMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOperationRotate.CmnOperationRotate_C.OnUpdateOperateMode");
		
		UCmnOperationRotate_C_OnUpdateOperateMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOperationRotate.CmnOperationRotate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCmnOperationRotate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOperationRotate.CmnOperationRotate_C.Destruct");
		
		UCmnOperationRotate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOperationRotate.CmnOperationRotate_C.ExecuteUbergraph_CmnOperationRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnOperationRotate_C::ExecuteUbergraph_CmnOperationRotate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOperationRotate.CmnOperationRotate_C.ExecuteUbergraph_CmnOperationRotate");
		
		UCmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnOperationRotate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnOperationRotate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnOperationRotate.CmnOperationRotate_C");
		return ptr;
	}

}


