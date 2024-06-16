#pragma once

 

// Package: OnlineStatusTag

#include "Basic.hpp"

#include "OnlineStatusTag_classes.hpp"
#include "OnlineStatusTag_parameters.hpp"


namespace SDK
{

// Function OnlineStatusTag.OnlineStatusTag_C.ExecuteUbergraph_OnlineStatusTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnlineStatusTag_C::ExecuteUbergraph_OnlineStatusTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "ExecuteUbergraph_OnlineStatusTag");

	Params::OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.ErrorDataSet
// (BlueprintCallable, BlueprintEvent)

void UOnlineStatusTag_C::ErrorDataSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "ErrorDataSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnlineStatusTag.OnlineStatusTag_C.SetForPlayerProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bMySelf                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ZoneId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::SetForPlayerProfile(bool bInActive, bool bMySelf, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "SetForPlayerProfile");

	Params::OnlineStatusTag_C_SetForPlayerProfile Parms{};

	Parms.bInActive = bInActive;
	Parms.bMySelf = bMySelf;
	Parms.LocationName = std::move(LocationName);
	Parms.ZoneId = std::move(ZoneId);
	Parms.ContentId = std::move(ContentId);
	Parms.PlatformInfo = std::move(PlatformInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.SetLocationInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ZoneId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::SetLocationInfo(bool bActive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "SetLocationInfo");

	Params::OnlineStatusTag_C_SetLocationInfo Parms{};

	Parms.bActive = bActive;
	Parms.LocationName = std::move(LocationName);
	Parms.ZoneId = std::move(ZoneId);
	Parms.ContentId = std::move(ContentId);
	Parms.PlatformInfo = std::move(PlatformInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.SetLoginMapInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   PlayerPannelMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        PlayerProfileSummaryData                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuildMemberData                 GuildMemberData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::SetLoginMapInfo(EPlayerPannelTypeEnum PlayerPannelMode, const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, const struct FGuildMemberData& GuildMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "SetLoginMapInfo");

	Params::OnlineStatusTag_C_SetLoginMapInfo Parms{};

	Parms.PlayerPannelMode = PlayerPannelMode;
	Parms.PlayerProfileSummaryData = std::move(PlayerProfileSummaryData);
	Parms.GuildMemberData = std::move(GuildMemberData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnlineStatusTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "PreConstruct");

	Params::OnlineStatusTag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.Init Login Map Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPlatformInfo                  InPlatformInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOnlyIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InLastLogin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOnlineStatusTag_C::Init_Login_Map_Info(int32 InStatus, const struct FSBPlatformInfo& InPlatformInfo, bool bOnlyIcon, const class FString& InLastLogin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "Init Login Map Info");

	Params::OnlineStatusTag_C_Init_Login_Map_Info Parms{};

	Parms.InStatus = InStatus;
	Parms.InPlatformInfo = std::move(InPlatformInfo);
	Parms.bOnlyIcon = bOnlyIcon;
	Parms.InLastLogin = std::move(InLastLogin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitPartyMemberMapInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileSummaryData        PlayerProfileSummaryData                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::InitPartyMemberMapInfo(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitPartyMemberMapInfo");

	Params::OnlineStatusTag_C_InitPartyMemberMapInfo Parms{};

	Parms.PlayerProfileSummaryData = std::move(PlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitCommunicateMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileSummaryData        PlayerProfileSummaryData                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOnlyIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnlineStatusTag_C::InitCommunicateMode(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, bool bOnlyIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitCommunicateMode");

	Params::OnlineStatusTag_C_InitCommunicateMode Parms{};

	Parms.PlayerProfileSummaryData = std::move(PlayerProfileSummaryData);
	Parms.bOnlyIcon = bOnlyIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitOnlineInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIconOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsOnline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnlineStatusTag_C::InitOnlineInfo(const struct FSBPlatformInfo& PlatformInfo, bool bIconOnly, bool bIsOnline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitOnlineInfo");

	Params::OnlineStatusTag_C_InitOnlineInfo Parms{};

	Parms.PlatformInfo = std::move(PlatformInfo);
	Parms.bIconOnly = bIconOnly;
	Parms.bIsOnline = bIsOnline;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitGuildMemberStatusInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 InGuildMemberData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::InitGuildMemberStatusInfo(const struct FGuildMemberData& InGuildMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitGuildMemberStatusInfo");

	Params::OnlineStatusTag_C_InitGuildMemberStatusInfo Parms{};

	Parms.InGuildMemberData = std::move(InGuildMemberData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitPlatformInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOnlyIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnlineStatusTag_C::InitPlatformInfo(const struct FSBPlatformInfo& PlatformInfo, bool bOnlyIcon, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitPlatformInfo");

	Params::OnlineStatusTag_C_InitPlatformInfo Parms{};

	Parms.PlatformInfo = std::move(PlatformInfo);
	Parms.bOnlyIcon = bOnlyIcon;
	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitPlayerProfileMode
// (Public, BlueprintCallable, BlueprintEvent)

void UOnlineStatusTag_C::InitPlayerProfileMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitPlayerProfileMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnlineStatusTag.OnlineStatusTag_C.InitForPlayerProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bMySelf                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UOnlineStatusTag_C::InitForPlayerProfile(bool bInActive, bool bMySelf, const struct FSBPlatformInfo& PlatformInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "InitForPlayerProfile");

	Params::OnlineStatusTag_C_InitForPlayerProfile Parms{};

	Parms.bInActive = bInActive;
	Parms.bMySelf = bMySelf;
	Parms.PlatformInfo = std::move(PlatformInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnlineStatusTag.OnlineStatusTag_C.Show Loguin Status Text
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InOnlineStatus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             OutStatusText                                          (Parm, OutParm)
// struct FSlateColor                      OutTextColor                                           (Parm, OutParm)

void UOnlineStatusTag_C::Show_Loguin_Status_Text(int32 InOnlineStatus, const class FString& InDateTime, class FText* OutStatusText, struct FSlateColor* OutTextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "Show Loguin Status Text");

	Params::OnlineStatusTag_C_Show_Loguin_Status_Text Parms{};

	Parms.InOnlineStatus = InOnlineStatus;
	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);

	if (OutStatusText != nullptr)
		*OutStatusText = std::move(Parms.OutStatusText);

	if (OutTextColor != nullptr)
		*OutTextColor = std::move(Parms.OutTextColor);
}


// Function OnlineStatusTag.OnlineStatusTag_C.OnGetGamerTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GamerTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOnlineStatusTag_C::OnGetGamerTag(const class FString& GamerTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineStatusTag_C", "OnGetGamerTag");

	Params::OnlineStatusTag_C_OnGetGamerTag Parms{};

	Parms.GamerTag = std::move(GamerTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

