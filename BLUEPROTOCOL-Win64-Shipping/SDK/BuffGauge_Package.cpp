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
	 * 		Name   -> Function BuffGauge.BuffGauge_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStartTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAnimSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBuffGauge_C::PlayAnim(float InStartTime, float InAnimSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffGauge.BuffGauge_C.PlayAnim");
		
		UBuffGauge_C_PlayAnim_Params params {};
		params.InStartTime = InStartTime;
		params.InAnimSpeed = InAnimSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffGauge.BuffGauge_C");
		return ptr;
	}

}


