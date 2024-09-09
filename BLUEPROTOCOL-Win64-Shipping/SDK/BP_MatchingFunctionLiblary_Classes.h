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
	 * BlueprintGeneratedClass BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_MatchingFunctionLiblary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsPartyClass(TArray<ESBClassType>* InClass, class UObject* __WorldContext, bool* Ret);
		void IsRecruitParty(class UObject* __WorldContext, bool* IsEnable);
		void IsEnableDungeonMemberNum(int32_t MaxMember, class UObject* __WorldContext, bool* IsEnable);
		void IsEnableDungeonMatching(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable);
		void IsEnableDungeonStart(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable);
		void GetPartyMinTotalPower(class UObject* __WorldContext, int32_t* Result);
		void GetPartyMinLevel(class UObject* __WorldContext, int32_t* NewParam);
		void OnCancelMatchmaking(class USBMatchingMenu* MatchingMenu, class UObject* __WorldContext, bool* Result);
		void OnStartMatchmaking(class USBMatchingMenu* MatchingMenu, TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit, bool Backfill, class UObject* __WorldContext, bool* Result);
		void IsMaxParty(int32_t MaxMember, class UObject* __WorldContext, bool* Ret);
		void IsSendingParty(class UObject* __WorldContext, bool* Ret);
		bool IsPartyLeader(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
