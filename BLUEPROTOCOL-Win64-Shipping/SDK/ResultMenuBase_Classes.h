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
	 * WidgetBlueprintGeneratedClass ResultMenuBase.ResultMenuBase_C
	 * Size -> 0x002A (FullSize[0x0322] - InheritedSize[0x02F8])
	 */
	class UResultMenuBase_C : public USBResultBaseWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsEndAnimInPanel_;                                       // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEndAnimInFooter_;                                      // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsKeyDownShortcutRing_;                                  // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsKeyReleaseShortcutRing_;                               // 0x0303(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsKeyDownGamepadFaceButtonRight_;                        // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F5JR[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                GamepadFaceButtonRight_;                                 // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsEndPendingReward_;                                     // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEndUseTokenTreasureBoxDrawItems_;                      // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OpenDialogTokenTreasureBoxDrawItems();
		void HasTokenTreasureBoxDrawItems(bool* HasItems);
		void GetDialogDropTreasureTicketReward(class UResultDialog_DropTreasureTicketReward_C** OutDialog);
		class USBResultFooter* GetFooter();
		class USBResultPanelBaseWidget* GetResultWidget();
		class USBResultKeyGuide* GetResultKeyGuide();
		class USBShortcutRingWidget* GetResultShortcutRing();
		void OpenDialogLetter();
		void SetVisibleMouseCursor(bool IsVisible);
		void ExecuteMenu();
		void ExecuteShortcutRing();
		void OnEnd();
		void OnTerminate();
		void OnInitialize();
		void IsKeyDownJust(const struct FKey& Key, bool* Result);
		void IsSimpleMode(bool* Result);
		void IsKeyDownAll(TArray<struct FKey>* InKeyList, bool* Result);
		void GetDialogAbility(class UDialog_TacticalAbilityLearning_C** OutDialog);
		void GetDialogLetter(class UResultDialog_Letter_C** OutDialog);
		void GetScreenOverWidget(class UWidgetSwitcher** OutWidget);
		void SetActiveScreenOver(int32_t InIndex);
		void SetVisibleScreenOver(bool IsVisible);
		struct FKey GetKeyMenu();
		void isKeyDownMenu(bool* Result);
		void isKeyDownShortcutRing(bool* Result);
		void OpenDialogAbility();
		void OnInitializeKeyGuide();
		void DisableControl();
		void EnableControl();
		void OnEventKeyDown(const struct FKeyEvent& Event);
		void OnEventKeyUp(const struct FKeyEvent& Event);
		void CustomEvent_1();
		void BindShortcutRing(class USBShortcutRingWidget* InShortcutRing);
		void UnbindShortcutRing(class USBShortcutRingWidget* InShortcutRing);
		void EventTelopStart();
		void EventTelopWait();
		void EventOpen();
		void EventEndOpenResultPanel();
		void EventEndAnimInResultFooter();
		void EventOpenEnd();
		void EventEndAnimOutDialogAbility();
		void EventClose();
		void EventEndCloseResultPanel();
		void EventEndAnimOutDialogLetter();
		void EventEndAnimOutResultFooter();
		void EventCloseEnd();
		void EventEndPendingReward();
		void EventEndUseTokenTreasureBoxDrawItems();
		void EventEndAnimOutDialogTokenTreasureTickerDrawItems();
		void ExecuteUbergraph_ResultMenuBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
