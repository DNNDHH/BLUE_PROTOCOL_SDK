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
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ResetSummonedInfo
	 * 		Flags  -> ()
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::ResetSummonedInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ResetSummonedInfo");
		
		UCommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetMasterImagineData");
		
		UCommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedInfo");
		
		UCommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo_Params params {};
		params.InImagineMasterData = InImagineMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedName");
		
		UCommonToolTipContents_SummonedSkillParts_C_SetSummonedName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTypeName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedTypeName(const class FText& InTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedTypeName");
		
		UCommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName_Params params {};
		params.InTypeName = InTypeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetTextColor");
		
		UCommonToolTipContents_SummonedSkillParts_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonToolTipContents_SummonedSkillParts_C::ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts");
		
		UCommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonToolTipContents_SummonedSkillParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonToolTipContents_SummonedSkillParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C");
		return ptr;
	}

}


