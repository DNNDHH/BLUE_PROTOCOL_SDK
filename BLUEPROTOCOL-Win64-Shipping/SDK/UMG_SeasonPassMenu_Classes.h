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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassMenu.UMG_SeasonPassMenu_C
	 * Size -> 0x00D0 (FullSize[0x0378] - InheritedSize[0x02A8])
	 */
	class UUMG_SeasonPassMenu_C : public USBSeasonPassMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPageIn;                                              // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      DebugButtons;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_169;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MenuCanvas;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PopupCanvas;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_BuyRankup;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_BuySeasonPass;                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_GetInfo;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_GetRaward;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Rankup;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Rankup_2;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassMenuInvalid_C*                        UMG_SeasonPassMenuInvalid;                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassMenuMain_C*                           UMG_SeasonPassMenuMain;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_4;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bCheckAutoRankup;                                        // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFinishAnimPagein;                                       // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LR5E[0x2];                                   // 0x0342(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OldRank;                                                 // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DebugValue;                                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6V4[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBSeasonPassMenuRewardData*                         RewardData;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_SeasonPassItemReceiveMenu_C*                    ItemReceiveMenu;                                         // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DebugText;                                               // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void OnCompletedAmoutOfMoney(int32_t InRetCode, int32_t InFreeMoney, int32_t InPaidMoney);
		void BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnCompleted(int32_t InRetCode);
		void RequestRankupApi(int32_t UpRank);
		void OnCompleteRankup(int32_t InRetCode);
		void RequestReceiveApi(class USBSeasonPassMenuRewardItemData* Data);
		void OnComplateReceive(int32_t InRetCode);
		void RequestAutoRankup();
		void RequestGetInfo();
		void ConfirmRequestRankupApi();
		void OnCompletedGetInfo(int32_t InRetCode);
		void RequestGetSeasonPassRewardAll();
		void OnGetSeasonPassRewardAllCompleted(int32_t InRetCode);
		void OnCloseRankupJingle();
		void OnClickedRankupDialogOk(int32_t UpRank);
		void BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
		void OnCloseReceiveMenu(class UUMG_SeasonPassItemReceiveMenu_C* Sender);
		void OnClieckItemReceive(class USBSeasonPassMenuRewardItemData* Data);
		void OnSuccessedReceiveApi();
		void BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature();
		void BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_0_OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType);
		void BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_9_OnCheckAutoRankup__DelegateSignature(bool bDoCheck);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void FinishAnimPagein();
		void CheckAutoRankup();
		void EnableInput(bool bEnable);
		void Init();
		void Destruct();
		void OnUpdateSeasonPassInfo(class UObject* Sender, class UObject* Param);
		void OnUpdateReceivedRewardInfo(class UObject* Sender, class UObject* Param);
		void BookmarkUpdateRequest();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void ExecuteUbergraph_UMG_SeasonPassMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
