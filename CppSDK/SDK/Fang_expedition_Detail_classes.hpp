#pragma once

 

// Package: Fang_expedition_Detail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_Detail.Fang_expedition_Detail_C
// 0x0210 (0x0488 - 0x0278)
class UFang_expedition_Detail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_LineEff;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Black;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DetailSwitcher;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailAreaName_C*      Fang_expedition_DetailAreaName;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailHeader_C*        Fang_expedition_DetailHeader;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LimitCountBox;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LimitStatusPanel;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LimitTimeBox;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Eff;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MouseBlock;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailPlayData_C*      SelectImajin_Play_Finish;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemData_C*      Standby;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_89;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   AreaNameBGColor_L;                                 // 0x0308(0x0010)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                   AreaNameBGColor_R;                                 // 0x0318(0x0010)(Edit, BlueprintVisible)
	int32                                         ViewType;                                          // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPreview;                                         // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_608B[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickRandomRewardListView;                       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 PlayAreaId;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickExpeditionCancel;                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickUseTicket;                                  // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickExpeditionFinish;                           // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickFangSelect;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickTokenWindowOpen;                            // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickExpeditionStart;                            // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickCloseButton;                                // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      TextTable_Fang;                                    // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable_common;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickRandomRewardListView_PlayData;              // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBFang_expeditionAreaData             FangAreaData;                                      // 0x03E0(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue);
	void OnClickExpeditionCancel__DelegateSignature();
	void OnClickUseTicket__DelegateSignature();
	void OnClickExpeditionFinish__DelegateSignature(const class FString& ID);
	void OnClickFangSelect__DelegateSignature();
	void OnClickTokenWindowOpen__DelegateSignature(TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData);
	void OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds);
	void OnClickCloseButton__DelegateSignature();
	void OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData);
	void ExecuteUbergraph_Fang_expedition_Detail(int32 EntryPoint);
	void CB_OnClickRandomRewardView_PlayData(const struct FSBFang_expeditionPlayData& PlayData);
	void CB_OnClickCloseButton();
	void CB_OnExpeditionStart(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenData);
	void CB_OnTokenWindowOpen(TArray<int32>& SelectTokenIds);
	void CB_OnClickFangSelectOpen();
	void CB_OnClickExpeditionFinish(const class FString& ID);
	void CB_OnClickUseTicket();
	void CB_OnClickExpeditionCancel();
	void Destruct();
	void CB_OnClickRandomRewardView(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetViewType(int32 Type);
	void SetAreaData(const struct FSBFang_expeditionAreaData& AreaData, bool ButtonDisable);
	void SetPlayData(const struct FSBFang_expeditionPlayData& PlayData, int32 CancelCount);
	void BindFunction();
	void UnbindFunction();
	void GetPlayAreaId(class FString* ID);
	void SetSelectFangData(TArray<class FString>& UniqueIds);
	void GetSelectedAreaData(struct FSBFang_expeditionAreaData* Data);
	void SetFangSelectMode(bool SelectMode);
	void SetSelectTokenData(TArray<int32>& TokenList);
	void GetSelectedTimeIndex(int32* Param_Index);
	void ResetFangData();
	void AreaListOpenButtonVisibility(bool Visible);
	void UpdateRandomRewardData(struct FSBFang_expeditionPlayData& PlayData);
	void SetCloseBtnVisible(bool Visible);
	void SetFastFinish();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_Detail_C">();
	}
	static class UFang_expedition_Detail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_Detail_C>();
	}
};
static_assert(alignof(UFang_expedition_Detail_C) == 0x000008, "Wrong alignment on UFang_expedition_Detail_C");
static_assert(sizeof(UFang_expedition_Detail_C) == 0x000488, "Wrong size on UFang_expedition_Detail_C");
static_assert(offsetof(UFang_expedition_Detail_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_Detail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Anm_LineEff) == 0x000280, "Member 'UFang_expedition_Detail_C::Anm_LineEff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, BG_Black) == 0x000288, "Member 'UFang_expedition_Detail_C::BG_Black' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, DetailSwitcher) == 0x000290, "Member 'UFang_expedition_Detail_C::DetailSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Fang_expedition_DetailAreaName) == 0x000298, "Member 'UFang_expedition_Detail_C::Fang_expedition_DetailAreaName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Fang_expedition_DetailHeader) == 0x0002A0, "Member 'UFang_expedition_Detail_C::Fang_expedition_DetailHeader' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, HLine_1) == 0x0002A8, "Member 'UFang_expedition_Detail_C::HLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, LimitCountBox) == 0x0002B0, "Member 'UFang_expedition_Detail_C::LimitCountBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, LimitStatusPanel) == 0x0002B8, "Member 'UFang_expedition_Detail_C::LimitStatusPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, LimitTimeBox) == 0x0002C0, "Member 'UFang_expedition_Detail_C::LimitTimeBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Line) == 0x0002C8, "Member 'UFang_expedition_Detail_C::Line' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Line_Eff) == 0x0002D0, "Member 'UFang_expedition_Detail_C::Line_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, MouseBlock) == 0x0002D8, "Member 'UFang_expedition_Detail_C::MouseBlock' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, SBDateTimeTextBlock_Limit) == 0x0002E0, "Member 'UFang_expedition_Detail_C::SBDateTimeTextBlock_Limit' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, SBRuntimeTextBlock_Header) == 0x0002E8, "Member 'UFang_expedition_Detail_C::SBRuntimeTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, SelectImajin_Play_Finish) == 0x0002F0, "Member 'UFang_expedition_Detail_C::SelectImajin_Play_Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, Standby) == 0x0002F8, "Member 'UFang_expedition_Detail_C::Standby' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, TextBlock_89) == 0x000300, "Member 'UFang_expedition_Detail_C::TextBlock_89' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, AreaNameBGColor_L) == 0x000308, "Member 'UFang_expedition_Detail_C::AreaNameBGColor_L' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, AreaNameBGColor_R) == 0x000318, "Member 'UFang_expedition_Detail_C::AreaNameBGColor_R' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, ViewType) == 0x000328, "Member 'UFang_expedition_Detail_C::ViewType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, IsPreview) == 0x00032C, "Member 'UFang_expedition_Detail_C::IsPreview' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickRandomRewardListView) == 0x000330, "Member 'UFang_expedition_Detail_C::OnClickRandomRewardListView' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, PlayAreaId) == 0x000340, "Member 'UFang_expedition_Detail_C::PlayAreaId' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickExpeditionCancel) == 0x000350, "Member 'UFang_expedition_Detail_C::OnClickExpeditionCancel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickUseTicket) == 0x000360, "Member 'UFang_expedition_Detail_C::OnClickUseTicket' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickExpeditionFinish) == 0x000370, "Member 'UFang_expedition_Detail_C::OnClickExpeditionFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickFangSelect) == 0x000380, "Member 'UFang_expedition_Detail_C::OnClickFangSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickTokenWindowOpen) == 0x000390, "Member 'UFang_expedition_Detail_C::OnClickTokenWindowOpen' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickExpeditionStart) == 0x0003A0, "Member 'UFang_expedition_Detail_C::OnClickExpeditionStart' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickCloseButton) == 0x0003B0, "Member 'UFang_expedition_Detail_C::OnClickCloseButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, TextTable_Fang) == 0x0003C0, "Member 'UFang_expedition_Detail_C::TextTable_Fang' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, TextTable_common) == 0x0003C8, "Member 'UFang_expedition_Detail_C::TextTable_common' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, OnClickRandomRewardListView_PlayData) == 0x0003D0, "Member 'UFang_expedition_Detail_C::OnClickRandomRewardListView_PlayData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_Detail_C, FangAreaData) == 0x0003E0, "Member 'UFang_expedition_Detail_C::FangAreaData' has a wrong offset!");

}

