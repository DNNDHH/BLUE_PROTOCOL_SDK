#pragma once

 

// Package: UIWrapperForMouseDrag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIWrapperForMouseDrag.UIWrapperForMouseDrag_C
// 0x0048 (0x02C0 - 0x0278)
class UUIWrapperForMouseDrag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ButtonDown;                                        // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FDF[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MousePosition;                                     // 0x028C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MouseMoveValue;                                    // 0x0294(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FE0[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnButtonDown;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventOnButtonUp;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventOnButtonDown__DelegateSignature();
	void EventOnButtonUp__DelegateSignature();
	void ExecuteUbergraph_UIWrapperForMouseDrag(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GetMousePosition(struct FVector2D* Param_MousePosition);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIWrapperForMouseDrag_C">();
	}
	static class UUIWrapperForMouseDrag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIWrapperForMouseDrag_C>();
	}
};
static_assert(alignof(UUIWrapperForMouseDrag_C) == 0x000008, "Wrong alignment on UUIWrapperForMouseDrag_C");
static_assert(sizeof(UUIWrapperForMouseDrag_C) == 0x0002C0, "Wrong size on UUIWrapperForMouseDrag_C");
static_assert(offsetof(UUIWrapperForMouseDrag_C, UberGraphFrame) == 0x000278, "Member 'UUIWrapperForMouseDrag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, Border_0) == 0x000280, "Member 'UUIWrapperForMouseDrag_C::Border_0' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, ButtonDown) == 0x000288, "Member 'UUIWrapperForMouseDrag_C::ButtonDown' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, MousePosition) == 0x00028C, "Member 'UUIWrapperForMouseDrag_C::MousePosition' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, MouseMoveValue) == 0x000294, "Member 'UUIWrapperForMouseDrag_C::MouseMoveValue' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, EventOnButtonDown) == 0x0002A0, "Member 'UUIWrapperForMouseDrag_C::EventOnButtonDown' has a wrong offset!");
static_assert(offsetof(UUIWrapperForMouseDrag_C, EventOnButtonUp) == 0x0002B0, "Member 'UUIWrapperForMouseDrag_C::EventOnButtonUp' has a wrong offset!");

}

