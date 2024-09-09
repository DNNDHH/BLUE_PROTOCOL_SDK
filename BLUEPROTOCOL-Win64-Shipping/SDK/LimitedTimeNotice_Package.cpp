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
	 * 		Name   -> Function LimitedTimeNotice.LimitedTimeNotice_C.Set Limited Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InEndTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimitedTimeNotice_C::SetLimitedTime(const struct FDateTime& InEndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimitedTimeNotice.LimitedTimeNotice_C.Set Limited Time");
		
		ULimitedTimeNotice_C_SetLimitedTime_Params params {};
		params.InEndTime = InEndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LimitedTimeNotice.LimitedTimeNotice_C.Update
	 * 		Flags  -> ()
	 */
	void ULimitedTimeNotice_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimitedTimeNotice.LimitedTimeNotice_C.Update");
		
		ULimitedTimeNotice_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LimitedTimeNotice.LimitedTimeNotice_C.ExecuteUbergraph_LimitedTimeNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULimitedTimeNotice_C::ExecuteUbergraph_LimitedTimeNotice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimitedTimeNotice.LimitedTimeNotice_C.ExecuteUbergraph_LimitedTimeNotice");
		
		ULimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimitedTimeNotice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimitedTimeNotice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LimitedTimeNotice.LimitedTimeNotice_C");
		return ptr;
	}

}


