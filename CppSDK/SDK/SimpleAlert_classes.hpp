#pragma once

 

// Package: SimpleAlert

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimpleAlert.SimpleAlert_C
// 0x0038 (0x02B0 - 0x0278)
class USimpleAlert_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             MessageLabel;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBOverlay*                             SBOverlay_0;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Show;                                              // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4614[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentText;                                       // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleAlert(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetTextById(class FName TextId);
	void SetText(const class FString& Message);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleAlert_C">();
	}
	static class USimpleAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleAlert_C>();
	}
};
static_assert(alignof(USimpleAlert_C) == 0x000008, "Wrong alignment on USimpleAlert_C");
static_assert(sizeof(USimpleAlert_C) == 0x0002B0, "Wrong size on USimpleAlert_C");
static_assert(offsetof(USimpleAlert_C, UberGraphFrame) == 0x000278, "Member 'USimpleAlert_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleAlert_C, FadeInOut) == 0x000280, "Member 'USimpleAlert_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(USimpleAlert_C, MessageLabel) == 0x000288, "Member 'USimpleAlert_C::MessageLabel' has a wrong offset!");
static_assert(offsetof(USimpleAlert_C, SBOverlay_0) == 0x000290, "Member 'USimpleAlert_C::SBOverlay_0' has a wrong offset!");
static_assert(offsetof(USimpleAlert_C, Show) == 0x000298, "Member 'USimpleAlert_C::Show' has a wrong offset!");
static_assert(offsetof(USimpleAlert_C, CurrentText) == 0x0002A0, "Member 'USimpleAlert_C::CurrentText' has a wrong offset!");

}

