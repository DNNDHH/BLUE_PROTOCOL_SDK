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
	 * 		Name   -> Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetAccumulatedRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAccumulatedRate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryUnfilledIcon_C::SetAccumulatedRate(float InAccumulatedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetAccumulatedRate");
		
		UUMG_LiquidMemoryUnfilledIcon_C_SetAccumulatedRate_Params params {};
		params.InAccumulatedRate = InAccumulatedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryUnfilledIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.PreConstruct");
		
		UUMG_LiquidMemoryUnfilledIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAccumulatedRate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryUnfilledIcon_C::SetLiquidMemory(int32_t InLiquidMemoryId, float InAccumulatedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.SetLiquidMemory");
		
		UUMG_LiquidMemoryUnfilledIcon_C_SetLiquidMemory_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		params.InAccumulatedRate = InAccumulatedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryUnfilledIcon_C::ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C.ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon");
		
		UUMG_LiquidMemoryUnfilledIcon_C_ExecuteUbergraph_UMG_LiquidMemoryUnfilledIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryUnfilledIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryUnfilledIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryUnfilledIcon.UMG_LiquidMemoryUnfilledIcon_C");
		return ptr;
	}

}


