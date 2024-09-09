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
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.Get_InfoIcon_1_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UCommonPermanentInfoItem_C::Get_InfoIcon_1_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.Get_InfoIcon_1_ToolTipWidget_1");
		
		UCommonPermanentInfoItem_C_Get_InfoIcon_1_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPermanentInfoItem_C::SetInfoMark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoMark");
		
		UCommonPermanentInfoItem_C_SetInfoMark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPermanentInfoItem_C::SetInfoIconActive(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoIconActive");
		
		UCommonPermanentInfoItem_C_SetInfoIconActive_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ResetHyouiAbilityInfo
	 * 		Flags  -> ()
	 */
	void UCommonPermanentInfoItem_C::ResetHyouiAbilityInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ResetHyouiAbilityInfo");
		
		UCommonPermanentInfoItem_C_ResetHyouiAbilityInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPermanentInfoItem_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetMasterImagineData");
		
		UCommonPermanentInfoItem_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagineData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPermanentInfoItem_C::SetHyouiAbilityInfo(const struct FSBMasterImagine& InMasterImagineData, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityInfo");
		
		UCommonPermanentInfoItem_C_SetHyouiAbilityInfo_Params params {};
		params.InMasterImagineData = InMasterImagineData;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPermanentInfoItem_C::SetHyouiAbilityName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityName");
		
		UCommonPermanentInfoItem_C_SetHyouiAbilityName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPermanentInfoItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.PreConstruct");
		
		UCommonPermanentInfoItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPermanentInfoItem_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetTextColor");
		
		UCommonPermanentInfoItem_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ExecuteUbergraph_CommonPermanentInfoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPermanentInfoItem_C::ExecuteUbergraph_CommonPermanentInfoItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ExecuteUbergraph_CommonPermanentInfoItem");
		
		UCommonPermanentInfoItem_C_ExecuteUbergraph_CommonPermanentInfoItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonPermanentInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonPermanentInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonPermanentInfoItem.CommonPermanentInfoItem_C");
		return ptr;
	}

}


