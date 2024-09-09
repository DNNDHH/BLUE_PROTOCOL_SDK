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
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.UpdateSkillIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsMastery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconULTSkill_C::UpdateSkillIcon(bool InIsMastery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.UpdateSkillIcon");
		
		USkillInfoIconULTSkill_C_UpdateSkillIcon_Params params {};
		params.InIsMastery = InIsMastery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.InitSkillStopUpdate
	 * 		Flags  -> ()
	 */
	void USkillInfoIconULTSkill_C::InitSkillStopUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.InitSkillStopUpdate");
		
		USkillInfoIconULTSkill_C_InitSkillStopUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetIsSkillEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconULTSkill_C::SetIsSkillEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetIsSkillEmpty");
		
		USkillInfoIconULTSkill_C_SetIsSkillEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconULTSkill_C::SetLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetLevel");
		
		USkillInfoIconULTSkill_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetSkillInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSkillMastery                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsInformationHidden                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconULTSkill_C::SetSkillInfo(int32_t InSkillId, int32_t InSkillLevel, ESBClassType InClassType, bool InIsSkillMastery, bool InIsInformationHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetSkillInfo");
		
		USkillInfoIconULTSkill_C_SetSkillInfo_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		params.InClassType = InClassType;
		params.InIsSkillMastery = InIsSkillMastery;
		params.InIsInformationHidden = InIsInformationHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNotUseTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSkillMastered                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconULTSkill_C::CreateTooltip(bool InIsNotUseTooltip, bool InIsSkillMastered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.CreateTooltip");
		
		USkillInfoIconULTSkill_C_CreateTooltip_Params params {};
		params.InIsNotUseTooltip = InIsNotUseTooltip;
		params.InIsSkillMastered = InIsSkillMastered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoIconULTSkill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.Construct");
		
		USkillInfoIconULTSkill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconULTSkill_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.PreConstruct");
		
		USkillInfoIconULTSkill_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.ExecuteUbergraph_SkillInfoIconULTSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconULTSkill_C::ExecuteUbergraph_SkillInfoIconULTSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.ExecuteUbergraph_SkillInfoIconULTSkill");
		
		USkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoIconULTSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoIconULTSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoIconULTSkill.SkillInfoIconULTSkill_C");
		return ptr;
	}

}


