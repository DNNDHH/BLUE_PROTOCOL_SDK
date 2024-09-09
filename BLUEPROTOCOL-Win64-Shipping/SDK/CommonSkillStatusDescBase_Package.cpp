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
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillAbilityTypeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSkillStatusDescBase_C::SetSkillAbilityTypeVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillAbilityTypeVisibility");
		
		UCommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::SetSkillClassType(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillClassType");
		
		UCommonSkillStatusDescBase_C_SetSkillClassType_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::SetSkillLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillLevel");
		
		UCommonSkillStatusDescBase_C_SetSkillLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::SetSkillName(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillName");
		
		UCommonSkillStatusDescBase_C_SetSkillName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::SetSkill(int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkill");
		
		UCommonSkillStatusDescBase_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBlank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSkillStatusDescBase_C::SetBlank(bool InIsBlank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBlank");
		
		UCommonSkillStatusDescBase_C_SetBlank_Params params {};
		params.InIsBlank = InIsBlank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SwitchBaseBgType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNormalType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSkillStatusDescBase_C::SwitchBaseBgType(bool InIsNormalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SwitchBaseBgType");
		
		UCommonSkillStatusDescBase_C_SwitchBaseBgType_Params params {};
		params.InIsNormalType = InIsNormalType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBaseSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::SetBaseSize(float InWidth, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBaseSize");
		
		UCommonSkillStatusDescBase_C_SetBaseSize_Params params {};
		params.InWidth = InWidth;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonSkillStatusDescBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.PreConstruct");
		
		UCommonSkillStatusDescBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.ExecuteUbergraph_CommonSkillStatusDescBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonSkillStatusDescBase_C::ExecuteUbergraph_CommonSkillStatusDescBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.ExecuteUbergraph_CommonSkillStatusDescBase");
		
		UCommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonSkillStatusDescBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonSkillStatusDescBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonSkillStatusDescBase.CommonSkillStatusDescBase_C");
		return ptr;
	}

}


