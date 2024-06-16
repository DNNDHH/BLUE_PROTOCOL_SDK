#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatus

#include "Basic.hpp"

#include "WeaponSynthePart_WindowWeaponStatus_classes.hpp"
#include "WeaponSynthePart_WindowWeaponStatus_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatus_C::ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus");

	Params::WeaponSynthePart_WindowWeaponStatus_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.OnUpdateReardBoostInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatus_C::OnUpdateReardBoostInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "OnUpdateReardBoostInfo");

	Params::WeaponSynthePart_WindowWeaponStatus_C_OnUpdateReardBoostInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_WindowWeaponStatus_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_WindowWeaponStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetWeaponData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatus_C::SetWeaponData(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetWeaponData");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetWeaponData Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowWeaponStatus_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              SBWeaponMasterData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponSynthePart_WindowWeaponStatus_C::SetTextName(const struct FSBWeaponMasterData& SBWeaponMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetTextName");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetTextName Parms{};

	Parms.SBWeaponMasterData = std::move(SBWeaponMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextLV
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatus_C::SetTextLV(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetTextLV");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetTextLV Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextSpecialName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMasterDataManager*             Manager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponSynthePart_WindowWeaponStatus_C::SetTextSpecialName(class USBMasterDataManager* Manager, const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetTextSpecialName");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetTextSpecialName Parms{};

	Parms.Manager = Manager;
	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetTextParameter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponStatus                         Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatus_C::SetTextParameter(ESBWeaponStatus Param_Index, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetTextParameter");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetTextParameter Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetAttributeIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              SBWeaponMasterData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponSynthePart_WindowWeaponStatus_C::SetAttributeIcon(const struct FSBWeaponMasterData& SBWeaponMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetAttributeIcon");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetAttributeIcon Parms{};

	Parms.SBWeaponMasterData = std::move(SBWeaponMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.UpdateBoostInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_WindowWeaponStatus_C::UpdateBoostInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "UpdateBoostInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetStackB
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowWeaponStatus_C::SetStackB(const struct FOwnItemInfo& ItemInfo, bool IsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetStackB");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetStackB Parms{};

	Parms.ItemInfo = std::move(ItemInfo);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetVisibleStackB
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowWeaponStatus_C::SetVisibleStackB(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetVisibleStackB");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetVisibleStackB Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C.SetStackBTag
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              WeaponMasterData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatus_C::SetStackBTag(const struct FSBWeaponMasterData& WeaponMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatus_C", "SetStackBTag");

	Params::WeaponSynthePart_WindowWeaponStatus_C_SetStackBTag Parms{};

	Parms.WeaponMasterData = std::move(WeaponMasterData);

	UObject::ProcessEvent(Func, &Parms);
}

}

