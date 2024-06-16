#pragma once

 

// Package: BattleCordeList

#include "Basic.hpp"

#include "BattleCordeList_classes.hpp"
#include "BattleCordeList_parameters.hpp"


namespace SDK
{

// Function BattleCordeList.BattleCordeList_C.OnCordeListItemPresssed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeListItemPresssed__DelegateSignature");

	Params::BattleCordeList_C_OnCordeListItemPresssed__DelegateSignature Parms{};

	Parms.InListItem = InListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.OnCordeReplaceBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSrcCordeListItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattleCordeListItem_C*           InDstCordListItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeReplaceBtnPressed__DelegateSignature");

	Params::BattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature Parms{};

	Parms.InSrcCordeListItem = InSrcCordeListItem;
	Parms.InDstCordListItem = InDstCordListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.OnCordeDeleteBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelectedCordeListItem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeDeleteBtnPressed__DelegateSignature");

	Params::BattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature Parms{};

	Parms.InSelectedCordeListItem = InSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.OnCordeRenameBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelectedCordeListItem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeRenameBtnPressed__DelegateSignature");

	Params::BattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature Parms{};

	Parms.InSelectedCordeListItem = InSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.OnCordeDataLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDataLoadSuccessed                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeDataLoaded__DelegateSignature");

	Params::BattleCordeList_C_OnCordeDataLoaded__DelegateSignature Parms{};

	Parms.InIsDataLoadSuccessed = InIsDataLoadSuccessed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.ExecuteUbergraph_BattleCordeList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::ExecuteUbergraph_BattleCordeList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "ExecuteUbergraph_BattleCordeList");

	Params::BattleCordeList_C_ExecuteUbergraph_BattleCordeList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeList_C::BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeList_C::BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeList_C::BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeList_C::BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	Params::BattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature Parms{};

	Parms.InSelf = InSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.OnCordeListItemClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnCordeListItemClickedEvent(class UBattleCordeListItem_C* InSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnCordeListItemClickedEvent");

	Params::BattleCordeList_C_OnCordeListItemClickedEvent Parms{};

	Parms.InSelf = InSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleCordeList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.OnLoadPresetEquipmentList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::OnLoadPresetEquipmentList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "OnLoadPresetEquipmentList");

	Params::BattleCordeList_C_OnLoadPresetEquipmentList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleCordeList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleCordeList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.CreateCordeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleCordeList_C::CreateCordeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "CreateCordeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.AddCordeListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerPresetEquipList         InCordeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleCordeList_C::AddCordeListItem(const struct FSBPlayerPresetEquipList& InCordeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "AddCordeListItem");

	Params::BattleCordeList_C_AddCordeListItem Parms{};

	Parms.InCordeData = std::move(InCordeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.SetupCurrEquippedBattleSetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleCordeList_C::SetupCurrEquippedBattleSetInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "SetupCurrEquippedBattleSetInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.GetCurrEquippedBattleCordeName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutCordeName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBattleCordeList_C::GetCurrEquippedBattleCordeName(class FString* OutCordeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetCurrEquippedBattleCordeName");

	Params::BattleCordeList_C_GetCurrEquippedBattleCordeName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCordeName != nullptr)
		*OutCordeName = std::move(Parms.OutCordeName);
}


// Function BattleCordeList.BattleCordeList_C.GetCurrEquippedCordeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerPresetEquipList         OutCordeData                                           (Parm, OutParm)

void UBattleCordeList_C::GetCurrEquippedCordeData(struct FSBPlayerPresetEquipList* OutCordeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetCurrEquippedCordeData");

	Params::BattleCordeList_C_GetCurrEquippedCordeData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCordeData != nullptr)
		*OutCordeData = std::move(Parms.OutCordeData);
}


// Function BattleCordeList.BattleCordeList_C.UpdateCordeListSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelectedCordeListItem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::UpdateCordeListSelectedItem(class UBattleCordeListItem_C* InSelectedCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "UpdateCordeListSelectedItem");

	Params::BattleCordeList_C_UpdateCordeListSelectedItem Parms{};

	Parms.InSelectedCordeListItem = InSelectedCordeListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.GetDefaultEquippedCordeId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutCordeId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::GetDefaultEquippedCordeId(int32* OutCordeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetDefaultEquippedCordeId");

	Params::BattleCordeList_C_GetDefaultEquippedCordeId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCordeId != nullptr)
		*OutCordeId = Parms.OutCordeId;
}


// Function BattleCordeList.BattleCordeList_C.GetCordeListItemByCordeId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleCordeListItem_C*           OutCordeListItem                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::GetCordeListItemByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetCordeListItemByCordeId");

	Params::BattleCordeList_C_GetCordeListItemByCordeId Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCordeListItem != nullptr)
		*OutCordeListItem = Parms.OutCordeListItem;
}


// Function BattleCordeList.BattleCordeList_C.ResetSelectedCordeToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleCordeList_C::ResetSelectedCordeToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "ResetSelectedCordeToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceUpBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::SetCordeListItemReplaceUpBtnEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "SetCordeListItemReplaceUpBtnEnable");

	Params::BattleCordeList_C_SetCordeListItemReplaceUpBtnEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceDownBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::SetCordeListItemReplaceDownBtnEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "SetCordeListItemReplaceDownBtnEnable");

	Params::BattleCordeList_C_SetCordeListItemReplaceDownBtnEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceBtnsEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::SetCordeListItemReplaceBtnsEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "SetCordeListItemReplaceBtnsEnable");

	Params::BattleCordeList_C_SetCordeListItemReplaceBtnsEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.SetCordeListItemEditBtnsEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::SetCordeListItemEditBtnsEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "SetCordeListItemEditBtnsEnable");

	Params::BattleCordeList_C_SetCordeListItemEditBtnsEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneUpByCordeId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleCordeListItem_C*           OutCordeListItem                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::GetCordeListItemOneUpByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetCordeListItemOneUpByCordeId");

	Params::BattleCordeList_C_GetCordeListItemOneUpByCordeId Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCordeListItem != nullptr)
		*OutCordeListItem = Parms.OutCordeListItem;
}


// Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneDownByCordeId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattleCordeListItem_C*           OutCordeListItem                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeList_C::GetCordeListItemOneDownByCordeId(int32 InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "GetCordeListItemOneDownByCordeId");

	Params::BattleCordeList_C_GetCordeListItemOneDownByCordeId Parms{};

	Parms.InCordeId = InCordeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCordeListItem != nullptr)
		*OutCordeListItem = Parms.OutCordeListItem;
}


// Function BattleCordeList.BattleCordeList_C.RequestLoadCordeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutRequestSuccessed                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeList_C::RequestLoadCordeData(bool* OutRequestSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeList_C", "RequestLoadCordeData");

	Params::BattleCordeList_C_RequestLoadCordeData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRequestSuccessed != nullptr)
		*OutRequestSuccessed = Parms.OutRequestSuccessed;
}

}

