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
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  InSwitcher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetScoreInfoSwitcher");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetScoreInfoSwitcher_Params params {};
		params.InSwitcher = InSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineForDhcBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattlePlayerEquipImagineInfo          InImagineInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineForDhcBattle");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle_Params params {};
		params.InImagineInfo = InImagineInfo;
		params.InOwnItemInfo = InOwnItemInfo;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetIconTooltipEnable(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconTooltipEnable");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMoveDhcBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNoTooltip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattlePlayerEquipImagineInfo          InPassiveImagineInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CreateTooltipForBtnPadCursorMoveDhcBattle(bool InNoTooltip, int32_t InClassLevel, const struct FSBDhcBattlePlayerEquipImagineInfo& InPassiveImagineInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMoveDhcBattle");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle_Params params {};
		params.InNoTooltip = InNoTooltip;
		params.InClassLevel = InClassLevel;
		params.InPassiveImagineInfo = InPassiveImagineInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNoTooltip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CreateTooltipForBtnPadCursorMove(bool InNoTooltip, const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMove");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove_Params params {};
		params.InNoTooltip = InNoTooltip;
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetDhcBattleTopMenuMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDhcBattleTopMenuMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetDhcBattleTopMenuMode");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode_Params params {};
		params.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetForceLevelSyncOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInForceLevelSyncOff                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetForceLevelSyncOff(bool bInForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetForceLevelSyncOff");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff_Params params {};
		params.bInForceLevelSyncOff = bInForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineBlankIconStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineBlankIconStyle(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineBlankIconStyle");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetAlertIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetAlertIconVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetAlertIconVisibility");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetButtonOff
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetButtonOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetButtonOff");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetIconEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconEmpty");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineByOwnItemInfo");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.GetPassiveImagineSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    OutSlotType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::GetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType* OutSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.GetPassiveImagineSlotType");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotType != nullptr)
			*OutSlotType = params.OutSlotType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InSlotType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType InSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineSlotType");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType_Params params {};
		params.InSlotType = InSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.PreConstruct");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Construct");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Destruct");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPassiveImagineItemId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.OnClicked__DelegateSignature");
		
		UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		params.InPassiveImagineItemId = InPassiveImagineItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C");
		return ptr;
	}

}


