#pragma once

 

// Package: WBP_SeasonPassRankupDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NumberInputBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C
// 0x0090 (0x0370 - 0x02E0)
class UWBP_SeasonPassRankupDialog_C final : public UNumberInputBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_SeasonPassRankupDialog_C;       // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmOut;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIn;                                             // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Close;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBButton_Max;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        SBButton_Min;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Minus;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Plus;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn27_C*                SBTextButtonCmnBtn27_Ok;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CurrPoint;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CurrRank;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_NewPoint;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_NewRank;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedOk;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrPoint;                                         // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CosumePoint;                                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrRank;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WindowOpen;                                        // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClickedOk__DelegateSignature(int32 UpRank);
	void ExecuteUbergraph_WBP_SeasonPassRankupDialog(int32 EntryPoint);
	void WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0();
	void Event_OnValueChanged();
	void BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetData(int32 Param_CurrRank, int32 MinRank, int32 MaxRank, int32 Param_CurrPoint, int32 Param_CosumePoint);
	void BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnInputCancelKey();
	void BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SeasonPassRankupDialog_C">();
	}
	static class UWBP_SeasonPassRankupDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SeasonPassRankupDialog_C>();
	}
};
static_assert(alignof(UWBP_SeasonPassRankupDialog_C) == 0x000008, "Wrong alignment on UWBP_SeasonPassRankupDialog_C");
static_assert(sizeof(UWBP_SeasonPassRankupDialog_C) == 0x000370, "Wrong size on UWBP_SeasonPassRankupDialog_C");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, UberGraphFrame_WBP_SeasonPassRankupDialog_C) == 0x0002E0, "Member 'UWBP_SeasonPassRankupDialog_C::UberGraphFrame_WBP_SeasonPassRankupDialog_C' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, AnmOut) == 0x0002E8, "Member 'UWBP_SeasonPassRankupDialog_C::AnmOut' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, AnmIn) == 0x0002F0, "Member 'UWBP_SeasonPassRankupDialog_C::AnmIn' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButton_Close) == 0x0002F8, "Member 'UWBP_SeasonPassRankupDialog_C::SBButton_Close' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButton_Max) == 0x000300, "Member 'UWBP_SeasonPassRankupDialog_C::SBButton_Max' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButton_Min) == 0x000308, "Member 'UWBP_SeasonPassRankupDialog_C::SBButton_Min' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButton_Minus) == 0x000310, "Member 'UWBP_SeasonPassRankupDialog_C::SBButton_Minus' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButton_Plus) == 0x000318, "Member 'UWBP_SeasonPassRankupDialog_C::SBButton_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBButtonFullScreen) == 0x000320, "Member 'UWBP_SeasonPassRankupDialog_C::SBButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, SBTextButtonCmnBtn27_Ok) == 0x000328, "Member 'UWBP_SeasonPassRankupDialog_C::SBTextButtonCmnBtn27_Ok' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, Text_CurrPoint) == 0x000330, "Member 'UWBP_SeasonPassRankupDialog_C::Text_CurrPoint' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, Text_CurrRank) == 0x000338, "Member 'UWBP_SeasonPassRankupDialog_C::Text_CurrRank' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, Text_NewPoint) == 0x000340, "Member 'UWBP_SeasonPassRankupDialog_C::Text_NewPoint' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, Text_NewRank) == 0x000348, "Member 'UWBP_SeasonPassRankupDialog_C::Text_NewRank' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, OnClickedOk) == 0x000350, "Member 'UWBP_SeasonPassRankupDialog_C::OnClickedOk' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, CurrPoint) == 0x000360, "Member 'UWBP_SeasonPassRankupDialog_C::CurrPoint' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, CosumePoint) == 0x000364, "Member 'UWBP_SeasonPassRankupDialog_C::CosumePoint' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, CurrRank) == 0x000368, "Member 'UWBP_SeasonPassRankupDialog_C::CurrRank' has a wrong offset!");
static_assert(offsetof(UWBP_SeasonPassRankupDialog_C, WindowOpen) == 0x00036C, "Member 'UWBP_SeasonPassRankupDialog_C::WindowOpen' has a wrong offset!");

}

