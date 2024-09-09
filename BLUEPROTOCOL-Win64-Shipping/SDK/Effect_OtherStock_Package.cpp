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
	 * 		Name   -> Function Effect_OtherStock.Effect_OtherStock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_OtherStock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_OtherStock.Effect_OtherStock_C.PreConstruct");
		
		UEffect_OtherStock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_OtherStock.Effect_OtherStock_C.NotActiveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEffect_OtherStock_C::NotActiveData(const class FText& Buff, const class FText& item, const class FText& Amount, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_OtherStock.Effect_OtherStock_C.NotActiveData");
		
		UEffect_OtherStock_C_NotActiveData_Params params {};
		params.Buff = Buff;
		params.item = item;
		params.Amount = Amount;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_OtherStock.Effect_OtherStock_C.ExecuteUbergraph_Effect_OtherStock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_OtherStock_C::ExecuteUbergraph_Effect_OtherStock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_OtherStock.Effect_OtherStock_C.ExecuteUbergraph_Effect_OtherStock");
		
		UEffect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEffect_OtherStock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_OtherStock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Effect_OtherStock.Effect_OtherStock_C");
		return ptr;
	}

}


