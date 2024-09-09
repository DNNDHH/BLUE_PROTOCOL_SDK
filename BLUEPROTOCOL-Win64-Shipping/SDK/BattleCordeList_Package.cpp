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
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.CalculatorBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerPresetEquipList                    InCordeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            OutBattleScore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::CalculatorBattleScore(const struct FSBPlayerPresetEquipList& InCordeData, int32_t* OutBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.CalculatorBattleScore");
		
		UBattleCordeList_C_CalculatorBattleScore_Params params {};
		params.InCordeData = InCordeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBattleScore != nullptr)
			*OutBattleScore = params.OutBattleScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.RequestLoadCordeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutRequestSuccessed                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::RequestLoadCordeData(bool* OutRequestSuccessed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.RequestLoadCordeData");
		
		UBattleCordeList_C_RequestLoadCordeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRequestSuccessed != nullptr)
			*OutRequestSuccessed = params.OutRequestSuccessed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneDownByCordeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBattleCordeListItem_C*                      OutCordeListItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::GetCordeListItemOneDownByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneDownByCordeId");
		
		UBattleCordeList_C_GetCordeListItemOneDownByCordeId_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCordeListItem != nullptr)
			*OutCordeListItem = params.OutCordeListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneUpByCordeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBattleCordeListItem_C*                      OutCordeListItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::GetCordeListItemOneUpByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneUpByCordeId");
		
		UBattleCordeList_C_GetCordeListItemOneUpByCordeId_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCordeListItem != nullptr)
			*OutCordeListItem = params.OutCordeListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.SetCordeListItemEditBtnsEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::SetCordeListItemEditBtnsEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.SetCordeListItemEditBtnsEnable");
		
		UBattleCordeList_C_SetCordeListItemEditBtnsEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceBtnsEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::SetCordeListItemReplaceBtnsEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceBtnsEnable");
		
		UBattleCordeList_C_SetCordeListItemReplaceBtnsEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceDownBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::SetCordeListItemReplaceDownBtnEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceDownBtnEnable");
		
		UBattleCordeList_C_SetCordeListItemReplaceDownBtnEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceUpBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::SetCordeListItemReplaceUpBtnEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceUpBtnEnable");
		
		UBattleCordeList_C_SetCordeListItemReplaceUpBtnEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.ResetSelectedCordeToDefault
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::ResetSelectedCordeToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.ResetSelectedCordeToDefault");
		
		UBattleCordeList_C_ResetSelectedCordeToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetCordeListItemByCordeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBattleCordeListItem_C*                      OutCordeListItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::GetCordeListItemByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetCordeListItemByCordeId");
		
		UBattleCordeList_C_GetCordeListItemByCordeId_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutCordeListItem != nullptr)
			*OutCordeListItem = params.OutCordeListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetDefaultEquippedCordeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutCordeId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::GetDefaultEquippedCordeId(int32_t* OutCordeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetDefaultEquippedCordeId");
		
		UBattleCordeList_C_GetDefaultEquippedCordeId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCordeId != nullptr)
			*OutCordeId = params.OutCordeId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.UpdateCordeListSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelectedCordeListItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::UpdateCordeListSelectedItem(class UBattleCordeListItem_C* InSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.UpdateCordeListSelectedItem");
		
		UBattleCordeList_C_UpdateCordeListSelectedItem_Params params {};
		params.InSelectedCordeListItem = InSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetCurrEquippedCordeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerPresetEquipList                    OutCordeData                                               (Parm, OutParm)
	 */
	void UBattleCordeList_C::GetCurrEquippedCordeData(struct FSBPlayerPresetEquipList* OutCordeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetCurrEquippedCordeData");
		
		UBattleCordeList_C_GetCurrEquippedCordeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCordeData != nullptr)
			*OutCordeData = params.OutCordeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.GetCurrEquippedBattleCordeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutCordeName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::GetCurrEquippedBattleCordeName(class FString* OutCordeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.GetCurrEquippedBattleCordeName");
		
		UBattleCordeList_C_GetCurrEquippedBattleCordeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCordeName != nullptr)
			*OutCordeName = params.OutCordeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.SetupCurrEquippedBattleSetInfo
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::SetupCurrEquippedBattleSetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.SetupCurrEquippedBattleSetInfo");
		
		UBattleCordeList_C_SetupCurrEquippedBattleSetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.AddCordeListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerPresetEquipList                    InCordeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBattleCordeList_C::AddCordeListItem(const struct FSBPlayerPresetEquipList& InCordeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.AddCordeListItem");
		
		UBattleCordeList_C_AddCordeListItem_Params params {};
		params.InCordeData = InCordeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.CreateCordeList
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::CreateCordeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.CreateCordeList");
		
		UBattleCordeList_C_CreateCordeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.Init
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.Init");
		
		UBattleCordeList_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.Construct");
		
		UBattleCordeList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnLoadPresetEquipmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnLoadPresetEquipmentList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnLoadPresetEquipmentList");
		
		UBattleCordeList_C_OnLoadPresetEquipmentList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.Destruct");
		
		UBattleCordeList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeListItemClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnCordeListItemClickedEvent(class UBattleCordeListItem_C* InSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeListItemClickedEvent");
		
		UBattleCordeList_C_OnCordeListItemClickedEvent_Params params {};
		params.InSelf = InSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UBattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.InSelf = InSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeList_C_BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeList_C_BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeList_C_BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeList_C::BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeList_C_BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.ExecuteUbergraph_BattleCordeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::ExecuteUbergraph_BattleCordeList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.ExecuteUbergraph_BattleCordeList");
		
		UBattleCordeList_C_ExecuteUbergraph_BattleCordeList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeDataLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDataLoadSuccessed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeList_C::OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeDataLoaded__DelegateSignature");
		
		UBattleCordeList_C_OnCordeDataLoaded__DelegateSignature_Params params {};
		params.InIsDataLoadSuccessed = InIsDataLoadSuccessed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeRenameBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelectedCordeListItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeRenameBtnPressed__DelegateSignature");
		
		UBattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature_Params params {};
		params.InSelectedCordeListItem = InSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeDeleteBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelectedCordeListItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeDeleteBtnPressed__DelegateSignature");
		
		UBattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature_Params params {};
		params.InSelectedCordeListItem = InSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeReplaceBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSrcCordeListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBattleCordeListItem_C*                      InDstCordListItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeReplaceBtnPressed__DelegateSignature");
		
		UBattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature_Params params {};
		params.InSrcCordeListItem = InSrcCordeListItem;
		params.InDstCordListItem = InDstCordListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeList.BattleCordeList_C.OnCordeListItemPresssed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InListItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeList_C::OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeList.BattleCordeList_C.OnCordeListItemPresssed__DelegateSignature");
		
		UBattleCordeList_C_OnCordeListItemPresssed__DelegateSignature_Params params {};
		params.InListItem = InListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleCordeList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleCordeList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleCordeList.BattleCordeList_C");
		return ptr;
	}

}


