#pragma once

 

// Package: MyCharaMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EMyCharaMenu_ItemType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu.MyCharaMenu_C
// 0x0100 (0x03A8 - 0x02A8)
class UMyCharaMenu_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      CategoryTabButtonList;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuBg_C*                       CommandMenuBg;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvas;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EMyCharaMenu_ItemType                         CurrMenuItemType;                                  // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6124[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_Studio_C*      PlayerAvatarStudio;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CurrSelectedMenuWidget;                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHiding;                                           // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFirstOpen;                                       // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6125[0x2];                                     // 0x0302(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HelpId;                                            // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrAvatarPoseStateNo;                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerAvatarImageReuploadFlag;                     // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESubMenuTermReason                            TermRequestReason;                                 // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6126[0x2];                                     // 0x030E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             TmpBPPlayerSceneCapture2D;                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateComponent*                SBCharaCreateComponent;                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FinishedAnimation;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      SBPlayerCharacterCommonComp;                       // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BookmarkTypeButtonList;                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsCostumeOn;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TempIsChangeCostumeProcStart;                      // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsIdleMotionPlaying;                              // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6127[0x5];                                     // 0x0343(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, EMyCharaMenu_ItemType>    MenuMap;                                           // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	EMyCharaMenu_ItemType                         TempMenuItemType;                                  // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6128[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrCostumeAndMountsSubMenuId;                     // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAvatarSetSavedPose;                               // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReturnToCategoryTabChangeProc;                    // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MyCharaMenu(int32 EntryPoint);
	void AdventurerRankSubMenuChanged(int32 Param_Index);
	void SkillBoardSetSubMenuChanged(int32 Param_Index);
	void CostumeAndMountsSubMenuChanged(int32 Param_Index);
	void OnResetAvatarCostumeOnOffToDefault();
	void OnCostumeAndMountsSubMenuChanged(int32 InSubMenuId);
	void OnIsCostumeOn(bool InIsCostumeOn);
	void OnCharaPartsLoaded_CostumePreviewRefresh(bool Result);
	void RefreshPreviewCostume(const struct FSBCharaCreateParameter& CharaCreateParameter);
	void SetAvatarImageReuploadFlag();
	void SetCostumePreviewParameter(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start);
	void OnResetPlayerAvatarRotate_____();
	void OnEquippedWeaponSpawned();
	void OnIsCmnBackBtnVisibleEvent(bool InIsVisible);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnChangeEquipCostumeOccuredAtOtherEquipChange();
	void OnCostumeSwitchOnOffEvent(bool InIsCostumeOn);
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void OnSetPlayerCaptureStudioHidden_____(bool IsHidden);
	void DoMenuClose();
	void OnCharaPartsLoadedDelegate_ByChangeCostume_____(bool Result);
	void OnChangeStateByCostumeChange_____(const class FString& InPrevStateName, const class FString& InNextStateName);
	void StartOpenMenuAnimation();
	void OnAvatarPoseChangeState_____(const class FString& InPrevStateName, const class FString& InNextStateName);
	void OnPlayerAvatarStudio_CharaPartsLoaded_____();
	void OnPlayerAvatarSwitchPosing_____(class FName OnPosingCommandName, bool InSwitchPosingToPrev);
	void EffectListSubMenuChanged(int32 Param_Index);
	void BattleSetSubMenuChanged(int32 Param_Index);
	void CustomEvent_0();
	void OnRequestDirectChat_Event();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void ChangeCostumeProc(bool InProcStart);
	void OnPlayerAvatarRotateActive_____(bool InIsActive);
	void SetUIBlockerVisibility(bool Param_IsVisible);
	void BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature(int32 ButtonId);
	void Init();
	void Destruct();
	void Construct();
	void SelectAchievementSaved(bool InResult);
	void AcquiredAchievementLoaded(bool InResult);
	void AchievementChangeButtonClicked(class UMyCharaMenu_AchievementList_C* InAchievementList);
	void OnUploadImageEnded();
	void StartPlayerAvatarUploadImage();
	void OnUploadImageCompleted_____();
	void OnSaveCommandMenuPlayerAvatarPoseId_____(int32 InRetCode, int32 InAvatarPoseId);
	void StartUploadImage();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnRMShopClosed();
	void OnParentTerm();
	void Setup_Selected_Menu(EMyCharaMenu_ItemType InSelectedItemType);
	void FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform);
	void SetPlayerAvatarStudioHidden(bool InIsHidden);
	void Initialize_Open_Menu_Type();
	void UpdateArmamentChangeButtonEnable();
	void Set_Player_Avater_Motion_Mode(EMyCharaMenu_ItemType& InMyCharaMenuItemType, bool* IsIdleMotionPlaying);
	void Set_Player_Avater_Current_Mode_Motion(EMyCharaMenu_ItemType InMyCharaMenuItemType, bool ForceEnable);
	void UpdatePlayerAvatarWeapon();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_C">();
	}
	static class UMyCharaMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_C>();
	}
};
static_assert(alignof(UMyCharaMenu_C) == 0x000008, "Wrong alignment on UMyCharaMenu_C");
static_assert(sizeof(UMyCharaMenu_C) == 0x0003A8, "Wrong size on UMyCharaMenu_C");
static_assert(offsetof(UMyCharaMenu_C, UberGraphFrame) == 0x0002A8, "Member 'UMyCharaMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, AnimOut2) == 0x0002B0, "Member 'UMyCharaMenu_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, AnimOut) == 0x0002B8, "Member 'UMyCharaMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CategoryTabButtonList) == 0x0002C0, "Member 'UMyCharaMenu_C::CategoryTabButtonList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CommandMenu_Line) == 0x0002C8, "Member 'UMyCharaMenu_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CommandMenuBg) == 0x0002D0, "Member 'UMyCharaMenu_C::CommandMenuBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, MenuCanvas) == 0x0002D8, "Member 'UMyCharaMenu_C::MenuCanvas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, UIBlocker) == 0x0002E0, "Member 'UMyCharaMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CurrMenuItemType) == 0x0002E8, "Member 'UMyCharaMenu_C::CurrMenuItemType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, PlayerAvatarStudio) == 0x0002F0, "Member 'UMyCharaMenu_C::PlayerAvatarStudio' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CurrSelectedMenuWidget) == 0x0002F8, "Member 'UMyCharaMenu_C::CurrSelectedMenuWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, bHiding) == 0x000300, "Member 'UMyCharaMenu_C::bHiding' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, IsFirstOpen) == 0x000301, "Member 'UMyCharaMenu_C::IsFirstOpen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, HelpId) == 0x000304, "Member 'UMyCharaMenu_C::HelpId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CurrAvatarPoseStateNo) == 0x000308, "Member 'UMyCharaMenu_C::CurrAvatarPoseStateNo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, PlayerAvatarImageReuploadFlag) == 0x00030C, "Member 'UMyCharaMenu_C::PlayerAvatarImageReuploadFlag' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, TermRequestReason) == 0x00030D, "Member 'UMyCharaMenu_C::TermRequestReason' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, TmpBPPlayerSceneCapture2D) == 0x000310, "Member 'UMyCharaMenu_C::TmpBPPlayerSceneCapture2D' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, SBCharaCreateComponent) == 0x000318, "Member 'UMyCharaMenu_C::SBCharaCreateComponent' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, FinishedAnimation) == 0x000320, "Member 'UMyCharaMenu_C::FinishedAnimation' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, SBPlayerCharacterCommonComp) == 0x000328, "Member 'UMyCharaMenu_C::SBPlayerCharacterCommonComp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, BookmarkTypeButtonList) == 0x000330, "Member 'UMyCharaMenu_C::BookmarkTypeButtonList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, IsCostumeOn) == 0x000340, "Member 'UMyCharaMenu_C::IsCostumeOn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, TempIsChangeCostumeProcStart) == 0x000341, "Member 'UMyCharaMenu_C::TempIsChangeCostumeProcStart' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, bIsIdleMotionPlaying) == 0x000342, "Member 'UMyCharaMenu_C::bIsIdleMotionPlaying' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, MenuMap) == 0x000348, "Member 'UMyCharaMenu_C::MenuMap' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, TempMenuItemType) == 0x000398, "Member 'UMyCharaMenu_C::TempMenuItemType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, CurrCostumeAndMountsSubMenuId) == 0x00039C, "Member 'UMyCharaMenu_C::CurrCostumeAndMountsSubMenuId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, bAvatarSetSavedPose) == 0x0003A0, "Member 'UMyCharaMenu_C::bAvatarSetSavedPose' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_C, bReturnToCategoryTabChangeProc) == 0x0003A1, "Member 'UMyCharaMenu_C::bReturnToCategoryTabChangeProc' has a wrong offset!");

}

