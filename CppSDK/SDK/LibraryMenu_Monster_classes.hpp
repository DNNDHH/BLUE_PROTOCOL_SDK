#pragma once

 

// Package: LibraryMenu_Monster

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster.LibraryMenu_Monster_C
// 0x01C8 (0x0470 - 0x02A8)
class ULibraryMenu_Monster_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSwitchWindow;                                  // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimNameWindow;                                    // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ModelFadeIn2;                                      // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ModelFadeIn;                                       // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimPreviewClose;                                  // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimPreviewOpen;                                   // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_ModelView;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_MonsterDetails;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_EnemyCaptureStudio_C*      CaptureStudio;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate_114;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EnemyImagePanel;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_List_C*                    LibraryMenu_List;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_NameWindow_C*      LibraryMenu_Monster_NameWindow;                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_SwitchWindow_C*    LibraryMenu_Monster_SwitchWindow;                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Search_C*                  LibraryMenu_Search;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ListSelectTextOverlay;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ModelChangeButton;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ModelChangeText;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModelImage;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ModelViewWindow;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewImage;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       SBRichTextBlock_142;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextLine;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_ModelView;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_MonsterDetails;                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ViewWindowBG;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_139;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            WindowOpenButton;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            WindowOpenButton_2;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBTextTableHash                       SelectCategoryId;                                  // 0x03C0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectEnemyId;                                     // 0x03C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FF7[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      EnemyModel;                                        // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALibraryMenu_Studio_C*                  Studio;                                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdatedModel;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FF8[0x3];                                     // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedMonsterListIndex;                          // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FF9[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEnemyParamMasterData>          List;                                              // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           AllActiveMonsterNameList;                          // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AllRead;                                           // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FFA[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             AllReadMonster;                                    // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 AppearnceIndexList;                                // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBLibraryEnemyPartsBreakData>  PartsBreakData;                                    // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PartsBreakState;                                   // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FFB[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLibraryEnemyData>            Enemy_List;                                        // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectEnemyTypeIndex;                              // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAllMipLoaded;                                   // 0x0464(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsModelLoadedComplete;                            // 0x0465(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FFC[0x2];                                     // 0x0466(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AllLoadedMipWaitTimeout;                           // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AllReadMonster__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_Monster(int32 EntryPoint);
	void AreaListSelect(int32 Param_Index, class FName EnemyId);
	void BndEvt__LibraryMenu_Monster_WindowOpenButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_CategoryList_Type1_K2Node_ComponentBoundEvent_2_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void BndEvt__LibraryMenu_Monster_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void AreaListVisibleChange(bool Visible);
	void OnEnemyDataLoaded(bool Result);
	void UnBindArealistBtn();
	void PressedAreaList();
	void BndEvt__LibraryMenu_Monster_ButtonFullScreen_MonsterDetails_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnClosePopup();
	void Close_ModelView();
	void BndEvt__LibraryMenu_Monster_ButtonFullScreen_ModelView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Esc_ModelView();
	void BndEvt__LibraryMenu_Monster_WindowOpenButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_19_OnTextChange__DelegateSignature(const class FText& NewParam);
	void ImageVisibleEvent();
	void UpdateEnemyModel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnModelLoadedAllMipFunc();
	void BndEvt__LibraryMenu_Monster_ModelChangeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ModelLoadRequest(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
	void SetModelVisibility(bool Visible);
	void SetModelControllEnabled(bool Enable);
	void FinalizeCaptureStudio();
	void OnModelLoadComplete();
	void InitializeCaptureStudio();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnRMShopClosed();
	void OnParentTerm();
	void CreateCategoryList();
	bool IsAllRead();
	void IsReadCategory(const struct FSBTextTableHash& ID, const struct FSBTextTableHash& RaceId, struct FSBTextTableHash* ReadId, bool* IsRead);
	void SaveEnemyReadId(class FName EnemyId, bool* SaveAdd);
	void CreateAppearanceList();
	void OnAppearanceListClick(int32 ListIndex);
	void UpdateSearchVisibility(const class FText& SearchWord);
	void ModelPartsChange();
	void BossFlagCheck(class FName EnemyId, bool* Boss, bool* Unique);
	void UpdateCategoryListMark();
	void ChangeDetailEnemyId(class FName EnemyId);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_C">();
	}
	static class ULibraryMenu_Monster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_C");
static_assert(sizeof(ULibraryMenu_Monster_C) == 0x000470, "Wrong size on ULibraryMenu_Monster_C");
static_assert(offsetof(ULibraryMenu_Monster_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_Monster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AnimSwitchWindow) == 0x0002B0, "Member 'ULibraryMenu_Monster_C::AnimSwitchWindow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AnimNameWindow) == 0x0002B8, "Member 'ULibraryMenu_Monster_C::AnimNameWindow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelFadeIn2) == 0x0002C0, "Member 'ULibraryMenu_Monster_C::ModelFadeIn2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelFadeIn) == 0x0002C8, "Member 'ULibraryMenu_Monster_C::ModelFadeIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AnimPreviewClose) == 0x0002D0, "Member 'ULibraryMenu_Monster_C::AnimPreviewClose' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AnimPreviewOpen) == 0x0002D8, "Member 'ULibraryMenu_Monster_C::AnimPreviewOpen' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ButtonFullScreen_ModelView) == 0x0002E0, "Member 'ULibraryMenu_Monster_C::ButtonFullScreen_ModelView' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ButtonFullScreen_MonsterDetails) == 0x0002E8, "Member 'ULibraryMenu_Monster_C::ButtonFullScreen_MonsterDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CaptureStudio) == 0x0002F0, "Member 'ULibraryMenu_Monster_C::CaptureStudio' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CategoryList_Type1) == 0x0002F8, "Member 'ULibraryMenu_Monster_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CmnBack01) == 0x000300, "Member 'ULibraryMenu_Monster_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CmnImageThrobber) == 0x000308, "Member 'ULibraryMenu_Monster_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CmnOperationRotate) == 0x000310, "Member 'ULibraryMenu_Monster_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, CmnOperationRotate_114) == 0x000318, "Member 'ULibraryMenu_Monster_C::CmnOperationRotate_114' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, EnemyImagePanel) == 0x000320, "Member 'ULibraryMenu_Monster_C::EnemyImagePanel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, LibraryMenu_List) == 0x000328, "Member 'ULibraryMenu_Monster_C::LibraryMenu_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, LibraryMenu_Monster_NameWindow) == 0x000330, "Member 'ULibraryMenu_Monster_C::LibraryMenu_Monster_NameWindow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, LibraryMenu_Monster_SwitchWindow) == 0x000338, "Member 'ULibraryMenu_Monster_C::LibraryMenu_Monster_SwitchWindow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, LibraryMenu_Search) == 0x000340, "Member 'ULibraryMenu_Monster_C::LibraryMenu_Search' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ListSelectTextOverlay) == 0x000348, "Member 'ULibraryMenu_Monster_C::ListSelectTextOverlay' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelChangeButton) == 0x000350, "Member 'ULibraryMenu_Monster_C::ModelChangeButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelChangeText) == 0x000358, "Member 'ULibraryMenu_Monster_C::ModelChangeText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelImage) == 0x000360, "Member 'ULibraryMenu_Monster_C::ModelImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ModelViewWindow) == 0x000368, "Member 'ULibraryMenu_Monster_C::ModelViewWindow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, MoveAnim) == 0x000370, "Member 'ULibraryMenu_Monster_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, PreviewImage) == 0x000378, "Member 'ULibraryMenu_Monster_C::PreviewImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, SBRichTextBlock_142) == 0x000380, "Member 'ULibraryMenu_Monster_C::SBRichTextBlock_142' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, TextLine) == 0x000388, "Member 'ULibraryMenu_Monster_C::TextLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, UIBlocker_ModelView) == 0x000390, "Member 'ULibraryMenu_Monster_C::UIBlocker_ModelView' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, UIBlocker_MonsterDetails) == 0x000398, "Member 'ULibraryMenu_Monster_C::UIBlocker_MonsterDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, ViewWindowBG) == 0x0003A0, "Member 'ULibraryMenu_Monster_C::ViewWindowBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, WidgetSwitcher_139) == 0x0003A8, "Member 'ULibraryMenu_Monster_C::WidgetSwitcher_139' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, WindowOpenButton) == 0x0003B0, "Member 'ULibraryMenu_Monster_C::WindowOpenButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, WindowOpenButton_2) == 0x0003B8, "Member 'ULibraryMenu_Monster_C::WindowOpenButton_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, SelectCategoryId) == 0x0003C0, "Member 'ULibraryMenu_Monster_C::SelectCategoryId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, SelectEnemyId) == 0x0003C4, "Member 'ULibraryMenu_Monster_C::SelectEnemyId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, EnemyModel) == 0x0003D0, "Member 'ULibraryMenu_Monster_C::EnemyModel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, Studio) == 0x0003D8, "Member 'ULibraryMenu_Monster_C::Studio' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, IsUpdatedModel) == 0x0003E0, "Member 'ULibraryMenu_Monster_C::IsUpdatedModel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, SelectedMonsterListIndex) == 0x0003E4, "Member 'ULibraryMenu_Monster_C::SelectedMonsterListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, Count) == 0x0003E8, "Member 'ULibraryMenu_Monster_C::Count' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, List) == 0x0003F0, "Member 'ULibraryMenu_Monster_C::List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AllActiveMonsterNameList) == 0x000400, "Member 'ULibraryMenu_Monster_C::AllActiveMonsterNameList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AllRead) == 0x000410, "Member 'ULibraryMenu_Monster_C::AllRead' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AllReadMonster) == 0x000418, "Member 'ULibraryMenu_Monster_C::AllReadMonster' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AppearnceIndexList) == 0x000428, "Member 'ULibraryMenu_Monster_C::AppearnceIndexList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, PartsBreakData) == 0x000438, "Member 'ULibraryMenu_Monster_C::PartsBreakData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, PartsBreakState) == 0x000448, "Member 'ULibraryMenu_Monster_C::PartsBreakState' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, Enemy_List) == 0x000450, "Member 'ULibraryMenu_Monster_C::Enemy_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, SelectEnemyTypeIndex) == 0x000460, "Member 'ULibraryMenu_Monster_C::SelectEnemyTypeIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, bIsAllMipLoaded) == 0x000464, "Member 'ULibraryMenu_Monster_C::bIsAllMipLoaded' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, bIsModelLoadedComplete) == 0x000465, "Member 'ULibraryMenu_Monster_C::bIsModelLoadedComplete' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_C, AllLoadedMipWaitTimeout) == 0x000468, "Member 'ULibraryMenu_Monster_C::AllLoadedMipWaitTimeout' has a wrong offset!");

}

