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
	 * 		Name   -> Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.SetColorTxt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBRuntimeTextBlock*                         txt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PrevParam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            afterParam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipStatusImaginePowers_C::SetColorTxt(class USBRuntimeTextBlock* txt, int32_t PrevParam, int32_t afterParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.SetColorTxt");
		
		UEquipStatusImaginePowers_C_SetColorTxt_Params params {};
		params.txt = txt;
		params.PrevParam = PrevParam;
		params.afterParam = afterParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set ItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipStatusImaginePowers_C::SetItemInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set ItemInfo");
		
		UEquipStatusImaginePowers_C_SetItemInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set PrevInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipStatusImaginePowers_C::SetPrevInfo(const struct FOwnItemInfo& Prev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set PrevInfo");
		
		UEquipStatusImaginePowers_C_SetPrevInfo_Params params {};
		params.Prev = Prev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.ExecuteUbergraph_EquipStatusImaginePowers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipStatusImaginePowers_C::ExecuteUbergraph_EquipStatusImaginePowers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.ExecuteUbergraph_EquipStatusImaginePowers");
		
		UEquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipStatusImaginePowers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipStatusImaginePowers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipStatusImaginePowers.EquipStatusImaginePowers_C");
		return ptr;
	}

}


