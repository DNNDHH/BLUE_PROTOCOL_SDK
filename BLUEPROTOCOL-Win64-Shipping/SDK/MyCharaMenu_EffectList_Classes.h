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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_EffectList.MyCharaMenu_EffectList_C
	 * Size -> 0x01D0 (FullSize[0x0480] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_EffectList_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimSubMenuIn;                                           // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             BorderCtrl;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            BtnAbility;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            BtnActive;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            BtnDrink;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            BtnPioneerAbility;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem3_C*                            BtnTickets;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               ButtonFullScreen_DetailedStatus;                         // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_DetailedStatus_C*                       DetailedStatus;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EffectDetailsList_C*                    EffectDetailsList;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EffectGrp1;                                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_LeftSideParameters_C*                   LeftSideParameters;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_LvSync_C*                               LevelSync;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_Ability_C*                              MyCharaMenu_Ability;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_ActiveEffects_C*                        MyCharaMenu_ActiveEffects;                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_Drink_C*                                MyCharaMenu_Drink;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_Other_C*                                MyCharaMenu_Other;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_PioneerAbility_C*                       MyCharaMenu_PioneerAbility;                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SBox_Effects;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxBtnAbility;                                       // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxBtnActive;                                        // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxBtnDrink;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxBtnPioneerAbility;                                // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxBtnTickets;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SubMenuGrp;                                              // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Effect;                                   // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              CurrEquipWeaponUniqueId;                                 // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeEquipWeaponProc;                                 // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAnimFinishedMyCharaOut;                                // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TickCheck;                                               // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VD0J[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSubMenuChanged;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAchievementChangeButtonClicked;                        // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAcquiredAchievementLoaded;                             // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectAchievementSaved;                                // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<ESBCharaEquipType, class FString>                     TypeString;                                              // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UCommandMenu_MenuItem3_C*                            SelectedBtn;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CorrectEquipedUIDs();
		void AnimMyCharaOut();
		void AddEffectItemToList(const class FText& InEffectNameText);
		void SetupEffectParameters();
		void Close();
		void EscDetailedStatus();
		void ClsoeDetailedStatus();
		void BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void Init();
		void Destruct();
		void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2();
		void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature(bool InResult);
		void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature(bool InResult);
		void BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
		void BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
		void BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature();
		void BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature();
		void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef);
		void BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
		void ExecuteUbergraph_MyCharaMenu_EffectList(int32_t EntryPoint);
		void OnSelectAchievementSaved__DelegateSignature(bool InResult);
		void OnAcquiredAchievementLoaded__DelegateSignature(bool InResult);
		void OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList);
		void OnSubMenuChanged__DelegateSignature(int32_t Index);
		void OnAnimFinishedMyCharaOut__DelegateSignature();
		void OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
