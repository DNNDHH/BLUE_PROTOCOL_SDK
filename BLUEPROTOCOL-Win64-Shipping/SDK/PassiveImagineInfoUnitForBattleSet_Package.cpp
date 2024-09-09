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
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  InSwitcher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetScoreInfoSwitcher");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetScoreInfoSwitcher_Params params {};
		params.InSwitcher = InSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineForDhcBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattlePlayerEquipImagineInfo          InImagineInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineForDhcBattle");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle_Params params {};
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
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetDhcBattleTopMenuMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDhcBattleTopMenuMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetDhcBattleTopMenuMode");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode_Params params {};
		params.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ForcePassiveImagineIconLevelSyncOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInForceLevelSyncOff                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::ForcePassiveImagineIconLevelSyncOff(bool bInForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ForcePassiveImagineIconLevelSyncOff");
		
		UPassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff_Params params {};
		params.bInForceLevelSyncOff = bInForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetButtonOff
	 * 		Flags  -> ()
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetButtonOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetButtonOff");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetButtonOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconAlertVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsAlertVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineIconAlertVisibility(bool InIsAlertVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconAlertVisibility");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility_Params params {};
		params.InIsAlertVisible = InIsAlertVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineIconEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconEmpty");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineByOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineByOwnItemInfo");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.GetImagineSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    OutImagineSlotType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::GetImagineSlotType(ESBPlayerPassiveImagineSlotType* OutImagineSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.GetImagineSlotType");
		
		UPassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImagineSlotType != nullptr)
			*OutImagineSlotType = params.OutImagineSlotType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetImagineSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InImagineSlotType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::SetImagineSlotType(ESBPlayerPassiveImagineSlotType InImagineSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetImagineSlotType");
		
		UPassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType_Params params {};
		params.InImagineSlotType = InImagineSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.PreConstruct");
		
		UPassiveImagineInfoUnitForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPassiveImagineItemId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UPassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		params.InPassiveImagineItemId = InPassiveImagineItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet");
		
		UPassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.OnImagineIconBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    InPassiveImagineSlotType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPassiveImagineItemId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveImagineInfoUnitForBattleSet_C::OnImagineIconBtnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.OnImagineIconBtnClicked__DelegateSignature");
		
		UPassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature_Params params {};
		params.InPassiveImagineSlotType = InPassiveImagineSlotType;
		params.InPassiveImagineItemId = InPassiveImagineItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveImagineInfoUnitForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveImagineInfoUnitForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C");
		return ptr;
	}

}


