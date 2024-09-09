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
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ResetPermanentInfo
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::ResetPermanentInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ResetPermanentInfo");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_ResetPermanentInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetMasterImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetMasterImagineData");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_SetMasterImagineData_Params params {};
		params.MasterImagine = MasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InMasterImagineData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::SetPermanentInfo(const struct FSBMasterImagine& InMasterImagineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentInfo");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_SetPermanentInfo_Params params {};
		params.InMasterImagineData = InMasterImagineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::SetPermanentName(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentName");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_SetPermanentName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetTextColor");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContents_PermanentSkillParts_C::ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts");
		
		UCommonIconToolTipContents_PermanentSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContents_PermanentSkillParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContents_PermanentSkillParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C");
		return ptr;
	}

}


