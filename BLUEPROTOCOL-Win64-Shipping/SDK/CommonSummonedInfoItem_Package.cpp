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
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSummonedInfoItem_C::SetInfoMark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoMark");
		
		UCommonSummonedInfoItem_C_SetInfoMark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSummonedInfoItem_C::SetInfoIconActive(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoIconActive");
		
		UCommonSummonedInfoItem_C_SetInfoIconActive_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ResetSummonedInfo
	 * 		Flags  -> ()
	 */
	void UCommonSummonedInfoItem_C::ResetSummonedInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ResetSummonedInfo");
		
		UCommonSummonedInfoItem_C_ResetSummonedInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonSummonedInfoItem_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetMasterImagineData");
		
		UCommonSummonedInfoItem_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonSummonedInfoItem_C::SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedInfo");
		
		UCommonSummonedInfoItem_C_SetSummonedInfo_Params params {};
		params.InImagineMasterData = InImagineMasterData;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonSummonedInfoItem_C::SetSummonedName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedName");
		
		UCommonSummonedInfoItem_C_SetSummonedName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTypeName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonSummonedInfoItem_C::SetSummonedTypeName(const class FText& InTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedTypeName");
		
		UCommonSummonedInfoItem_C_SetSummonedTypeName_Params params {};
		params.InTypeName = InTypeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSummonedInfoItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.PreConstruct");
		
		UCommonSummonedInfoItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSummonedInfoItem_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetTextColor");
		
		UCommonSummonedInfoItem_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ExecuteUbergraph_CommonSummonedInfoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSummonedInfoItem_C::ExecuteUbergraph_CommonSummonedInfoItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ExecuteUbergraph_CommonSummonedInfoItem");
		
		UCommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonSummonedInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonSummonedInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonSummonedInfoItem.CommonSummonedInfoItem_C");
		return ptr;
	}

}


