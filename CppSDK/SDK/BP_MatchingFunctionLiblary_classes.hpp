#pragma once

 

// Package: BP_MatchingFunctionLiblary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MatchingFunctionLiblary_C final : public UBlueprintFunctionLibrary
{
public:
	static bool IsPartyLeader(class UObject* __WorldContext);
	static void IsSendingParty(class UObject* __WorldContext, bool* Ret);
	static void IsMaxParty(int32 MaxMember, class UObject* __WorldContext, bool* Ret);
	static void OnStartMatchmaking(class USBMatchingMenu* MatchingMenu, TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit, bool Backfill, class UObject* __WorldContext, bool* Result);
	static void OnCancelMatchmaking(class USBMatchingMenu* MatchingMenu, class UObject* __WorldContext, bool* Result);
	static void GetPartyMinLevel(class UObject* __WorldContext, int32* NewParam);
	static void GetPartyMinTotalPower(class UObject* __WorldContext, int32* Result);
	static void IsEnableDungeonStart(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable);
	static void IsEnableDungeonMatching(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable);
	static void IsEnableDungeonMemberNum(int32 MaxMember, class UObject* __WorldContext, bool* IsEnable);
	static void IsRecruitParty(class UObject* __WorldContext, bool* IsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MatchingFunctionLiblary_C">();
	}
	static class UBP_MatchingFunctionLiblary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MatchingFunctionLiblary_C>();
	}
};
static_assert(alignof(UBP_MatchingFunctionLiblary_C) == 0x000008, "Wrong alignment on UBP_MatchingFunctionLiblary_C");
static_assert(sizeof(UBP_MatchingFunctionLiblary_C) == 0x000028, "Wrong size on UBP_MatchingFunctionLiblary_C");

}

