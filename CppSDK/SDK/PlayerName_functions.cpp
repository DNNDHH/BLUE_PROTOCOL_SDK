#pragma once

 

// Package: PlayerName

#include "Basic.hpp"

#include "PlayerName_classes.hpp"
#include "PlayerName_parameters.hpp"


namespace SDK
{

// Function PlayerName.PlayerName_C.ExecuteUbergraph_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::ExecuteUbergraph_PlayerName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "ExecuteUbergraph_PlayerName");

	Params::PlayerName_C_ExecuteUbergraph_PlayerName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerName.PlayerName_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "Tick");

	Params::PlayerName_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.UnbindTensionTagChanged
// (BlueprintCallable, BlueprintEvent)

void UPlayerName_C::UnbindTensionTagChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "UnbindTensionTagChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerName.PlayerName_C.LoadCharacterInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::LoadCharacterInfo(class ASBPlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "LoadCharacterInfo");

	Params::PlayerName_C_LoadCharacterInfo Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetTensionIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::SetTensionIcon(class ASBPlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetTensionIcon");

	Params::PlayerName_C_SetTensionIcon Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.OnChangeTensionTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTensionTagType                       TensionTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::OnChangeTensionTag(const ESBTensionTagType TensionTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "OnChangeTensionTag");

	Params::PlayerName_C_OnChangeTensionTag Parms{};

	Parms.TensionTag = TensionTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerName_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerName.PlayerName_C.ClassChangeLevelUpdate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerName_C::ClassChangeLevelUpdate(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "ClassChangeLevelUpdate");

	Params::PlayerName_C_ClassChangeLevelUpdate Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.LevelUpLevelUpdate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InPrevLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCurLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExtraExpParse                 InExtraExpParse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerName_C::LevelUpLevelUpdate(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "LevelUpLevelUpdate");

	Params::PlayerName_C_LevelUpLevelUpdate Parms{};

	Parms.InPrevLevel = InPrevLevel;
	Parms.InCurLevel = InCurLevel;
	Parms.InExtraExpParse = std::move(InExtraExpParse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerName_C::SetPlayerName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetPlayerName");

	Params::PlayerName_C_SetPlayerName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetBgVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerName_C::SetBgVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetBgVisibility");

	Params::PlayerName_C_SetBgVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetPlayerNameVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerName_C::SetPlayerNameVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetPlayerNameVisibility");

	Params::PlayerName_C_SetPlayerNameVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetAchievementName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerName_C::SetAchievementName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetAchievementName");

	Params::PlayerName_C_SetAchievementName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetAchievementNameVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerName_C::SetAchievementNameVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetAchievementNameVisibility");

	Params::PlayerName_C_SetAchievementNameVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.SetClassData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::SetClassData(ESBClassType ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "SetClassData");

	Params::PlayerName_C_SetClassData Parms{};

	Parms.ClassType = ClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.UpdateLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerName_C::UpdateLevelText(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "UpdateLevelText");

	Params::PlayerName_C_UpdateLevelText Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerName.PlayerName_C.UpdateAutoDeliveryQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerName_C::UpdateAutoDeliveryQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "UpdateAutoDeliveryQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerName.PlayerName_C.UpdatePartyLeaderIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerName_C::UpdatePartyLeaderIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerName_C", "UpdatePartyLeaderIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}

