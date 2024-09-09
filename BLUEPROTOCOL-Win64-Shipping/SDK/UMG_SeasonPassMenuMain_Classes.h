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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C
	 * Size -> 0x0148 (FullSize[0x03C0] - InheritedSize[0x0278])
	 */
	class UUMG_SeasonPassMenuMain_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     SeasonPassWidget_Swicher;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   TabMenu;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassMenuGeneral_v106_C*                   UMG_SeasonPassMenuGeneral_v106;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassMenuReward_v106_C*                    UMG_SeasonPassMenuReward_v106;                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestMenu_C*                          UMG_SeasonPassQuestMenu;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickUpgrade;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickRewardItemIcon;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickRankUp;                                           // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickPointShop;                                        // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickBuyRankUp;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickQuest;                                            // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBPlayerSeasonPassComponent*                        comp;                                                    // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSeasonPassProgressValid;                               // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLC3[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickSeasonPassRewardAll;                              // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TabSelect;                                               // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y717[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    AutoDeliveryQuestRetCode;                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoDeliveryQuestListUpdate;                             // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LJZX[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        QuestLoadWaitUIBlocker;                                  // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, int32_t>                               PageMap;                                                 // 0x0350(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnChangeBookmarkType;                                    // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCheckAutoRankup;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateSubMenuExcramationIcon();
		void UpdateBookmarkButton();
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void InitializeOpenMenuType(const class FString& InputPin, bool bInit);
		void SetTab(int32_t InSelect, bool bInit, bool bChangeTab);
		void SwitchOut();
		void TermRequesTiming();
		void SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName);
		void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType);
		void BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32_t ButtonId);
		void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
		void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature();
		void SetData(class USBSeasonPassMenuRewardData* RewardData);
		void UpdateDesign();
		void UpdateDesignAndData();
		void OnUpdateData();
		void SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName);
		void UpdateBookmarkStatusButton();
		void BookmarkUpdateRequest();
		void Construct();
		void TabChangeInit();
		void AutoDeliveryQuestLoad(int32_t ReturnCode);
		void SubMenuUpdateEvent(class UObject* Sender, class UObject* Param);
		void Destruct();
		void OnInAnimationFinished();
		void ExecuteUbergraph_UMG_SeasonPassMenuMain(int32_t EntryPoint);
		void OnCheckAutoRankup__DelegateSignature(bool bDoCheck);
		void OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType);
		void OnClickSeasonPassRewardAll__DelegateSignature();
		void OnClickQuest__DelegateSignature();
		void OnClickBuyRankUp__DelegateSignature();
		void OnClickPointShop__DelegateSignature();
		void OnClickRankUp__DelegateSignature();
		void OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
		void OnClickUpgrade__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
