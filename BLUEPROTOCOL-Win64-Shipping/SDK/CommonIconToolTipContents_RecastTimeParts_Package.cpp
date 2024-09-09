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
	 * 		Name   -> Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetRecastTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_RecastTimeParts_C::SetRecastTime(float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetRecastTime");
		
		UCommonIconToolTipContents_RecastTimeParts_C_SetRecastTime_Params params {};
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTipContents_RecastTimeParts_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.PreConstruct");
		
		UCommonIconToolTipContents_RecastTimeParts_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_RecastTimeParts_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetTextColor");
		
		UCommonIconToolTipContents_RecastTimeParts_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_RecastTimeParts_C::ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts");
		
		UCommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContents_RecastTimeParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContents_RecastTimeParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C");
		return ptr;
	}

}


