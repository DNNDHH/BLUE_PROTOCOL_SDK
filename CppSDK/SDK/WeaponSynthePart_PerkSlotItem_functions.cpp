#pragma once

 

// Package: WeaponSynthePart_PerkSlotItem

#include "Basic.hpp"

#include "WeaponSynthePart_PerkSlotItem_classes.hpp"
#include "WeaponSynthePart_PerkSlotItem_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.OnClickedLock__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::OnClickedLock__DelegateSignature(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "OnClickedLock__DelegateSignature");

	Params::WeaponSynthePart_PerkSlotItem_C_OnClickedLock__DelegateSignature Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.ExecuteUbergraph_WeaponSynthePart_PerkSlotItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::ExecuteUbergraph_WeaponSynthePart_PerkSlotItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "ExecuteUbergraph_WeaponSynthePart_PerkSlotItem");

	Params::WeaponSynthePart_PerkSlotItem_C_ExecuteUbergraph_WeaponSynthePart_PerkSlotItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::WeaponSynthePart_PerkSlotItem_C_BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "PreConstruct");

	Params::WeaponSynthePart_PerkSlotItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupShort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       Param_PerkData                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupShort(const struct FSBCharacterWeaponPerkData& Param_PerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupShort");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupShort Parms{};

	Parms.Param_PerkData = std::move(Param_PerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupLong
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       Param_PerkData                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupLong(const struct FSBCharacterWeaponPerkData& Param_PerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupLong");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupLong Parms{};

	Parms.Param_PerkData = std::move(Param_PerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetPerkData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       InPerkData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetPerkData(const struct FSBCharacterWeaponPerkData& InPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetPerkData");

	Params::WeaponSynthePart_PerkSlotItem_C_SetPerkData Parms{};

	Parms.InPerkData = std::move(InPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetVisibleSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetVisibleSelect(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetVisibleSelect");

	Params::WeaponSynthePart_PerkSlotItem_C_SetVisibleSelect Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetVisibleButton(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetVisibleButton");

	Params::WeaponSynthePart_PerkSlotItem_C_SetVisibleButton Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupOverlapAddSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupOverlapAddSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupOverlapAddSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupOverlapRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupOverlapRemove(bool IsRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupOverlapRemove");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupOverlapRemove Parms{};

	Parms.IsRemove = IsRemove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupOverlapLock
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupOverlapLock(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupOverlapLock");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupOverlapLock Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupOverlapSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupOverlapSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupOverlapSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::SetSlot(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetSlot");

	Params::WeaponSynthePart_PerkSlotItem_C_SetSlot Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetSlotIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::SetSlotIcon(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetSlotIcon");

	Params::WeaponSynthePart_PerkSlotItem_C_SetSlotIcon Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetPerk
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       WeaponPerkData                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetPerk(const struct FSBCharacterWeaponPerkData& WeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetPerk");

	Params::WeaponSynthePart_PerkSlotItem_C_SetPerk Parms{};

	Parms.WeaponPerkData = std::move(WeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetPerkEmpty
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetPerkEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetPerkEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetItemName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_PerkSlotItem_C::SetItemName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetItemName");

	Params::WeaponSynthePart_PerkSlotItem_C_SetItemName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility1Visible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility1Visible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility1Visible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility1Visible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility1Name
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility1Name(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility1Name");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility1Name Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility1Value
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterWeaponPerkData       InWeaponPerkData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility1Value(class FName RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility1Value");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility1Value Parms{};

	Parms.RowName = RowName;
	Parms.InWeaponPerkData = std::move(InWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility2Visible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility2Visible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility2Visible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility2Visible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility2Name
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility2Name(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility2Name");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility2Name Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbility2Value
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterWeaponPerkData       InWeaponPerkData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetAbility2Value(class FName RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbility2Value");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbility2Value Parms{};

	Parms.RowName = RowName;
	Parms.InWeaponPerkData = std::move(InWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetRarityVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetRarityVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetRarityVisible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetRarityVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetRarity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::SetRarity(int32 InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetRarity");

	Params::WeaponSynthePart_PerkSlotItem_C_SetRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       Before                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FSBCharacterWeaponPerkData       After                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupTag(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupTag");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupTag Parms{};

	Parms.Before = std::move(Before);
	Parms.After = std::move(After);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetupLock(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupLock");

	Params::WeaponSynthePart_PerkSlotItem_C_SetupLock Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupLocking
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupLocking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupLocking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOptionVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetOptionVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOptionVisible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetOptionVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.UpdateLock
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::UpdateLock(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "UpdateLock");

	Params::WeaponSynthePart_PerkSlotItem_C_UpdateLock Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetAbilityChangeWindowVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetAbilityChangeWindowVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetAbilityChangeWindowVisible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetAbilityChangeWindowVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupAbilityChangeWindowNone
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupAbilityChangeWindowNone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupAbilityChangeWindowNone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupAbilityChangeWindowLock
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupAbilityChangeWindowLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupAbilityChangeWindowLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupAbilityChangeWindowValue
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupAbilityChangeWindowValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupAbilityChangeWindowValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetSlotBGSize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::SetSlotBGSize(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetSlotBGSize");

	Params::WeaponSynthePart_PerkSlotItem_C_SetSlotBGSize Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.GetAbilityDescToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWeaponSynthePart_PerkSlotItem_C::GetAbilityDescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "GetAbilityDescToolTipWidget");

	Params::WeaponSynthePart_PerkSlotItem_C_GetAbilityDescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetupOverlapUnSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetupOverlapUnSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetupOverlapUnSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapVisible");

	Params::WeaponSynthePart_PerkSlotItem_C_SetOverlapVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapAddSlot
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapAddSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapAddSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapRemove
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapLock
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapSelect
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetVisibleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetVisibleIcon(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetVisibleIcon");

	Params::WeaponSynthePart_PerkSlotItem_C_SetVisibleIcon Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetOverlapUnSelect
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_PerkSlotItem_C::SetOverlapUnSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetOverlapUnSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.SetChangeShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::SetChangeShow(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "SetChangeShow");

	Params::WeaponSynthePart_PerkSlotItem_C_SetChangeShow Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.GetPerkData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBCharacterWeaponPerkData       Param_PerkData                                         (Parm, OutParm, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::GetPerkData(struct FSBCharacterWeaponPerkData* Param_PerkData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "GetPerkData");

	Params::WeaponSynthePart_PerkSlotItem_C_GetPerkData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PerkData != nullptr)
		*Param_PerkData = std::move(Parms.Param_PerkData);
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.IsEmptyPerkData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::IsEmptyPerkData(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "IsEmptyPerkData");

	Params::WeaponSynthePart_PerkSlotItem_C_IsEmptyPerkData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.IsVisibleSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::IsVisibleSelect(bool* NewParam) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "IsVisibleSelect");

	Params::WeaponSynthePart_PerkSlotItem_C_IsVisibleSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.IsOptionVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWeaponSynthePart_PerkSlotItem_C::IsOptionVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "IsOptionVisible");

	Params::WeaponSynthePart_PerkSlotItem_C_IsOptionVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.GetSlotDataChangeType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBCharacterWeaponPerkData       Before                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FSBCharacterWeaponPerkData       After                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// ESlotDataChangeType                     Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::GetSlotDataChangeType(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After, ESlotDataChangeType* Type) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "GetSlotDataChangeType");

	Params::WeaponSynthePart_PerkSlotItem_C_GetSlotDataChangeType Parms{};

	Parms.Before = std::move(Before);
	Parms.After = std::move(After);

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.IsLock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsLock                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_PerkSlotItem_C::IsLock(bool* Param_IsLock) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "IsLock");

	Params::WeaponSynthePart_PerkSlotItem_C_IsLock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsLock != nullptr)
		*Param_IsLock = Parms.Param_IsLock;
}


// Function WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C.DebugPrint
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           InStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_PerkSlotItem_C::DebugPrint(const class FString& InStr, float Duration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_PerkSlotItem_C", "DebugPrint");

	Params::WeaponSynthePart_PerkSlotItem_C_DebugPrint Parms{};

	Parms.InStr = std::move(InStr);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}

