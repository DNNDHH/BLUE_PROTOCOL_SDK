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
	 * 		Name   -> Function StackBLuckyChance.StackBLuckyChance_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void UStackBLuckyChance_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBLuckyChance.StackBLuckyChance_C.UpdateColor");
		
		UStackBLuckyChance_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBLuckyChance.StackBLuckyChance_C.SetLuckyChanceNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChanceNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBLuckyChance_C::SetLuckyChanceNum(int32_t ChanceNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBLuckyChance.StackBLuckyChance_C.SetLuckyChanceNum");
		
		UStackBLuckyChance_C_SetLuckyChanceNum_Params params {};
		params.ChanceNum = ChanceNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBLuckyChance.StackBLuckyChance_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InfoData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBLuckyChance_C::SetData(const struct FOwnItemInfo& InfoData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBLuckyChance.StackBLuckyChance_C.SetData");
		
		UStackBLuckyChance_C_SetData_Params params {};
		params.InfoData = InfoData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBLuckyChance.StackBLuckyChance_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStackBLuckyChance_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBLuckyChance.StackBLuckyChance_C.PreConstruct");
		
		UStackBLuckyChance_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBLuckyChance.StackBLuckyChance_C.ExecuteUbergraph_StackBLuckyChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBLuckyChance_C::ExecuteUbergraph_StackBLuckyChance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBLuckyChance.StackBLuckyChance_C.ExecuteUbergraph_StackBLuckyChance");
		
		UStackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBLuckyChance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBLuckyChance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBLuckyChance.StackBLuckyChance_C");
		return ptr;
	}

}


