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
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.UISupportRefresh
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::UISupportRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.UISupportRefresh");
		
		USkillListForBattleSet_C_UISupportRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.GetClassAbilityDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBPlayerArtsType                                  InArtsType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBPlayerPassiveSkillData>           OutDataArray                                               (Parm, OutParm)
	 */
	void USkillListForBattleSet_C::GetClassAbilityDatas(ESBClassType InClassType, ESBPlayerArtsType InArtsType, TArray<struct FSBPlayerPassiveSkillData>* OutDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.GetClassAbilityDatas");
		
		USkillListForBattleSet_C_GetClassAbilityDatas_Params params {};
		params.InClassType = InClassType;
		params.InArtsType = InArtsType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDataArray != nullptr)
			*OutDataArray = params.OutDataArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.GetTacticalSkillDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBPlayerSkillData>                  OutDataArray                                               (Parm, OutParm)
	 */
	void USkillListForBattleSet_C::GetTacticalSkillDatas(ESBClassType InClassType, TArray<struct FSBPlayerSkillData>* OutDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.GetTacticalSkillDatas");
		
		USkillListForBattleSet_C_GetTacticalSkillDatas_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDataArray != nullptr)
			*OutDataArray = params.OutDataArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SetTacticalSkillSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerActiveArtsSlotType                        InSlotType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::SetTacticalSkillSlotType(ESBPlayerActiveArtsSlotType InSlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SetTacticalSkillSlotType");
		
		USkillListForBattleSet_C_SetTacticalSkillSlotType_Params params {};
		params.InSlotType = InSlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SetSkillListItemSelectedBySkillId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::SetSkillListItemSelectedBySkillId(int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SetSkillListItemSelectedBySkillId");
		
		USkillListForBattleSet_C_SetSkillListItemSelectedBySkillId_Params params {};
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SwitchEquipmentIconListBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEquipmentIconListBodyEmpty                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillListForBattleSet_C::SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SwitchEquipmentIconListBody");
		
		USkillListForBattleSet_C_SwitchEquipmentIconListBody_Params params {};
		params.InIsEquipmentIconListBodyEmpty = InIsEquipmentIconListBodyEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SetInfoType");
		
		USkillListForBattleSet_C_SetInfoType_Params params {};
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SetListVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::SetListVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SetListVisibility");
		
		USkillListForBattleSet_C_SetListVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.SetIsEquipChangeBtnEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillListForBattleSet_C::SetIsEquipChangeBtnEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.SetIsEquipChangeBtnEnabled");
		
		USkillListForBattleSet_C_SetIsEquipChangeBtnEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.ResetSelectedInfoItemAll
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::ResetSelectedInfoItemAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.ResetSelectedInfoItemAll");
		
		USkillListForBattleSet_C_ResetSelectedInfoItemAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.HideInfoItemAll
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::HideInfoItemAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.HideInfoItemAll");
		
		USkillListForBattleSet_C_HideInfoItemAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimReverse
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::PlayListInAnimReverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimReverse");
		
		USkillListForBattleSet_C_PlayListInAnimReverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimForward
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::PlayListInAnimForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimForward");
		
		USkillListForBattleSet_C_PlayListInAnimForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.UpdateList
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.UpdateList");
		
		USkillListForBattleSet_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.InitList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InSkillClassType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassAbilityTypeId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::InitList(E_BattleSetInfoType InBattleSetInfoType, ESBClassType InSkillClassType, int32_t InSkillSlotId, int32_t InClassAbilityTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.InitList");
		
		USkillListForBattleSet_C_InitList_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InSkillClassType = InSkillClassType;
		params.InSkillSlotId = InSkillSlotId;
		params.InClassAbilityTypeId = InClassAbilityTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.Destruct");
		
		USkillListForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		USkillListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		USkillListForBattleSet_C_BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillInfoItemPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillInfoItemForBattleSet_C*                InInfoItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::OnSkillInfoItemPressed(class USkillInfoItemForBattleSet_C* InInfoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillInfoItemPressed");
		
		USkillListForBattleSet_C_OnSkillInfoItemPressed_Params params {};
		params.InInfoItem = InInfoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.Construct");
		
		USkillListForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.ExecuteUbergraph_SkillListForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::ExecuteUbergraph_SkillListForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.ExecuteUbergraph_SkillListForBattleSet");
		
		USkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillListForBattleSet_C::OnCancelBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.OnCancelBtnPressed__DelegateSignature");
		
		USkillListForBattleSet_C_OnCancelBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature");
		
		USkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature_Params params {};
		params.InInfoType = InInfoType;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillListForBattleSet.SkillListForBattleSet_C.OnInfoItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillInfoItemForBattleSet_C*                InSelectedInfoItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillListForBattleSet_C::OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillListForBattleSet.SkillListForBattleSet_C.OnInfoItemSelected__DelegateSignature");
		
		USkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature_Params params {};
		params.InSelectedInfoItem = InSelectedInfoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillListForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillListForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillListForBattleSet.SkillListForBattleSet_C");
		return ptr;
	}

}


