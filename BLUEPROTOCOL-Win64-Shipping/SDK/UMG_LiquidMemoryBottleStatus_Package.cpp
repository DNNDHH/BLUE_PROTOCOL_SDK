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
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleLiquidMemory_One
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBottleId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAccumulatedRate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryBottleStatus_C::SetBottleLiquidMemory_One(int32_t InBottleId, int32_t InLiquidMemoryId, float InAccumulatedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleLiquidMemory_One");
		
		UUMG_LiquidMemoryBottleStatus_C_SetBottleLiquidMemory_One_Params params {};
		params.InBottleId = InBottleId;
		params.InLiquidMemoryId = InLiquidMemoryId;
		params.InAccumulatedRate = InAccumulatedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleAccumulatedRate_One
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBottleId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AccumlatedRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryBottleStatus_C::SetBottleAccumulatedRate_One(int32_t InBottleId, float AccumlatedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleAccumulatedRate_One");
		
		UUMG_LiquidMemoryBottleStatus_C_SetBottleAccumulatedRate_One_Params params {};
		params.InBottleId = InBottleId;
		params.AccumlatedRate = AccumlatedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLiquidMemoryInfo                         InLiquidMemoryInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_LiquidMemoryBottleStatus_C::SetBottleStatus(const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.SetBottleStatus");
		
		UUMG_LiquidMemoryBottleStatus_C_SetBottleStatus_Params params {};
		params.InLiquidMemoryInfo = InLiquidMemoryInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryBottleStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.Construct");
		
		UUMG_LiquidMemoryBottleStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryBottleStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.PreConstruct");
		
		UUMG_LiquidMemoryBottleStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.ExecuteUbergraph_UMG_LiquidMemoryBottleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryBottleStatus_C::ExecuteUbergraph_UMG_LiquidMemoryBottleStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C.ExecuteUbergraph_UMG_LiquidMemoryBottleStatus");
		
		UUMG_LiquidMemoryBottleStatus_C_ExecuteUbergraph_UMG_LiquidMemoryBottleStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryBottleStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryBottleStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C");
		return ptr;
	}

}


