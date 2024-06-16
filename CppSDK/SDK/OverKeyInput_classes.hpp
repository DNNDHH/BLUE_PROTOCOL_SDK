#pragma once

 

// Package: OverKeyInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "KeyInputMode_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OverKeyInput.OverKeyInput_C
// 0x0210 (0x0498 - 0x0288)
class UOverKeyInput_C final : public USBOverKeyInputBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             KeyInputed;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bOpend;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D22[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x02B8(0x01C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	EKeyInputMode                                 InputMode;                                         // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFunction;                                        // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D23[0x6];                                     // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           KeyCache;                                          // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ConvertFunctionKey(struct FKey* Key);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Open(EKeyInputMode Param_InputMode, bool Param_IsFunction, const struct FSBPlayerClassKeyConfigData& KeyConfig);
	void Close();
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void ExecuteUbergraph_OverKeyInput(int32 EntryPoint);
	void KeyInputed__DelegateSignature(const struct FKey& DownKey);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OverKeyInput_C">();
	}
	static class UOverKeyInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOverKeyInput_C>();
	}
};
static_assert(alignof(UOverKeyInput_C) == 0x000008, "Wrong alignment on UOverKeyInput_C");
static_assert(sizeof(UOverKeyInput_C) == 0x000498, "Wrong size on UOverKeyInput_C");
static_assert(offsetof(UOverKeyInput_C, UberGraphFrame) == 0x000288, "Member 'UOverKeyInput_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, Out) == 0x000290, "Member 'UOverKeyInput_C::Out' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, In) == 0x000298, "Member 'UOverKeyInput_C::In' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, KeyInputed) == 0x0002A0, "Member 'UOverKeyInput_C::KeyInputed' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, bOpend) == 0x0002B0, "Member 'UOverKeyInput_C::bOpend' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, KeyConfigData) == 0x0002B8, "Member 'UOverKeyInput_C::KeyConfigData' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, InputMode) == 0x000480, "Member 'UOverKeyInput_C::InputMode' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, IsFunction) == 0x000481, "Member 'UOverKeyInput_C::IsFunction' has a wrong offset!");
static_assert(offsetof(UOverKeyInput_C, KeyCache) == 0x000488, "Member 'UOverKeyInput_C::KeyCache' has a wrong offset!");

}

