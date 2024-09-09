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
	 * 		Name   -> Function BossHPGaugeList.BossHPGaugeList_C.OnInAnimationCall
	 * 		Flags  -> ()
	 */
	void UBossHPGaugeList_C::OnInAnimationCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossHPGaugeList.BossHPGaugeList_C.OnInAnimationCall");
		
		UBossHPGaugeList_C_OnInAnimationCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBossHPGaugeList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBossHPGaugeList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BossHPGaugeList.BossHPGaugeList_C");
		return ptr;
	}

}


