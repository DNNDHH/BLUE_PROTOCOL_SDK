#pragma once

 

// Package: RankingMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingMenu.RankingMenu_C
// 0x01C8 (0x0538 - 0x0370)
class URankingMenu_C final : public USBRankingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RankingListIn;                                     // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0388(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgInfo;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_RankingList;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Caution_Text;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ClassType_ComboBox;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            CmnBtn27;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   EndDateTimeTextBlock_History;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTime;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_52;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg20_01;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg20_02;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line04;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line05;                                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line06;                                            // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line07;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line07_1;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  MyCharaRank;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            MyRank_Btn;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            NextRank_Btn;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Nodate_Text;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Page_ComboBox;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            PrevRank_Btn;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_List_C*                    Ranking_List;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     RankingHistory_ComboBox;                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_CategoryButtonList_C*      RankingMenu_CategoryButtonList;                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankingTitleText;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_139;                                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            TopRank_Btn;                                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoldingPeriod;                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRankingData>                   RankingList_0;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<ESBClassType>                          ClassTypeList;                                     // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBClassType                                  SelectedClassType;                                 // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90A1[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PageMaxViewRankNum;                                // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TopIndex;                                          // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90A2[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosing;                                         // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A3[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRankingHistoryData>            HistoryComboBoxList_0;                             // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsTimeAttack;                                      // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFirstTime;                                       // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A4[0x6];                                     // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlockerInput;                                    // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankingLastIndex;                                  // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChangeRanking;                                   // 0x0504(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A5[0x3];                                     // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedPageIndex;                                 // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastPageIndex;                                     // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsJumpMyRank;                                      // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90A6[0x3];                                     // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyRankNum;                                         // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalCountNum;                                     // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90A7[0x4];                                     // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      TextTable;                                         // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TotallingEnd;                                      // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotUpdatePage;                                     // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotUpdateClassType;                                // 0x052A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotUpdateRankingHistory;                           // 0x052B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ScrollLastOffset;                                  // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHistoryListDebugDisp;                            // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_RankingMenu(int32 EntryPoint);
	void BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ChangeSelectPage();
	void RequestUpdateRankingView();
	void ChangeSelectClass();
	void ChangeSelectHistory();
	void ChangeEnd(bool Param_PlayAnimation);
	void ChangeStart();
	void BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void OnFailedRankingView();
	void BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
	void BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature();
	void BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void OutRangeMyRank();
	void OnCompletedRankingView();
	void OnCompletedRankingHistory();
	void BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void ChangeFocusCategory(int32 ButtonId);
	void BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void OnPress_Cancel();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void SetClassComboBox();
	void Set_Page_Combo_Box_Option(int32 InLastIndex);
	void SetHistoryComboBox();
	class UWidget* On_Page_ComboBox_GenerateWidget_0(const class FString& Item);
	class UWidget* On_ClassType_ComboBox_GenerateWidget_0(const class FString& Item);
	class UWidget* On_RankingHistory_ComboBox_GenerateWidget_0(const class FString& Item);
	void SetPage_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdatePage);
	void SetClassType_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdateClassType);
	void ClearPage_ComboBox(bool Param_NotUpdatePage);
	void SetRankingHistory_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdateRankingHistory);
	void IsShowEmptyMyRankingData(bool* Show);
	void GetMyItemPosition(int32* Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingMenu_C">();
	}
	static class URankingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingMenu_C>();
	}
};
static_assert(alignof(URankingMenu_C) == 0x000008, "Wrong alignment on URankingMenu_C");
static_assert(sizeof(URankingMenu_C) == 0x000538, "Wrong size on URankingMenu_C");
static_assert(offsetof(URankingMenu_C, UberGraphFrame) == 0x000370, "Member 'URankingMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingListIn) == 0x000378, "Member 'URankingMenu_C::RankingListIn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, AnimOut) == 0x000380, "Member 'URankingMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, AnimIn) == 0x000388, "Member 'URankingMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, BG) == 0x000390, "Member 'URankingMenu_C::BG' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, BgInfo) == 0x000398, "Member 'URankingMenu_C::BgInfo' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, CanvasPanel_RankingList) == 0x0003A0, "Member 'URankingMenu_C::CanvasPanel_RankingList' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Caution_Text) == 0x0003A8, "Member 'URankingMenu_C::Caution_Text' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, ClassType_ComboBox) == 0x0003B0, "Member 'URankingMenu_C::ClassType_ComboBox' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, CmnBack01) == 0x0003B8, "Member 'URankingMenu_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, CmnBtn27) == 0x0003C0, "Member 'URankingMenu_C::CmnBtn27' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, EndDateTimeTextBlock_History) == 0x0003C8, "Member 'URankingMenu_C::EndDateTimeTextBlock_History' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IconTime) == 0x0003D0, "Member 'URankingMenu_C::IconTime' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Image_52) == 0x0003D8, "Member 'URankingMenu_C::Image_52' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Image_Bg20_01) == 0x0003E0, "Member 'URankingMenu_C::Image_Bg20_01' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Image_Bg20_02) == 0x0003E8, "Member 'URankingMenu_C::Image_Bg20_02' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line01) == 0x0003F0, "Member 'URankingMenu_C::Line01' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line03) == 0x0003F8, "Member 'URankingMenu_C::Line03' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line04) == 0x000400, "Member 'URankingMenu_C::Line04' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line05) == 0x000408, "Member 'URankingMenu_C::Line05' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line06) == 0x000410, "Member 'URankingMenu_C::Line06' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line07) == 0x000418, "Member 'URankingMenu_C::Line07' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Line07_1) == 0x000420, "Member 'URankingMenu_C::Line07_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, MyCharaRank) == 0x000428, "Member 'URankingMenu_C::MyCharaRank' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, MyRank_Btn) == 0x000430, "Member 'URankingMenu_C::MyRank_Btn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, NextRank_Btn) == 0x000438, "Member 'URankingMenu_C::NextRank_Btn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Nodate_Text) == 0x000440, "Member 'URankingMenu_C::Nodate_Text' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Page_ComboBox) == 0x000448, "Member 'URankingMenu_C::Page_ComboBox' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, PrevRank_Btn) == 0x000450, "Member 'URankingMenu_C::PrevRank_Btn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, Ranking_List) == 0x000458, "Member 'URankingMenu_C::Ranking_List' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingHistory_ComboBox) == 0x000460, "Member 'URankingMenu_C::RankingHistory_ComboBox' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingMenu_CategoryButtonList) == 0x000468, "Member 'URankingMenu_C::RankingMenu_CategoryButtonList' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingTitleText) == 0x000470, "Member 'URankingMenu_C::RankingTitleText' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, SBButton_C_139) == 0x000478, "Member 'URankingMenu_C::SBButton_C_139' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, ShowTutorialHelpBtn) == 0x000480, "Member 'URankingMenu_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, TopRank_Btn) == 0x000488, "Member 'URankingMenu_C::TopRank_Btn' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, WidgetSwitcher_HoldingPeriod) == 0x000490, "Member 'URankingMenu_C::WidgetSwitcher_HoldingPeriod' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingList_0) == 0x000498, "Member 'URankingMenu_C::RankingList_0' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, ClassTypeList) == 0x0004A8, "Member 'URankingMenu_C::ClassTypeList' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, SelectedClassType) == 0x0004B8, "Member 'URankingMenu_C::SelectedClassType' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, PageMaxViewRankNum) == 0x0004BC, "Member 'URankingMenu_C::PageMaxViewRankNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, TopIndex) == 0x0004C0, "Member 'URankingMenu_C::TopIndex' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, OnClose) == 0x0004C8, "Member 'URankingMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsClosing) == 0x0004D8, "Member 'URankingMenu_C::IsClosing' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, HistoryComboBoxList_0) == 0x0004E0, "Member 'URankingMenu_C::HistoryComboBoxList_0' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsTimeAttack) == 0x0004F0, "Member 'URankingMenu_C::IsTimeAttack' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsFirstTime) == 0x0004F1, "Member 'URankingMenu_C::IsFirstTime' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, UIBlockerInput) == 0x0004F8, "Member 'URankingMenu_C::UIBlockerInput' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, RankingLastIndex) == 0x000500, "Member 'URankingMenu_C::RankingLastIndex' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsChangeRanking) == 0x000504, "Member 'URankingMenu_C::IsChangeRanking' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, SelectedPageIndex) == 0x000508, "Member 'URankingMenu_C::SelectedPageIndex' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, LastPageIndex) == 0x00050C, "Member 'URankingMenu_C::LastPageIndex' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsJumpMyRank) == 0x000510, "Member 'URankingMenu_C::IsJumpMyRank' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, MyRankNum) == 0x000514, "Member 'URankingMenu_C::MyRankNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, TotalCountNum) == 0x000518, "Member 'URankingMenu_C::TotalCountNum' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, TextTable) == 0x000520, "Member 'URankingMenu_C::TextTable' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, TotallingEnd) == 0x000528, "Member 'URankingMenu_C::TotallingEnd' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, NotUpdatePage) == 0x000529, "Member 'URankingMenu_C::NotUpdatePage' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, NotUpdateClassType) == 0x00052A, "Member 'URankingMenu_C::NotUpdateClassType' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, NotUpdateRankingHistory) == 0x00052B, "Member 'URankingMenu_C::NotUpdateRankingHistory' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, ScrollLastOffset) == 0x00052C, "Member 'URankingMenu_C::ScrollLastOffset' has a wrong offset!");
static_assert(offsetof(URankingMenu_C, IsHistoryListDebugDisp) == 0x000530, "Member 'URankingMenu_C::IsHistoryListDebugDisp' has a wrong offset!");

}

