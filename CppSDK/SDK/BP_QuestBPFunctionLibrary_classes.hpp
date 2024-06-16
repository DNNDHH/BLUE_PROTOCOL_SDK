#pragma once

 

// Package: BP_QuestBPFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_QuestBPFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetQuestCategory2(int32 QuestIndex, class UObject* __WorldContext, EQuestCategory2* Category2);
	static struct FSBMasterReward FindRewardMasterData(class FName InRewardId, class UObject* __WorldContext, bool* IsExist);
	static void IsQuestMultipleCompletable(int32 InQuestIndex, class UObject* __WorldContext, bool* bRet);
	static void GetQuestDisplayStatus(int32 InQuestIndex, class UObject* __WorldContext, EQuestStatus* OutQuestStatus);
	static void GetAcceptableQuestNum(class UObject* __WorldContext, int32* Num);

	static void GetQuestStatus(int32 QuestIndex, class UObject* __WorldContext, EQuestStatus* QuestStatus);
	static void FindQuestMasterData(int32 QuestIndex, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* Exist);
	static void FindAcceptedQuestData(int32 QuestIndex, class UObject* __WorldContext, struct FAcceptedQuestInfo* AcceptedQuestInfo, bool* Exist);
	static void FindQuestMasterDataByLongId(class FName InLongId, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* bExist);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestBPFunctionLibrary_C">();
	}
	static class UBP_QuestBPFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestBPFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_QuestBPFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_QuestBPFunctionLibrary_C");
static_assert(sizeof(UBP_QuestBPFunctionLibrary_C) == 0x000028, "Wrong size on UBP_QuestBPFunctionLibrary_C");

}

