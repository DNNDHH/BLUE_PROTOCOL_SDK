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
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetEmptyColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEmptyColor");
		
		USkillInfoGaugeMainDefHeal_C_SetEmptyColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetIsEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetIsEmpty");
		
		USkillInfoGaugeMainDefHeal_C_SetIsEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetKeyGuideVisible");
		
		USkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeStart
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeMainDefHeal_C::PlayAnimChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeStart");
		
		USkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEnabled");
		
		USkillInfoGaugeMainDefHeal_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeMainDefHeal_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeEnd");
		
		USkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimUse");
		
		USkillInfoGaugeMainDefHeal_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetText");
		
		USkillInfoGaugeMainDefHeal_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetGaugeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeMainDefHeal_C::SetGaugeValue(float InValue, float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetGaugeValue");
		
		USkillInfoGaugeMainDefHeal_C_SetGaugeValue_Params params {};
		params.InValue = InValue;
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PreConstruct");
		
		USkillInfoGaugeMainDefHeal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeMainDefHeal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.Construct");
		
		USkillInfoGaugeMainDefHeal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.OnIconDisableChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeMainDefHeal_C::OnIconDisableChange(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.OnIconDisableChange");
		
		USkillInfoGaugeMainDefHeal_C_OnIconDisableChange_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.ExecuteUbergraph_SkillInfoGaugeMainDefHeal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeMainDefHeal_C::ExecuteUbergraph_SkillInfoGaugeMainDefHeal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.ExecuteUbergraph_SkillInfoGaugeMainDefHeal");
		
		USkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoGaugeMainDefHeal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoGaugeMainDefHeal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C");
		return ptr;
	}

}


