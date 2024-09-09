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
	 * 		Name   -> Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Update_Internal
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeBagCapacity_C::Update_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Update_Internal");
		
		UPlayerGaugeBagCapacity_C_Update_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeBagCapacity_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Construct");
		
		UPlayerGaugeBagCapacity_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_3
	 * 		Flags  -> ()
	 */
	void UPlayerGaugeBagCapacity_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_3");
		
		UPlayerGaugeBagCapacity_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBLiquidMemoryInfo>                 InUpdatedLiquidMemoryInfos                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerGaugeBagCapacity_C::CustomEvent_1(int32_t InRetCode, TArray<struct FSBLiquidMemoryInfo> InUpdatedLiquidMemoryInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_1");
		
		UPlayerGaugeBagCapacity_C_CustomEvent_1_Params params {};
		params.InRetCode = InRetCode;
		params.InUpdatedLiquidMemoryInfos = InUpdatedLiquidMemoryInfos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.ExecuteUbergraph_PlayerGaugeBagCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerGaugeBagCapacity_C::ExecuteUbergraph_PlayerGaugeBagCapacity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.ExecuteUbergraph_PlayerGaugeBagCapacity");
		
		UPlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerGaugeBagCapacity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerGaugeBagCapacity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C");
		return ptr;
	}

}


