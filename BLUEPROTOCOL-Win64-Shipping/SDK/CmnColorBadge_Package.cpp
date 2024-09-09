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
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeExtraColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OutColor1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutColor2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::GetColorBadgeExtraColor(struct FLinearColor* OutColor1, struct FLinearColor* OutColor2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeExtraColor");
		
		UCmnColorBadge_C_GetColorBadgeExtraColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor1 != nullptr)
			*OutColor1 = params.OutColor1;
		if (OutColor2 != nullptr)
			*OutColor2 = params.OutColor2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::GetColorBadgeColor(struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeColor");
		
		UCmnColorBadge_C_GetColorBadgeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeExtraColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::SetColorBadgeExtraColor(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeExtraColor");
		
		UCmnColorBadge_C_SetColorBadgeExtraColor_Params params {};
		params.InColor1 = InColor1;
		params.InColor2 = InColor2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::SetColorBadgeColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeColor");
		
		UCmnColorBadge_C_SetColorBadgeColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EColorBadgeType                                    InColorBadgeType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::SetColorBadgeType(EColorBadgeType InColorBadgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeType");
		
		UCmnColorBadge_C_SetColorBadgeType_Params params {};
		params.InColorBadgeType = InColorBadgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnColorBadge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.PreConstruct");
		
		UCmnColorBadge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnColorBadge.CmnColorBadge_C.ExecuteUbergraph_CmnColorBadge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnColorBadge_C::ExecuteUbergraph_CmnColorBadge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnColorBadge.CmnColorBadge_C.ExecuteUbergraph_CmnColorBadge");
		
		UCmnColorBadge_C_ExecuteUbergraph_CmnColorBadge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnColorBadge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnColorBadge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnColorBadge.CmnColorBadge_C");
		return ptr;
	}

}


