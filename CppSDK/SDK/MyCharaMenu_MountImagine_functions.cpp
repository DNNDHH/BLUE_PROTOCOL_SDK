#pragma once

 

// Package: MyCharaMenu_MountImagine

#include "Basic.hpp"

#include "MyCharaMenu_MountImagine_classes.hpp"
#include "MyCharaMenu_MountImagine_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BtnMountImagineClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_MountImagine_C::BtnMountImagineClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "BtnMountImagineClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.ExecuteUbergraph_MyCharaMenu_MountImagine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagine_C::ExecuteUbergraph_MyCharaMenu_MountImagine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "ExecuteUbergraph_MyCharaMenu_MountImagine");

	Params::MyCharaMenu_MountImagine_C_ExecuteUbergraph_MyCharaMenu_MountImagine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagine_C::BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagine_C::BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");

	Params::MyCharaMenu_MountImagine_C_BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_MountImagine_C::BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_MountImagine_C::Setup(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "Setup");

	Params::MyCharaMenu_MountImagine_C_Setup Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.GetInventoryMountImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutEnabled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBCharacterMountImagineData     OutMountImagineData                                    (Parm, OutParm)
// bool                                    OutIsUsed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::GetInventoryMountImagine(const class FString& InUniqueId, bool* OutEnabled, struct FSBCharacterMountImagineData* OutMountImagineData, bool* OutIsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "GetInventoryMountImagine");

	Params::MyCharaMenu_MountImagine_C_GetInventoryMountImagine Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutEnabled != nullptr)
		*OutEnabled = Parms.OutEnabled;

	if (OutMountImagineData != nullptr)
		*OutMountImagineData = std::move(Parms.OutMountImagineData);

	if (OutIsUsed != nullptr)
		*OutIsUsed = Parms.OutIsUsed;
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.CreateInventoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterMountImagineData     InMountImagine                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryItemData               OutInventryItemData                                    (Parm, OutParm, HasGetValueTypeHash)
// bool                                    OutIsEnable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::CreateInventoryData(const struct FSBCharacterMountImagineData& InMountImagine, struct FInventoryItemData* OutInventryItemData, bool* OutIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "CreateInventoryData");

	Params::MyCharaMenu_MountImagine_C_CreateInventoryData Parms{};

	Parms.InMountImagine = std::move(InMountImagine);

	UObject::ProcessEvent(Func, &Parms);

	if (OutInventryItemData != nullptr)
		*OutInventryItemData = std::move(Parms.OutInventryItemData);

	if (OutIsEnable != nullptr)
		*OutIsEnable = Parms.OutIsEnable;
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIsImagineUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUsed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetIsImagineUsed(bool InIsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetIsImagineUsed");

	Params::MyCharaMenu_MountImagine_C_SetIsImagineUsed Parms{};

	Parms.InIsUsed = InIsUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetImagineUsedIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetImagineUsedIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetImagineUsedIconVisibility");

	Params::MyCharaMenu_MountImagine_C_SetImagineUsedIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetExpiryDateTimeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetExpiryDateTimeVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetExpiryDateTimeVisibility");

	Params::MyCharaMenu_MountImagine_C_SetExpiryDateTimeVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetItemIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetItemIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetItemIconVisibility");

	Params::MyCharaMenu_MountImagine_C_SetItemIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetIMountImagineProfileVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetIMountImagineProfileVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetIMountImagineProfileVisibility");

	Params::MyCharaMenu_MountImagine_C_SetIMountImagineProfileVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetBlankIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetBlankIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetBlankIconVisibility");

	Params::MyCharaMenu_MountImagine_C_SetBlankIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C.SetNoEquipVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_MountImagine_C::SetNoEquipVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_MountImagine_C", "SetNoEquipVisibility");

	Params::MyCharaMenu_MountImagine_C_SetNoEquipVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

