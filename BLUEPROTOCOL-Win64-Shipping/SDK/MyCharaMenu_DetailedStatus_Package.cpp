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
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimForDhcBattleTopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattleAttributeResistanceInfo> InDhcBattleScoreAttrResistInfos                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_DetailedStatus_C::PlayInAnimForDhcBattleTopMenu(TArray<struct FSBDhcBattleAttributeResistanceInfo>* InDhcBattleScoreAttrResistInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimForDhcBattleTopMenu");
		
		UMyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDhcBattleScoreAttrResistInfos != nullptr)
			*InDhcBattleScoreAttrResistInfos = params.InDhcBattleScoreAttrResistInfos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimPresetEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InPresetEquipItemList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_DetailedStatus_C::PlayInAnimPresetEquip(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimPresetEquip");
		
		UMyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPresetEquipItemList != nullptr)
			*InPresetEquipItemList = params.InPresetEquipItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDoStatusUpdate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_DetailedStatus_C::PlayInAnimBase(bool InDoStatusUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimBase");
		
		UMyCharaMenu_DetailedStatus_C_PlayInAnimBase_Params params {};
		params.InDoStatusUpdate = InDoStatusUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    inValueList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_DetailedStatus_C::SetupStatusParam(TArray<int32_t>* inValueList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusParam");
		
		UMyCharaMenu_DetailedStatus_C_SetupStatusParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inValueList != nullptr)
			*inValueList = params.inValueList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusPresetEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InPresetEquipItemList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_DetailedStatus_C::SetupStatusPresetEquip(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusPresetEquip");
		
		UMyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPresetEquipItemList != nullptr)
			*InPresetEquipItemList = params.InPresetEquipItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.GetAttributeDurabilityListItemObj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       InAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMyCharaMenu_AttributeDurabilityListItem_C*  OutObj                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_DetailedStatus_C::GetAttributeDurabilityListItemObj(ESBAttribute InAttribute, class UMyCharaMenu_AttributeDurabilityListItem_C** OutObj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.GetAttributeDurabilityListItemObj");
		
		UMyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj_Params params {};
		params.InAttribute = InAttribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutObj != nullptr)
			*OutObj = params.OutObj;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CreateAttributeDurabilityList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::CreateAttributeDurabilityList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CreateAttributeDurabilityList");
		
		UMyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ImmediateClose
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::ImmediateClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ImmediateClose");
		
		UMyCharaMenu_DetailedStatus_C_ImmediateClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatus
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::SetupStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatus");
		
		UMyCharaMenu_DetailedStatus_C_SetupStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayOutAnim
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::PlayOutAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayOutAnim");
		
		UMyCharaMenu_DetailedStatus_C_PlayOutAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnim
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::PlayInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnim");
		
		UMyCharaMenu_DetailedStatus_C_PlayInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_DetailedStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PreConstruct");
		
		UMyCharaMenu_DetailedStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.Construct");
		
		UMyCharaMenu_DetailedStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		UMyCharaMenu_DetailedStatus_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UMyCharaMenu_DetailedStatus_C_BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ExecuteUbergraph_MyCharaMenu_DetailedStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_DetailedStatus_C::ExecuteUbergraph_MyCharaMenu_DetailedStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ExecuteUbergraph_MyCharaMenu_DetailedStatus");
		
		UMyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CloseEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_DetailedStatus_C::CloseEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CloseEvent__DelegateSignature");
		
		UMyCharaMenu_DetailedStatus_C_CloseEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_DetailedStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_DetailedStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C");
		return ptr;
	}

}


