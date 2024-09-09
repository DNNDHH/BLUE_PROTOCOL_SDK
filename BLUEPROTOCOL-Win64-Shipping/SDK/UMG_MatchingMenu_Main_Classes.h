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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C
	 * Size -> 0x0278 (FullSize[0x04F0] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_Main_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UApplyButtonList_C*                                  ApplyButtonList;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_ContentInfo_C*                     ContentInfo;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropTreasureTicketInfo_C*                           DropTreasureTicketInfo;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerPartyLevelInfo_C*                             PlayerPartyLevelInfo;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URewardPlusCountTicketInfo_C*                        RewardPlusCountTicketInfo;                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStartMatchmaking;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsClosingMenu;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVisible;                                                // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SPKY[0x6];                                   // 0x02DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBMapInfo                                          DungeonInfo;                                             // 0x02E0(0x01F8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsUnlimit;                                               // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3BJQ[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickSupplyIcon;                                       // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RequestPreLoad(TArray<struct FSBMapInfo>* InDungeonMapInfos);
		void OutAnimation();
		void InAnimation();
		void CloseMenu();
		void Init(const class FName& InitDungeonId);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ShowNoLeaderAlert();
		void BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
		void DoMatching();
		void PartyRecruitCancel_YesNoDialog(EYesNoDialogResult Result);
		void OnCancelRecruit(bool bWasSuccessful, int32_t iRetCode);
		void PartyRecruitCancel();
		void BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature();
		void BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature();
		void BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void ExecuteUbergraph_UMG_MatchingMenu_Main(int32_t EntryPoint);
		void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void OnClose__DelegateSignature();
		void OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
