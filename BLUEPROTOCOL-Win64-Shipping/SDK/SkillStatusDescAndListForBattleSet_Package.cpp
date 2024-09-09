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
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsPlaying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying");
		
		USkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsPlaying != nullptr)
			*OutIsPlaying = params.OutIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsOpen                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen");
		
		USkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsOpen != nullptr)
			*OutIsOpen = params.OutIsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.GetBattleSetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                OutBattleSetInfoType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.GetBattleSetInfoType");
		
		USkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBattleSetInfoType != nullptr)
			*OutBattleSetInfoType = params.OutBattleSetInfoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus");
		
		USkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus_Params params {};
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.SwitchStatusType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStatusTypeId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::SwitchStatusType(int32_t InStatusTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.SwitchStatusType");
		
		USkillStatusDescAndListForBattleSet_C_SwitchStatusType_Params params {};
		params.InStatusTypeId = InStatusTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateSelectedSkillDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::UpdateSelectedSkillDesc(int32_t InSkillId, bool InForceUpdate, const class FString& InEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateSelectedSkillDesc");
		
		USkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc_Params params {};
		params.InSkillId = InSkillId;
		params.InForceUpdate = InForceUpdate;
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateEquippedSkillDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEquippedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::UpdateEquippedSkillDesc(int32_t InEquippedSkillId, bool InForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateEquippedSkillDesc");
		
		USkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc_Params params {};
		params.InEquippedSkillId = InEquippedSkillId;
		params.InForceUpdate = InForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.HideWindow
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.HideWindow");
		
		USkillStatusDescAndListForBattleSet_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InEquipClassType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassAbilityTypeId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, int32_t InSkillSlotId, int32_t InClassAbilityTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowWindow");
		
		USkillStatusDescAndListForBattleSet_C_ShowWindow_Params params {};
		params.InInfoType = InInfoType;
		params.InEquipClassType = InEquipClassType;
		params.InSkillSlotId = InSkillSlotId;
		params.InClassAbilityTypeId = InClassAbilityTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ClassAbilityChangeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InDisarm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::ClassAbilityChangeProc(int32_t InSkillId, bool InDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ClassAbilityChangeProc");
		
		USkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc_Params params {};
		params.InSkillId = InSkillId;
		params.InDisarm = InDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnClassAbilityChangeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::OnClassAbilityChangeCompleted(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnClassAbilityChangeCompleted");
		
		USkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.TacticalSkillChangeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InDisarm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::TacticalSkillChangeProc(int32_t InSkillId, bool InDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.TacticalSkillChangeProc");
		
		USkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc_Params params {};
		params.InSkillId = InSkillId;
		params.InDisarm = InDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTacticalSkillChangeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsArtsAssetLoadRequested                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::OnTacticalSkillChangeCompleted(int32_t RetCode, bool IsArtsAssetLoadRequested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTacticalSkillChangeCompleted");
		
		USkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted_Params params {};
		params.RetCode = RetCode;
		params.IsArtsAssetLoadRequested = IsArtsAssetLoadRequested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature_Params params {};
		params.InSelectedSkillTypeId = InSelectedSkillTypeId;
		params.InSelectedSkillId = InSelectedSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog");
		
		USkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog_Params params {};
		params.InUnchangeableRetValue = InUnchangeableRetValue;
		params.InBattleSetInfoType = InBattleSetInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Construct");
		
		USkillStatusDescAndListForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnAnimationFinished");
		
		USkillStatusDescAndListForBattleSet_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnPress_Cancel");
		
		USkillStatusDescAndListForBattleSet_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::UiInputBlock(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UiInputBlock");
		
		USkillStatusDescAndListForBattleSet_C_UiInputBlock_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UIInputBlockForSkillChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::UIInputBlockForSkillChange(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UIInputBlockForSkillChange");
		
		USkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Destruct");
		
		USkillStatusDescAndListForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPressedSwitchBtnId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32_t InPressedSwitchBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature_Params params {};
		params.InPressedSwitchBtnId = InPressedSwitchBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.PreConstruct");
		
		USkillStatusDescAndListForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.CloseDetailedStatus
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::CloseDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.CloseDetailedStatus");
		
		USkillStatusDescAndListForBattleSet_C_CloseDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ChangeSkillResultProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewEquippedSkillId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsDisarm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::ChangeSkillResultProc(int32_t InNewEquippedSkillId, bool InIsDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ChangeSkillResultProc");
		
		USkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc_Params params {};
		params.InNewEquippedSkillId = InNewEquippedSkillId;
		params.InIsDisarm = InIsDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillInfoItemForBattleSet_C*                InSelectedInfoItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature_Params params {};
		params.InSelectedInfoItem = InSelectedInfoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature_Params params {};
		params.InInfoType = InInfoType;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ExecuteUbergraph_SkillStatusDescAndListForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::ExecuteUbergraph_SkillStatusDescAndListForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ExecuteUbergraph_SkillStatusDescAndListForBattleSet");
		
		USkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnTermEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnTermEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedClassAbilityChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnEquippedClassAbilityChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedClassAbilityChanged__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnEquippedClassAbilityChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedTacticalSkillChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnEquippedTacticalSkillChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedTacticalSkillChanged__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnEquippedTacticalSkillChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnSkillChangeBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillInfoItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEquippedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescAndListForBattleSet_C::OnSkillInfoItemSelected__DelegateSignature(int32_t InEquippedSkillId, int32_t InSelectedSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillInfoItemSelected__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature_Params params {};
		params.InEquippedSkillId = InEquippedSkillId;
		params.InSelectedSkillId = InSelectedSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescAndListForBattleSet_C::OnHideWindowFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature");
		
		USkillStatusDescAndListForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillStatusDescAndListForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillStatusDescAndListForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C");
		return ptr;
	}

}


