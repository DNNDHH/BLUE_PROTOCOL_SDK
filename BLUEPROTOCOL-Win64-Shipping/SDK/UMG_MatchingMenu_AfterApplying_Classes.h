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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C
	 * Size -> 0x07B0 (FullSize[0x0A28] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_AfterApplying_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimDetailHide;                                          // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimDetailShow;                                          // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             ButtonDetail;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanelOpacity;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropTreasureTicketInfo_C*                           DropTreasureTicketInfo;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MissionDetail_bg;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerPartyLevelInfo_C*                             PlayerPartyLevelInfo;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URewardPlusCountTicketInfo_C*                        RewardPlusCountTicketInfo;                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingImage_C*                                UMG_MatchingImage;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Confirm_C*                         UMG_MatchingMenu_Confirm;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Headder_C*                         UMG_MatchingMenu_Headder;                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_MissionDetail_C*                   UMG_MatchingMenu_MissionDetail;                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Term_C*                            UMG_MatchingMenu_Term;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Wait_C*                            UMG_MatchingMenu_Wait;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_85;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bCancel;                                                 // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCommandMenu;                                          // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bJustOut;                                                // 0x032A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDetailShow;                                             // 0x032B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           VisibilityTerm;                                          // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ASBZ[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickSupplyIcon;                                       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        ButtonDetailStyle1;                                      // 0x0340(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        ButtonDetailStyle2;                                      // 0x05B8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBMapInfo                                          HelpMapInfo;                                             // 0x0830(0x01F8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetRewardSearchName(int32_t ModeId, class FName* SearchName);
		void GetHelpMatchingRequiredInfo(int32_t ModeId, int32_t* BattleScore, int32_t* ClassLevel);
		void MakeHelpModeInfo(int32_t ModeId);
		void SetTerm(const class FName& EventTerm);
		void SetDungeonInfo(const class FName& GameContentId, int32_t HelpMatchingModeId);
		void SetCommandMenuMode();
		void SetHUDMode();
		void ConfirmOut();
		void WaitOut();
		void OutCancel();
		void OutClose();
		void Out();
		void ConfirmIn();
		void WaitIn();
		void Construct();
		void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void Destruct();
		void BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2();
		void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
		void ExecuteUbergraph_UMG_MatchingMenu_AfterApplying(int32_t EntryPoint);
		void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void OnCancel__DelegateSignature();
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
