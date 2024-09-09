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
	 * 		Name   -> Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Init
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailRelease_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Init");
		
		UFang_expedition_DetailRelease_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBFang_expeditionLimitData>         LimitData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               NG                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailRelease_C::SetData(TArray<struct FSBFang_expeditionLimitData>* LimitData, bool* NG)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.SetData");
		
		UFang_expedition_DetailRelease_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LimitData != nullptr)
			*LimitData = params.LimitData;
		if (NG != nullptr)
			*NG = params.NG;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailRelease_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Construct");
		
		UFang_expedition_DetailRelease_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.ExecuteUbergraph_Fang_expedition_DetailRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailRelease_C::ExecuteUbergraph_Fang_expedition_DetailRelease(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.ExecuteUbergraph_Fang_expedition_DetailRelease");
		
		UFang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailRelease_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailRelease_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C");
		return ptr;
	}

}


