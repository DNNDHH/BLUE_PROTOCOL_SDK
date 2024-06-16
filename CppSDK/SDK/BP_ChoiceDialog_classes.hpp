#pragma once

 

// Package: BP_ChoiceDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ChoiceDialog.BP_ChoiceDialog_C
// 0x0068 (0x02F0 - 0x0288)
class UBP_ChoiceDialog_C final : public USBChoiceDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Hide;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Show;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemList;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LimitTimeText;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Question;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeLimitGauge;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TimeLimitOverlay;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectItemIndex;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTimeLimit;                                        // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7AEA[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LimitTime;                                         // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStartTimeLimit;                                   // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AEB[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              InitTimeLimitGaugeSize;                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitLimitTime;                                     // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ChoiceDialog(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetQuestion(const class FText& InText);
	void AddItemFromArray(const TArray<class FText>& ItemTexts);
	void Show();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnClicked_Event_0(class UBP_ChoiceDialogItem_C* Widget);
	void AddItem(const class FText& InText);
	void Destruct();
	void Construct();
	void TimeUp_Event();
	void UpdateTimeLimit(float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChoiceDialog_C">();
	}
	static class UBP_ChoiceDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChoiceDialog_C>();
	}
};
static_assert(alignof(UBP_ChoiceDialog_C) == 0x000008, "Wrong alignment on UBP_ChoiceDialog_C");
static_assert(sizeof(UBP_ChoiceDialog_C) == 0x0002F0, "Wrong size on UBP_ChoiceDialog_C");
static_assert(offsetof(UBP_ChoiceDialog_C, UberGraphFrame) == 0x000288, "Member 'UBP_ChoiceDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, Anim_Hide) == 0x000290, "Member 'UBP_ChoiceDialog_C::Anim_Hide' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, Anim_Show) == 0x000298, "Member 'UBP_ChoiceDialog_C::Anim_Show' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, Image_0) == 0x0002A0, "Member 'UBP_ChoiceDialog_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, ItemList) == 0x0002A8, "Member 'UBP_ChoiceDialog_C::ItemList' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, LimitTimeText) == 0x0002B0, "Member 'UBP_ChoiceDialog_C::LimitTimeText' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, Text_Question) == 0x0002B8, "Member 'UBP_ChoiceDialog_C::Text_Question' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, TimeLimitGauge) == 0x0002C0, "Member 'UBP_ChoiceDialog_C::TimeLimitGauge' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, TimeLimitOverlay) == 0x0002C8, "Member 'UBP_ChoiceDialog_C::TimeLimitOverlay' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, SelectItemIndex) == 0x0002D0, "Member 'UBP_ChoiceDialog_C::SelectItemIndex' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, bTimeLimit) == 0x0002D4, "Member 'UBP_ChoiceDialog_C::bTimeLimit' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, LimitTime) == 0x0002D8, "Member 'UBP_ChoiceDialog_C::LimitTime' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, bStartTimeLimit) == 0x0002DC, "Member 'UBP_ChoiceDialog_C::bStartTimeLimit' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, InitTimeLimitGaugeSize) == 0x0002E0, "Member 'UBP_ChoiceDialog_C::InitTimeLimitGaugeSize' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialog_C, InitLimitTime) == 0x0002E8, "Member 'UBP_ChoiceDialog_C::InitLimitTime' has a wrong offset!");

}

