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
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyVisibilityPermanent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisibilityPermanent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyVisibilityPermanent");
		
		USkillInfoGaugeImagine_C_SetKeyVisibilityPermanent_Params params {};
		params.InIsVisibilityPermanent = InIsVisibilityPermanent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetLimitIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetLimitIconVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetLimitIconVisibility");
		
		USkillInfoGaugeImagine_C_SetLimitIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::SetEmptyColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEmptyColor");
		
		USkillInfoGaugeImagine_C_SetEmptyColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetIsEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIsEmpty");
		
		USkillInfoGaugeImagine_C_SetIsEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIconOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetIconOpacity(bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIconOpacity");
		
		USkillInfoGaugeImagine_C_SetIconOpacity_Params params {};
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyGuideVisible");
		
		USkillInfoGaugeImagine_C_SetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.UpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InImagineName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InUseImagineArtsName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InImagineArtsName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::UpdateIconTexture(const class FString& inImagineUniqueId, const class FName& InImagineName, bool InUseImagineArtsName, const class FString& InImagineArtsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.UpdateIconTexture");
		
		USkillInfoGaugeImagine_C_UpdateIconTexture_Params params {};
		params.inImagineUniqueId = inImagineUniqueId;
		params.InImagineName = InImagineName;
		params.InUseImagineArtsName = InUseImagineArtsName;
		params.InImagineArtsName = InImagineArtsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargStart
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeImagine_C::PlayAnimChargStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargStart");
		
		USkillInfoGaugeImagine_C_PlayAnimChargStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEnabled");
		
		USkillInfoGaugeImagine_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeImagine_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargeEnd");
		
		USkillInfoGaugeImagine_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimUse");
		
		USkillInfoGaugeImagine_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USkillInfoGaugeImagine_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetText");
		
		USkillInfoGaugeImagine_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetGaugeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::SetGaugeValue(float InValue, float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetGaugeValue");
		
		USkillInfoGaugeImagine_C_SetGaugeValue_Params params {};
		params.InValue = InValue;
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PreConstruct");
		
		USkillInfoGaugeImagine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeImagine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.Construct");
		
		USkillInfoGaugeImagine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnUpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InImagineName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::OnUpdateIconTexture(const class FString& inImagineUniqueId, const class FName& InImagineName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnUpdateIconTexture");
		
		USkillInfoGaugeImagine_C_OnUpdateIconTexture_Params params {};
		params.inImagineUniqueId = inImagineUniqueId;
		params.InImagineName = InImagineName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStartHyouiAnimation
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeImagine_C::OnStartHyouiAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStartHyouiAnimation");
		
		USkillInfoGaugeImagine_C_OnStartHyouiAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStopHyouiAnimation
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeImagine_C::OnStopHyouiAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStopHyouiAnimation");
		
		USkillInfoGaugeImagine_C_OnStopHyouiAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetSlotNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::SetSlotNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetSlotNum");
		
		USkillInfoGaugeImagine_C_SetSlotNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnIconDisableChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeImagine_C::OnIconDisableChange(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnIconDisableChange");
		
		USkillInfoGaugeImagine_C_OnIconDisableChange_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.ExecuteUbergraph_SkillInfoGaugeImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeImagine_C::ExecuteUbergraph_SkillInfoGaugeImagine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.ExecuteUbergraph_SkillInfoGaugeImagine");
		
		USkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoGaugeImagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoGaugeImagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoGaugeImagine.SkillInfoGaugeImagine_C");
		return ptr;
	}

}


