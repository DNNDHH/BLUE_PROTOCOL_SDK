#pragma once

 

// Package: WarpCountDown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WarpCountDown.WarpCountDown_C
// 0x0058 (0x0308 - 0x02B0)
class UWarpCountDown_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnNumber1_0to99_C*                    CmnNumber1_0to99;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_WarpCancel;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 WarpCancelMessage;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrInteractWaitTime;                              // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxInteractWaitTime;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInteractWait;                                    // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsChatMode;                                        // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45A9[0x2];                                     // 0x0302(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DisplayCount;                                      // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WarpCountDown(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnInteractRelease();
	void OnInteractPress();
	void Destruct();
	void OnCountdownCancelDelegate_____();
	void Hide();
	void OnCountdownInteractionDelegate_____(bool bPress);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetRemainCount(float InRemainCount);
	void UpdateInteractGauge();
	void SetInputBlock(bool IsInputBlock);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WarpCountDown_C">();
	}
	static class UWarpCountDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWarpCountDown_C>();
	}
};
static_assert(alignof(UWarpCountDown_C) == 0x000008, "Wrong alignment on UWarpCountDown_C");
static_assert(sizeof(UWarpCountDown_C) == 0x000308, "Wrong size on UWarpCountDown_C");
static_assert(offsetof(UWarpCountDown_C, UberGraphFrame) == 0x0002B0, "Member 'UWarpCountDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, AnimOut) == 0x0002B8, "Member 'UWarpCountDown_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, AnimIn) == 0x0002C0, "Member 'UWarpCountDown_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, CmnNumber1_0to99) == 0x0002C8, "Member 'UWarpCountDown_C::CmnNumber1_0to99' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, Gauge) == 0x0002D0, "Member 'UWarpCountDown_C::Gauge' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, Label_WarpCancel) == 0x0002D8, "Member 'UWarpCountDown_C::Label_WarpCancel' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, WarpCancelMessage) == 0x0002E0, "Member 'UWarpCountDown_C::WarpCancelMessage' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, GaugeMat) == 0x0002F0, "Member 'UWarpCountDown_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, CurrInteractWaitTime) == 0x0002F8, "Member 'UWarpCountDown_C::CurrInteractWaitTime' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, MaxInteractWaitTime) == 0x0002FC, "Member 'UWarpCountDown_C::MaxInteractWaitTime' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, IsInteractWait) == 0x000300, "Member 'UWarpCountDown_C::IsInteractWait' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, IsChatMode) == 0x000301, "Member 'UWarpCountDown_C::IsChatMode' has a wrong offset!");
static_assert(offsetof(UWarpCountDown_C, DisplayCount) == 0x000304, "Member 'UWarpCountDown_C::DisplayCount' has a wrong offset!");

}

