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
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.SetLiquidMemoryListItemNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemory_ForInventory_C::SetLiquidMemoryListItemNum(int32_t InItemNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.SetLiquidMemoryListItemNum");
		
		UUMG_LiquidMemory_ForInventory_C_SetLiquidMemoryListItemNum_Params params {};
		params.InItemNum = InItemNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Open
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemory_ForInventory_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Open");
		
		UUMG_LiquidMemory_ForInventory_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemory_ForInventory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Destruct");
		
		UUMG_LiquidMemory_ForInventory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemory_ForInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.Construct");
		
		UUMG_LiquidMemory_ForInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.OnAccumulateLiquidMemory_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBLiquidMemoryInfo>                 InUpdatedLiquidMemoryInfos                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_LiquidMemory_ForInventory_C::OnAccumulateLiquidMemory_Event(int32_t InRetCode, TArray<struct FSBLiquidMemoryInfo> InUpdatedLiquidMemoryInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.OnAccumulateLiquidMemory_Event");
		
		UUMG_LiquidMemory_ForInventory_C_OnAccumulateLiquidMemory_Event_Params params {};
		params.InRetCode = InRetCode;
		params.InUpdatedLiquidMemoryInfos = InUpdatedLiquidMemoryInfos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecOpen
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemory_ForInventory_C::ExecOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecOpen");
		
		UUMG_LiquidMemory_ForInventory_C_ExecOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemory_ForInventory_C::RewardBoostUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdate");
		
		UUMG_LiquidMemory_ForInventory_C_RewardBoostUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdateComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemory_ForInventory_C::RewardBoostUpdateComplete(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.RewardBoostUpdateComplete");
		
		UUMG_LiquidMemory_ForInventory_C_RewardBoostUpdateComplete_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecuteUbergraph_UMG_LiquidMemory_ForInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemory_ForInventory_C::ExecuteUbergraph_UMG_LiquidMemory_ForInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C.ExecuteUbergraph_UMG_LiquidMemory_ForInventory");
		
		UUMG_LiquidMemory_ForInventory_C_ExecuteUbergraph_UMG_LiquidMemory_ForInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemory_ForInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemory_ForInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemory_ForInventory.UMG_LiquidMemory_ForInventory_C");
		return ptr;
	}

}


