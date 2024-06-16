#pragma once

 

// Package: LoadingBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LoadingTipsListStruct_structs.hpp"
#include "LoadingTipsCandidateStruct_structs.hpp"
#include "ProgressType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingBase.LoadingBase_C
// 0x0108 (0x03C8 - 0x02C0)
class ULoadingBase_C final : public USBLoadingBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BaseImage;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoading_C*                             Loading;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PvPRuleDesc;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PvPRuleName;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PvPRules;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TipsBody;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TipsTitle;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TipsId;                                            // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CachedViewportSize;                                // 0x032C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AspectRatio;                                       // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadingStatusDebug_C*                  DebugWidget;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLoadingTipsListStruct>         TipsList;                                          // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLoadingTipsCandidateStruct>    LoadingTipsCandidateList;                          // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLoadingTipsListStruct                 DecisionTips;                                      // 0x0360(0x0058)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLoadingTipsCandidateStruct            DecisionCandidateTips;                             // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResultValue;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMissionFailed;                                   // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LoadingBase(int32 EntryPoint);
	void CheckLogOutput();
	void ChangeTips();
	void Show();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetUpRule();
	void UpdateAspectRate();
	void CheckMapId(class FName MapCategory, bool* Result);
	void CheckProgressQuest(EProgressType ProgressType, class FName ProgressQuestId, int32 ProgressStep, bool* Result);
	void CheckProgressMission(class FName MissionId, bool* Result);
	void SetTipsText(int32 Param_TipsId);
	void UpdateCandidateTipsList(int32* TotalCount);
	void AddLoadingTipsCandidateList(int32 InListIndex, int32 InId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingBase_C">();
	}
	static class ULoadingBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingBase_C>();
	}
};
static_assert(alignof(ULoadingBase_C) == 0x000008, "Wrong alignment on ULoadingBase_C");
static_assert(sizeof(ULoadingBase_C) == 0x0003C8, "Wrong size on ULoadingBase_C");
static_assert(offsetof(ULoadingBase_C, UberGraphFrame) == 0x0002C0, "Member 'ULoadingBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, BaseImage) == 0x0002C8, "Member 'ULoadingBase_C::BaseImage' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, CanvasPanel_0) == 0x0002D0, "Member 'ULoadingBase_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, CanvasPanel_2) == 0x0002D8, "Member 'ULoadingBase_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, Image_0) == 0x0002E0, "Member 'ULoadingBase_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, Image_1) == 0x0002E8, "Member 'ULoadingBase_C::Image_1' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, Loading) == 0x0002F0, "Member 'ULoadingBase_C::Loading' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, PvPRuleDesc) == 0x0002F8, "Member 'ULoadingBase_C::PvPRuleDesc' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, PvPRuleName) == 0x000300, "Member 'ULoadingBase_C::PvPRuleName' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, PvPRules) == 0x000308, "Member 'ULoadingBase_C::PvPRules' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, TipsBody) == 0x000310, "Member 'ULoadingBase_C::TipsBody' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, TipsTitle) == 0x000318, "Member 'ULoadingBase_C::TipsTitle' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, UIBlocker) == 0x000320, "Member 'ULoadingBase_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, TipsId) == 0x000328, "Member 'ULoadingBase_C::TipsId' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, CachedViewportSize) == 0x00032C, "Member 'ULoadingBase_C::CachedViewportSize' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, AspectRatio) == 0x000334, "Member 'ULoadingBase_C::AspectRatio' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, DebugWidget) == 0x000338, "Member 'ULoadingBase_C::DebugWidget' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, TipsList) == 0x000340, "Member 'ULoadingBase_C::TipsList' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, LoadingTipsCandidateList) == 0x000350, "Member 'ULoadingBase_C::LoadingTipsCandidateList' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, DecisionTips) == 0x000360, "Member 'ULoadingBase_C::DecisionTips' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, DecisionCandidateTips) == 0x0003B8, "Member 'ULoadingBase_C::DecisionCandidateTips' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, ResultValue) == 0x0003C0, "Member 'ULoadingBase_C::ResultValue' has a wrong offset!");
static_assert(offsetof(ULoadingBase_C, IsMissionFailed) == 0x0003C4, "Member 'ULoadingBase_C::IsMissionFailed' has a wrong offset!");

}

