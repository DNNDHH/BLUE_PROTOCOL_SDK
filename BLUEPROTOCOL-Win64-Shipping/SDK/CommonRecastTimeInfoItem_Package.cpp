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
	 * 		Name   -> Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetRecastTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonRecastTimeInfoItem_C::SetRecastTime(float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetRecastTime");
		
		UCommonRecastTimeInfoItem_C_SetRecastTime_Params params {};
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonRecastTimeInfoItem_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetTextColor");
		
		UCommonRecastTimeInfoItem_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.ExecuteUbergraph_CommonRecastTimeInfoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonRecastTimeInfoItem_C::ExecuteUbergraph_CommonRecastTimeInfoItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.ExecuteUbergraph_CommonRecastTimeInfoItem");
		
		UCommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonRecastTimeInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonRecastTimeInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C");
		return ptr;
	}

}


