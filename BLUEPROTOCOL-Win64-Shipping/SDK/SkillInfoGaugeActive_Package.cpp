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
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SwitchSkillBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHud                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBehind                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SwitchSkillBg(bool bHud, bool bBehind, bool bAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SwitchSkillBg");
		
		USkillInfoGaugeActive_C_SwitchSkillBg_Params params {};
		params.bHud = bHud;
		params.bBehind = bBehind;
		params.bAnim = bAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyVisibilityPermanent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisibilityPermanent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyVisibilityPermanent");
		
		USkillInfoGaugeActive_C_SetKeyVisibilityPermanent_Params params {};
		params.InIsVisibilityPermanent = InIsVisibilityPermanent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::SetEmptyColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEmptyColor");
		
		USkillInfoGaugeActive_C_SetEmptyColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SetIsEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIsEmpty");
		
		USkillInfoGaugeActive_C_SetIsEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.CheckBerserkModeSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::CheckBerserkModeSkill(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.CheckBerserkModeSkill");
		
		USkillInfoGaugeActive_C_CheckBerserkModeSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconElementType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBPlayerCharacter*                          InPlayerCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSkillElementIconType                            ElementType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::GetIconElementType(int32_t InSkillId, class ASBPlayerCharacter* InPlayerCharacter, ESBSkillElementIconType* ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconElementType");
		
		USkillInfoGaugeActive_C_GetIconElementType_Params params {};
		params.InSkillId = InSkillId;
		params.InPlayerCharacter = InPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ElementType != nullptr)
			*ElementType = params.ElementType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateAttackUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAttackUp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBPlayerSkillActionComponent*               SkillActionComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::UpdateAttackUp(bool InAttackUp, class USBPlayerSkillActionComponent* SkillActionComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateAttackUp");
		
		USkillInfoGaugeActive_C_UpdateAttackUp_Params params {};
		params.InAttackUp = InAttackUp;
		params.SkillActionComp = SkillActionComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconBgType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBPlayerCharacter*                          InPlayerCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIgnoreEquipActiveAbilityCheck                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBSkillIconBgType                                 BgType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::GetIconBgType(int32_t InSkillId, class ASBPlayerCharacter* InPlayerCharacter, bool bInIgnoreEquipActiveAbilityCheck, ESBSkillIconBgType* BgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconBgType");
		
		USkillInfoGaugeActive_C_GetIconBgType_Params params {};
		params.InSkillId = InSkillId;
		params.InPlayerCharacter = InPlayerCharacter;
		params.bInIgnoreEquipActiveAbilityCheck = bInIgnoreEquipActiveAbilityCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BgType != nullptr)
			*BgType = params.BgType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIconOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SetIconOpacity(bool IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIconOpacity");
		
		USkillInfoGaugeActive_C_SetIconOpacity_Params params {};
		params.IsEquipped = IsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyGuideVisible");
		
		USkillInfoGaugeActive_C_SetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeStart
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeActive_C::PlayAnimChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeStart");
		
		USkillInfoGaugeActive_C_PlayAnimChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreEquipActiveAbilityCheckForIconBgType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::UpdateIconTexture(class UTexture2D* Texture, int32_t SkillId, bool ForceUpdate, bool IgnoreEquipActiveAbilityCheckForIconBgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateIconTexture");
		
		USkillInfoGaugeActive_C_UpdateIconTexture_Params params {};
		params.Texture = Texture;
		params.SkillId = SkillId;
		params.ForceUpdate = ForceUpdate;
		params.IgnoreEquipActiveAbilityCheckForIconBgType = IgnoreEquipActiveAbilityCheckForIconBgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEnabled");
		
		USkillInfoGaugeActive_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeActive_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeEnd");
		
		USkillInfoGaugeActive_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimUse");
		
		USkillInfoGaugeActive_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USkillInfoGaugeActive_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetText");
		
		USkillInfoGaugeActive_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetGaugeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::SetGaugeValue(float InValue, float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetGaugeValue");
		
		USkillInfoGaugeActive_C_SetGaugeValue_Params params {};
		params.InValue = InValue;
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeActive_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.Construct");
		
		USkillInfoGaugeActive_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnUpdateIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  SkillIconSmall                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::OnUpdateIconTexture(class UTexture2D* SkillIconSmall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnUpdateIconTexture");
		
		USkillInfoGaugeActive_C_OnUpdateIconTexture_Params params {};
		params.SkillIconSmall = SkillIconSmall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnSetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::OnSetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnSetKeyGuideVisible");
		
		USkillInfoGaugeActive_C_OnSetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnAttackUpChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAttackUp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBPlayerSkillActionComponent*               SkillActionComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::OnAttackUpChange(bool InAttackUp, class USBPlayerSkillActionComponent* SkillActionComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnAttackUpChange");
		
		USkillInfoGaugeActive_C_OnAttackUpChange_Params params {};
		params.InAttackUp = InAttackUp;
		params.SkillActionComp = SkillActionComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStartBerserkMode
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeActive_C::OnStartBerserkMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStartBerserkMode");
		
		USkillInfoGaugeActive_C_OnStartBerserkMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStopBerserkMode
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeActive_C::OnStopBerserkMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStopBerserkMode");
		
		USkillInfoGaugeActive_C_OnStopBerserkMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnIconDisableChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoGaugeActive_C::OnIconDisableChange(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnIconDisableChange");
		
		USkillInfoGaugeActive_C_OnIconDisableChange_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.ExecuteUbergraph_SkillInfoGaugeActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeActive_C::ExecuteUbergraph_SkillInfoGaugeActive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.ExecuteUbergraph_SkillInfoGaugeActive");
		
		USkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoGaugeActive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoGaugeActive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoGaugeActive.SkillInfoGaugeActive_C");
		return ptr;
	}

}


