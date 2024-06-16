#pragma once

 

// Package: CommonIconToolTipContent_Weapon

#include "Basic.hpp"

#include "CommonIconToolTipContent_Weapon_classes.hpp"
#include "CommonIconToolTipContent_Weapon_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ExecuteUbergraph_CommonIconToolTipContent_Weapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Weapon_C::ExecuteUbergraph_CommonIconToolTipContent_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "ExecuteUbergraph_CommonIconToolTipContent_Weapon");

	Params::CommonIconToolTipContent_Weapon_C_ExecuteUbergraph_CommonIconToolTipContent_Weapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Weapon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "PreConstruct");

	Params::CommonIconToolTipContent_Weapon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonIconToolTipContent_Weapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              InWeaponMasterData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Weapon_C::SetToolTipWeapon(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetToolTipWeapon");

	Params::CommonIconToolTipContent_Weapon_C_SetToolTipWeapon Parms{};

	Parms.InWeaponMasterData = std::move(InWeaponMasterData);
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageId = InStorageId;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetLevelSync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Weapon_C::SetLevelSync(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetLevelSync");

	Params::CommonIconToolTipContent_Weapon_C_SetLevelSync Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetAttributePower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAttributePower                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Weapon_C::SetAttributePower(int32 InAttributePower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetAttributePower");

	Params::CommonIconToolTipContent_Weapon_C_SetAttributePower Parms{};

	Parms.InAttributePower = InAttributePower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.ResetToDefaultTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonIconToolTipContent_Weapon_C::ResetToDefaultTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "ResetToDefaultTextColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetPlayerProfileWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                Param_PlayerProfileWeaponData                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_Weapon_C::SetPlayerProfileWeaponData(const struct FSBWeaponItemData& Param_PlayerProfileWeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetPlayerProfileWeaponData");

	Params::CommonIconToolTipContent_Weapon_C_SetPlayerProfileWeaponData Parms{};

	Parms.Param_PlayerProfileWeaponData = std::move(Param_PlayerProfileWeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetPlayerProfileToolTipWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              InWeaponMasterData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Weapon_C::SetPlayerProfileToolTipWeapon(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetPlayerProfileToolTipWeapon");

	Params::CommonIconToolTipContent_Weapon_C_SetPlayerProfileToolTipWeapon Parms{};

	Parms.InWeaponMasterData = std::move(InWeaponMasterData);
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageId = InStorageId;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C.SetToolTipWeaponBase
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              InWeaponMasterData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPerkUnlockedNum                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBCharacterWeaponPerkData>InPerkList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InUsedPerkSlotNum                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSpecialPerkId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSpecialPerkValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsTermLimited                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Weapon_C::SetToolTipWeaponBase(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, int32 InPerkUnlockedNum, TArray<struct FSBCharacterWeaponPerkData>& InPerkList, int32 InUsedPerkSlotNum, int32 InSpecialPerkId, int32 InSpecialPerkValue, int32 InStackBNum, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Weapon_C", "SetToolTipWeaponBase");

	Params::CommonIconToolTipContent_Weapon_C_SetToolTipWeaponBase Parms{};

	Parms.InWeaponMasterData = std::move(InWeaponMasterData);
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageId = InStorageId;
	Parms.InPerkUnlockedNum = InPerkUnlockedNum;
	Parms.InPerkList = std::move(InPerkList);
	Parms.InUsedPerkSlotNum = InUsedPerkSlotNum;
	Parms.InSpecialPerkId = InSpecialPerkId;
	Parms.InSpecialPerkValue = InSpecialPerkValue;
	Parms.InStackBNum = InStackBNum;
	Parms.InIsTermLimited = InIsTermLimited;
	Parms.InExpiryDateTime = std::move(InExpiryDateTime);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);

	InPerkList = std::move(Parms.InPerkList);
}

}

