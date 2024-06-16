#pragma once

 

// Package: BP_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0068 (0x17F8 - 0x1790)
class ABP_PlayerController_C final : public ASBPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PerformanceCheckComponent_C*        BP_PerformanceCheckComponent;                      // 0x1798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SBPhotoModeComponent_C*             BP_SBPhotoModeComponent;                           // 0x17A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerLevelStartSequenceComponent_C* BP_PlayerLevelStartSequenceComponent;              // 0x17A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerAdminComponent_C*             BP_PlayerAdminComponent;                           // 0x17B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerUIComponent_C*                BP_PlayerUIComponent;                              // 0x17B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            DebugTopMenu;                                      // 0x17C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CameraMove;                                        // 0x17C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeyboardON;                                        // 0x17D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E0[0x7];                                     // 0x17D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                DebugLevelDesignTopMenu;                           // 0x17D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DebugWaveSettingFileName;                          // 0x17E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         KeyPressTimeForMiniMap;                            // 0x17F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsKeyPressForMiniMap;                             // 0x17F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOpenEditMap;                                    // 0x17F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerController(int32 EntryPoint);
	void OnPressedShortcutRingExecuteF12();
	void OnPressedShortcutRingExecuteF11();
	void OnPressedShortcutRingExecuteF10();
	void OnPressedShortcutRingExecuteF09();
	void OnPressedShortcutRingExecuteF08();
	void OnPressedShortcutRingExecuteF07();
	void OnPressedShortcutRingExecuteF06();
	void OnPressedShortcutRingExecuteF05();
	void OnShortcutRightRepeat();
	void OnShortcutRightPressed();
	void OnShortcutLeftRepeat();
	void OnShortcutLeftPressed();
	void OnShortcutExecPressed();
	void OnPressedQuestHUDChange();
	void BindDbgCmdOpenCmdMenu();
	void DebugCmd_OpenCmdMenu(class UObject* Sender, class UObject* Param);
	void RepeadTimerMiniMap();
	void OnReleasedMiniMap();
	void OnPressedMiniMap();
	void PlayerTeleportWithDelay(class ASBPlayerCharacter* PlayerCharacter);
	void OnReleasedShortcutRing_Normal_Pad();
	void OnPressedShortcutRing_Normal_Pad();
	void OnReleasedShortcutRing_Normal_Keyboard();
	void OnPressedShortcutRing_Normal_Keyboard();
	void OnChatWindowClose();
	void OnPressDebugLevelDesignMenu();
	void Replicate_Interaction_SW_Event(class ASBInteractionSwBase* InteractionTarget, class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void OnPressChatWindow();
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void OnEndMessage_Event_0();
	void OnChangedSessionOwner(class ASBPlayerState* NewOwnerPlayer);
	void OnPressDebugMenu();
	void ReceiveBeginPlay();
	void ShowMatchingMenuForBP(class FName InitDungeonId, bool bInteract);
	void ShowMatchingMenu(const class FName& InitDungeonId, bool bInteract);
	void CustomEvent(class UUMG_MatchingMenu_C* Sender);
	void OnAchievementGainedDelegate_____(const TArray<int32>& GainedAchievementIdList);
	void InitAchievementDelegate();
	void OnReleased_NowPartyPadReleased();
	void OnReleased_NowPartyKbReleased();
	void OnPressed_NowPartyPad();
	void OnPressed_NowPartyKb();
	void OnAdventurerRankUpdate(const int32 InRetCode, ESBPlayerPassiveImagineSlotType Slot);
	void InitAdventurerRank();
	void SetDebugMenu(class UDebugMenu_C* DebugMenu);
	void SetCharacterCardInMissionShowHideKeyPress();
	void IsStartCursorMode(bool* Start);
	void InteractionStateCheck(bool* IsInteraction);
	void AddMainMenu(ESBCommandMenuType TopMenu, const class FString& BookmarkType, class FName ParamName);
	void QuickAccessMenu(const ESBCommandMenuType InCommandMenuType, const class FString& BookmarkType, class FName ParamName);
	void OpenMyCharacterMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenOptionMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenRmShopMenu();
	void CloseRmShopMenu();
	void OpenEventMenu();
	void OpenInventoryMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenLibraryMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenPartyMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenQuestMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenMapMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenSeasonPassMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenCommunicate(const class FString& BookmarkType, class FName ParamName);
	void OpenGuildMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenLetterMenu(const class FString& BookmarkType, class FName ParamName);
	void OpenContentsMenu(const class FString& BookmarkType, class FName ParamName);
	void WarpPointAccess();
	void OnPressMainMenu();
	void OnPressed_BookMark1();
	void OnPressed_BookMark2();
	void OnPressed_BookMark3();
	void OnPressed_BookMark4();
	void OnPressed_BookMark5();
	void OnPressed_BookMark6();
	void OnPressed_BookMark7();
	void OnPressed_BookMark8();
	void OnPressed_BookMark9();
	void OnPressed_BookMark10();
	void OnPressed_BookMark11();
	void OnPressed_BookMark12();
	void OnPressed_BookMark13();
	void OnPressed_BookMark14();
	void OnPressed_BookMark15();
	void OnPressed_BookMark16();
	void OnPressed_BookMark17();
	void OnPressed_BookMark18();
	void OnPressed_BookMark19();
	void OnPressed_BookMark20();
	void OnPressed_BookMark21();
	void OnPressed_BookMark22();
	void OnPressed_BookMark23();
	void OnPressed_BookMark24();
	void ShowCommandMenu(const ESBCommandMenuType& InType, const class FString& BookmarkType, const class FName ParamName);
	void OpenBookmarkSelector(ESBBookMarkerSlot Slot);
	void OnPressed_QuickAccess_MyCharacter();
	void OnPressed_QuickAccess_Option();
	void OnPressed_QuickAccess_Inventory();
	void OnPressed_QuickAccess_Library();
	void OnPressed_QuickAccess_Party();
	void OnPressed_QuickAccess_Quest();
	void OnPressed_QuickAccess_Map();
	void OnPressed_QuickAccess_Contents();
	void OnPressed_QuickAccess_Communicate();
	void OnPressed_QuickAccess_Guild();
	void OnPressed_QuickAccess_SeasonPass();
	void OnPressed_QuickAccess_Mail();
	void OnPressed_QuickAccess_RmShop();
	void Try_DirectOpen_Theater();
	void OnPressed_QuickAccess_Quest_AdventureBoard();
	void OnPressed_QuickAccess_Communicate_Friend();
	void OnPressed_QuickAccess_MyCharacter_SkillBoard();
	void OnPressed_QuickAccess_MyCharacter_Costume();
	void OnPressed_QuickAccess_MyCharacter_Effect();
	void OnPressed_QuickAccess_MyCharacter_AdventureRank();
	void OnPressed_QuickAccess_Inventory_Depository();
	void OnPressed_QuickAccess_Inventory_LiquidMemory();
	void OnPressed_QuickAccess_Inventory_Wallet();
	void OnPressed_QuickAccess_Quest_Network();
	void OnPressed_QuickAccess_Quest_WishList();
	void OnPressed_QuickAccess_Communicate_Album();
	void OnPressed_QuickAccess_Communicate_CharacterSearch();
	void OnPressed_QuickAccess_Communicate_Talk();
	void OnPressed_QuickAccess_Library_PictureBook();
	void OnPressed_QuickAccess_Library_Achievement();
	void OnPressed_QuickAccess_Library_LoginBonus();
	void OnPressed_QuickAccess_Library_Movie();
	void OnPressed_QuickAccess_Party_OfferList();
	void OnPressed_QuickAccess_Guild_Card();
	void OnPressed_QuickAccess_Guild_Member();
	void OnPressed_QuickAccess_Guild_Log();
	void OnPressed_QuickAccess_Guild_Rank();
	void OnPressed_QuickAccess_Event();

	bool IsOpenDebugMenu() const;
	void IsSimpleMode(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_C">();
	}
	static class ABP_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_C>();
	}
};
static_assert(alignof(ABP_PlayerController_C) == 0x000008, "Wrong alignment on ABP_PlayerController_C");
static_assert(sizeof(ABP_PlayerController_C) == 0x0017F8, "Wrong size on ABP_PlayerController_C");
static_assert(offsetof(ABP_PlayerController_C, UberGraphFrame) == 0x001790, "Member 'ABP_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, BP_PerformanceCheckComponent) == 0x001798, "Member 'ABP_PlayerController_C::BP_PerformanceCheckComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, BP_SBPhotoModeComponent) == 0x0017A0, "Member 'ABP_PlayerController_C::BP_SBPhotoModeComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, BP_PlayerLevelStartSequenceComponent) == 0x0017A8, "Member 'ABP_PlayerController_C::BP_PlayerLevelStartSequenceComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, BP_PlayerAdminComponent) == 0x0017B0, "Member 'ABP_PlayerController_C::BP_PlayerAdminComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, BP_PlayerUIComponent) == 0x0017B8, "Member 'ABP_PlayerController_C::BP_PlayerUIComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, DebugTopMenu) == 0x0017C0, "Member 'ABP_PlayerController_C::DebugTopMenu' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, CameraMove) == 0x0017C8, "Member 'ABP_PlayerController_C::CameraMove' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, KeyboardON) == 0x0017D0, "Member 'ABP_PlayerController_C::KeyboardON' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, DebugLevelDesignTopMenu) == 0x0017D8, "Member 'ABP_PlayerController_C::DebugLevelDesignTopMenu' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, DebugWaveSettingFileName) == 0x0017E0, "Member 'ABP_PlayerController_C::DebugWaveSettingFileName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, KeyPressTimeForMiniMap) == 0x0017F0, "Member 'ABP_PlayerController_C::KeyPressTimeForMiniMap' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, bIsKeyPressForMiniMap) == 0x0017F4, "Member 'ABP_PlayerController_C::bIsKeyPressForMiniMap' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_C, bIsOpenEditMap) == 0x0017F5, "Member 'ABP_PlayerController_C::bIsOpenEditMap' has a wrong offset!");

}

