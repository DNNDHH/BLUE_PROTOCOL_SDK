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
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetSkillInfoItemSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSAP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   OutSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetSkillInfoItemSize(ESkillActionPosition InSAP, bool* OutIsValid, struct FVector2D* OutSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetSkillInfoItemSize");
		
		USkillInfoItem_C_GetSkillInfoItemSize_Params params {};
		params.InSAP = InSAP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutSize != nullptr)
			*OutSize = params.OutSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.SwitchSkillBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHud                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBehind                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::SwitchSkillBg(bool bHud, bool bBehind, bool bAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.SwitchSkillBg");
		
		USkillInfoItem_C_SwitchSkillBg_Params params {};
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
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.SetKeyVisibilityPermanent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisibilityPermanent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::SetKeyVisibilityPermanent(bool InIsVisibilityPermanent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.SetKeyVisibilityPermanent");
		
		USkillInfoItem_C_SetKeyVisibilityPermanent_Params params {};
		params.InIsVisibilityPermanent = InIsVisibilityPermanent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetGaugeSpecial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkillInfoGaugeSpecial_C*                    OutGaugeSpecial                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetGaugeSpecial(bool* OutIsValid, class USkillInfoGaugeSpecial_C** OutGaugeSpecial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetGaugeSpecial");
		
		USkillInfoItem_C_GetGaugeSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutGaugeSpecial != nullptr)
			*OutGaugeSpecial = params.OutGaugeSpecial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetGaugeDef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkillInfoGaugeMainDefHeal_C*                OutGaugeDef                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetGaugeDef(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetGaugeDef");
		
		USkillInfoItem_C_GetGaugeDef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutGaugeDef != nullptr)
			*OutGaugeDef = params.OutGaugeDef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetGaugeMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkillInfoGaugeMainDefHeal_C*                OutGaugeMain                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetGaugeMain(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeMain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetGaugeMain");
		
		USkillInfoItem_C_GetGaugeMain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutGaugeMain != nullptr)
			*OutGaugeMain = params.OutGaugeMain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetGaugeActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InGaugeActiveSAP                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkillInfoGaugeActive_C*                     OutGaugeActive                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetGaugeActive(ESkillActionPosition InGaugeActiveSAP, bool* OutIsValid, class USkillInfoGaugeActive_C** OutGaugeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetGaugeActive");
		
		USkillInfoItem_C_GetGaugeActive_Params params {};
		params.InGaugeActiveSAP = InGaugeActiveSAP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutGaugeActive != nullptr)
			*OutGaugeActive = params.OutGaugeActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetGaugeImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InGaugeImagineSAP                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsVaild                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkillInfoGaugeImagine_C*                    OutGaugeImagine                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetGaugeImagine(ESkillActionPosition InGaugeImagineSAP, bool* OutIsVaild, class USkillInfoGaugeImagine_C** OutGaugeImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetGaugeImagine");
		
		USkillInfoItem_C_GetGaugeImagine_Params params {};
		params.InGaugeImagineSAP = InGaugeImagineSAP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsVaild != nullptr)
			*OutIsVaild = params.OutIsVaild;
		if (OutGaugeImagine != nullptr)
			*OutGaugeImagine = params.OutGaugeImagine;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeStart
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::PlayAnimChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeStart");
		
		USkillInfoItem_C_PlayAnimChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.CheckShieldBreak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheck                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::CheckShieldBreak(bool* bCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.CheckShieldBreak");
		
		USkillInfoItem_C_CheckShieldBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCheck != nullptr)
			*bCheck = params.bCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.SetEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::SetEnable(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.SetEnable");
		
		USkillInfoItem_C_SetEnable_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.SetSwitchGauge
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::SetSwitchGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.SetSwitchGauge");
		
		USkillInfoItem_C_SetSwitchGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeEnd");
		
		USkillInfoItem_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.PlayAnimUse");
		
		USkillInfoItem_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.ReplaceFunctionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBaseString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::ReplaceFunctionText(const class FString& InBaseString, class FString* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.ReplaceFunctionText");
		
		USkillInfoItem_C_ReplaceFunctionText_Params params {};
		params.InBaseString = InBaseString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.UpdatePercent
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::UpdatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.UpdatePercent");
		
		USkillInfoItem_C_UpdatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.InitKeyText
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::InitKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.InitKeyText");
		
		USkillInfoItem_C_InitKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.UpdateKeyText
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::UpdateKeyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.UpdateKeyText");
		
		USkillInfoItem_C_UpdateKeyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetSpecialSkillRecastTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::GetSpecialSkillRecastTime(float* MaxTime, float* CurTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetSpecialSkillRecastTime");
		
		USkillInfoItem_C_GetSpecialSkillRecastTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxTime != nullptr)
			*MaxTime = params.MaxTime;
		if (CurTime != nullptr)
			*CurTime = params.CurTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.GetRecastTimeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxRecastTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RecastTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowInfo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::GetRecastTimeBP(float* MaxRecastTime, float* RecastTime, bool* bShowInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.GetRecastTimeBP");
		
		USkillInfoItem_C_GetRecastTimeBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxRecastTime != nullptr)
			*MaxRecastTime = params.MaxRecastTime;
		if (RecastTime != nullptr)
			*RecastTime = params.RecastTime;
		if (bShowInfo != nullptr)
			*bShowInfo = params.bShowInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnSkillAnimationStartDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               SkillPosition                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::OnSkillAnimationStartDelegate_Event_1(ESkillActionPosition SkillPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnSkillAnimationStartDelegate_Event_1");
		
		USkillInfoItem_C_OnSkillAnimationStartDelegate_Event_1_Params params {};
		params.SkillPosition = SkillPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.UpdateDelegate
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::UpdateDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.UpdateDelegate");
		
		USkillInfoItem_C_UpdateDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.UnbindSkillAnimationStartDelegate
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::UnbindSkillAnimationStartDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.UnbindSkillAnimationStartDelegate");
		
		USkillInfoItem_C_UnbindSkillAnimationStartDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.Destruct");
		
		USkillInfoItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.Construct");
		
		USkillInfoItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.CustomEvent_1");
		
		USkillInfoItem_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.PreConstruct");
		
		USkillInfoItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeStart
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::OnPlayAnimChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeStart");
		
		USkillInfoItem_C_OnPlayAnimChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::OnPlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeEnd");
		
		USkillInfoItem_C_OnPlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnUpdatePercent
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::OnUpdatePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnUpdatePercent");
		
		USkillInfoItem_C_OnUpdatePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::OnPlayAnimUse(bool Init)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimUse");
		
		USkillInfoItem_C_OnPlayAnimUse_Params params {};
		params.Init = Init;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItem_C::CustomEvent_2(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.CustomEvent_2");
		
		USkillInfoItem_C_CustomEvent_2_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.OnPadSkinChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPadKeySkinType                                  SkinType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::OnPadSkinChange(ESBPadKeySkinType SkinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.OnPadSkinChange");
		
		USkillInfoItem_C_OnPadSkinChange_Params params {};
		params.SkinType = SkinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.InitKeyTextAndGauge
	 * 		Flags  -> ()
	 */
	void USkillInfoItem_C::InitKeyTextAndGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.InitKeyTextAndGauge");
		
		USkillInfoItem_C_InitKeyTextAndGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItem.SkillInfoItem_C.ExecuteUbergraph_SkillInfoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItem_C::ExecuteUbergraph_SkillInfoItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItem.SkillInfoItem_C.ExecuteUbergraph_SkillInfoItem");
		
		USkillInfoItem_C_ExecuteUbergraph_SkillInfoItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoItem.SkillInfoItem_C");
		return ptr;
	}

}


