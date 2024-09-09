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
	 * 		Name   -> Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Drink_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Construct");
		
		UMyCharaMenu_Drink_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Update LiquidMemoryData
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Drink_C::UpdateLiquidMemoryData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Update LiquidMemoryData");
		
		UMyCharaMenu_Drink_C_UpdateLiquidMemoryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add Active Param
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLiquidMemoryEfficacyValueType                   EffucaryValueType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Drink_C::AddActiveParam(const class FText& Name, float Value, ESBLiquidMemoryEfficacyValueType EffucaryValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add Active Param");
		
		UMyCharaMenu_Drink_C_AddActiveParam_Params params {};
		params.Name = Name;
		params.Value = Value;
		params.EffucaryValueType = EffucaryValueType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add NonActive Param
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Drink_C::AddNonActiveParam(const class FText& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add NonActive Param");
		
		UMyCharaMenu_Drink_C_AddNonActiveParam_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.ExecuteUbergraph_MyCharaMenu_Drink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Drink_C::ExecuteUbergraph_MyCharaMenu_Drink(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.ExecuteUbergraph_MyCharaMenu_Drink");
		
		UMyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_Drink_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_Drink_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_Drink.MyCharaMenu_Drink_C");
		return ptr;
	}

}


