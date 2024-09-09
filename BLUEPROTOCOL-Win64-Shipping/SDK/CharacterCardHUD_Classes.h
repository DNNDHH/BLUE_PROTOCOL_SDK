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
	 * WidgetBlueprintGeneratedClass CharacterCardHUD.CharacterCardHUD_C
	 * Size -> 0x005A (FullSize[0x02DA] - InheritedSize[0x0280])
	 */
	class UCharacterCardHUD_C : public USBCharacterCardHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OutAnim;                                                 // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HUDOnOffGrp;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    KeyTxt;                                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        ActionBindNameList;                                      // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsHUDVisible;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHUDShowOrHideExecuting;                               // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHUDOpening;                                           // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHUDClosing;                                           // 0x02C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsListenForInputAction;                                 // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHUDCloseRegistered;                                   // 0x02C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TBQB[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsSetMenuMode;                                          // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsDebugMode;                                            // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetMenuMode();
		void SetMenuMode();
		void GetIsAdventurerCardOpened(bool* bOutIsOpened);
		void ExecShowOrHideHUD();
		void HideHUD();
		void ShowHUD();
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature();
		void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2();
		void OnInitialize(TArray<class FString> InPartyMemberCharacterIds);
		void ForceAdventurerCardClose();
		void OnCloseHUD();
		void OnCloseCharacterCard(bool InResetMenuModeOnly);
		void InitializeForDebug();
		void OnCloseCharacterCardForDebug();
		void OnIsNewMemberFoundInParty();
		void OnCharacterCardShowHideKeyPressed();
		void ExecuteUbergraph_CharacterCardHUD(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
