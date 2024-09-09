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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C
	 * Size -> 0x0E40 (FullSize[0x10B8] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnAlertIcon_C*                                     AlertIcon;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleScoreInfo_C*                                  BattleScoreInfo;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BlankIconBtn;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnForPadCursorMove;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconEmpty;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULevelInfo1ForBattleSet_C*                           ImagineLevel;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemIconBtn_C*                                      ItemIconBtn;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher01;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForImagineIcon;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESBPlayerPassiveImagineSlotType                            ImagineSlotType;                                         // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_7QST[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        ImagineOwnItemInfo;                                      // 0x02E8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsButtonOff;                                            // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KP10[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        BtnStyle1;                                               // 0x0440(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnStyle2;                                               // 0x06B8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnStyle3;                                               // 0x0930(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnStyle4;                                               // 0x0BA8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnStyle5;                                               // 0x0E20(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		ESBClassType                                               ClassType;                                               // 0x1098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForceLevelSyncOff;                                      // 0x1099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDhcBattleTopMenuMode;                                 // 0x109A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NP4Y[0x5];                                   // 0x109B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CachedToolTipWidget;                                     // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBtnForPadCursorMoveVisible;                           // 0x10A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FEB2[0x3];                                   // 0x10A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackBMax;                                               // 0x10AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBattleScoreInfoSwitcher_C*                          ScoreInfoSwitcher;                                       // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher);
		void SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
		void SetIconTooltipEnable(bool InIsEnable);
		void CreateTooltipForBtnPadCursorMoveDhcBattle(bool InNoTooltip, int32_t InClassLevel, const struct FSBDhcBattlePlayerEquipImagineInfo& InPassiveImagineInfo);
		void CreateTooltipForBtnPadCursorMove(bool InNoTooltip, const struct FOwnItemInfo& InOwnItemInfo);
		void SetBtnForPadCursorMoveVisible(bool InIsVisible);
		void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
		void SetForceLevelSyncOff(bool bInForceLevelSyncOff);
		void SetPassiveImagineBlankIconStyle(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType);
		void SetAlertIconVisibility(bool InIsVisible);
		void SetButtonOff();
		void SetIconEmpty(bool InIsEmpty);
		void SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
		void GetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType* OutSlotType);
		void SetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType InSlotType);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
		void BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet(int32_t EntryPoint);
		void OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
