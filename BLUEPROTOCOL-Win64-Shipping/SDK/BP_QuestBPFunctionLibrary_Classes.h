#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_QuestBPFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetAcceptableQuestNum(class UObject* __WorldContext, int32_t* Num);
		void GetQuestDisplayStatus(int32_t InQuestIndex, class UObject* __WorldContext, EQuestStatus* OutQuestStatus);
		void IsQuestMultipleCompletable(int32_t InQuestIndex, class UObject* __WorldContext, bool* bRet);
		struct FSBMasterReward FindRewardMasterData(const class FName& InRewardId, class UObject* __WorldContext, bool* IsExist);
		void GetQuestCategory2(int32_t QuestIndex, class UObject* __WorldContext, EQuestCategory2* Category2);
		void FindQuestMasterDataByLongId(const class FName& InLongId, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* bExist);
		void FindAcceptedQuestData(int32_t QuestIndex, class UObject* __WorldContext, struct FAcceptedQuestInfo* AcceptedQuestInfo, bool* Exist);
		void FindQuestMasterData(int32_t QuestIndex, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* Exist);
		void GetQuestStatus(int32_t QuestIndex, class UObject* __WorldContext, EQuestStatus* QuestStatus);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
