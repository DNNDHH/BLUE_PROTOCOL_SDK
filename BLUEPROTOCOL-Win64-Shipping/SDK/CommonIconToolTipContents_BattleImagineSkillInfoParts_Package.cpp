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
	 * 		Name   -> Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ResetAllInfo
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ResetAllInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ResetAllInfo");
		
		UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_ResetAllInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, int32_t InStackBNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetMasterImagineData");
		
		UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		params.InStackBNum = InStackBNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetTextColor");
		
		UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts");
		
		UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContents_BattleImagineSkillInfoParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C");
		return ptr;
	}

}


