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
	 * WidgetBlueprintGeneratedClass UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C
	 * Size -> 0x003C (FullSize[0x02B4] - InheritedSize[0x0278])
	 */
	class UUMG_PartyMemberList_Union_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUMG_PartyMemberList_UnionList_C*                    InstantMemberList1;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PartyMemberList_UnionList_C*                    InstantMemberList2;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PartyMemberList_UnionList_C*                    InstantMemberList3;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PartyMemberList_UnionList_C*                    PersistentMemberList;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUMG_PartyMemberList_UnionList_C*>            InstantMemberLists;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    LineCapacity;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPartyType(E_PartyListPartyType* PartyType);
		void ResetMemberListVisibility();
		void CreateMemberListWidget(class UUMG_PartyMemberList_UnionList_C* OutMemberListWidget, TArray<class USBPartyMemberState*>* InMemberList, int32_t InStart, int32_t InLimitCount, int32_t* NextMemberIndex, class UUMG_PartyMemberList_UnionList_C** OutListWidget);
		void UpdateMemberList();
		void Construct();
		void ExecuteUbergraph_UMG_PartyMemberList_Union(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
