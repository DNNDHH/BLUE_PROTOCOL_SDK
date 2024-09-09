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
	 * BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
	 * Size -> 0x0066 (FullSize[0x180E] - InheritedSize[0x17A8])
	 */
	class ABP_PlayerController_C : public ASBPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x17A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PerformanceCheckComponent_C*                     BP_PerformanceCheckComponent;                            // 0x17B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SBPhotoModeComponent_C*                          BP_SBPhotoModeComponent;                                 // 0x17B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerLevelStartSequenceComponent_C*             BP_PlayerLevelStartSequenceComponent;                    // 0x17C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerAdminComponent_C*                          BP_PlayerAdminComponent;                                 // 0x17C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerUIComponent_C*                             BP_PlayerUIComponent;                                    // 0x17D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         DebugTopMenu;                                            // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CameraMove;                                              // 0x17E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KeyboardON;                                              // 0x17E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OCH2[0x7];                                   // 0x17E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DebugLevelDesignTopMenu[0x8];                            // 0x17F0(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class FString                                              DebugWaveSettingFileName;                                // 0x17F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      KeyPressTimeForMiniMap;                                  // 0x1808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsKeyPressForMiniMap;                                   // 0x180C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpenEditMap;                                          // 0x180D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnPressed_QuickAccess_Event();
		void OnPressed_QuickAccess_Guild_Rank();
		void OnPressed_QuickAccess_Guild_Log();
		void OnPressed_QuickAccess_Guild_Member();
		void OnPressed_QuickAccess_Guild_Card();
		void OnPressed_QuickAccess_Party_OfferList();
		void OnPressed_QuickAccess_Library_Movie();
		void OnPressed_QuickAccess_Library_LoginBonus();
		void OnPressed_QuickAccess_Library_Achievement();
		void OnPressed_QuickAccess_Library_PictureBook();
		void OnPressed_QuickAccess_Communicate_Talk();
		void OnPressed_QuickAccess_Communicate_CharacterSearch();
		void OnPressed_QuickAccess_Communicate_Album();
		void OnPressed_QuickAccess_Quest_WishList();
		void OnPressed_QuickAccess_Quest_Network();
		void OnPressed_QuickAccess_Inventory_Wallet();
		void OnPressed_QuickAccess_Inventory_LiquidMemory();
		void OnPressed_QuickAccess_Inventory_Depository();
		void OnPressed_QuickAccess_MyCharacter_AdventureRank();
		void OnPressed_QuickAccess_MyCharacter_Effect();
		void OnPressed_QuickAccess_MyCharacter_Costume();
		void OnPressed_QuickAccess_MyCharacter_SkillBoard();
		void OnPressed_QuickAccess_Communicate_Friend();
		void OnPressed_QuickAccess_Quest_AdventureBoard();
		void Try_DirectOpen_Theater();
		void OnPressed_QuickAccess_RmShop();
		void OnPressed_QuickAccess_Mail();
		void OnPressed_QuickAccess_SeasonPass();
		void OnPressed_QuickAccess_Guild();
		void OnPressed_QuickAccess_Communicate();
		void OnPressed_QuickAccess_Contents();
		void OnPressed_QuickAccess_Map();
		void OnPressed_QuickAccess_Quest();
		void OnPressed_QuickAccess_Party();
		void OnPressed_QuickAccess_Library();
		void OnPressed_QuickAccess_Inventory();
		void OnPressed_QuickAccess_Option();
		void OnPressed_QuickAccess_MyCharacter();
		void OpenBookmarkSelector(ESBBookMarkerSlot Slot);
		void ShowCommandMenu(ESBCommandMenuType InType, const class FString& BookmarkType, const class FName& ParamName);
		void OnPressed_BookMark24();
		void OnPressed_BookMark23();
		void OnPressed_BookMark22();
		void OnPressed_BookMark21();
		void OnPressed_BookMark20();
		void OnPressed_BookMark19();
		void OnPressed_BookMark18();
		void OnPressed_BookMark17();
		void OnPressed_BookMark16();
		void OnPressed_BookMark15();
		void OnPressed_BookMark14();
		void OnPressed_BookMark13();
		void OnPressed_BookMark12();
		void OnPressed_BookMark11();
		void OnPressed_BookMark10();
		void OnPressed_BookMark9();
		void OnPressed_BookMark8();
		void OnPressed_BookMark7();
		void OnPressed_BookMark6();
		void OnPressed_BookMark5();
		void OnPressed_BookMark4();
		void OnPressed_BookMark3();
		void OnPressed_BookMark2();
		void OnPressed_BookMark1();
		void OnPressMainMenu();
		void WarpPointAccess();
		void OpenContentsMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenLetterMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenGuildMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenCommunicate(const class FString& BookmarkType, const class FName& ParamName);
		void OpenSeasonPassMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenMapMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenQuestMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenPartyMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenLibraryMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenInventoryMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenEventMenu();
		void CloseRmShopMenu();
		void OpenRmShopMenu();
		void OpenOptionMenu(const class FString& BookmarkType, const class FName& ParamName);
		void OpenMyCharacterMenu(const class FString& BookmarkType, const class FName& ParamName);
		void QuickAccessMenu(ESBCommandMenuType InCommandMenuType, const class FString& BookmarkType, const class FName& ParamName);
		void AddMainMenu(ESBCommandMenuType TopMenu, const class FString& BookmarkType, const class FName& ParamName);
		void InteractionStateCheck(bool* IsInteraction);
		void IsSimpleMode(bool* Result);
		void IsStartCursorMode(bool* Start);
		bool IsOpenDebugMenu();
		void SetCharacterCardInMissionShowHideKeyPress();
		void SetDebugMenu(class UDebugMenu_C* DebugMenu);
		void InitAdventurerRank();
		void OnAdventurerRankUpdate(int32_t InRetCode, ESBPlayerPassiveImagineSlotType Slot);
		void OnPressed_NowPartyKb();
		void OnPressed_NowPartyPad();
		void OnReleased_NowPartyKbReleased();
		void OnReleased_NowPartyPadReleased();
		void InitAchievementDelegate();
		void OnAchievementGainedDelegate_(TArray<int32_t> GainedAchievementIdList);
		void CustomEvent(class UUMG_MatchingMenu_C* Sender);
		void ShowMatchingMenu(const class FName& InitDungeonId, bool bInteract);
		void ShowMatchingMenuForBP(const class FName& InitDungeonId, bool bInteract);
		void ReceiveBeginPlay();
		void OnPressDebugMenu();
		void OnChangedSessionOwner(class ASBPlayerState* NewOwnerPlayer);
		void OnEndMessage_Event_1();
		void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3(float AxisValue);
		void OnPressChatWindow();
		void ReplicateInteractionSWEvent(class ASBInteractionSwBase* InteractionTarget, class AActor* OtherActor, const struct FRotator& ViewRotation);
		void OnPressDebugLevelDesignMenu();
		void OnChatWindowClose();
		void OnPressedShortcutRing_Normal_Keyboard();
		void OnReleasedShortcutRing_Normal_Keyboard();
		void OnPressedShortcutRing_Normal_Pad();
		void OnReleasedShortcutRing_Normal_Pad();
		void PlayerTeleportWithDelay(class ASBPlayerCharacter* PlayerCharacter);
		void OnPressedMiniMap();
		void OnReleasedMiniMap();
		void RepeadTimerMiniMap();
		void DebugCmd_OpenCmdMenu(class UObject* Sender, class UObject* Param);
		void BindDbgCmdOpenCmdMenu();
		void OnPressedQuestHUDChange();
		void OnShortcutExecPressed();
		void OnShortcutLeftPressed();
		void OnShortcutLeftRepeat();
		void OnShortcutRightPressed();
		void OnShortcutRightRepeat();
		void OnPressedShortcutRingExecuteF05();
		void OnPressedShortcutRingExecuteF06();
		void OnPressedShortcutRingExecuteF07();
		void OnPressedShortcutRingExecuteF08();
		void OnPressedShortcutRingExecuteF09();
		void OnPressedShortcutRingExecuteF10();
		void OnPressedShortcutRingExecuteF11();
		void OnPressedShortcutRingExecuteF12();
		void ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
