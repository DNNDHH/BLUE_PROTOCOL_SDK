#pragma once

 

// Package: CommonEquipmentStatusDescWithImageView

#include "Basic.hpp"

#include "CommonEquipmentStatusDescWithImageView_classes.hpp"
#include "CommonEquipmentStatusDescWithImageView_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestWeaponModelLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InWeaponInventoryItemData                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "OnRequestWeaponModelLoad__DelegateSignature");

	Params::CommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature Parms{};

	Parms.InWeaponInventoryItemData = std::move(InWeaponInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestBattleImagineModelLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InBattleImagineInventoryItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "OnRequestBattleImagineModelLoad__DelegateSignature");

	Params::CommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature Parms{};

	Parms.InBattleImagineInventoryItemData = std::move(InBattleImagineInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.ExecuteUbergraph_CommonEquipmentStatusDescWithImageView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::ExecuteUbergraph_CommonEquipmentStatusDescWithImageView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "ExecuteUbergraph_CommonEquipmentStatusDescWithImageView");

	Params::CommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonEquipmentStatusDescWithImageView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "PreConstruct");

	Params::CommonEquipmentStatusDescWithImageView_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::SetEquipmentType(ESBCharaEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetEquipmentType");

	Params::CommonEquipmentStatusDescWithImageView_C_SetEquipmentType Parms{};

	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByOwnItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::UpdateDescByOwnItemInfo(const class FString& InEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateDescByOwnItemInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo Parms{};

	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::UpdateWeaponDescByOwnItemInfo(const class FString& InWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateWeaponDescByOwnItemInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::UpdateImagineDescByOwnItemInfo(const class FString& InImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateImagineDescByOwnItemInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByMasterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquipmentItemId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::UpdateDescByMasterData(int32 InEquipmentItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateDescByMasterData");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData Parms{};

	Parms.InEquipmentItemId = InEquipmentItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MinLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InRecipiId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitTagsByMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::UpdateWeaponDescByMasterData(int32 InWeaponID, int32 MinLevel, int32 MaxLevel, int32 InRecipiId, bool bInitTagsByMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateWeaponDescByMasterData");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.MinLevel = MinLevel;
	Parms.MaxLevel = MaxLevel;
	Parms.InRecipiId = InRecipiId;
	Parms.bInitTagsByMaster = bInitTagsByMaster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInitTagsByMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::UpdateImagineDescByMasterData(int32 InImagineId, bool bInitTagsByMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateImagineDescByMasterData");

	Params::CommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData Parms{};

	Parms.InImagineId = InImagineId;
	Parms.bInitTagsByMaster = bInitTagsByMaster;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetUsingEquipmentImage2Dor3D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUse3D                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::SetUsingEquipmentImage2Dor3D(bool InUse3D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetUsingEquipmentImage2Dor3D");

	Params::CommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D Parms{};

	Parms.InUse3D = InUse3D;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentModelCaptureImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::SetEquipmentModelCaptureImageVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetEquipmentModelCaptureImageVisibility");

	Params::CommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDescDefault                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::SetDescToDefault(bool InIsDescDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetDescToDefault");

	Params::CommonEquipmentStatusDescWithImageView_C_SetDescToDefault Parms{};

	Parms.InIsDescDefault = InIsDescDefault;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SwitchBaseBgType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNormalType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::SwitchBaseBgType(bool InIsNormalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SwitchBaseBgType");

	Params::CommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType Parms{};

	Parms.InIsNormalType = InIsNormalType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentStatusDescWithImageView_C::SetWeaponDescByOwnItemInfo(const struct FOwnItemInfo& InWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetWeaponDescByOwnItemInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Weapon Desc By Character Craft Recepi Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::Set_Weapon_Desc_By_Character_Craft_Recepi_Data(const struct FCharacterCraftRecepi& MasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "Set Weapon Desc By Character Craft Recepi Data");

	Params::CommonEquipmentStatusDescWithImageView_C_Set_Weapon_Desc_By_Character_Craft_Recepi_Data Parms{};

	Parms.MasterData = std::move(MasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadWeaponAsset
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::LoadWeaponAsset(int32 WeaponItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "LoadWeaponAsset");

	Params::CommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset Parms{};

	Parms.WeaponItemId = WeaponItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDrawMode
// (Protected, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentStatusDescWithImageView_C::UpdateDrawMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "UpdateDrawMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Imagine Desc By Character Imagine Recepi Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::Set_Imagine_Desc_By_Character_Imagine_Recepi_Data(const struct FCharacterCraftRecepi& MasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "Set Imagine Desc By Character Imagine Recepi Data");

	Params::CommonEquipmentStatusDescWithImageView_C_Set_Imagine_Desc_By_Character_Imagine_Recepi_Data Parms{};

	Parms.MasterData = std::move(MasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadImagineAsset
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::LoadImagineAsset(int32 WeaponItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "LoadImagineAsset");

	Params::CommonEquipmentStatusDescWithImageView_C_LoadImagineAsset Parms{};

	Parms.WeaponItemId = WeaponItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetLevelSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLevelSync                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescWithImageView_C::SetLevelSync(bool bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetLevelSync");

	Params::CommonEquipmentStatusDescWithImageView_C_SetLevelSync Parms{};

	Parms.bIsLevelSync = bIsLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set SPEffect Txt Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentStatusDescWithImageView_C::Set_SPEffect_Txt_Color(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "Set SPEffect Txt Color");

	Params::CommonEquipmentStatusDescWithImageView_C_Set_SPEffect_Txt_Color Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetImagineDescByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentStatusDescWithImageView_C::SetImagineDescByOwnItemInfo(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetImagineDescByOwnItemInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.HideBasicStatusPartsTags
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentStatusDescWithImageView_C::HideBasicStatusPartsTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "HideBasicStatusPartsTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescSPEffectByRecipi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRecipiId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::SetWeaponDescSPEffectByRecipi(int32 InRecipiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetWeaponDescSPEffectByRecipi");

	Params::CommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi Parms{};

	Parms.InRecipiId = InRecipiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescWithImageView_C::SetDescPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetDescPosition");

	Params::CommonEquipmentStatusDescWithImageView_C_SetDescPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetPrevInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Prev                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentStatusDescWithImageView_C::SetPrevInfo(const struct FOwnItemInfo& Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "SetPrevInfo");

	Params::CommonEquipmentStatusDescWithImageView_C_SetPrevInfo Parms{};

	Parms.Prev = std::move(Prev);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Show Basic Status Parts Tags
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentStatusDescWithImageView_C::Show_Basic_Status_Parts_Tags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescWithImageView_C", "Show Basic Status Parts Tags");

	UObject::ProcessEvent(Func, nullptr);
}

}

