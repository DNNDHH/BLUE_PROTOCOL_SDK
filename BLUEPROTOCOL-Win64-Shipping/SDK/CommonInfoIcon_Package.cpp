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
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_CommonToolTipDetail_Fixed_C*            OutTooltip                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonInfoIcon_C::CreateToolTipWidgetifNeeded(class UWBP_CommonToolTipDetail_Fixed_C** OutTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.CreateToolTipWidgetifNeeded");
		
		UCommonInfoIcon_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTooltip != nullptr)
			*OutTooltip = params.OutTooltip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.Get_InfoIcon_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UCommonInfoIcon_C::Get_InfoIcon_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.Get_InfoIcon_ToolTipWidget_1");
		
		UCommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.Set Info Stack Imagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InInfoName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoType2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoDesc2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               StackBEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonInfoIcon_C::SetInfoStackImagine(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc, const class FString& InInfoType2, const class FString& InInfoDesc2, const struct FOwnItemInfo& Info, bool StackBEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.Set Info Stack Imagine");
		
		UCommonInfoIcon_C_SetInfoStackImagine_Params params {};
		params.InInfoName = InInfoName;
		params.InInfoType = InInfoType;
		params.InInfoDesc = InInfoDesc;
		params.InInfoType2 = InInfoType2;
		params.InInfoDesc2 = InInfoDesc2;
		params.Info = Info;
		params.StackBEffectiveDisplay = StackBEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InInfoName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonInfoIcon_C::SetInfoNameAndDesc(const class FString& InInfoName, const class FString& InInfoDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndDesc");
		
		UCommonInfoIcon_C_SetInfoNameAndDesc_Params params {};
		params.InInfoName = InInfoName;
		params.InInfoDesc = InInfoDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InInfoName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonInfoIcon_C::SetInfoNameAndType(const class FString& InInfoName, const class FString& InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndType");
		
		UCommonInfoIcon_C_SetInfoNameAndType_Params params {};
		params.InInfoName = InInfoName;
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonInfoIcon.CommonInfoIcon_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InInfoName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InInfoDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonInfoIcon_C::SetInfo(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInfoIcon.CommonInfoIcon_C.SetInfo");
		
		UCommonInfoIcon_C_SetInfo_Params params {};
		params.InInfoName = InInfoName;
		params.InInfoType = InInfoType;
		params.InInfoDesc = InInfoDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonInfoIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonInfoIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonInfoIcon.CommonInfoIcon_C");
		return ptr;
	}

}


