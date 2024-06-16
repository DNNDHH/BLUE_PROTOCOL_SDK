#pragma once

 

// Package: ItemSelector

#include "Basic.hpp"

#include "ItemSelector_classes.hpp"
#include "ItemSelector_parameters.hpp"


namespace SDK
{

// Function ItemSelector.ItemSelector_C.ExecuteUbergraph_ItemSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::ExecuteUbergraph_ItemSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "ExecuteUbergraph_ItemSelector");

	Params::ItemSelector_C_ExecuteUbergraph_ItemSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.EventSetupList
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::EventSetupList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "EventSetupList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.UnbindEndCoolTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutCoolTime_C*              CoolTimeWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::UnbindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindEndCoolTime");

	Params::ItemSelector_C_UnbindEndCoolTime Parms{};

	Parms.CoolTimeWidget = CoolTimeWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.BindEndCoolTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutCoolTime_C*              CoolTimeWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::BindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindEndCoolTime");

	Params::ItemSelector_C_BindEndCoolTime Parms{};

	Parms.CoolTimeWidget = CoolTimeWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::CustomEvent_4(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "CustomEvent_4");

	Params::ItemSelector_C_CustomEvent_4 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.UnbindUpdateShortcut
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindUpdateShortcut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindUpdateShortcut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindUpdateShortcut
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindUpdateShortcut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindUpdateShortcut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "CustomEvent_3");

	Params::ItemSelector_C_CustomEvent_3 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.UnbindPlayerClassChange
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindPlayerClassChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindPlayerClassChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindPlayerClassChange
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindPlayerClassChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindPlayerClassChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "CustomEvent_1");

	Params::ItemSelector_C_CustomEvent_1 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.UnbindClassLevelUp
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindClassLevelUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindClassLevelUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindClassLevelUp
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindClassLevelUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindClassLevelUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.UnbindUseSupply
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindUseSupply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindUseSupply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindUseSupply
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindUseSupply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindUseSupply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.EventOnUseSupply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemSelector_C::EventOnUseSupply(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "EventOnUseSupply");

	Params::ItemSelector_C_EventOnUseSupply Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.UnbindOwnItemChangeAmount
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindOwnItemChangeAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindOwnItemChangeAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindOwnItemChangeAmount
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindOwnItemChangeAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindOwnItemChangeAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnOwnItemChangeAmount
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChangeItemAmountParam         InParam                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemSelector_C::OnOwnItemChangeAmount(const struct FSBChangeItemAmountParam& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnOwnItemChangeAmount");

	Params::ItemSelector_C_OnOwnItemChangeAmount Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.OnSaveItemStorage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemSelector_C::OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnSaveItemStorage");

	Params::ItemSelector_C_OnSaveItemStorage Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.UnbindSaveItemStorage
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindSaveItemStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindSaveItemStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindSaveItemStorage
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindSaveItemStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindSaveItemStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.UnbindSaveItemLock
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::UnbindSaveItemLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "UnbindSaveItemLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.BindSaveItemLock
// (BlueprintCallable, BlueprintEvent)

void UItemSelector_C::BindSaveItemLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "BindSaveItemLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnSaveItemLock
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBLockItemData>          LockItemData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::OnSaveItemLock(const bool Result, const TArray<struct FSBLockItemData>& LockItemData, const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnSaveItemLock");

	Params::ItemSelector_C_OnSaveItemLock Parms{};

	Parms.Result = Result;
	Parms.LockItemData = std::move(LockItemData);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::DebugPrint(const class FString& InStr, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "DebugPrint");

	Params::ItemSelector_C_DebugPrint Parms{};

	Parms.InStr = std::move(InStr);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnShowCoolTime
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnShowCoolTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnShowCoolTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnHiddenCoolTime
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnHiddenCoolTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnHiddenCoolTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.SetupKeyTextUse
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::SetupKeyTextUse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "SetupKeyTextUse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.SetupKeyTextLeft
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::SetupKeyTextLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "SetupKeyTextLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.SetupKeyTextRight
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::SetupKeyTextRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "SetupKeyTextRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnPlaySESelect
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnPlaySESelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnPlaySESelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.OnPlaySECanNotUse
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemUseStatus                        InUseStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelector_C::OnPlaySECanNotUse(ESBItemUseStatus InUseStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnPlaySECanNotUse");

	Params::ItemSelector_C_OnPlaySECanNotUse Parms{};

	Parms.InUseStatus = InUseStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelector.ItemSelector_C.OnUseItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemSelector_C::OnUseItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "OnUseItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelector.ItemSelector_C.IsRegistItemForInventoryData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FOwnItemInfo                     InItemInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemSelector_C::IsRegistItemForInventoryData(const struct FOwnItemInfo& InItemInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelector_C", "IsRegistItemForInventoryData");

	Params::ItemSelector_C_IsRegistItemForInventoryData Parms{};

	Parms.InItemInfo = std::move(InItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

