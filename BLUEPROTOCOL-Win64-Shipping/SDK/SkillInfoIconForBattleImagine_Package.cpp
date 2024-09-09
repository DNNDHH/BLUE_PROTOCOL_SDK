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
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  InSwitcher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetScoreInfoSwitcher");
		
		USkillInfoIconForBattleImagine_C_SetScoreInfoSwitcher_Params params {};
		params.InSwitcher = InSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfoForDhcBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattlePlayerEquipImagineInfo          InBattleImagineInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineInfoForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InBattleImagineInfo, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfoForDhcBattle");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle_Params params {};
		params.InBattleImagineInfo = InBattleImagineInfo;
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBtnForPadCursorMoveVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBtnForPadCursorMoveVisible");
		
		USkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetStackBIconByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USkillInfoIconForBattleImagine_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetStackBIconByOwnItemInfo");
		
		USkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillStopUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSkillActionPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::InitSkillStopUpdate(ESkillActionPosition InSkillActionPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillStopUpdate");
		
		USkillInfoIconForBattleImagine_C_InitSkillStopUpdate_Params params {};
		params.InSkillActionPosition = InSkillActionPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSkillActionPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::InitSkillEmptyColor(ESkillActionPosition InSkillActionPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillEmptyColor");
		
		USkillInfoIconForBattleImagine_C_InitSkillEmptyColor_Params params {};
		params.InSkillActionPosition = InSkillActionPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.UpdateBattleImagineIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSkillActionPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsTermLimited                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::UpdateBattleImagineIcon(ESkillActionPosition InSkillActionPosition, int32_t InImagineId, const class FString& inImagineUniqueId, int32_t InStackBNum, int32_t InStackBMax, bool InIsTermLimited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.UpdateBattleImagineIcon");
		
		USkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon_Params params {};
		params.InSkillActionPosition = InSkillActionPosition;
		params.InImagineId = InImagineId;
		params.inImagineUniqueId = inImagineUniqueId;
		params.InStackBNum = InStackBNum;
		params.InStackBMax = InStackBMax;
		params.InIsTermLimited = InIsTermLimited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineAlertIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineAlertIconVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineAlertIconVisibility");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevelVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineLevelVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevelVisibility");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineLevel(int32_t InLevel, const class FString& inImagineUniqueId, ESBClassType InClassType, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevel");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineLevel_Params params {};
		params.InLevel = InLevel;
		params.inImagineUniqueId = inImagineUniqueId;
		params.InClassType = InClassType;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineButtonOff
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineButtonOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineButtonOff");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineButtonOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetIsBattleImagineEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSkillActionPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetIsBattleImagineEmpty(ESkillActionPosition InSkillActionPosition, bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetIsBattleImagineEmpty");
		
		USkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty_Params params {};
		params.InSkillActionPosition = InSkillActionPosition;
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inImagineUniqueId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsInformationHidden                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsImagineIconActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InDontDisplayAlertIcon                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::SetBattleImagineInfo(const class FString& inImagineUniqueId, bool InIsInformationHidden, bool InIsStorageMode, bool InIsImagineIconActive, ESBClassType InClassType, bool InDontDisplayAlertIcon, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfo");
		
		USkillInfoIconForBattleImagine_C_SetBattleImagineInfo_Params params {};
		params.inImagineUniqueId = inImagineUniqueId;
		params.InIsInformationHidden = InIsInformationHidden;
		params.InIsStorageMode = InIsStorageMode;
		params.InIsImagineIconActive = InIsImagineIconActive;
		params.InClassType = InClassType;
		params.InDontDisplayAlertIcon = InDontDisplayAlertIcon;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.CreateTooltipForBattleImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             InImagineTooltipInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InIsNotUseTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::CreateTooltipForBattleImagine(const struct FST_ToolTipInfo& InImagineTooltipInfo, bool InIsNotUseTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.CreateTooltipForBattleImagine");
		
		USkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine_Params params {};
		params.InImagineTooltipInfo = InImagineTooltipInfo;
		params.InIsNotUseTooltip = InIsNotUseTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForBattleImagine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.Construct");
		
		USkillInfoIconForBattleImagine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForBattleImagine_C::BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USkillInfoIconForBattleImagine_C_BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForBattleImagine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.PreConstruct");
		
		USkillInfoIconForBattleImagine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.ExecuteUbergraph_SkillInfoIconForBattleImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::ExecuteUbergraph_SkillInfoIconForBattleImagine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.ExecuteUbergraph_SkillInfoIconForBattleImagine");
		
		USkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.OnBattleImagineIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForBattleImagine_C::OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.OnBattleImagineIconPressed__DelegateSignature");
		
		USkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoIconForBattleImagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoIconForBattleImagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C");
		return ptr;
	}

}


