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
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetPrevValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrevValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericStatusItemForBattleSet_C::SetPrevValue(int32_t PrevValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetPrevValue");
		
		UGenericStatusItemForBattleSet_C_SetPrevValue_Params params {};
		params.PrevValue = PrevValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGenericStatusItemForBattleSet_C::SetValueText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValueText");
		
		UGenericStatusItemForBattleSet_C_SetValueText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericStatusItemForBattleSet_C::SetValue(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValue");
		
		UGenericStatusItemForBattleSet_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetHeading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHeadingTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericStatusItemForBattleSet_C::SetHeading(int32_t InHeadingTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetHeading");
		
		UGenericStatusItemForBattleSet_C_SetHeading_Params params {};
		params.InHeadingTextId = InHeadingTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGenericStatusItemForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.PreConstruct");
		
		UGenericStatusItemForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.ExecuteUbergraph_GenericStatusItemForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericStatusItemForBattleSet_C::ExecuteUbergraph_GenericStatusItemForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.ExecuteUbergraph_GenericStatusItemForBattleSet");
		
		UGenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericStatusItemForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericStatusItemForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C");
		return ptr;
	}

}


