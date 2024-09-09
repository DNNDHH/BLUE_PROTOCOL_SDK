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
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeSpecial_C::SetEmptyColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEmptyColor");
		
		USkillInfoGaugeSpecial_C_SetEmptyColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::SetIsEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetIsEmpty");
		
		USkillInfoGaugeSpecial_C_SetIsEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::SetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetKeyGuideVisible");
		
		USkillInfoGaugeSpecial_C_SetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Update Icon Texture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::UpdateIconTexture(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Update Icon Texture");
		
		USkillInfoGaugeSpecial_C_UpdateIconTexture_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeStart
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeSpecial_C::PlayAnimChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeStart");
		
		USkillInfoGaugeSpecial_C_PlayAnimChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEnabled");
		
		USkillInfoGaugeSpecial_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeSpecial_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeEnd");
		
		USkillInfoGaugeSpecial_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimUse");
		
		USkillInfoGaugeSpecial_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USkillInfoGaugeSpecial_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetText");
		
		USkillInfoGaugeSpecial_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Set Gauge Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeSpecial_C::SetGaugeValue(float InValue, float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Set Gauge Value");
		
		USkillInfoGaugeSpecial_C_SetGaugeValue_Params params {};
		params.InValue = InValue;
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeSpecial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Construct");
		
		USkillInfoGaugeSpecial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnUpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inbActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::OnUpdateIconTexture(bool inbActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnUpdateIconTexture");
		
		USkillInfoGaugeSpecial_C_OnUpdateIconTexture_Params params {};
		params.inbActive = inbActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnIconDisableChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeSpecial_C::OnIconDisableChange(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnIconDisableChange");
		
		USkillInfoGaugeSpecial_C_OnIconDisableChange_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.ExecuteUbergraph_SkillInfoGaugeSpecial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeSpecial_C::ExecuteUbergraph_SkillInfoGaugeSpecial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.ExecuteUbergraph_SkillInfoGaugeSpecial");
		
		USkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoGaugeSpecial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoGaugeSpecial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C");
		return ptr;
	}

}


