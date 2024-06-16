#pragma once

 

// Package: CommonEquipmentBasicStatusParts

#include "Basic.hpp"

#include "CommonEquipmentBasicStatusParts_classes.hpp"
#include "CommonEquipmentBasicStatusParts_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsForStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupByOwnItemInfo");

	Params::CommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InIsForStorage = InIsForStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsForStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupWeaponStatusByOwnItemInfo");

	Params::CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InIsForStorage = InIsForStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsForStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupImagineStatusByOwnItemInfo");

	Params::CommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InIsForStorage = InIsForStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByMasterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquipmentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InEquipmentItemType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitTagsByMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupByMasterData(int32 InEquipmentId, EItemType InEquipmentItemType, bool bInitTagsByMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupByMasterData");

	Params::CommonEquipmentBasicStatusParts_C_SetupByMasterData Parms{};

	Parms.InEquipmentId = InEquipmentId;
	Parms.InEquipmentItemType = InEquipmentItemType;
	Parms.bInitTagsByMaster = bInitTagsByMaster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitTagsByMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByMasterData(int32 InWeaponID, bool bInitTagsByMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupWeaponStatusByMasterData");

	Params::CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.bInitTagsByMaster = bInitTagsByMaster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitTagsByMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByMasterData(int32 InImagineId, bool bInitTagsByMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupImagineStatusByMasterData");

	Params::CommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData Parms{};

	Parms.InImagineId = InImagineId;
	Parms.bInitTagsByMaster = bInitTagsByMaster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToWeaponStatusMode
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentBasicStatusParts_C::AdjustToWeaponStatusMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "AdjustToWeaponStatusMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToImagineStatusMode
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentBasicStatusParts_C::AdjustToImagineStatusMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "AdjustToImagineStatusMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelAndExpLevelSync
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::SetLevelAndExpLevelSync(const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetLevelAndExpLevelSync");

	Params::CommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByRecepiId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::SetupWeaponStatusByRecepiId(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupWeaponStatusByRecepiId");

	Params::CommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByRecepiId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::SetupImagineStatusByRecepiId(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupImagineStatusByRecepiId");

	Params::CommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByRecepiId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::SetupByRecepiId(int32 ID, EItemType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetupByRecepiId");

	Params::CommonEquipmentBasicStatusParts_C_SetupByRecepiId Parms{};

	Parms.ID = ID;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsLevelSync                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetLevelSync(bool Param_bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetLevelSync");

	Params::CommonEquipmentBasicStatusParts_C_SetLevelSync Parms{};

	Parms.Param_bIsLevelSync = Param_bIsLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set SPEffect Text Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::Set_SPEffect_Text_Color(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "Set SPEffect Text Color");

	Params::CommonEquipmentBasicStatusParts_C_Set_SPEffect_Text_Color Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetIntToText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseGrouping                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicStatusParts_C::SetIntToText(class UTextBlock* Target, int32 Value, bool UseGrouping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetIntToText");

	Params::CommonEquipmentBasicStatusParts_C_SetIntToText Parms{};

	Parms.Target = Target;
	Parms.Value = Value;
	Parms.UseGrouping = UseGrouping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.HideBasicTagInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentBasicStatusParts_C::HideBasicTagInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "HideBasicTagInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetSPEffectTextAsRecipi
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRecipiId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::SetSPEffectTextAsRecipi(int32 InRecipiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetSPEffectTextAsRecipi");

	Params::CommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi Parms{};

	Parms.InRecipiId = InRecipiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::UpdateLimitRecepiByWeapon(const struct FCraftMasterData& MasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "UpdateLimitRecepiByWeapon");

	Params::CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon Parms{};

	Parms.MasterData = std::move(MasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::UpdateLimitRecepiByImagine(const struct FMasterImagineRecepi& MasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "UpdateLimitRecepiByImagine");

	Params::CommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine Parms{};

	Parms.MasterData = std::move(MasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByWeaponId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecipiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::UpdateLimitInfoByWeaponId(int32 RecipiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "UpdateLimitInfoByWeaponId");

	Params::CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId Parms{};

	Parms.RecipiId = RecipiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByImagineId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecipiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicStatusParts_C::UpdateLimitInfoByImagineId(int32 RecipiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "UpdateLimitInfoByImagineId");

	Params::CommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId Parms{};

	Parms.RecipiId = RecipiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetPrevInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Prev                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::SetPrevInfo(const struct FOwnItemInfo& Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetPrevInfo");

	Params::CommonEquipmentBasicStatusParts_C_SetPrevInfo Parms{};

	Parms.Prev = std::move(Prev);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByImagineMaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 LocalImagineMaster                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::SetUpWeaponSkinIconAndTagsByImagineMaster(const struct FSBMasterImagine& LocalImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetUpWeaponSkinIconAndTagsByImagineMaster");

	Params::CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster Parms{};

	Parms.LocalImagineMaster = std::move(LocalImagineMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByWeaponMaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              LocalWeaponMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicStatusParts_C::SetUpWeaponSkinIconAndTagsByWeaponMaster(const struct FSBWeaponMasterData& LocalWeaponMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "SetUpWeaponSkinIconAndTagsByWeaponMaster");

	Params::CommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster Parms{};

	Parms.LocalWeaponMaster = std::move(LocalWeaponMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ShowBasicTagInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentBasicStatusParts_C::ShowBasicTagInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicStatusParts_C", "ShowBasicTagInfos");

	UObject::ProcessEvent(Func, nullptr);
}

}

