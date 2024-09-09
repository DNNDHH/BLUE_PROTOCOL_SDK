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
	 * WidgetBlueprintGeneratedClass PartyMemberInfo.PartyMemberInfo_C
	 * Size -> 0x0030 (FullSize[0x0368] - InheritedSize[0x0338])
	 */
	class UPartyMemberInfo_C : public USBPartyMemberNormalWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_Member;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBuffPartyMemberList_C*                              BufList_3;                                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconLeader;                                              // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwichParty;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchFollow;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ResetBuffIcon();
		void OnSetBufIcon();
		void GetBattleStatusComponent(class USBBattleStatusComponent** OutBattleStatus);
		void UpdatePartyIcon();
		void UpdateFollowIcon(TArray<struct FPlayerProfileSummaryData> InFriendList);
		void SetHPMPGaugeVisibility(bool IsVisible);
		void Construct();
		void Destruct();
		void CustomEvent_3(TArray<struct FPlayerProfileSummaryData> PlayerProfileSummaryData);
		void OnChangeSameMap(bool InSameMap);
		void ExecuteUbergraph_PartyMemberInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
