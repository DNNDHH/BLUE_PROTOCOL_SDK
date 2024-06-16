#pragma once

 

// Package: LibraryMenu_Achievement

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Achievement.LibraryMenu_Achievement_C
// 0x0190 (0x0408 - 0x0278)
class ULibraryMenu_Achievement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailsIn;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AchievementData_Switcher;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AchievementGraffiti;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementProgressIcon_C* AchievementProgressIcon_0;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementProgressIcon_C* AchievementProgressIcon_1;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementProgressIcon_C* AchievementProgressIcon_2;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementProgressIcon_C* AchievementProgressIcon_3;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementProgressIcon_C* AchievementProgressIcon_4;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBox;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            GetRewardBtn;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    GetRewardBtnText;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementDetails_C*      LibraryMenu_AchievementDetails;                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_AchievementList_C*         LibraryMenu_AchievementList;                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoneAchievement_BG;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       NoneAchievement_Desc2_Text;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       NoneAchievement_Desc_Text;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Progress;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RankProgress;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectLargeCategoryListId;                         // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectMediumCategoryListId;                        // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectItemListId;                                  // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindedToOnLoadAchievementDelgate;                // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FF6[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckAchievementId;                                // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSaving;                                          // 0x0344(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAchievementOnly;                                 // 0x0345(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoadAchievementData;                             // 0x0346(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoadAchievementData_Bind;                        // 0x0347(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FAchievementMasterData>         ItemListInfo;                                      // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBAchievementSortType                        SortType;                                          // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FF7[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             UpdateNewIcon;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBAchievementLargeCategoryInfo> LargeCategoryInfo;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBCharacterAchievementDataInfo> CharacterAchievementDataList;                      // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectCategoryListId;                              // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRewardBtnEnable;                                 // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FF8[0x3];                                     // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentsAcceptWindow_C*         AttachmentListData;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRequest;                                         // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FF9[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailListAttachmentAcceptedResult_C*    MailListAttachmentAcceptResultWG;                  // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 RewardAchievementIds;                              // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMargin                                InListItemPadding;                                 // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMG_ProductDetailMenu_C*               ProductDetailMenu;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverLimitDiscard;                                // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOverLimitSell;                                   // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FFA[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LoadDateTime;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsColorChange;                                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FFB[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    RewardsData;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateNewIcon__DelegateSignature(int32 MenuButtonListId);
	void ExecuteUbergraph_LibraryMenu_Achievement(int32 EntryPoint);
	void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>& OutRewardsData, TArray<int32>& OutRewardsIds);
	void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward);
	void BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature();
	void BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void MailListAttachmentAcceptResult_CloseEvent();
	void OnGetRewardItemEvent();
	void AttachmentListWindow_Close();
	void OnGetAchievementRewardsDelegate_Event(const bool Result, const int32 RetCode, const struct FSBAchievementRewardData& AchievementRewardData);
	void RequestAPI_GetAchievementRewards();
	void CallErrorMessage(int32 RetCode);
	void OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode);
	void RequestAPI_LoadAchievementData();
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void OnSaveAchievementSelectedDelegate_Event(const bool Result);
	void OnLoadAchievementDelegate(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList);
	void Destruct();
	void Construct();
	void Initialize();
	void Initialize_RankProgress();
	void Create_Category_List();
	void CreateItemList(int32 InSelectId);
	void ClickListItem(int32 ListIndex);
	void SetAchievementId(bool IsChecked, int32 ListIndex);
	void Get_Read_Achievement_Id_List(TArray<int32>* ReadAchievementIdList);
	void UpdateSelectCategoryNewIcon();
	void CheckCategory(const struct FAchievementMasterData& MasterData, bool* Result);
	class UWidget* On_ComboBox_GenerateWidget_0(const class FString& Item);
	void GetCharacterAchievementData(int32 AchievementId, struct FSBCharacterAchievementDataInfo* Data);
	void SetAchievedDate(int32 AchievementId, struct FDateTime& InDateTime);
	class FString GetGroupName(int32 InInt);
	class FString GetLargeCategoryName(int32 InInt);
	void GetCategoryID(int32 Value, int32* OutLargeCategoryId, int32* OutMediumCategoryId);
	void Set_Reward_Btn();
	void GetAchievementReward(TArray<struct FSBMailData>* OutMailData);
	void CheckAllAchievement(TArray<struct FAchievementMasterData>* OutItemListInfo);
	void UpdateCharacterAchievementDataInfo();
	void SetLimitedTime(const class FString& TermId, bool* OutValue);
	class USBPlayerAchievementComponent* GetAchievementComponent();
	void IsAchievementPossession(const int32 InFindAchievementId, int32 B, bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Achievement_C">();
	}
	static class ULibraryMenu_Achievement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Achievement_C>();
	}
};
static_assert(alignof(ULibraryMenu_Achievement_C) == 0x000008, "Wrong alignment on ULibraryMenu_Achievement_C");
static_assert(sizeof(ULibraryMenu_Achievement_C) == 0x000408, "Wrong size on ULibraryMenu_Achievement_C");
static_assert(offsetof(ULibraryMenu_Achievement_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_Achievement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AnimDetailsIn) == 0x000280, "Member 'ULibraryMenu_Achievement_C::AnimDetailsIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementData_Switcher) == 0x000288, "Member 'ULibraryMenu_Achievement_C::AchievementData_Switcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementGraffiti) == 0x000290, "Member 'ULibraryMenu_Achievement_C::AchievementGraffiti' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementProgressIcon_0) == 0x000298, "Member 'ULibraryMenu_Achievement_C::AchievementProgressIcon_0' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementProgressIcon_1) == 0x0002A0, "Member 'ULibraryMenu_Achievement_C::AchievementProgressIcon_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementProgressIcon_2) == 0x0002A8, "Member 'ULibraryMenu_Achievement_C::AchievementProgressIcon_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementProgressIcon_3) == 0x0002B0, "Member 'ULibraryMenu_Achievement_C::AchievementProgressIcon_3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AchievementProgressIcon_4) == 0x0002B8, "Member 'ULibraryMenu_Achievement_C::AchievementProgressIcon_4' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, CategoryList_Type1) == 0x0002C0, "Member 'ULibraryMenu_Achievement_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, ComboBox) == 0x0002C8, "Member 'ULibraryMenu_Achievement_C::ComboBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, Frame) == 0x0002D0, "Member 'ULibraryMenu_Achievement_C::Frame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, GetRewardBtn) == 0x0002D8, "Member 'ULibraryMenu_Achievement_C::GetRewardBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, GetRewardBtnText) == 0x0002E0, "Member 'ULibraryMenu_Achievement_C::GetRewardBtnText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, LibraryMenu_AchievementDetails) == 0x0002E8, "Member 'ULibraryMenu_Achievement_C::LibraryMenu_AchievementDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, LibraryMenu_AchievementList) == 0x0002F0, "Member 'ULibraryMenu_Achievement_C::LibraryMenu_AchievementList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, NoneAchievement_BG) == 0x0002F8, "Member 'ULibraryMenu_Achievement_C::NoneAchievement_BG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, NoneAchievement_Desc2_Text) == 0x000300, "Member 'ULibraryMenu_Achievement_C::NoneAchievement_Desc2_Text' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, NoneAchievement_Desc_Text) == 0x000308, "Member 'ULibraryMenu_Achievement_C::NoneAchievement_Desc_Text' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, Progress) == 0x000310, "Member 'ULibraryMenu_Achievement_C::Progress' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, RankProgress) == 0x000318, "Member 'ULibraryMenu_Achievement_C::RankProgress' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, ShowTutorialHelpBtn) == 0x000320, "Member 'ULibraryMenu_Achievement_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, UIBlocker) == 0x000328, "Member 'ULibraryMenu_Achievement_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, SelectLargeCategoryListId) == 0x000330, "Member 'ULibraryMenu_Achievement_C::SelectLargeCategoryListId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, SelectMediumCategoryListId) == 0x000334, "Member 'ULibraryMenu_Achievement_C::SelectMediumCategoryListId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, SelectItemListId) == 0x000338, "Member 'ULibraryMenu_Achievement_C::SelectItemListId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsBindedToOnLoadAchievementDelgate) == 0x00033C, "Member 'ULibraryMenu_Achievement_C::IsBindedToOnLoadAchievementDelgate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, CheckAchievementId) == 0x000340, "Member 'ULibraryMenu_Achievement_C::CheckAchievementId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsSaving) == 0x000344, "Member 'ULibraryMenu_Achievement_C::IsSaving' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsAchievementOnly) == 0x000345, "Member 'ULibraryMenu_Achievement_C::IsAchievementOnly' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsLoadAchievementData) == 0x000346, "Member 'ULibraryMenu_Achievement_C::IsLoadAchievementData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsLoadAchievementData_Bind) == 0x000347, "Member 'ULibraryMenu_Achievement_C::IsLoadAchievementData_Bind' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, ItemListInfo) == 0x000348, "Member 'ULibraryMenu_Achievement_C::ItemListInfo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, SortType) == 0x000358, "Member 'ULibraryMenu_Achievement_C::SortType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, UpdateNewIcon) == 0x000360, "Member 'ULibraryMenu_Achievement_C::UpdateNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, LargeCategoryInfo) == 0x000370, "Member 'ULibraryMenu_Achievement_C::LargeCategoryInfo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, CharacterAchievementDataList) == 0x000380, "Member 'ULibraryMenu_Achievement_C::CharacterAchievementDataList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, SelectCategoryListId) == 0x000390, "Member 'ULibraryMenu_Achievement_C::SelectCategoryListId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsRewardBtnEnable) == 0x000394, "Member 'ULibraryMenu_Achievement_C::IsRewardBtnEnable' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, AttachmentListData) == 0x000398, "Member 'ULibraryMenu_Achievement_C::AttachmentListData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsRequest) == 0x0003A0, "Member 'ULibraryMenu_Achievement_C::IsRequest' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, MailListAttachmentAcceptResultWG) == 0x0003A8, "Member 'ULibraryMenu_Achievement_C::MailListAttachmentAcceptResultWG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, RewardAchievementIds) == 0x0003B0, "Member 'ULibraryMenu_Achievement_C::RewardAchievementIds' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, InListItemPadding) == 0x0003C0, "Member 'ULibraryMenu_Achievement_C::InListItemPadding' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, ProductDetailMenu) == 0x0003D0, "Member 'ULibraryMenu_Achievement_C::ProductDetailMenu' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, UIBlocker_0) == 0x0003D8, "Member 'ULibraryMenu_Achievement_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsOverLimitDiscard) == 0x0003E0, "Member 'ULibraryMenu_Achievement_C::IsOverLimitDiscard' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsOverLimitSell) == 0x0003E1, "Member 'ULibraryMenu_Achievement_C::IsOverLimitSell' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, LoadDateTime) == 0x0003E8, "Member 'ULibraryMenu_Achievement_C::LoadDateTime' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, IsColorChange) == 0x0003F0, "Member 'ULibraryMenu_Achievement_C::IsColorChange' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Achievement_C, RewardsData) == 0x0003F8, "Member 'ULibraryMenu_Achievement_C::RewardsData' has a wrong offset!");

}

