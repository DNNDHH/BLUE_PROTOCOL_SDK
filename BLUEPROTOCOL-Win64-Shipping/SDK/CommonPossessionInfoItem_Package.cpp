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
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPossessionInfoItem_C::SetInfoMark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoMark");
		
		UCommonPossessionInfoItem_C_SetInfoMark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPossessionInfoItem_C::SetInfoIconActive(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoIconActive");
		
		UCommonPossessionInfoItem_C_SetInfoIconActive_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ResetPossessionInfo
	 * 		Flags  -> ()
	 */
	void UCommonPossessionInfoItem_C::ResetPossessionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ResetPossessionInfo");
		
		UCommonPossessionInfoItem_C_ResetPossessionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPossessionInfoItem_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetMasterImagineData");
		
		UCommonPossessionInfoItem_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagineData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPossessionInfoItem_C::SetPossessionInfo(const struct FSBMasterImagine& InMasterImagineData, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionInfo");
		
		UCommonPossessionInfoItem_C_SetPossessionInfo_Params params {};
		params.InMasterImagineData = InMasterImagineData;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPossessionInfoItem_C::SetPossessionName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionName");
		
		UCommonPossessionInfoItem_C_SetPossessionName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTypeName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPossessionInfoItem_C::SetPossessionTypeName(const class FText& InTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionTypeName");
		
		UCommonPossessionInfoItem_C_SetPossessionTypeName_Params params {};
		params.InTypeName = InTypeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPossessionInfoItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.PreConstruct");
		
		UCommonPossessionInfoItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPossessionInfoItem_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetTextColor");
		
		UCommonPossessionInfoItem_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ExecuteUbergraph_CommonPossessionInfoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPossessionInfoItem_C::ExecuteUbergraph_CommonPossessionInfoItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ExecuteUbergraph_CommonPossessionInfoItem");
		
		UCommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonPossessionInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonPossessionInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonPossessionInfoItem.CommonPossessionInfoItem_C");
		return ptr;
	}

}


