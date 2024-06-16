#pragma once

 

// Package: SkillStatusDescAndListForBattleSet

#include "Basic.hpp"

#include "SkillStatusDescAndListForBattleSet_classes.hpp"
#include "SkillStatusDescAndListForBattleSet_parameters.hpp"


namespace SDK
{

// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnHideWindowFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnHideWindowFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillInfoItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquippedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::OnSkillInfoItemSelected__DelegateSignature(int32 InEquippedSkillId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnSkillInfoItemSelected__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature Parms{};

	Parms.InEquippedSkillId = InEquippedSkillId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnSkillChangeBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnSkillChangeBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnLeftSideParameterStatusUpdated__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnResetLeftSideParameterDiffMark__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedTacticalSkillChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnEquippedTacticalSkillChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnEquippedTacticalSkillChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedClassAbilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnEquippedClassAbilityChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnEquippedClassAbilityChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnTermEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnTermEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ExecuteUbergraph_SkillStatusDescAndListForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::ExecuteUbergraph_SkillStatusDescAndListForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "ExecuteUbergraph_SkillStatusDescAndListForBattleSet");

	Params::SkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USkillInfoItemForBattleSet_C*     InSelectedInfoItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature Parms{};

	Parms.InSelectedInfoItem = InSelectedInfoItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ChangeSkillResultProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InNewEquippedSkillId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsDisarm                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::ChangeSkillResultProc(int32 InNewEquippedSkillId, bool InIsDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "ChangeSkillResultProc");

	Params::SkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc Parms{};

	Parms.InNewEquippedSkillId = InNewEquippedSkillId;
	Parms.InIsDisarm = InIsDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.CloseDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::CloseDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "CloseDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "PreConstruct");

	Params::SkillStatusDescAndListForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InPressedSwitchBtnId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature Parms{};

	Parms.InPressedSwitchBtnId = InPressedSwitchBtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UIInputBlockForSkillChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::UIInputBlockForSkillChange(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "UIInputBlockForSkillChange");

	Params::SkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UiInputBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::UiInputBlock(bool InIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "UiInputBlock");

	Params::SkillStatusDescAndListForBattleSet_C_UiInputBlock Parms{};

	Parms.InIsBlock = InIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnAnimationFinished");

	Params::SkillStatusDescAndListForBattleSet_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesInUnchangeableRetValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "ShowUnchangeableMessageDialog");

	Params::SkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog Parms{};

	Parms.InUnchangeableRetValue = InUnchangeableRetValue;
	Parms.InBattleSetInfoType = InBattleSetInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InSelectedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature");

	Params::SkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature Parms{};

	Parms.InSelectedSkillTypeId = InSelectedSkillTypeId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTacticalSkillChangeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsArtsAssetLoadRequested                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::OnTacticalSkillChangeCompleted(const int32 RetCode, const bool IsArtsAssetLoadRequested)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnTacticalSkillChangeCompleted");

	Params::SkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted Parms{};

	Parms.RetCode = RetCode;
	Parms.IsArtsAssetLoadRequested = IsArtsAssetLoadRequested;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.TacticalSkillChangeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDisarm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::TacticalSkillChangeProc(int32 InSkillId, bool InDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "TacticalSkillChangeProc");

	Params::SkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InDisarm = InDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnClassAbilityChangeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::OnClassAbilityChangeCompleted(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "OnClassAbilityChangeCompleted");

	Params::SkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ClassAbilityChangeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDisarm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::ClassAbilityChangeProc(int32 InSkillId, bool InDisarm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "ClassAbilityChangeProc");

	Params::SkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InDisarm = InDisarm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InEquipClassType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassAbilityTypeId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, int32 InSkillSlotId, int32 InClassAbilityTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "ShowWindow");

	Params::SkillStatusDescAndListForBattleSet_C_ShowWindow Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InEquipClassType = InEquipClassType;
	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InClassAbilityTypeId = InClassAbilityTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void USkillStatusDescAndListForBattleSet_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateEquippedSkillDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquippedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InForceUpdate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::UpdateEquippedSkillDesc(int32 InEquippedSkillId, bool InForceUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "UpdateEquippedSkillDesc");

	Params::SkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc Parms{};

	Parms.InEquippedSkillId = InEquippedSkillId;
	Parms.InForceUpdate = InForceUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateSelectedSkillDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InForceUpdate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::UpdateSelectedSkillDesc(int32 InSkillId, bool InForceUpdate, const class FString& InEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "UpdateSelectedSkillDesc");

	Params::SkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InForceUpdate = InForceUpdate;
	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.SwitchStatusType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStatusTypeId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::SwitchStatusType(int32 InStatusTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "SwitchStatusType");

	Params::SkillStatusDescAndListForBattleSet_C_SwitchStatusType Parms{};

	Parms.InStatusTypeId = InStatusTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIncludesClassInfoUpdate                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "UpdateLeftSideParameterStatus");

	Params::SkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus Parms{};

	Parms.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.GetBattleSetInfoType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BattleSetInfoType                     OutBattleSetInfoType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescAndListForBattleSet_C::GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "GetBattleSetInfoType");

	Params::SkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutBattleSetInfoType != nullptr)
		*OutBattleSetInfoType = Parms.OutBattleSetInfoType;
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsOpen                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "IsCharaDetailedStatusOpen");

	Params::SkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsOpen != nullptr)
		*OutIsOpen = Parms.OutIsOpen;
}


// Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescAndListForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescAndListForBattleSet_C", "IsHideWindowAnimePlaying");

	Params::SkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = Parms.OutIsPlaying;
}

}

