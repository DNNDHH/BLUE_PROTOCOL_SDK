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
	 * WidgetBlueprintGeneratedClass UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C
	 * Size -> 0x0022 (FullSize[0x029A] - InheritedSize[0x0278])
	 */
	class UUMG_PartyMemberList_UnionList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Line1;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MemberList;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPartyMemberList_ContentsLabel_C*                    PartyTypeLabel;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bPartyTypeLabelEnable;                                   // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_PartyListPartyType                                       PartyType;                                               // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPartyType(E_PartyListPartyType* PartyType);
		void SetPartyTypeLabelEnable(bool bInEnable);
		void SetPartyTypeLabel(E_PartyListPartyType InPartyType);
		void ClearMember();
		void AddMember(class UUserWidget* InMemberWidget);
		void CreateMember(class USBPartyMemberState* PartyMemberState, bool bShowBattleStatus);
		void Construct();
		void ExecuteUbergraph_UMG_PartyMemberList_UnionList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
